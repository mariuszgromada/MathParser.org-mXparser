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
import org.mariuszgromada.math.mxparser.mathcollection.*;
import org.mariuszgromada.math.mxparser.parsertokens.*;

import java.util.List;

/**
 * Unit tests covering API
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
public final class ApiTest {
    @Test
    public void testApi0000() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Expression(), getExpressionString()";
        TestCommonTools.consolePrintTestApiStart(0, testDescr);
        Expression e = new Expression();
        if (	e.getExpressionString().equals("")
                && e.getArgumentsNumber() == 0
                && e.getConstantsNumber() == 0
                && e.getFunctionsNumber() == 0	)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0001() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "getExpressionString(), getArgumentsNumber()";
        TestCommonTools.consolePrintTestApiStart(1, testDescr);
        Argument a5 = new Argument("a5",5);
        Argument a4 = new Argument("a4",4);
        Argument a3 = new Argument("a3",3);
        Argument a2 = new Argument("a2",2);
        Argument a1 = new Argument("a1",1);
        Expression e = new Expression("a1+c2", a1, a2, a3, a4, a5);
        if (	e.getExpressionString().equals("a1+c2")
                && e.getArgumentsNumber() == 5
                && e.getConstantsNumber() == 0
                && e.getFunctionsNumber() == 0	)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0002() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "getExpressionString(), getArgumentsNumber(), getFunctionsNumber()";
        TestCommonTools.consolePrintTestApiStart(2, testDescr);
        Argument a5 = new Argument("a5",5);
        Argument a4 = new Argument("a4",4);
        Argument a3 = new Argument("a3",3);
        Argument a2 = new Argument("a2",2);
        Argument a1 = new Argument("a1",1);
        Function f4 = new Function("f4","4","x");
        Function f3 = new Function("f3","3","x");
        Function f2 = new Function("f2","2","x");
        Function f1 = new Function("f1","1","x");
        Expression e = new Expression("a1+c2", a1, f1, a2, f2, a3, a4, f3, a5, f4);
        if (	e.getExpressionString().equals("a1+c2")
                && e.getArgumentsNumber() == 5
                && e.getConstantsNumber() == 0
                && e.getFunctionsNumber() == 4	)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0003() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "getExpressionString(), getArgumentsNumber(), getFunctionsNumber()";
        TestCommonTools.consolePrintTestApiStart(3, testDescr);
        Argument a5 = new Argument("a5",5);
        Argument a4 = new Argument("a4",4);
        Argument a3 = new Argument("a3",3);
        Argument a2 = new Argument("a2",2);
        Argument a1 = new Argument("a1",1);
        Function f4 = new Function("f4","4","x");
        Function f3 = new Function("f3","3","x");
        Function f2 = new Function("f2","2","x");
        Function f1 = new Function("f1","1","x");
        Constant c5 = new Constant("c5",5);
        Constant c2 = new Constant("c2",2);
        Constant c1 = new Constant("c1",1);
        Expression e = new Expression("a1+c2", a1, a2, c1, c2, a3, a4, c5, a5, f1, f2, f3, f4);
        if (	e.getExpressionString().equals("a1+c2")
                && e.getArgumentsNumber() == 5
                && e.getConstantsNumber() == 3
                && e.getFunctionsNumber() == 4	)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0004() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "setExpressionString(), getExpressionString(), clearExpressionString()";
        TestCommonTools.consolePrintTestApiStart(4, testDescr);
        Argument a5 = new Argument("a5",5);
        Argument a4 = new Argument("a4",4);
        Argument a3 = new Argument("a3",3);
        Argument a2 = new Argument("a2",2);
        Argument a1 = new Argument("a1",1);
        Function f4 = new Function("f4","4","x");
        Function f3 = new Function("f3","3","x");
        Function f2 = new Function("f2","2","x");
        Function f1 = new Function("f1","1","x");
        Constant c5 = new Constant("c5",5);
        Constant c2 = new Constant("c2",2);
        Constant c1 = new Constant("c1",1);
        Expression e = new Expression("a1+c2", a1, a2, c1, c2, a3, a4, c5, a5, f1, f2, f3, f4);
        boolean syn1 = e.checkSyntax();
        e.setExpressionString("c2+a1");
        boolean syn2 = e.getSyntaxStatus();
        boolean syn3 = e.checkSyntax();
        String s1 = e.getExpressionString();
        boolean syn4 = e.getSyntaxStatus();
        boolean syn5 = e.checkSyntax();
        e.clearExpressionString();
        boolean syn6 = e.getSyntaxStatus();
        boolean syn7 = e.checkSyntax();
        String s2 = e.getExpressionString();
        boolean syn8 = e.getSyntaxStatus();
        if (	s1.equals("c2+a1")
                && s2.equals("")
                && syn1 == Expression.NO_SYNTAX_ERRORS
                && syn2 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
                && syn3 == Expression.NO_SYNTAX_ERRORS
                && syn4 == Expression.NO_SYNTAX_ERRORS
                && syn5 == Expression.NO_SYNTAX_ERRORS
                && syn6 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
                && syn7 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
                && syn8 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0005() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "setDescription(), getDescription(), clearDescription()";
        TestCommonTools.consolePrintTestApiStart(5, testDescr);
        Argument a5 = new Argument("a5",5);
        Argument a4 = new Argument("a4",4);
        Argument a3 = new Argument("a3",3);
        Argument a2 = new Argument("a2",2);
        Argument a1 = new Argument("a1",1);
        Function f4 = new Function("f4","4","x");
        Function f3 = new Function("f3","3","x");
        Function f2 = new Function("f2","2","x");
        Function f1 = new Function("f1","1","x");
        Constant c5 = new Constant("c5",5);
        Constant c2 = new Constant("c2",2);
        Constant c1 = new Constant("c1",1);
        Expression e = new Expression("a1+c2", a1, a2, c1, c2, a3, a4, c5, a5, f1, f2, f3, f4);
        e.setExpressionString("c1+a2");
        boolean syn1 = e.checkSyntax();
        e.setDescription("opis");
        String s1 = e.getDescription();
        e.clearDescription();
        String s2 = e.getDescription();
        boolean syn2 = e.getSyntaxStatus();
        if (	s1.equals("opis")
                && s2.equals("")
                && syn1 == Expression.NO_SYNTAX_ERRORS
                && syn2 == Expression.NO_SYNTAX_ERRORS
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0006() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "setVerboseMode(), getVerboseMode(), setSilentMode()";
        TestCommonTools.consolePrintTestApiStart(6, testDescr);
        Argument a5 = new Argument("a5",5);
        Argument a4 = new Argument("a4",4);
        Argument a3 = new Argument("a3",3);
        Argument a2 = new Argument("a2",2);
        Argument a1 = new Argument("a1",1);
        Function f4 = new Function("f4","4","x");
        Function f3 = new Function("f3","3","x");
        Function f2 = new Function("f2","2","x");
        Function f1 = new Function("f1","1","x");
        Constant c5 = new Constant("c5",5);
        Constant c2 = new Constant("c2",2);
        Constant c1 = new Constant("c1",1);
        Expression e = new Expression("a1+c2", a1, a2, c1, c2, a3, a4, c5, a5, f1, f2, f3, f4);
        e.setExpressionString("c1+a2");
        boolean syn1 = e.checkSyntax();
        boolean b1 = e.getVerboseMode();
        e.setVerboseMode();
        boolean b2 = e.getVerboseMode();
        e.setSilentMode();
        boolean b3 = e.getVerboseMode();
        boolean syn2 = e.getSyntaxStatus();
        if (	b1 == false
                && b2 == true
                && b3 == false
                && syn1 == Expression.NO_SYNTAX_ERRORS
                && syn2 == Expression.NO_SYNTAX_ERRORS
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0007() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "getRecursiveMode()";
        TestCommonTools.consolePrintTestApiStart(7, testDescr);
        Function fa = new Function("f(x,y)=sin(x)+cos(y)");
        Function fb = new Function("f(x,y)=sin(x)+cos(y)+f(1,2)");
        boolean syn1=fa.checkSyntax();
        boolean syn2=fb.checkSyntax();
        boolean b1 = fa.getRecursiveMode();
        boolean b2 = fb.getRecursiveMode();
        if (	b1 == false
                && b2 == true
                && syn1 == Expression.NO_SYNTAX_ERRORS
                && syn2 == Expression.NO_SYNTAX_ERRORS
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0008() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Expression(String expressionString)";
        TestCommonTools.consolePrintTestApiStart(8, testDescr);
        Expression e = new Expression("1+2");
        if (	e.getExpressionString().equals("1+2")
                && e.getArgumentsNumber() == 0
                && e.getConstantsNumber() == 0
                && e.getFunctionsNumber() == 0	)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0009() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Expression(String expressionString)";
        TestCommonTools.consolePrintTestApiStart(9, testDescr);
        Argument a3 = new Argument("a3",3);
        Argument a2 = new Argument("a2",2);
        Argument a1 = new Argument("a1",1);
        Expression e = new Expression("1+2", a1, a2, a3);
        if (	e.getExpressionString().equals("1+2")
                && e.getArgumentsNumber() == 3
                && e.getConstantsNumber() == 0
                && e.getFunctionsNumber() == 0	)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0010() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "addArguments(Argument... arguments), addArguments( List<Argument> argumentsList), defineArguments(String... argumentsNames), defineArgument(String argumentName, double argumentValue)";
        TestCommonTools.consolePrintTestApiStart(10, testDescr);
        Argument a5 = new Argument("a5",5);
        Argument a4 = new Argument("a4",4);
        Argument a3 = new Argument("a3",3);
        Argument a2 = new Argument("a2",2);
        Argument a1 = new Argument("a1",1);
        Argument a7 = new Argument("a7",7);
        Argument a6 = new Argument("a6",6);
        Expression e = new Expression("1+2");
        boolean syn1 = e.checkSyntax();
        e.addDefinitions(a6, a7);
        boolean syn2 = e.getSyntaxStatus();
        boolean syn3 = e.checkSyntax();
        e.addDefinitions(a1, a2, a3, a4, a5);
        boolean syn4 = e.getSyntaxStatus();
        boolean syn5 = e.checkSyntax();
        e.defineArguments("x1", "x2", "x3");
        boolean syn6 = e.getSyntaxStatus();
        boolean syn7 = e.checkSyntax();
        e.defineArgument("x", 1);
        boolean syn8 = e.getSyntaxStatus();
        if (	e.getExpressionString().equals("1+2")
                && e.getArgumentsNumber() == 11
                && e.getConstantsNumber() == 0
                && e.getFunctionsNumber() == 0
                && syn1 == Expression.NO_SYNTAX_ERRORS
                && syn2 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
                && syn3 == Expression.NO_SYNTAX_ERRORS
                && syn4 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
                && syn5 == Expression.NO_SYNTAX_ERRORS
                && syn6 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
                && syn7 == Expression.NO_SYNTAX_ERRORS
                && syn8 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0011() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "int getArgumentIndex(String argumentName), Argument getArgument(String argumentName), getArgument(int argumentIndex), getArgumentsNumber()";
        TestCommonTools.consolePrintTestApiStart(11, testDescr);
        Argument a5 = new Argument("a5",5);
        Argument a4 = new Argument("a4",4);
        Argument a3 = new Argument("a3",3);
        Argument a2 = new Argument("a2",2);
        Argument a1 = new Argument("a1",1);
        Argument a7 = new Argument("a7",7);
        Argument a6 = new Argument("a6",6);
        Expression e = new Expression("1+2");
        e.addDefinitions(a6, a7);
        e.addDefinitions(a1, a2, a3, a4, a5);
        e.defineArguments("x1", "x2", "x3");
        e.defineArgument("x", 1);
        boolean syn1 = e.checkSyntax();
        int i1 = e.getArgumentIndex("asdsa"); //-1
        int i2 = e.getArgumentIndex("x1"); //7
        Argument A1 = e.getArgument("asasas"); //null
        Argument A2 = e.getArgument("a2"); //a2
        Argument A3 = e.getArgument(-1); //null
        Argument A4 = e.getArgument(23);//null
        Argument A5 = e.getArgument(1);//a7
        int n1 = e.getArgumentsNumber();//11
        boolean syn2 = e.getSyntaxStatus();
        if (	i1 == -1
                && i2 == 7
                && A1 == null
                && A2 == a2
                && A3 == null
                && A4 == null
                && A5 == a7
                && n1 == 11
                && syn1 == Expression.NO_SYNTAX_ERRORS
                && syn2 == Expression.NO_SYNTAX_ERRORS
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0012() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "setArgumentValue(), getArgumentValue()";
        TestCommonTools.consolePrintTestApiStart(12, testDescr);
        Argument a5 = new Argument("a5",5);
        Argument a4 = new Argument("a4",4);
        Argument a3 = new Argument("a3",3);
        Argument a2 = new Argument("a2",2);
        Argument a1 = new Argument("a1",1);
        Argument a7 = new Argument("a7",7);
        Argument a6 = new Argument("a6",6);
        Expression e = new Expression("1+2");
        e.addDefinitions(a6, a7);
        e.addDefinitions(a1, a2, a3, a4, a5);
        e.defineArguments("x1", "x2", "x3");
        e.defineArgument("x", 1);
        boolean syn1 = e.checkSyntax();
        double d1 = e.getArgumentValue("a1");
        boolean syn2 = e.getSyntaxStatus();
        e.setArgumentValue("asds", 1);
        boolean syn3 = e.getSyntaxStatus();
        boolean syn4 = e.checkSyntax();
        e.setArgumentValue("a1", 10);
        syn4 = e.getSyntaxStatus();
        double d2 = e.getArgumentValue("asdfasdf");
        double d3 = e.getArgumentValue("a1");
        boolean syn5 = e.getSyntaxStatus();
        if (	d1 == 1
                && Double.isNaN(d2)
                && d3 == 10
                && syn1 == Expression.NO_SYNTAX_ERRORS
                && syn2 == Expression.NO_SYNTAX_ERRORS
                && syn3 == Expression.NO_SYNTAX_ERRORS
                && syn4 == Expression.NO_SYNTAX_ERRORS
                && syn5 == Expression.NO_SYNTAX_ERRORS
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0013() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "removeArguments(String... argumentsNames), removeArguments(Argument... arguments), removeAllArguments()";
        TestCommonTools.consolePrintTestApiStart(13, testDescr);
        Argument a5 = new Argument("a5",5);
        Argument a4 = new Argument("a4",4);
        Argument a3 = new Argument("a3",3);
        Argument a2 = new Argument("a2",2);
        Argument a1 = new Argument("a1",1);
        Argument a7 = new Argument("a7",7);
        Argument a6 = new Argument("a6",6);
        Expression e = new Expression("1+2");
        e.addDefinitions(a6, a7);
        e.addDefinitions(a1, a2, a3, a4, a5);
        e.defineArguments("x1", "x2", "x3");
        e.defineArgument("x", 1);
        e.setExpressionString("1+2");
        boolean syn1 = e.checkSyntax();
        int n1 = e.getArgumentsNumber();
        e.removeArguments("asfdf");
        boolean syn2 = e.getSyntaxStatus();
        int n2 = e.getArgumentsNumber();
        e.removeArguments("x1","x2");
        int n3 = e.getArgumentsNumber();
        boolean syn3 = e.checkSyntax();
        e.removeArguments(a3);
        int n4 = e.getArgumentsNumber();
        e.removeArguments(a1,a2);
        boolean syn4 = e.getSyntaxStatus();
        int n5 = e.getArgumentsNumber();
        boolean syn5 = e.checkSyntax();
        e.removeAllArguments();
        int n6 = e.getArgumentsNumber();
        boolean syn6 = e.getSyntaxStatus();
        if (	n2 == n1
                && n2-n3 == 2
                && n3-n4 == 1
                && n4-n5 == 2
                && n6 == 0
                && syn1 == Expression.NO_SYNTAX_ERRORS
                && syn2 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
                && syn3 == Expression.NO_SYNTAX_ERRORS
                && syn4 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
                && syn5 == Expression.NO_SYNTAX_ERRORS
                && syn6 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0014() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "addConstants(Constant... constants), addConstants( List<Constant> constantsList), defineConstant(String constantName, double constantValue)";
        TestCommonTools.consolePrintTestApiStart(14, testDescr);
        Constant c3 = new Constant("c3",3);
        Constant c2 = new Constant("c2",2);
        Constant c1 = new Constant("c1",1);
        Constant c6 = new Constant("c6",6);
        Constant c5 = new Constant("c5",5);
        Expression e = new Expression("1+2", new Constant("a=5"));
        boolean syn1 = e.checkSyntax();
        e.addDefinitions(c5, c6);
        boolean syn2 = e.getSyntaxStatus();
        boolean syn3 = e.checkSyntax();
        e.addDefinitions(c1, c2, c3, c5, c6);
        boolean syn4 = e.getSyntaxStatus();
        boolean syn5 = e.checkSyntax();
        e.defineConstant("cx1",1);
        e.removeDefinitions(c5, c6);
        boolean syn6 = e.checkSyntax();
        e.removeDefinitions(c5, c6);
        if (	e.getExpressionString().equals("1+2")
                && e.getArgumentsNumber() == 0
                && e.getConstantsNumber() == 5
                && e.getFunctionsNumber() == 0
                && syn1 == Expression.NO_SYNTAX_ERRORS
                && syn2 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
                && syn3 == Expression.NO_SYNTAX_ERRORS
                && syn4 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
                && syn5 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
                && syn6 == Expression.NO_SYNTAX_ERRORS
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0015() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "getConstantIndex(String constantName), getConstant(String constantName), getConstant(int constantIndex), getConstantsNumber()";
        TestCommonTools.consolePrintTestApiStart(15, testDescr);
        Constant c3 = new Constant("c3",3);
        Constant c2 = new Constant("c2",2);
        Constant c1 = new Constant("c1",1);
        Expression e = new Expression("1+2", new Constant("a=5"));
        e.addDefinitions(c1, c2, c3);
        e.defineConstant("cx1",1);
        boolean syn1 = e.checkSyntax();
        int i1 = e.getConstantIndex("asdsa"); //-1
        int i2 = e.getConstantIndex("c6"); //-1
        Constant C1 = e.getConstant("asasas"); //null
        Constant C2 = e.getConstant("c1"); //c1
        Constant C3 = e.getConstant(-1); //null
        Constant C4 = e.getConstant(23);//null
        Constant C5 = e.getConstant(1);//c1
        int n1 = e.getConstantsNumber();//5
        boolean syn2 = e.getSyntaxStatus();
        if (	i1 == -1
                && i2 == -1
                && C1 == null
                && C2 == c1
                && C3 == null
                && C4 == null
                && C5 == c1
                && n1 == 5
                && syn1 == Expression.NO_SYNTAX_ERRORS
                && syn2 == Expression.NO_SYNTAX_ERRORS
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0016() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "removeConstants(String... constantsNames), removeConstants(Constant... constants), removeAllConstants()";
        TestCommonTools.consolePrintTestApiStart(16, testDescr);
        Constant c3 = new Constant("c3",3);
        Constant c2 = new Constant("c2",2);
        Constant c1 = new Constant("c1",1);
        Expression e = new Expression("1+2", new Constant("a=5"));
        e.addDefinitions(c1, c2, c3);
        e.defineConstant("cx1",1);
        e.defineConstant("cx2",1);
        e.setExpressionString("1+2");
        boolean syn1 = e.checkSyntax();
        int n1 = e.getConstantsNumber();
        e.removeConstants("asfdf");
        boolean syn2 = e.getSyntaxStatus();
        int n2 = e.getConstantsNumber();
        e.removeConstants("cx1","cx2");
        int n3 = e.getConstantsNumber();
        boolean syn3 = e.checkSyntax();
        e.removeConstants(c1);
        int n4 = e.getConstantsNumber();
        e.removeConstants(c2,c3);
        boolean syn4 = e.getSyntaxStatus();
        int n5 = e.getConstantsNumber();
        boolean syn5 = e.checkSyntax();
        e.removeAllConstants();
        int n6 = e.getConstantsNumber();
        boolean syn6 = e.getSyntaxStatus();
        if (	n2 == n1
                && n2-n3 == 2
                && n3-n4 == 1
                && n4-n5 == 2
                && n6 == 0
                && syn1 == Expression.NO_SYNTAX_ERRORS
                && syn2 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
                && syn3 == Expression.NO_SYNTAX_ERRORS
                && syn4 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
                && syn5 == Expression.NO_SYNTAX_ERRORS
                && syn6 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0017() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "addFunctions(Function... functions), addFunctions( List<Function> functionsList), defineFunction(String functionName, String  functionExpressionString,...";
        TestCommonTools.consolePrintTestApiStart(17, testDescr);
        Function f4 = new Function("f4","4","x");
        Function f3 = new Function("f3","3","x");
        Function f2 = new Function("f2","2","x");
        Function f1 = new Function("f1","1","x");
        Function f7 = new Function("f7","7","x");
        Function f6 = new Function("f6","6","x");
        Expression e = new Expression("1+2");
        boolean syn1 = e.checkSyntax();
        e.addDefinitions(f6, f7);
        boolean syn2 = e.getSyntaxStatus();
        boolean syn3 = e.checkSyntax();
        e.addDefinitions(f1, f2, f3, f4, f6);
        boolean syn4 = e.getSyntaxStatus();
        e.removeDefinitions(f6);
        boolean syn5 = e.checkSyntax();
        e.defineFunction("ff1", "1", "x");
        boolean syn6 = e.getSyntaxStatus();
        if (	e.getExpressionString().equals("1+2")
                && e.getArgumentsNumber() == 0
                && e.getConstantsNumber() == 0
                && e.getFunctionsNumber() == 7
                && syn1 == Expression.NO_SYNTAX_ERRORS
                && syn2 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
                && syn3 == Expression.NO_SYNTAX_ERRORS
                && syn4 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
                && syn5 == Expression.NO_SYNTAX_ERRORS
                && syn6 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0018() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "getFunctionIndex(String functionName), getFunction(String functionName), getFunction(int functionIndex), getFunctionsNumber()";
        TestCommonTools.consolePrintTestApiStart(18, testDescr);
        Function f4 = new Function("f4","4","x");
        Function f3 = new Function("f3","3","x");
        Function f2 = new Function("f2","2","x");
        Function f1 = new Function("f1","1","x");
        Function f7 = new Function("f7","7","x");
        Function f6 = new Function("f6","6","x");
        Expression e = new Expression("1+2");
        e.addDefinitions(f6, f7);
        e.addDefinitions(f1, f2, f3, f4, f6);
        e.removeDefinitions(f6);
        e.defineFunction("ff1", "1", "x");
        boolean syn1 = e.checkSyntax();
        int i1 = e.getFunctionIndex("asdsa"); //-1
        int i2 = e.getFunctionIndex("f7"); //0
        Function F1 = e.getFunction("asasas"); //null
        Function F2 = e.getFunction("f1"); //f1
        Function F3 = e.getFunction(-1); //null
        Function F4 = e.getFunction(23);//null
        Function F5 = e.getFunction(0);//f7
        int n1 = e.getFunctionsNumber();//7
        boolean syn2 = e.getSyntaxStatus();
        if (	i1 == -1
                && i2 == 0
                && F1 == null
                && F2 == f1
                && F3 == null
                && F4 == null
                && F5 == f7
                && n1 == 7
                && syn1 == Expression.NO_SYNTAX_ERRORS
                && syn2 == Expression.NO_SYNTAX_ERRORS
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0019() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "removeFunctions(String... functionsNames), removeFunctions(Function... functions), removeAllFunctions()";
        TestCommonTools.consolePrintTestApiStart(19, testDescr);
        Function f4 = new Function("f4","4","x");
        Function f3 = new Function("f3","3","x");
        Function f2 = new Function("f2","2","x");
        Function f1 = new Function("f1","1","x");
        Function f7 = new Function("f7","7","x");
        Function f6 = new Function("f6","6","x");
        Expression e = new Expression("1+2");
        e.addDefinitions(f6, f7);
        e.addDefinitions(f1, f2, f3, f4, f6);
        e.removeDefinitions(f6);
        e.defineFunction("ff1", "1", "x");
        e.setExpressionString("1+2");
        boolean syn1 = e.checkSyntax();
        int n1 = e.getFunctionsNumber();
        e.removeFunctions("asfdf");
        boolean syn2 = e.getSyntaxStatus();
        int n2 = e.getFunctionsNumber();
        e.removeFunctions("f1","f2");
        int n3 = e.getFunctionsNumber();
        boolean syn3 = e.checkSyntax();
        e.removeFunctions(f3);
        int n4 = e.getFunctionsNumber();
        e.removeFunctions(f6,f7);
        boolean syn4 = e.getSyntaxStatus();
        int n5 = e.getFunctionsNumber();
        boolean syn5 = e.checkSyntax();
        e.removeAllFunctions();
        int n6 = e.getFunctionsNumber();
        boolean syn6 = e.getSyntaxStatus();
        if (	n2 == n1
                && n2-n3 == 2
                && n3-n4 == 1
                && n4-n5 == 2
                && n6 == 0
                && syn1 == Expression.NO_SYNTAX_ERRORS
                && syn2 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
                && syn3 == Expression.NO_SYNTAX_ERRORS
                && syn4 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
                && syn5 == Expression.NO_SYNTAX_ERRORS
                && syn6 == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0020() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "double calculate(), getHelp(), getHelp(String word), getLicense()";
        TestCommonTools.consolePrintTestApiStart(20, testDescr);
        Function f4 = new Function("f4","4","x");
        Function f3 = new Function("f3","3","x");
        Function f2 = new Function("f2","2","x");
        Function f1 = new Function("f1","1","x");
        Function f7 = new Function("f7","7","x");
        Function f6 = new Function("f6","6","x");
        Expression e = new Expression("1+2");
        e.addDefinitions(f6, f7);
        e.addDefinitions(f1, f2, f3, f4, f6);
        e.removeDefinitions(f6);
        e.defineFunction("ff1", "1", "x");
        e.setExpressionString("1+2");
        e.removeFunctions("asfdf");
        e.removeFunctions("f1","f2");
        e.removeFunctions(f3);
        e.removeFunctions(f6,f7);
        e.removeAllFunctions();
        boolean syn1 = e.checkSyntax();
        double d1 = e.calculate();
        boolean syn2 = e.getSyntaxStatus();
        if (	syn1 == Expression.NO_SYNTAX_ERRORS
                && syn2 == Expression.NO_SYNTAX_ERRORS
                && d1 == 3)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0021() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "getCopyOfInitialTokens()";
        TestCommonTools.consolePrintTestApiStart(21, testDescr);
        Expression e = new Expression("1+(2+3)-sin(10)");
        List<Token> tokens = e.getCopyOfInitialTokens();
        mXparser.consolePrintTokens(tokens);
        if (
                (tokens.get(0).tokenStr.equals("1")) &&
                        (tokens.get(1).tokenStr.equals("+")) &&
                        (tokens.get(2).tokenStr.equals("(")) &&
                        (tokens.get(3).tokenStr.equals("2")) &&
                        (tokens.get(4).tokenStr.equals("+")) &&
                        (tokens.get(5).tokenStr.equals("3")) &&
                        (tokens.get(6).tokenStr.equals(")")) &&
                        (tokens.get(7).tokenStr.equals("-")) &&
                        (tokens.get(8).tokenStr.equals("sin")) &&
                        (tokens.get(9).tokenStr.equals("(")) &&
                        (tokens.get(10).tokenStr.equals("10")) &&
                        (tokens.get(11).tokenStr.equals(")")) &&

                        (tokens.get(0).tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) &&
                        (tokens.get(1).tokenTypeId == Operator.TYPE_ID) &&
                        (tokens.get(2).tokenTypeId == ParserSymbol.TYPE_ID) &&
                        (tokens.get(3).tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) &&
                        (tokens.get(4).tokenTypeId == Operator.TYPE_ID) &&
                        (tokens.get(5).tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) &&
                        (tokens.get(6).tokenTypeId == ParserSymbol.TYPE_ID) &&
                        (tokens.get(7).tokenTypeId == Operator.TYPE_ID) &&
                        (tokens.get(8).tokenTypeId == Function1Arg.TYPE_ID) &&
                        (tokens.get(9).tokenTypeId == ParserSymbol.TYPE_ID) &&
                        (tokens.get(10).tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) &&
                        (tokens.get(11).tokenTypeId == ParserSymbol.TYPE_ID) &&

                        (tokens.get(0).tokenLevel == 0) &&
                        (tokens.get(1).tokenLevel == 0) &&
                        (tokens.get(2).tokenLevel == 1) &&
                        (tokens.get(3).tokenLevel == 1) &&
                        (tokens.get(4).tokenLevel == 1) &&
                        (tokens.get(5).tokenLevel == 1) &&
                        (tokens.get(6).tokenLevel == 1) &&
                        (tokens.get(7).tokenLevel == 0) &&
                        (tokens.get(8).tokenLevel == 1) &&
                        (tokens.get(9).tokenLevel == 2) &&
                        (tokens.get(10).tokenLevel == 2) &&
                        (tokens.get(11).tokenLevel == 2)

        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0022() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Invalid tokens, getCopyOfInitialTokens()";
        TestCommonTools.consolePrintTestApiStart(22, testDescr);
        Expression e = new Expression("token1+toke2n*sin(token3-t3^t5)^t45+pi-pie+e");
        e.disableImpliedMultiplicationMode();
        List<Token> tokens = e.getCopyOfInitialTokens();
        mXparser.consolePrintTokens(tokens);
        if (
                (tokens.get(0).tokenStr.equals("token1")) &&
                        (tokens.get(1).tokenStr.equals("+")) &&
                        (tokens.get(2).tokenStr.equals("toke2n")) &&
                        (tokens.get(3).tokenStr.equals("*")) &&
                        (tokens.get(4).tokenStr.equals("sin")) &&
                        (tokens.get(5).tokenStr.equals("(")) &&
                        (tokens.get(6).tokenStr.equals("token3")) &&
                        (tokens.get(7).tokenStr.equals("-")) &&
                        (tokens.get(8).tokenStr.equals("t3")) &&
                        (tokens.get(9).tokenStr.equals("^")) &&
                        (tokens.get(10).tokenStr.equals("t5")) &&
                        (tokens.get(11).tokenStr.equals(")")) &&
                        (tokens.get(12).tokenStr.equals("^")) &&
                        (tokens.get(13).tokenStr.equals("t45")) &&
                        (tokens.get(14).tokenStr.equals("+")) &&
                        (tokens.get(15).tokenStr.equals("pi")) &&
                        (tokens.get(16).tokenStr.equals("-")) &&
                        (tokens.get(17).tokenStr.equals("pie")) &&
                        (tokens.get(18).tokenStr.equals("+")) &&
                        (tokens.get(19).tokenStr.equals("e")) &&

                        (tokens.get(0).tokenTypeId == Token.NOT_MATCHED) &&
                        (tokens.get(1).tokenTypeId == Operator.TYPE_ID) &&
                        (tokens.get(2).tokenTypeId == Token.NOT_MATCHED) &&
                        (tokens.get(3).tokenTypeId == Operator.TYPE_ID) &&
                        (tokens.get(4).tokenTypeId == Function1Arg.TYPE_ID) &&
                        (tokens.get(5).tokenTypeId == ParserSymbol.TYPE_ID) &&
                        (tokens.get(6).tokenTypeId == Token.NOT_MATCHED) &&
                        (tokens.get(7).tokenTypeId == Operator.TYPE_ID) &&
                        (tokens.get(8).tokenTypeId == Token.NOT_MATCHED) &&
                        (tokens.get(9).tokenTypeId == Operator.TYPE_ID) &&
                        (tokens.get(10).tokenTypeId == Token.NOT_MATCHED) &&
                        (tokens.get(11).tokenTypeId == ParserSymbol.TYPE_ID) &&
                        (tokens.get(12).tokenTypeId == Operator.TYPE_ID) &&
                        (tokens.get(13).tokenTypeId == Token.NOT_MATCHED) &&
                        (tokens.get(14).tokenTypeId == Operator.TYPE_ID) &&
                        (tokens.get(15).tokenTypeId == ConstantValue.TYPE_ID) &&
                        (tokens.get(16).tokenTypeId == Operator.TYPE_ID) &&
                        (tokens.get(17).tokenTypeId == Token.NOT_MATCHED) &&
                        (tokens.get(18).tokenTypeId == Operator.TYPE_ID) &&
                        (tokens.get(19).tokenTypeId == ConstantValue.TYPE_ID) &&

                        (tokens.get(0).tokenLevel == 0) &&
                        (tokens.get(1).tokenLevel == 0) &&
                        (tokens.get(2).tokenLevel == 0) &&
                        (tokens.get(3).tokenLevel == 0) &&
                        (tokens.get(4).tokenLevel == 1) &&
                        (tokens.get(5).tokenLevel == 2) &&
                        (tokens.get(6).tokenLevel == 2) &&
                        (tokens.get(7).tokenLevel == 2) &&
                        (tokens.get(8).tokenLevel == 2) &&
                        (tokens.get(9).tokenLevel == 2) &&
                        (tokens.get(10).tokenLevel == 2) &&
                        (tokens.get(11).tokenLevel == 2) &&
                        (tokens.get(12).tokenLevel == 0) &&
                        (tokens.get(13).tokenLevel == 0) &&
                        (tokens.get(14).tokenLevel == 0) &&
                        (tokens.get(15).tokenLevel == 0) &&
                        (tokens.get(16).tokenLevel == 0) &&
                        (tokens.get(17).tokenLevel == 0) &&
                        (tokens.get(18).tokenLevel == 0) &&
                        (tokens.get(19).tokenLevel == 0)

        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0023() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Function Extension - calculate()";
        TestCommonTools.consolePrintTestApiStart(23, testDescr);
        Function ff = new Function("ff", new FunExt());
        if (ff.calculate(2,3) == 6) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0024() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "FunctionExtension - setArgumentValue - calculate";
        TestCommonTools.consolePrintTestApiStart(24, testDescr);
        Function ff = new Function("ff", new FunExt());
        ff.setArgumentValue(0, 3);
        ff.setArgumentValue(1, 4);
        if (ff.calculate() == 12) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0025() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "FunctionExtension - parameters";
        TestCommonTools.consolePrintTestApiStart(25, testDescr);
        Function ff = new Function("ff", new FunExt());
        if (
                (ff.getParametersNumber() == 2) &&
                        (ff.getFunctionBodyType() == Function.BODY_EXTENDED) &&
                        (ff.checkSyntax() == Function.NO_SYNTAX_ERRORS)
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0026() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "FunctionExtension - calculate";
        TestCommonTools.consolePrintTestApiStart(26, testDescr);
        Function ff = new Function("ff", new FunExt());
        Argument x = new Argument("x = 5");
        Argument y = new Argument("y = 6");
        if (ff.calculate(x, y) == 30) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0027() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Invalid tokens looks like, getCopyOfInitialTokens()";
        TestCommonTools.consolePrintTestApiStart(27, testDescr);
        Expression e = new Expression("1pi+2pi3+((_d1(a)+(_d^_g)))))");
        List<Token> tokens = e.getCopyOfInitialTokens();
        mXparser.consolePrintTokens(tokens);
        if (
                (tokens.get(0).tokenStr.equals("1")) &&
                        (tokens.get(1).tokenStr.equals("*")) &&
                        (tokens.get(2).tokenStr.equals("pi")) &&
                        (tokens.get(3).tokenStr.equals("+")) &&
                        (tokens.get(4).tokenStr.equals("2")) &&
                        (tokens.get(5).tokenStr.equals("*")) &&
                        (tokens.get(6).tokenStr.equals("pi3")) &&
                        (tokens.get(7).tokenStr.equals("+")) &&
                        (tokens.get(8).tokenStr.equals("(")) &&
                        (tokens.get(9).tokenStr.equals("(")) &&
                        (tokens.get(10).tokenStr.equals("_d1")) &&
                        (tokens.get(11).tokenStr.equals("(")) &&
                        (tokens.get(12).tokenStr.equals("a")) &&
                        (tokens.get(13).tokenStr.equals(")")) &&
                        (tokens.get(14).tokenStr.equals("+")) &&
                        (tokens.get(15).tokenStr.equals("(")) &&
                        (tokens.get(16).tokenStr.equals("_d")) &&
                        (tokens.get(17).tokenStr.equals("^")) &&
                        (tokens.get(18).tokenStr.equals("_g")) &&
                        (tokens.get(19).tokenStr.equals(")")) &&
                        (tokens.get(20).tokenStr.equals(")")) &&
                        (tokens.get(21).tokenStr.equals(")")) &&
                        (tokens.get(22).tokenStr.equals(")")) &&
                        (tokens.get(23).tokenStr.equals(")")) &&


                        (tokens.get(10).looksLike.equals("function")) &&
                        (tokens.get(12).looksLike.equals("argument")) &&
                        (tokens.get(16).looksLike.equals("argument")) &&
                        (tokens.get(18).looksLike.equals("argument"))
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0028() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "checkSyntax()";
        TestCommonTools.consolePrintTestApiStart(28, testDescr);
        Expression e = new Expression("1+2+3+(4+5)+a+b");
        if (
                (e.checkSyntax() == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN) &&
                        (e.checkLexSyntax() == Expression.NO_SYNTAX_ERRORS)
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0029() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "checkSyntax()";
        TestCommonTools.consolePrintTestApiStart(29, testDescr);
        Expression e = new Expression("1+2+3+(4+5)+a)+b");
        if (
                (e.checkSyntax() == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN) &&
                        (e.checkLexSyntax() == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN)
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0030() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Tokens to remove, removeBuiltinTokens(), unremoveBuiltinTokens(), getBuiltinTokensToRemove(),";
        TestCommonTools.consolePrintTestApiStart(30, testDescr);
        String t = null;
        mXparser.removeBuiltinTokens("sin");
        mXparser.removeBuiltinTokens("sin");
        mXparser.removeBuiltinTokens("cos");
        mXparser.removeBuiltinTokens("sin");
        mXparser.removeBuiltinTokens("sin", "cos", t, "", "tg");
        mXparser.removeBuiltinTokens(t);
        mXparser.unremoveBuiltinTokens(t);
        mXparser.unremoveBuiltinTokens(t, "");
        mXparser.unremoveBuiltinTokens("sin", "tg");
        String[] tokensToRemove1 = mXparser.getBuiltinTokensToRemove();
        mXparser.unremoveAllBuiltinTokens();
        String[] tokensToRemove2 = mXparser.getBuiltinTokensToRemove();
        if (
                (tokensToRemove1.length == 1) &&
                        (tokensToRemove1[0].equals("cos")) &&
                        (tokensToRemove2.length == 0)
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0031() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Tokens to modify, modifyBuiltinToken(), getBuiltinTokensToModify(), getHelp()";
        TestCommonTools.consolePrintTestApiStart(31, testDescr);
        String u = null;
        mXparser.modifyBuiltinToken("sin", "SIN");
        mXparser.modifyBuiltinToken("cos", "");
        mXparser.modifyBuiltinToken("tan", u);
        mXparser.modifyBuiltinToken(u, u);
        mXparser.modifyBuiltinToken(u, "TAN");
        mXparser.modifyBuiltinToken("tg", "TG", "NEW TG");
        mXparser.modifyBuiltinToken("", "TG", "NEW TG");
        mXparser.modifyBuiltinToken(u, "TG", "NEW TG");
        mXparser.modifyBuiltinToken("sin", "TG", "NEW TG");
        mXparser.modifyBuiltinToken("cos", "COS", "NEW COS");
        mXparser.modifyBuiltinToken("cos", "COS1", "NEW COS1");
        String help = mXparser.getHelp("COS");
        String[][] tokensToModify1 = mXparser.getBuiltinTokensToModify();
        mXparser.unmodifyBuiltinTokens("", u, "SIN", "tg");
        String[][] tokensToModify2 = mXparser.getBuiltinTokensToModify();
        mXparser.unmodifyAllBuiltinTokens();
        String[][] tokensToModify3 = mXparser.getBuiltinTokensToModify();
        if (
                ( tokensToModify1.length == 3 ) && (tokensToModify1[0].length == 3) &&
                        ( tokensToModify2.length == 1 ) && (tokensToModify2[0].length == 3) &&
                        ( tokensToModify3.length == 0 ) &&
                        ( tokensToModify1[0][0].equals("sin") ) &&
                        ( tokensToModify1[0][1].equals("SIN") ) &&
                        ( tokensToModify1[0][2] == null ) &&
                        ( tokensToModify1[1][0].equals("tg") ) &&
                        ( tokensToModify1[1][1].equals("TG") ) &&
                        ( tokensToModify1[1][2].equals("NEW TG") ) &&
                        ( tokensToModify1[2][0].equals("cos") ) &&
                        ( tokensToModify1[2][1].equals("COS") ) &&
                        ( tokensToModify1[2][2].equals("NEW COS") ) &&
                        ( tokensToModify2[0][0].equals("cos") ) &&
                        ( tokensToModify2[0][1].equals("COS") ) &&
                        ( tokensToModify2[0][2].equals("NEW COS") ) &&
                        ( help.contains("COS(x)") )
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0032() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Recursion counter, setMaxAllowedRecursionDepth(), getMaxAllowedRecursionDepth()";
        TestCommonTools.consolePrintTestApiStart(32, testDescr);
        mXparser.setMaxAllowedRecursionDepth(100);
        int rc100 = mXparser.getMaxAllowedRecursionDepth();
        mXparser.setMaxAllowedRecursionDepth(200);
        int rc200 = mXparser.getMaxAllowedRecursionDepth();
        if ( (rc100 == 100) && (rc200 == 200) )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0033() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Override built-in tokens, setToOverrideBuiltinTokens(), setNotToOverrideBuiltinTokens(), checkIfsetToOverrideBuiltinTokens()";
        TestCommonTools.consolePrintTestApiStart(33, testDescr);
        mXparser.setToOverrideBuiltinTokens();
        boolean over1 = mXparser.checkIfsetToOverrideBuiltinTokens();
        mXparser.setNotToOverrideBuiltinTokens();
        boolean over2 = mXparser.checkIfsetToOverrideBuiltinTokens();
        mXparser.setToOverrideBuiltinTokens();
        boolean over3 = mXparser.checkIfsetToOverrideBuiltinTokens();
        mXparser.setNotToOverrideBuiltinTokens();
        boolean over4 = mXparser.checkIfsetToOverrideBuiltinTokens();
        if ( (over1 == true) && (over2 == false) && (over3 == true) && (over4 == false) )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0034() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "getKeyWords()";
        TestCommonTools.consolePrintTestApiStart(34, testDescr);
        List<KeyWord> keyWords = mXparser.getKeyWords("sin ");
        if (	(keyWords.size() == 4) &&
                (keyWords.get(0).wordString.equals("sin")) &&
                (keyWords.get(1).wordString.equals("asin")) &&
                (keyWords.get(2).wordString.equals("arsin")) &&
                (keyWords.get(3).wordString.equals("arcsin"))
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0035() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "getTokenTypeDescription()";
        TestCommonTools.consolePrintTestApiStart(35, testDescr);
        if (	(mXparser.getTokenTypeDescription(BinaryRelation.TYPE_ID).equals(BinaryRelation.TYPE_DESC)) &&
                (mXparser.getTokenTypeDescription(BitwiseOperator.TYPE_ID).equals(BitwiseOperator.TYPE_DESC)) &&
                (mXparser.getTokenTypeDescription(BooleanOperator.TYPE_ID).equals(BooleanOperator.TYPE_DESC)) &&
                (mXparser.getTokenTypeDescription(CalculusOperator.TYPE_ID).equals(CalculusOperator.TYPE_DESC)) &&
                (mXparser.getTokenTypeDescription(ConstantValue.TYPE_ID).equals(ConstantValue.TYPE_DESC)) &&
                (mXparser.getTokenTypeDescription(Function1Arg.TYPE_ID).equals(Function1Arg.TYPE_DESC)) &&
                (mXparser.getTokenTypeDescription(Function2Arg.TYPE_ID).equals(Function2Arg.TYPE_DESC)) &&
                (mXparser.getTokenTypeDescription(Function3Arg.TYPE_ID).equals(Function3Arg.TYPE_DESC)) &&
                (mXparser.getTokenTypeDescription(FunctionVariadic.TYPE_ID).equals(FunctionVariadic.TYPE_DESC)) &&
                (mXparser.getTokenTypeDescription(Operator.TYPE_ID).equals(Operator.TYPE_DESC)) &&
                (mXparser.getTokenTypeDescription(ParserSymbol.TYPE_ID).equals(ParserSymbol.TYPE_DESC)) &&
                (mXparser.getTokenTypeDescription(RandomVariable.TYPE_ID).equals(RandomVariable.TYPE_DESC)) &&
                (mXparser.getTokenTypeDescription(Unit.TYPE_ID).equals(Unit.TYPE_DESC)) &&
                (mXparser.getTokenTypeDescription(Argument.TYPE_ID).equals(Argument.TYPE_DESC)) &&
                (mXparser.getTokenTypeDescription(Constant.TYPE_ID).equals(Constant.TYPE_DESC)) &&
                (mXparser.getTokenTypeDescription(RecursiveArgument.TYPE_ID_RECURSIVE).equals(RecursiveArgument.TYPE_DESC_RECURSIVE)) &&
                (mXparser.getTokenTypeDescription(Function.TYPE_ID).equals(Function.TYPE_DESC))
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0036() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "convOthBase2Decimal()";
        TestCommonTools.consolePrintTestApiStart(36, testDescr);
        if (
                ( NumberTheory.convOthBase2Decimal("11",  2) == 3.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("011",  2) == 3.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("000011",  2) == 3.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("12",  3) == 5.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("012",  3) == 5.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("0012",  3) == 5.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("123",  4) == 27.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("0123",  4) == 27.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("00123",  4) == 27.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("1234",  5) == 194.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("01234",  5) == 194.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("001234",  5) == 194.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("12345",  6) == 1865.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("012345",  6) == 1865.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("0012345",  6) == 1865.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("123456",  7) == 22875.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("0123456",  7) == 22875.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("00123456",  7) == 22875.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("1234567",  8) == 342391.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("01234567",  8) == 342391.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("01234567",  8) == 342391.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("12345678",  9) == 6053444.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("012345678",  9) == 6053444.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("0012345678",  9) == 6053444.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("123456789",  10) == 123456789.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("0123456789",  10) == 123456789.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("00123456789",  10) == 123456789.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("123456789A",  11) == 2853116705.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("0123456789A",  11) == 2853116705.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("00123456789A",  11) == 2853116705.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("123456789Ab",  12) == 73686780563.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("0123456789Ab",  12) == 73686780563.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("00123456789Ab",  12) == 73686780563.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("123456789AbC",  13) == 2103299351334.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("0123456789AbC",  13) == 2103299351334.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("00123456789AbC",  13) == 2103299351334.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("123456789AbCd",  14) == 65751519677857.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("0123456789AbCd",  14) == 65751519677857.0 ) &&
                        ( NumberTheory.convOthBase2Decimal("00123456789AbCd",  14) == 65751519677857.0 )
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0037() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "convOthBase2Decimal() - loop";
        TestCommonTools.consolePrintTestApiStart(37, testDescr);
        testResult = true;
        for (int decimalNumber = -10000; decimalNumber < 10000; decimalNumber++)
            for (int numeralSystemBase = 1; numeralSystemBase <= 36; numeralSystemBase ++) {
                if ( NumberTheory.convOthBase2Decimal( NumberTheory.convDecimal2OthBase(decimalNumber, numeralSystemBase), numeralSystemBase ) != decimalNumber) {
                    testResult = false;
                    break;
                }
            }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0038() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "convert2Decimal() and other - special cases";
        TestCommonTools.consolePrintTestApiStart(38, testDescr);
        char dc_1 = NumberTheory.digitChar(-1);
        char dc37 = NumberTheory.digitChar(37);
        int di = NumberTheory.digitIndex(' ');
        double dec1 = NumberTheory.convOthBase2Decimal("", 1);
        double decNaN1 = NumberTheory.convOthBase2Decimal("1101", 0);
        double decNaN2 = NumberTheory.convOthBase2Decimal("1101", 37);
        double decNaN3 = NumberTheory.convOthBase2Decimal(null, 3);
        double decNaN4 = NumberTheory.convOthBase2Decimal("", 3);
        double decNaN5 = NumberTheory.convOthBase2Decimal("1234", 4);
        String strNaN1 = NumberTheory.convDecimal2OthBase(Double.NaN, 2);
        String strNaN2 = NumberTheory.convDecimal2OthBase(2, 0);
        String strNaN3 = NumberTheory.convDecimal2OthBase(2, 37);
        if (	(dc_1 == '?') &&
                (dc37 == '?') &&
                (di == -1) &&
                (dec1 == 0) &&
                (Double.isNaN(decNaN1)) &&
                (Double.isNaN(decNaN2)) &&
                (Double.isNaN(decNaN3)) &&
                (Double.isNaN(decNaN4)) &&
                (Double.isNaN(decNaN5)) &&
                (strNaN1.equals("NaN")) &&
                (strNaN2.equals("NaN")) &&
                (strNaN3.equals("NaN"))
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0039() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "convert2Decimal() - loop";
        TestCommonTools.consolePrintTestApiStart(39, testDescr);
        testResult = true;
        for (int decimalNumber = -10000; decimalNumber < 10000; decimalNumber++)
            for (int numeralSystemBase = 1; numeralSystemBase <= 36; numeralSystemBase ++) {
                if ( NumberTheory.convOthBase2Decimal( NumberTheory.convDecimal2OthBase(decimalNumber, numeralSystemBase, 1) ) != decimalNumber) {
                    testResult = false;
                    break;
                }
            }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0040() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "convert2Decimal() - loop";
        TestCommonTools.consolePrintTestApiStart(40, testDescr);
        testResult = true;
        for (int decimalNumber = -10000; decimalNumber < 10000; decimalNumber++)
            for (int numeralSystemBase = 1; numeralSystemBase <= 36; numeralSystemBase ++) {
                if ( NumberTheory.convOthBase2Decimal( NumberTheory.convDecimal2OthBase(decimalNumber, numeralSystemBase, 2) ) != decimalNumber) {
                    testResult = false;
                    break;
                }
            }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0041() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "convert2Decimal() - loop";
        TestCommonTools.consolePrintTestApiStart(41, testDescr);
        testResult = true;
        for (int decimalNumber = -10000; decimalNumber < 10000; decimalNumber++)
            for (int numeralSystemBase = 1; numeralSystemBase <= 36; numeralSystemBase ++) {
                if ( NumberTheory.convOthBase2Decimal( NumberTheory.convDecimal2OthBase(decimalNumber, numeralSystemBase, 0), numeralSystemBase ) != decimalNumber) {
                    testResult = false;
                    break;
                }
            }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0042() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "getNumeralSystemBase()";
        TestCommonTools.consolePrintTestApiStart(42, testDescr);
        if (
                ( NumberTheory.getNumeralSystemBase( "h.1234567890aBcDeF" ) == 16 ) &&
                        ( NumberTheory.getNumeralSystemBase( "o.12345670" ) == 8 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b.101010" ) == 2 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b1." ) == 1 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b2.01" ) == 2 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b3.012" ) == 3 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b4.0123" ) == 4 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b5.01234" ) == 5 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b6.012345" ) == 6 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b7.0123456" ) == 7 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b8.01234567" ) == 8 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b9.012345678" ) == 9 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b10.0123456789" ) == 10 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b11.0123456789a" ) == 11 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b12.0123456789ab" ) == 12 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b13.0123456789abc" ) == 13 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b14.0123456789abcd" ) == 14 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b15.0123456789abcde" ) == 15 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b16.0123456789abcdef" ) == 16 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b16.0123456789abcdef" ) == 16 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b17.0123456789abcdefg" ) == 17 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b18.0123456789abcdefgh" ) == 18 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b19.0123456789abcdefghi" ) == 19 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b20.0123456789abcdefghij" ) == 20 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b21.0123456789abcdefghijk" ) == 21 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b22.0123456789abcdefghijkl" ) == 22 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b23.0123456789abcdefghijklm" ) == 23 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b24.0123456789abcdefghijklmn" ) == 24 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b25.0123456789abcdefghijklmno" ) == 25 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b26.0123456789abcdefghijklmnop" ) == 26 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b27.0123456789abcdefghijklmnopq" ) == 27 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b28.0123456789abcdefghijklmnopqr" ) == 28 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b29.0123456789abcdefghijklmnopqrs" ) == 29 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b30.0123456789abcdefghijklmnopqrst" ) == 30 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b31.0123456789abcdefghijklmnopqrstu" ) == 31 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b32.0123456789abcdefghijklmnopqrstuv" ) == 32 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b33.0123456789abcdefghijklmnopqrstuvw" ) == 33 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b34.0123456789abcdefghijklmnopqrstuvwx" ) == 34 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b35.0123456789abcdefghijklmnopqrstuvwxy" ) == 35 ) &&
                        ( NumberTheory.getNumeralSystemBase( "b36.0123456789abcdefghijklmnopqrstuvwxyz" ) == 36 ) &&
                        ( NumberTheory.getNumeralSystemBase( "H.001234567890aBcDeF" ) == 16 ) &&
                        ( NumberTheory.getNumeralSystemBase( "O.0012345670" ) == 8 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B.000101010" ) == 2 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B1.111" ) == 1 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B2.0101" ) == 2 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B3.0012" ) == 3 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B4.00123" ) == 4 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B5.001234" ) == 5 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B6.0012345" ) == 6 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B7.00123456" ) == 7 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B8.001234567" ) == 8 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B9.0012345678" ) == 9 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B10.00123456789" ) == 10 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B11.00123456789A" ) == 11 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B12.00123456789AB" ) == 12 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B13.00123456789ABC" ) == 13 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B14.00123456789ABCD" ) == 14 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B15.00123456789ABCDE" ) == 15 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B16.00123456789ABCDEF" ) == 16 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B16.00123456789ABCDEF" ) == 16 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B17.00123456789ABCDEFG" ) == 17 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B18.00123456789ABCDEFGH" ) == 18 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B19.00123456789ABCDEFGI" ) == 19 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B20.00123456789ABCDEFGIJ" ) == 20 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B21.00123456789ABCDEFGIJK" ) == 21 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B22.00123456789ABCDEFGIJKL" ) == 22 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B23.00123456789ABCDEFGIJKLM" ) == 23 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B24.00123456789ABCDEFGIJKLMN" ) == 24 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B25.00123456789ABCDEFGIJKLMNO" ) == 25 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B26.00123456789ABCDEFGIJKLMNOP" ) == 26 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B27.00123456789ABCDEFGIJKLMNOPQ" ) == 27 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B28.00123456789ABCDEFGIJKLMNOPQR" ) == 28 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B29.00123456789ABCDEFGIJKLMNOPQRS" ) == 29 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B30.00123456789ABCDEFGIJKLMNOPQRST" ) == 30 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B31.00123456789ABCDEFGIJKLMNOPQRSTU" ) == 31 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B32.00123456789ABCDEFGIJKLMNOPQRSTUV" ) == 32 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B33.00123456789ABCDEFGIJKLMNOPQRSTUVW" ) == 33 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B34.00123456789ABCDEFGIJKLMNOPQRSTUVWX" ) == 34 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY" ) == 35 ) &&
                        ( NumberTheory.getNumeralSystemBase( "B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ" ) == 36 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-h.1234567890aBcDeF" ) == 16 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-o.12345670" ) == 8 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b.101010" ) == 2 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b1." ) == 1 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b2.01" ) == 2 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b3.012" ) == 3 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b4.0123" ) == 4 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b5.01234" ) == 5 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b6.012345" ) == 6 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b7.0123456" ) == 7 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b8.01234567" ) == 8 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b9.012345678" ) == 9 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b10.0123456789" ) == 10 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b11.0123456789a" ) == 11 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b12.0123456789ab" ) == 12 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b13.0123456789abc" ) == 13 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b14.0123456789abcd" ) == 14 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b15.0123456789abcde" ) == 15 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b16.0123456789abcdef" ) == 16 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b16.0123456789abcdef" ) == 16 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b17.0123456789abcdefg" ) == 17 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b18.0123456789abcdefgh" ) == 18 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b19.0123456789abcdefghi" ) == 19 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b20.0123456789abcdefghij" ) == 20 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b21.0123456789abcdefghijk" ) == 21 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b22.0123456789abcdefghijkl" ) == 22 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b23.0123456789abcdefghijklm" ) == 23 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b24.0123456789abcdefghijklmn" ) == 24 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b25.0123456789abcdefghijklmno" ) == 25 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b26.0123456789abcdefghijklmnop" ) == 26 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b27.0123456789abcdefghijklmnopq" ) == 27 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b28.0123456789abcdefghijklmnopqr" ) == 28 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b29.0123456789abcdefghijklmnopqrs" ) == 29 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b30.0123456789abcdefghijklmnopqrst" ) == 30 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b31.0123456789abcdefghijklmnopqrstu" ) == 31 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b32.0123456789abcdefghijklmnopqrstuv" ) == 32 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b33.0123456789abcdefghijklmnopqrstuvw" ) == 33 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b34.0123456789abcdefghijklmnopqrstuvwx" ) == 34 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b35.0123456789abcdefghijklmnopqrstuvwxy" ) == 35 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-b36.0123456789abcdefghijklmnopqrstuvwxyz" ) == 36 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-H.001234567890aBcDeF" ) == 16 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-O.0012345670" ) == 8 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B.000101010" ) == 2 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B1.111" ) == 1 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B2.0101" ) == 2 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B3.0012" ) == 3 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B4.00123" ) == 4 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B5.001234" ) == 5 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B6.0012345" ) == 6 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B7.00123456" ) == 7 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B8.001234567" ) == 8 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B9.0012345678" ) == 9 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B10.00123456789" ) == 10 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B11.00123456789A" ) == 11 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B12.00123456789AB" ) == 12 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B13.00123456789ABC" ) == 13 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B14.00123456789ABCD" ) == 14 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B15.00123456789ABCDE" ) == 15 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B16.00123456789ABCDEF" ) == 16 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B16.00123456789ABCDEF" ) == 16 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B17.00123456789ABCDEFG" ) == 17 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B18.00123456789ABCDEFGH" ) == 18 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B19.00123456789ABCDEFGI" ) == 19 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B20.00123456789ABCDEFGIJ" ) == 20 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B21.00123456789ABCDEFGIJK" ) == 21 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B22.00123456789ABCDEFGIJKL" ) == 22 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B23.00123456789ABCDEFGIJKLM" ) == 23 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B24.00123456789ABCDEFGIJKLMN" ) == 24 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B25.00123456789ABCDEFGIJKLMNO" ) == 25 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B26.00123456789ABCDEFGIJKLMNOP" ) == 26 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B27.00123456789ABCDEFGIJKLMNOPQ" ) == 27 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B28.00123456789ABCDEFGIJKLMNOPQR" ) == 28 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B29.00123456789ABCDEFGIJKLMNOPQRS" ) == 29 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B30.00123456789ABCDEFGIJKLMNOPQRST" ) == 30 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B31.00123456789ABCDEFGIJKLMNOPQRSTU" ) == 31 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B32.00123456789ABCDEFGIJKLMNOPQRSTUV" ) == 32 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B33.00123456789ABCDEFGIJKLMNOPQRSTUVW" ) == 33 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B34.00123456789ABCDEFGIJKLMNOPQRSTUVWX" ) == 34 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY" ) == 35 ) &&
                        ( NumberTheory.getNumeralSystemBase( "-B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ" ) == 36 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+h.1234567890aBcDeF" ) == 16 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+o.12345670" ) == 8 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b.101010" ) == 2 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b1." ) == 1 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b2.01" ) == 2 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b3.012" ) == 3 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b4.0123" ) == 4 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b5.01234" ) == 5 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b6.012345" ) == 6 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b7.0123456" ) == 7 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b8.01234567" ) == 8 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b9.012345678" ) == 9 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b10.0123456789" ) == 10 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b11.0123456789a" ) == 11 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b12.0123456789ab" ) == 12 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b13.0123456789abc" ) == 13 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b14.0123456789abcd" ) == 14 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b15.0123456789abcde" ) == 15 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b16.0123456789abcdef" ) == 16 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b16.0123456789abcdef" ) == 16 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b17.0123456789abcdefg" ) == 17 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b18.0123456789abcdefgh" ) == 18 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b19.0123456789abcdefghi" ) == 19 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b20.0123456789abcdefghij" ) == 20 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b21.0123456789abcdefghijk" ) == 21 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b22.0123456789abcdefghijkl" ) == 22 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b23.0123456789abcdefghijklm" ) == 23 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b24.0123456789abcdefghijklmn" ) == 24 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b25.0123456789abcdefghijklmno" ) == 25 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b26.0123456789abcdefghijklmnop" ) == 26 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b27.0123456789abcdefghijklmnopq" ) == 27 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b28.0123456789abcdefghijklmnopqr" ) == 28 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b29.0123456789abcdefghijklmnopqrs" ) == 29 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b30.0123456789abcdefghijklmnopqrst" ) == 30 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b31.0123456789abcdefghijklmnopqrstu" ) == 31 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b32.0123456789abcdefghijklmnopqrstuv" ) == 32 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b33.0123456789abcdefghijklmnopqrstuvw" ) == 33 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b34.0123456789abcdefghijklmnopqrstuvwx" ) == 34 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b35.0123456789abcdefghijklmnopqrstuvwxy" ) == 35 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+b36.0123456789abcdefghijklmnopqrstuvwxyz" ) == 36 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+H.001234567890aBcDeF" ) == 16 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+O.0012345670" ) == 8 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B.000101010" ) == 2 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B1.111" ) == 1 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B2.0101" ) == 2 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B3.0012" ) == 3 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B4.00123" ) == 4 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B5.001234" ) == 5 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B6.0012345" ) == 6 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B7.00123456" ) == 7 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B8.001234567" ) == 8 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B9.0012345678" ) == 9 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B10.00123456789" ) == 10 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B11.00123456789A" ) == 11 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B12.00123456789AB" ) == 12 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B13.00123456789ABC" ) == 13 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B14.00123456789ABCD" ) == 14 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B15.00123456789ABCDE" ) == 15 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B16.00123456789ABCDEF" ) == 16 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B16.00123456789ABCDEF" ) == 16 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B17.00123456789ABCDEFG" ) == 17 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B18.00123456789ABCDEFGH" ) == 18 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B19.00123456789ABCDEFGI" ) == 19 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B20.00123456789ABCDEFGIJ" ) == 20 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B21.00123456789ABCDEFGIJK" ) == 21 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B22.00123456789ABCDEFGIJKL" ) == 22 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B23.00123456789ABCDEFGIJKLM" ) == 23 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B24.00123456789ABCDEFGIJKLMN" ) == 24 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B25.00123456789ABCDEFGIJKLMNO" ) == 25 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B26.00123456789ABCDEFGIJKLMNOP" ) == 26 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B27.00123456789ABCDEFGIJKLMNOPQ" ) == 27 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B28.00123456789ABCDEFGIJKLMNOPQR" ) == 28 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B29.00123456789ABCDEFGIJKLMNOPQRS" ) == 29 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B30.00123456789ABCDEFGIJKLMNOPQRST" ) == 30 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B31.00123456789ABCDEFGIJKLMNOPQRSTU" ) == 31 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B32.00123456789ABCDEFGIJKLMNOPQRSTUV" ) == 32 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B33.00123456789ABCDEFGIJKLMNOPQRSTUVW" ) == 33 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B34.00123456789ABCDEFGIJKLMNOPQRSTUVWX" ) == 34 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY" ) == 35 ) &&
                        ( NumberTheory.getNumeralSystemBase( "+B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ" ) == 36 )
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0043() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "convOthBase2Decimal()";
        TestCommonTools.consolePrintTestApiStart(43, testDescr);
        if (
                ( NumberTheory.convOthBase2Decimal( "b1." ) == 0 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b1.111" ) == 3 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b2.101" ) == 5 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b3.121" ) == 16 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b4.123" ) == 27 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b5.341" ) == 96 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b6.352" ) == 140 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b7.256" ) == 139 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b8.376" ) == 254 ) &&
                        ( NumberTheory.convOthBase2Decimal( "o.376" ) == 254 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b.101" ) == 5 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b9.821" ) == 667 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b10.394" ) == 394 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b11.3A7" ) == 480 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b12.A5B" ) == 1511 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b13.ACB" ) == 1857 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b14.2AD" ) == 545 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b15.BE4" ) == 2689 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b16.FA2" ) == 4002 ) &&
                        ( NumberTheory.convOthBase2Decimal( "h.FA2" ) == 4002 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b17.AG6" ) == 3168 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b18.FGH" ) == 5165 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b19.2I3" ) == 1067 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b20.9CJ" ) == 3859 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b21.K5F" ) == 8940 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b22.FL5" ) == 7727 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b23.1AM" ) == 781 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b24.5ND" ) == 3445 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b25.5ND5C" ) == 2320762 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b26.3KPB5" ) == 1739639 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b27.IQH67" ) == 10090258 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b28.RKHB2" ) == 17048390 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b29.8BIFS" ) == 5942128 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b30.2TGJB" ) == 2417981 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b31.6PUC0" ) == 6315103 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b32.C0PV0" ) == 12609504 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b33.V000W" ) == 36763583 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b34.NP2XW" ) == 31721794 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b35.120Y0" ) == 1587565 ) &&
                        ( NumberTheory.convOthBase2Decimal( "b36.ZZZZZ" ) == 60466175 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B1." ) == 0 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B1.111" ) == 3 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B2.00101" ) == 5 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B3.00121" ) == 16 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B4.00123" ) == 27 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B5.00341" ) == 96 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B6.00352" ) == 140 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B7.00256" ) == 139 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B8.00376" ) == 254 ) &&
                        ( NumberTheory.convOthBase2Decimal( "O.00376" ) == 254 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B.00101" ) == 5 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B9.00821" ) == 667 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B10.00394" ) == 394 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B11.003a7" ) == 480 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B12.00a5b" ) == 1511 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B13.00acb" ) == 1857 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B14.002ad" ) == 545 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B15.00be4" ) == 2689 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B16.00fa2" ) == 4002 ) &&
                        ( NumberTheory.convOthBase2Decimal( "H.00fa2" ) == 4002 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B17.00ag6" ) == 3168 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B18.00fgh" ) == 5165 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B19.002i3" ) == 1067 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B20.009cj" ) == 3859 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B21.00k5f" ) == 8940 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B22.00fl5" ) == 7727 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B23.001am" ) == 781 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B24.005nd" ) == 3445 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B25.005nd5c" ) == 2320762 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B26.003kpb5" ) == 1739639 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B27.00iqh67" ) == 10090258 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B28.00rkhb2" ) == 17048390 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B29.008bifs" ) == 5942128 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B30.002tgjb" ) == 2417981 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B31.006puc0" ) == 6315103 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B32.00c0pv0" ) == 12609504 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B33.00v000w" ) == 36763583 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B34.00np2xw" ) == 31721794 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B35.00120y0" ) == 1587565 ) &&
                        ( NumberTheory.convOthBase2Decimal( "B36.00zzzzz" ) == 60466175 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b1." ) == 0 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b1.111" ) == 3 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b2.101" ) == 5 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b3.121" ) == 16 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b4.123" ) == 27 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b5.341" ) == 96 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b6.352" ) == 140 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b7.256" ) == 139 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b8.376" ) == 254 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+o.376" ) == 254 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b.101" ) == 5 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b9.821" ) == 667 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b10.394" ) == 394 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b11.3A7" ) == 480 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b12.A5B" ) == 1511 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b13.ACB" ) == 1857 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b14.2AD" ) == 545 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b15.BE4" ) == 2689 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b16.FA2" ) == 4002 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+h.FA2" ) == 4002 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b17.AG6" ) == 3168 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b18.FGH" ) == 5165 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b19.2I3" ) == 1067 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b20.9CJ" ) == 3859 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b21.K5F" ) == 8940 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b22.FL5" ) == 7727 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b23.1AM" ) == 781 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b24.5ND" ) == 3445 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b25.5ND5C" ) == 2320762 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b26.3KPB5" ) == 1739639 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b27.IQH67" ) == 10090258 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b28.RKHB2" ) == 17048390 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b29.8BIFS" ) == 5942128 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b30.2TGJB" ) == 2417981 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b31.6PUC0" ) == 6315103 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b32.C0PV0" ) == 12609504 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b33.V000W" ) == 36763583 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b34.NP2XW" ) == 31721794 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b35.120Y0" ) == 1587565 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+b36.ZZZZZ" ) == 60466175 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B1." ) == 0 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B1.111" ) == 3 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B2.00101" ) == 5 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B3.00121" ) == 16 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B4.00123" ) == 27 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B5.00341" ) == 96 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B6.00352" ) == 140 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B7.00256" ) == 139 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B8.00376" ) == 254 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+O.00376" ) == 254 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B.00101" ) == 5 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B9.00821" ) == 667 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B10.00394" ) == 394 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B11.003a7" ) == 480 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B12.00a5b" ) == 1511 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B13.00acb" ) == 1857 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B14.002ad" ) == 545 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B15.00be4" ) == 2689 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B16.00fa2" ) == 4002 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+H.00fa2" ) == 4002 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B17.00ag6" ) == 3168 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B18.00fgh" ) == 5165 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B19.002i3" ) == 1067 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B20.009cj" ) == 3859 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B21.00k5f" ) == 8940 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B22.00fl5" ) == 7727 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B23.001am" ) == 781 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B24.005nd" ) == 3445 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B25.005nd5c" ) == 2320762 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B26.003kpb5" ) == 1739639 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B27.00iqh67" ) == 10090258 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B28.00rkhb2" ) == 17048390 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B29.008bifs" ) == 5942128 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B30.002tgjb" ) == 2417981 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B31.006puc0" ) == 6315103 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B32.00c0pv0" ) == 12609504 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B33.00v000w" ) == 36763583 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B34.00np2xw" ) == 31721794 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B35.00120y0" ) == 1587565 ) &&
                        ( NumberTheory.convOthBase2Decimal( "+B36.00zzzzz" ) == 60466175 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b1." ) == -0 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b1.111" ) == -3 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b2.101" ) == -5 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b3.121" ) == -16 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b4.123" ) == -27 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b5.341" ) == -96 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b6.352" ) == -140 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b7.256" ) == -139 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b8.376" ) == -254 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-o.376" ) == -254 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b.101" ) == -5 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b9.821" ) == -667 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b10.394" ) == -394 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b11.3A7" ) == -480 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b12.A5B" ) == -1511 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b13.ACB" ) == -1857 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b14.2AD" ) == -545 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b15.BE4" ) == -2689 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b16.FA2" ) == -4002 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-h.FA2" ) == -4002 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b17.AG6" ) == -3168 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b18.FGH" ) == -5165 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b19.2I3" ) == -1067 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b20.9CJ" ) == -3859 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b21.K5F" ) == -8940 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b22.FL5" ) == -7727 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b23.1AM" ) == -781 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b24.5ND" ) == -3445 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b25.5ND5C" ) == -2320762 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b26.3KPB5" ) == -1739639 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b27.IQH67" ) == -10090258 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b28.RKHB2" ) == -17048390 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b29.8BIFS" ) == -5942128 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b30.2TGJB" ) == -2417981 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b31.6PUC0" ) == -6315103 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b32.C0PV0" ) == -12609504 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b33.V000W" ) == -36763583 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b34.NP2XW" ) == -31721794 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b35.120Y0" ) == -1587565 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-b36.ZZZZZ" ) == -60466175 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B1." ) == -0 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B1.111" ) == -3 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B2.00101" ) == -5 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B3.00121" ) == -16 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B4.00123" ) == -27 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B5.00341" ) == -96 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B6.00352" ) == -140 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B7.00256" ) == -139 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B8.00376" ) == -254 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-O.00376" ) == -254 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B.00101" ) == -5 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B9.00821" ) == -667 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B10.00394" ) == -394 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B11.003a7" ) == -480 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B12.00a5b" ) == -1511 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B13.00acb" ) == -1857 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B14.002ad" ) == -545 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B15.00be4" ) == -2689 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B16.00fa2" ) == -4002 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-H.00fa2" ) == -4002 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B17.00ag6" ) == -3168 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B18.00fgh" ) == -5165 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B19.002i3" ) == -1067 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B20.009cj" ) == -3859 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B21.00k5f" ) == -8940 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B22.00fl5" ) == -7727 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B23.001am" ) == -781 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B24.005nd" ) == -3445 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B25.005nd5c" ) == -2320762 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B26.003kpb5" ) == -1739639 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B27.00iqh67" ) == -10090258 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B28.00rkhb2" ) == -17048390 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B29.008bifs" ) == -5942128 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B30.002tgjb" ) == -2417981 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B31.006puc0" ) == -6315103 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B32.00c0pv0" ) == -12609504 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B33.00v000w" ) == -36763583 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B34.00np2xw" ) == -31721794 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B35.00120y0" ) == -1587565 ) &&
                        ( NumberTheory.convOthBase2Decimal( "-B36.00zzzzz" ) == -60466175 )
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0044() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "convDecimal2OthBase()";
        TestCommonTools.consolePrintTestApiStart(44, testDescr);
        if (
                ( NumberTheory.convDecimal2OthBase( 0, 1 ).equals( "" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 3, 1 ).equals( "111" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 5, 2 ).equals( "101" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 16, 3 ).equals( "121" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 27, 4 ).equals( "123" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 96, 5 ).equals( "341" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 140, 6 ).equals( "352" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 139, 7 ).equals( "256" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 254, 8 ).equals( "376" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 667, 9 ).equals( "821" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 394, 10 ).equals( "394" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 480, 11 ).equals( "3A7" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 1511, 12 ).equals( "A5B" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 1857, 13 ).equals( "ACB" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 545, 14 ).equals( "2AD" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 2689, 15 ).equals( "BE4" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 4002, 16 ).equals( "FA2" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 3168, 17 ).equals( "AG6" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 5165, 18 ).equals( "FGH" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 1067, 19 ).equals( "2I3" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 3859, 20 ).equals( "9CJ" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 8940, 21 ).equals( "K5F" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 7727, 22 ).equals( "FL5" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 781, 23 ).equals( "1AM" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 3445, 24 ).equals( "5ND" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 2320762, 25 ).equals( "5ND5C" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 1739639, 26 ).equals( "3KPB5" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 10090258, 27 ).equals( "IQH67" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 17048390, 28 ).equals( "RKHB2" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 5942128, 29 ).equals( "8BIFS" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 2417981, 30 ).equals( "2TGJB" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 6315103, 31 ).equals( "6PUC0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 12609504, 32 ).equals( "C0PV0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 36763583, 33 ).equals( "V000W" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 31721794, 34 ).equals( "NP2XW" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 1587565, 35 ).equals( "120Y0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 60466175, 36 ).equals( "ZZZZZ" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -0, 1 ).equals( "" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -3, 1 ).equals( "-111" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -5, 2 ).equals( "-101" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -16, 3 ).equals( "-121" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -27, 4 ).equals( "-123" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -96, 5 ).equals( "-341" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -140, 6 ).equals( "-352" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -139, 7 ).equals( "-256" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -254, 8 ).equals( "-376" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -667, 9 ).equals( "-821" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -394, 10 ).equals( "-394" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -480, 11 ).equals( "-3A7" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -1511, 12 ).equals( "-A5B" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -1857, 13 ).equals( "-ACB" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -545, 14 ).equals( "-2AD" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -2689, 15 ).equals( "-BE4" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -4002, 16 ).equals( "-FA2" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -3168, 17 ).equals( "-AG6" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -5165, 18 ).equals( "-FGH" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -1067, 19 ).equals( "-2I3" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -3859, 20 ).equals( "-9CJ" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -8940, 21 ).equals( "-K5F" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -7727, 22 ).equals( "-FL5" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -781, 23 ).equals( "-1AM" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -3445, 24 ).equals( "-5ND" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -2320762, 25 ).equals( "-5ND5C" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -1739639, 26 ).equals( "-3KPB5" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -10090258, 27 ).equals( "-IQH67" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -17048390, 28 ).equals( "-RKHB2" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -5942128, 29 ).equals( "-8BIFS" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -2417981, 30 ).equals( "-2TGJB" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -6315103, 31 ).equals( "-6PUC0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -12609504, 32 ).equals( "-C0PV0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -36763583, 33 ).equals( "-V000W" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -31721794, 34 ).equals( "-NP2XW" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -1587565, 35 ).equals( "-120Y0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -60466175, 36 ).equals( "-ZZZZZ" ) )				)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0045() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "convDecimal2OthBase() - format 0";
        TestCommonTools.consolePrintTestApiStart(45, testDescr);
        if (
                ( NumberTheory.convDecimal2OthBase( 0, 1, 0 ).equals( "" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 3, 1, 0 ).equals( "111" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 5, 2, 0 ).equals( "101" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 16, 3, 0 ).equals( "121" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 27, 4, 0 ).equals( "123" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 96, 5, 0 ).equals( "341" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 140, 6, 0 ).equals( "352" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 139, 7, 0 ).equals( "256" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 254, 8, 0 ).equals( "376" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 667, 9, 0 ).equals( "821" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 394, 10, 0 ).equals( "394" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 480, 11, 0 ).equals( "3A7" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 1511, 12, 0 ).equals( "A5B" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 1857, 13, 0 ).equals( "ACB" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 545, 14, 0 ).equals( "2AD" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 2689, 15, 0 ).equals( "BE4" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 4002, 16, 0 ).equals( "FA2" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 3168, 17, 0 ).equals( "AG6" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 5165, 18, 0 ).equals( "FGH" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 1067, 19, 0 ).equals( "2I3" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 3859, 20, 0 ).equals( "9CJ" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 8940, 21, 0 ).equals( "K5F" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 7727, 22, 0 ).equals( "FL5" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 781, 23, 0 ).equals( "1AM" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 3445, 24, 0 ).equals( "5ND" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 2320762, 25, 0 ).equals( "5ND5C" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 1739639, 26, 0 ).equals( "3KPB5" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 10090258, 27, 0 ).equals( "IQH67" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 17048390, 28, 0 ).equals( "RKHB2" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 5942128, 29, 0 ).equals( "8BIFS" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 2417981, 30, 0 ).equals( "2TGJB" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 6315103, 31, 0 ).equals( "6PUC0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 12609504, 32, 0 ).equals( "C0PV0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 36763583, 33, 0 ).equals( "V000W" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 31721794, 34, 0 ).equals( "NP2XW" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 1587565, 35, 0 ).equals( "120Y0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 60466175, 36, 0 ).equals( "ZZZZZ" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -0, 1, 0 ).equals( "" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -3, 1, 0 ).equals( "-111" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -5, 2, 0 ).equals( "-101" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -16, 3, 0 ).equals( "-121" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -27, 4, 0 ).equals( "-123" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -96, 5, 0 ).equals( "-341" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -140, 6, 0 ).equals( "-352" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -139, 7, 0 ).equals( "-256" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -254, 8, 0 ).equals( "-376" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -667, 9, 0 ).equals( "-821" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -394, 10, 0 ).equals( "-394" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -480, 11, 0 ).equals( "-3A7" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -1511, 12, 0 ).equals( "-A5B" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -1857, 13, 0 ).equals( "-ACB" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -545, 14, 0 ).equals( "-2AD" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -2689, 15, 0 ).equals( "-BE4" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -4002, 16, 0 ).equals( "-FA2" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -3168, 17, 0 ).equals( "-AG6" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -5165, 18, 0 ).equals( "-FGH" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -1067, 19, 0 ).equals( "-2I3" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -3859, 20, 0 ).equals( "-9CJ" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -8940, 21, 0 ).equals( "-K5F" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -7727, 22, 0 ).equals( "-FL5" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -781, 23, 0 ).equals( "-1AM" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -3445, 24, 0 ).equals( "-5ND" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -2320762, 25, 0 ).equals( "-5ND5C" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -1739639, 26, 0 ).equals( "-3KPB5" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -10090258, 27, 0 ).equals( "-IQH67" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -17048390, 28, 0 ).equals( "-RKHB2" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -5942128, 29, 0 ).equals( "-8BIFS" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -2417981, 30, 0 ).equals( "-2TGJB" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -6315103, 31, 0 ).equals( "-6PUC0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -12609504, 32, 0 ).equals( "-C0PV0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -36763583, 33, 0 ).equals( "-V000W" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -31721794, 34, 0 ).equals( "-NP2XW" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -1587565, 35, 0 ).equals( "-120Y0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -60466175, 36, 0 ).equals( "-ZZZZZ" ) )				)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0046() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "convDecimal2OthBase() - format 1";
        TestCommonTools.consolePrintTestApiStart(46, testDescr);
        if (
                ( NumberTheory.convDecimal2OthBase( 0, 1, 1 ).equals( "b1." ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 3, 1, 1 ).equals( "b1.111" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 5, 2, 1 ).equals( "b2.101" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 16, 3, 1 ).equals( "b3.121" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 27, 4, 1 ).equals( "b4.123" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 96, 5, 1 ).equals( "b5.341" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 140, 6, 1 ).equals( "b6.352" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 139, 7, 1 ).equals( "b7.256" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 254, 8, 1 ).equals( "b8.376" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 667, 9, 1 ).equals( "b9.821" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 394, 10, 1 ).equals( "b10.394" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 480, 11, 1 ).equals( "b11.3A7" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 1511, 12, 1 ).equals( "b12.A5B" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 1857, 13, 1 ).equals( "b13.ACB" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 545, 14, 1 ).equals( "b14.2AD" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 2689, 15, 1 ).equals( "b15.BE4" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 4002, 16, 1 ).equals( "b16.FA2" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 3168, 17, 1 ).equals( "b17.AG6" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 5165, 18, 1 ).equals( "b18.FGH" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 1067, 19, 1 ).equals( "b19.2I3" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 3859, 20, 1 ).equals( "b20.9CJ" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 8940, 21, 1 ).equals( "b21.K5F" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 7727, 22, 1 ).equals( "b22.FL5" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 781, 23, 1 ).equals( "b23.1AM" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 3445, 24, 1 ).equals( "b24.5ND" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 2320762, 25, 1 ).equals( "b25.5ND5C" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 1739639, 26, 1 ).equals( "b26.3KPB5" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 10090258, 27, 1 ).equals( "b27.IQH67" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 17048390, 28, 1 ).equals( "b28.RKHB2" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 5942128, 29, 1 ).equals( "b29.8BIFS" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 2417981, 30, 1 ).equals( "b30.2TGJB" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 6315103, 31, 1 ).equals( "b31.6PUC0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 12609504, 32, 1 ).equals( "b32.C0PV0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 36763583, 33, 1 ).equals( "b33.V000W" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 31721794, 34, 1 ).equals( "b34.NP2XW" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 1587565, 35, 1 ).equals( "b35.120Y0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 60466175, 36, 1 ).equals( "b36.ZZZZZ" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -0, 1, 1 ).equals( "b1." ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -3, 1, 1 ).equals( "-b1.111" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -5, 2, 1 ).equals( "-b2.101" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -16, 3, 1 ).equals( "-b3.121" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -27, 4, 1 ).equals( "-b4.123" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -96, 5, 1 ).equals( "-b5.341" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -140, 6, 1 ).equals( "-b6.352" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -139, 7, 1 ).equals( "-b7.256" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -254, 8, 1 ).equals( "-b8.376" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -667, 9, 1 ).equals( "-b9.821" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -394, 10, 1 ).equals( "-b10.394" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -480, 11, 1 ).equals( "-b11.3A7" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -1511, 12, 1 ).equals( "-b12.A5B" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -1857, 13, 1 ).equals( "-b13.ACB" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -545, 14, 1 ).equals( "-b14.2AD" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -2689, 15, 1 ).equals( "-b15.BE4" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -4002, 16, 1 ).equals( "-b16.FA2" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -3168, 17, 1 ).equals( "-b17.AG6" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -5165, 18, 1 ).equals( "-b18.FGH" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -1067, 19, 1 ).equals( "-b19.2I3" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -3859, 20, 1 ).equals( "-b20.9CJ" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -8940, 21, 1 ).equals( "-b21.K5F" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -7727, 22, 1 ).equals( "-b22.FL5" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -781, 23, 1 ).equals( "-b23.1AM" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -3445, 24, 1 ).equals( "-b24.5ND" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -2320762, 25, 1 ).equals( "-b25.5ND5C" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -1739639, 26, 1 ).equals( "-b26.3KPB5" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -10090258, 27, 1 ).equals( "-b27.IQH67" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -17048390, 28, 1 ).equals( "-b28.RKHB2" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -5942128, 29, 1 ).equals( "-b29.8BIFS" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -2417981, 30, 1 ).equals( "-b30.2TGJB" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -6315103, 31, 1 ).equals( "-b31.6PUC0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -12609504, 32, 1 ).equals( "-b32.C0PV0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -36763583, 33, 1 ).equals( "-b33.V000W" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -31721794, 34, 1 ).equals( "-b34.NP2XW" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -1587565, 35, 1 ).equals( "-b35.120Y0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -60466175, 36, 1 ).equals( "-b36.ZZZZZ" ) )
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0047() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "convDecimal2OthBase() - format 2";
        TestCommonTools.consolePrintTestApiStart(47, testDescr);
        if (
                ( NumberTheory.convDecimal2OthBase( 0, 1, 2 ).equals( "b1." ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 3, 1, 2 ).equals( "b1.111" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 5, 2, 2 ).equals( "b.101" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 16, 3, 2 ).equals( "b3.121" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 27, 4, 2 ).equals( "b4.123" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 96, 5, 2 ).equals( "b5.341" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 140, 6, 2 ).equals( "b6.352" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 139, 7, 2 ).equals( "b7.256" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 254, 8, 2 ).equals( "o.376" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 667, 9, 2 ).equals( "b9.821" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 394, 10, 2 ).equals( "b10.394" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 480, 11, 2 ).equals( "b11.3A7" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 1511, 12, 2 ).equals( "b12.A5B" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 1857, 13, 2 ).equals( "b13.ACB" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 545, 14, 2 ).equals( "b14.2AD" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 2689, 15, 2 ).equals( "b15.BE4" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 4002, 16, 2 ).equals( "h.FA2" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 3168, 17, 2 ).equals( "b17.AG6" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 5165, 18, 2 ).equals( "b18.FGH" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 1067, 19, 2 ).equals( "b19.2I3" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 3859, 20, 2 ).equals( "b20.9CJ" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 8940, 21, 2 ).equals( "b21.K5F" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 7727, 22, 2 ).equals( "b22.FL5" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 781, 23, 2 ).equals( "b23.1AM" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 3445, 24, 2 ).equals( "b24.5ND" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 2320762, 25, 2 ).equals( "b25.5ND5C" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 1739639, 26, 2 ).equals( "b26.3KPB5" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 10090258, 27, 2 ).equals( "b27.IQH67" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 17048390, 28, 2 ).equals( "b28.RKHB2" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 5942128, 29, 2 ).equals( "b29.8BIFS" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 2417981, 30, 2 ).equals( "b30.2TGJB" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 6315103, 31, 2 ).equals( "b31.6PUC0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 12609504, 32, 2 ).equals( "b32.C0PV0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 36763583, 33, 2 ).equals( "b33.V000W" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 31721794, 34, 2 ).equals( "b34.NP2XW" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 1587565, 35, 2 ).equals( "b35.120Y0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( 60466175, 36, 2 ).equals( "b36.ZZZZZ" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -0, 1, 2 ).equals( "b1." ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -3, 1, 2 ).equals( "-b1.111" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -5, 2, 2 ).equals( "-b.101" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -16, 3, 2 ).equals( "-b3.121" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -27, 4, 2 ).equals( "-b4.123" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -96, 5, 2 ).equals( "-b5.341" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -140, 6, 2 ).equals( "-b6.352" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -139, 7, 2 ).equals( "-b7.256" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -254, 8, 2 ).equals( "-o.376" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -667, 9, 2 ).equals( "-b9.821" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -394, 10, 2 ).equals( "-b10.394" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -480, 11, 2 ).equals( "-b11.3A7" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -1511, 12, 2 ).equals( "-b12.A5B" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -1857, 13, 2 ).equals( "-b13.ACB" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -545, 14, 2 ).equals( "-b14.2AD" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -2689, 15, 2 ).equals( "-b15.BE4" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -4002, 16, 2 ).equals( "-h.FA2" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -3168, 17, 2 ).equals( "-b17.AG6" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -5165, 18, 2 ).equals( "-b18.FGH" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -1067, 19, 2 ).equals( "-b19.2I3" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -3859, 20, 2 ).equals( "-b20.9CJ" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -8940, 21, 2 ).equals( "-b21.K5F" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -7727, 22, 2 ).equals( "-b22.FL5" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -781, 23, 2 ).equals( "-b23.1AM" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -3445, 24, 2 ).equals( "-b24.5ND" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -2320762, 25, 2 ).equals( "-b25.5ND5C" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -1739639, 26, 2 ).equals( "-b26.3KPB5" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -10090258, 27, 2 ).equals( "-b27.IQH67" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -17048390, 28, 2 ).equals( "-b28.RKHB2" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -5942128, 29, 2 ).equals( "-b29.8BIFS" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -2417981, 30, 2 ).equals( "-b30.2TGJB" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -6315103, 31, 2 ).equals( "-b31.6PUC0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -12609504, 32, 2 ).equals( "-b32.C0PV0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -36763583, 33, 2 ).equals( "-b33.V000W" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -31721794, 34, 2 ).equals( "-b34.NP2XW" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -1587565, 35, 2 ).equals( "-b35.120Y0" ) ) &&
                        ( NumberTheory.convDecimal2OthBase( -60466175, 36, 2 ).equals( "-b36.ZZZZZ" ) )
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0048() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "convOthBase2Decimal() - special cases";
        TestCommonTools.consolePrintTestApiStart(48, testDescr);
        double potNaN1 = NumberTheory.convOthBase2Decimal((String)null);
        double potNaN2 = NumberTheory.convOthBase2Decimal("1");
        double potNaN3 = NumberTheory.convOthBase2Decimal("12");
        double potNaN4 = NumberTheory.convOthBase2Decimal("b1.123");
        double potNaN5 = NumberTheory.convOthBase2Decimal("b37.123");
        if (
                ( Double.isNaN(potNaN1) ) &&
                        ( Double.isNaN(potNaN2) ) &&
                        ( Double.isNaN(potNaN3) ) &&
                        ( Double.isNaN(potNaN4) ) &&
                        ( Double.isNaN(potNaN5) )
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0049() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "getMissingUserDefinedArguments()";
        TestCommonTools.consolePrintTestApiStart(49, testDescr);
        Expression e = new Expression("sin(x) + cos(x) + f(x,y) + x + y / z + 2*pi");
        String[] misArgs = e.getMissingUserDefinedArguments();
        if (
                ( misArgs[0].equals("x") ) &&
                        ( misArgs[1].equals("y") ) &&
                        ( misArgs[2].equals("z") ) &&
                        ( misArgs.length == 3 )
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0050() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "getMissingUserDefinedFunctions()";
        TestCommonTools.consolePrintTestApiStart(50, testDescr);
        Expression e = new Expression("sin(x) + cos(x) + f(x,y) + x + y / z + 2*pi");
        String[] misFun = e.getMissingUserDefinedFunctions();
        if (
                ( misFun[0].equals("f") ) &&
                        ( misFun.length == 1 )
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0051() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Default radian / degrees mode";
        TestCommonTools.consolePrintTestApiStart(51, testDescr);
        if ( (mXparser.checkIfRadiansMode() == true) && (mXparser.checkIfDegreesMode() == false) )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0052() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Set to degrees mode";
        TestCommonTools.consolePrintTestApiStart(52, testDescr);
        mXparser.setDegreesMode();
        if ( (mXparser.checkIfRadiansMode() == false) && (mXparser.checkIfDegreesMode() == true) )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0053() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Set to degrees mode";
        TestCommonTools.consolePrintTestApiStart(53, testDescr);
        mXparser.setRadiansMode();
        if ( (mXparser.checkIfRadiansMode() == true) && (mXparser.checkIfDegreesMode() == false) )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0054() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "roundHalfUp";
        TestCommonTools.consolePrintTestApiStart(54, testDescr);
        if (
                ( MathFunctions.roundHalfUp( 0.0, 0 ) == 0.0) &&
                        ( MathFunctions.roundHalfUp( 0.0, 1 ) == 0.0) &&
                        ( MathFunctions.roundHalfUp( 0.0, 2 ) == 0.0) &&
                        ( MathFunctions.roundHalfUp( 0.0, 100 ) == 0.0) &&
                        ( Double.isNaN( MathFunctions.roundHalfUp( 0.0, -1 ) ) ) &&
                        ( MathFunctions.roundHalfUp( 1.0, 0 ) == 1.0) &&
                        ( MathFunctions.roundHalfUp( 1.0, 1 ) == 1.0) &&
                        ( MathFunctions.roundHalfUp( 1.0, 2 ) == 1.0) &&
                        ( MathFunctions.roundHalfUp( 1.0, 100 ) == 1.0) &&
                        ( Double.isNaN( MathFunctions.roundHalfUp( 1.0, -1 ) ) ) &&
                        ( MathFunctions.roundHalfUp( 9856.0, 0 ) == 9856.0) &&
                        ( MathFunctions.roundHalfUp( 9856.0, 1 ) == 9856.0) &&
                        ( MathFunctions.roundHalfUp( 9856.0, 2 ) == 9856.0) &&
                        ( MathFunctions.roundHalfUp( 9856.0, 100 ) == 9856.0) &&
                        ( Double.isNaN( MathFunctions.roundHalfUp( 9856.0, -1 ) ) ) &&
                        ( MathFunctions.roundHalfUp( 9.856E303, 0 ) == 9.856E303) &&
                        ( MathFunctions.roundHalfUp( 9.856E303, 1 ) == 9.856E303) &&
                        ( MathFunctions.roundHalfUp( 9.856E303, 2 ) == 9.856E303) &&
                        ( MathFunctions.roundHalfUp( 9.856E303, 100 ) == 9.856E303) &&
                        ( Double.isNaN( MathFunctions.roundHalfUp( 9.856E303, -1 ) ) ) &&
                        ( MathFunctions.roundHalfUp( -1.0, 0 ) == -1.0) &&
                        ( MathFunctions.roundHalfUp( -1.0, 1 ) == -1.0) &&
                        ( MathFunctions.roundHalfUp( -1.0, 2 ) == -1.0) &&
                        ( MathFunctions.roundHalfUp( -1.0, 100 ) == -1.0) &&
                        ( Double.isNaN( MathFunctions.roundHalfUp( -1.0, -1 ) ) ) &&
                        ( MathFunctions.roundHalfUp( -9856.0, 0 ) == -9856.0) &&
                        ( MathFunctions.roundHalfUp( -9856.0, 1 ) == -9856.0) &&
                        ( MathFunctions.roundHalfUp( -9856.0, 2 ) == -9856.0) &&
                        ( MathFunctions.roundHalfUp( -9856.0, 100 ) == -9856.0) &&
                        ( Double.isNaN( MathFunctions.roundHalfUp( -9856.0, -1 ) ) ) &&
                        ( MathFunctions.roundHalfUp( -9.856E303, 0 ) == -9.856E303) &&
                        ( MathFunctions.roundHalfUp( -9.856E303, 1 ) == -9.856E303) &&
                        ( MathFunctions.roundHalfUp( -9.856E303, 2 ) == -9.856E303) &&
                        ( MathFunctions.roundHalfUp( -9.856E303, 100 ) == -9.856E303) &&
                        ( Double.isNaN( MathFunctions.roundHalfUp( -9.856E303, -1 ) ) ) &&
                        ( MathFunctions.roundHalfUp( 1.0E-5, 5 ) == 1.0E-5) &&
                        ( MathFunctions.roundHalfUp( 1.0E-5, 6 ) == 1.0E-5) &&
                        ( MathFunctions.roundHalfUp( 1.0E-5, 100 ) == 1.0E-5) &&
                        ( MathFunctions.roundHalfUp( 1.0E-5, 500 ) == 1.0E-5) &&
                        ( MathFunctions.roundHalfUp( 1.0E-5, 4 ) == 0.0) &&
                        ( MathFunctions.roundHalfUp( 1.0E-5, 3 ) == 0.0) &&
                        ( MathFunctions.roundHalfUp( 1.0E-5, 2 ) == 0.0) &&
                        ( MathFunctions.roundHalfUp( 1.0E-5, 1 ) == 0.0) &&
                        ( MathFunctions.roundHalfUp( 1.0E-5, 0 ) == 0.0) &&
                        ( MathFunctions.roundHalfUp( -1.0E-5, 5 ) == -1.0E-5) &&
                        ( MathFunctions.roundHalfUp( -1.0E-5, 6 ) == -1.0E-5) &&
                        ( MathFunctions.roundHalfUp( -1.0E-5, 100 ) == -1.0E-5) &&
                        ( MathFunctions.roundHalfUp( -1.0E-5, 500 ) == -1.0E-5) &&
                        ( MathFunctions.roundHalfUp( -1.0E-5, 4 ) == -0.0) &&
                        ( MathFunctions.roundHalfUp( -1.0E-5, 3 ) == -0.0) &&
                        ( MathFunctions.roundHalfUp( -1.0E-5, 2 ) == -0.0) &&
                        ( MathFunctions.roundHalfUp( -1.0E-5, 1 ) == -0.0) &&
                        ( MathFunctions.roundHalfUp( -1.0E-5, 0 ) == -0.0) &&
                        ( MathFunctions.roundHalfUp( 10.000000000123, 14 ) == 10.000000000123) &&
                        ( MathFunctions.roundHalfUp( 10.000000000123, 13 ) == 10.000000000123) &&
                        ( MathFunctions.roundHalfUp( 10.000000000123, 12 ) == 10.000000000123) &&
                        ( MathFunctions.roundHalfUp( 10.000000000123, 11 ) == 10.00000000012) &&
                        ( MathFunctions.roundHalfUp( 10.000000000123, 10 ) == 10.0000000001) &&
                        ( MathFunctions.roundHalfUp( 10.000000000123, 9 ) == 10.0) &&
                        ( MathFunctions.roundHalfUp( 10.000000000123, 3 ) == 10.0) &&
                        ( MathFunctions.roundHalfUp( 10.000000000123, 0 ) == 10.0) &&
                        ( MathFunctions.roundHalfUp( -10.000000000123, 14 ) == -10.000000000123) &&
                        ( MathFunctions.roundHalfUp( -10.000000000123, 13 ) == -10.000000000123) &&
                        ( MathFunctions.roundHalfUp( -10.000000000123, 12 ) == -10.000000000123) &&
                        ( MathFunctions.roundHalfUp( -10.000000000123, 11 ) == -10.00000000012) &&
                        ( MathFunctions.roundHalfUp( -10.000000000123, 10 ) == -10.0000000001) &&
                        ( MathFunctions.roundHalfUp( -10.000000000123, 9 ) == -10.0) &&
                        ( MathFunctions.roundHalfUp( -10.000000000123, 3 ) == -10.0) &&
                        ( MathFunctions.roundHalfUp( -10.000000000123, 0 ) == -10.0) &&
                        ( MathFunctions.roundHalfUp( 100.444444444445, 200 ) == 100.444444444445) &&
                        ( MathFunctions.roundHalfUp( 100.444444444445, 14 ) == 100.444444444445) &&
                        ( MathFunctions.roundHalfUp( 100.444444444445, 13 ) == 100.444444444445) &&
                        ( MathFunctions.roundHalfUp( 100.444444444445, 12 ) == 100.444444444445) &&
                        ( MathFunctions.roundHalfUp( 100.444444444445, 11 ) == 100.44444444445) &&
                        ( MathFunctions.roundHalfUp( 100.444444444445, 10 ) == 100.4444444444) &&
                        ( MathFunctions.roundHalfUp( 100.444444444445, 9 ) == 100.444444444) &&
                        ( MathFunctions.roundHalfUp( 100.444444444445, 8 ) == 100.44444444) &&
                        ( MathFunctions.roundHalfUp( 100.444444444445, 7 ) == 100.4444444) &&
                        ( MathFunctions.roundHalfUp( 100.444444444445, 6 ) == 100.444444) &&
                        ( MathFunctions.roundHalfUp( 100.444444444445, 5 ) == 100.44444) &&
                        ( MathFunctions.roundHalfUp( 100.444444444445, 4 ) == 100.4444) &&
                        ( MathFunctions.roundHalfUp( 100.444444444445, 3 ) == 100.444) &&
                        ( MathFunctions.roundHalfUp( 100.444444444445, 2 ) == 100.44) &&
                        ( MathFunctions.roundHalfUp( 100.444444444445, 1 ) == 100.4) &&
                        ( MathFunctions.roundHalfUp( 100.444444444445, 0 ) == 100.0) &&
                        ( MathFunctions.roundHalfUp( -100.444444444445, 200 ) == -100.444444444445) &&
                        ( MathFunctions.roundHalfUp( -100.444444444445, 14 ) == -100.444444444445) &&
                        ( MathFunctions.roundHalfUp( -100.444444444445, 13 ) == -100.444444444445) &&
                        ( MathFunctions.roundHalfUp( -100.444444444445, 12 ) == -100.444444444445) &&
                        ( MathFunctions.roundHalfUp( -100.444444444445, 11 ) == -100.44444444445) &&
                        ( MathFunctions.roundHalfUp( -100.444444444445, 10 ) == -100.4444444444) &&
                        ( MathFunctions.roundHalfUp( -100.444444444445, 9 ) == -100.444444444) &&
                        ( MathFunctions.roundHalfUp( -100.444444444445, 8 ) == -100.44444444) &&
                        ( MathFunctions.roundHalfUp( -100.444444444445, 7 ) == -100.4444444) &&
                        ( MathFunctions.roundHalfUp( -100.444444444445, 6 ) == -100.444444) &&
                        ( MathFunctions.roundHalfUp( -100.444444444445, 5 ) == -100.44444) &&
                        ( MathFunctions.roundHalfUp( -100.444444444445, 4 ) == -100.4444) &&
                        ( MathFunctions.roundHalfUp( -100.444444444445, 3 ) == -100.444) &&
                        ( MathFunctions.roundHalfUp( -100.444444444445, 2 ) == -100.44) &&
                        ( MathFunctions.roundHalfUp( -100.444444444445, 1 ) == -100.4) &&
                        ( MathFunctions.roundHalfUp( -100.444444444445, 0 ) == -100.0) &&
                        ( MathFunctions.roundHalfUp( 1.2345678907654321E9, 100 ) == 1.2345678907654321E9) &&
                        ( MathFunctions.roundHalfUp( 1.2345678907654321E9, 8 ) == 1.2345678907654321E9) &&
                        ( MathFunctions.roundHalfUp( 1.2345678907654321E9, 7 ) == 1.2345678907654321E9) &&
                        ( MathFunctions.roundHalfUp( 1.2345678907654321E9, 6 ) == 1.234567890765432E9) &&
                        ( MathFunctions.roundHalfUp( 1.2345678907654321E9, 5 ) == 1.23456789076543E9) &&
                        ( MathFunctions.roundHalfUp( 1.2345678907654321E9, 4 ) == 1.2345678907654E9) &&
                        ( MathFunctions.roundHalfUp( 1.2345678907654321E9, 3 ) == 1.234567890765E9) &&
                        ( MathFunctions.roundHalfUp( 1.2345678907654321E9, 2 ) == 1.23456789077E9) &&
                        ( MathFunctions.roundHalfUp( 1.2345678907654321E9, 1 ) == 1.2345678908E9) &&
                        ( MathFunctions.roundHalfUp( 1.2345678907654321E9, 0 ) == 1.234567891E9) &&
                        ( MathFunctions.roundHalfUp( -1.2345678907654321E9, 100 ) == -1.2345678907654321E9) &&
                        ( MathFunctions.roundHalfUp( -1.2345678907654321E9, 8 ) == -1.2345678907654321E9) &&
                        ( MathFunctions.roundHalfUp( -1.2345678907654321E9, 7 ) == -1.2345678907654321E9) &&
                        ( MathFunctions.roundHalfUp( -1.2345678907654321E9, 6 ) == -1.234567890765432E9) &&
                        ( MathFunctions.roundHalfUp( -1.2345678907654321E9, 5 ) == -1.23456789076543E9) &&
                        ( MathFunctions.roundHalfUp( -1.2345678907654321E9, 4 ) == -1.2345678907654E9) &&
                        ( MathFunctions.roundHalfUp( -1.2345678907654321E9, 3 ) == -1.234567890765E9) &&
                        ( MathFunctions.roundHalfUp( -1.2345678907654321E9, 2 ) == -1.23456789077E9) &&
                        ( MathFunctions.roundHalfUp( -1.2345678907654321E9, 1 ) == -1.2345678908E9) &&
                        ( MathFunctions.roundHalfUp( -1.2345678907654321E9, 0 ) == -1.234567891E9) &&
                        ( MathFunctions.roundHalfUp( 5.9999999999, 11 ) == 5.9999999999) &&
                        ( MathFunctions.roundHalfUp( 5.9999999999, 10 ) == 5.9999999999) &&
                        ( MathFunctions.roundHalfUp( 5.9999999999, 9 ) == 6.0) &&
                        ( MathFunctions.roundHalfUp( 5.9999999999, 3 ) == 6.0) &&
                        ( MathFunctions.roundHalfUp( 5.9999999999, 0 ) == 6.0) &&
                        ( MathFunctions.roundHalfUp( -5.9999999999, 11 ) == -5.9999999999) &&
                        ( MathFunctions.roundHalfUp( -5.9999999999, 10 ) == -5.9999999999) &&
                        ( MathFunctions.roundHalfUp( -5.9999999999, 9 ) == -6.0) &&
                        ( MathFunctions.roundHalfUp( -5.9999999999, 3 ) == -6.0) &&
                        ( MathFunctions.roundHalfUp( -5.9999999999, 0 ) == -6.0) &&
                        ( MathFunctions.roundHalfUp( 1.2300000000000001E305, 307 ) == 1.2300000000000001E305) &&
                        ( MathFunctions.roundHalfUp( 1.2300000000000001E305, 10 ) == 1.2300000000000001E305) &&
                        ( MathFunctions.roundHalfUp( 1.2300000000000001E305, 1 ) == 1.2300000000000001E305) &&
                        ( MathFunctions.roundHalfUp( 1.2300000000000001E305, 0 ) == 1.2300000000000001E305) &&
                        ( MathFunctions.roundHalfUp( -1.2300000000000001E305, 307 ) == -1.2300000000000001E305) &&
                        ( MathFunctions.roundHalfUp( -1.2300000000000001E305, 10 ) == -1.2300000000000001E305) &&
                        ( MathFunctions.roundHalfUp( -1.2300000000000001E305, 1 ) == -1.2300000000000001E305) &&
                        ( MathFunctions.roundHalfUp( -1.2300000000000001E305, 0 ) == -1.2300000000000001E305) &&
                        ( Double.isNaN( MathFunctions.roundHalfUp( Double.NaN, 0 ) ) ) &&
                        ( MathFunctions.roundHalfUp( Double.POSITIVE_INFINITY, 100 ) == Double.POSITIVE_INFINITY ) &&
                        ( MathFunctions.roundHalfUp( Double.NEGATIVE_INFINITY, 100 ) == Double.NEGATIVE_INFINITY )
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0055() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "To Mixed fraction";
        TestCommonTools.consolePrintTestApiStart(55, testDescr);
        if (
                (NumberTheory.toMixedFractionString(0.0).equals("0")) &&
                        (NumberTheory.toMixedFractionString(1.0).equals("1")) &&
                        (NumberTheory.toMixedFractionString(2.0).equals("2")) &&
                        (NumberTheory.toMixedFractionString(1234567890.0).equals("1234567890")) &&
                        (NumberTheory.toMixedFractionString(-1.0).equals("-1")) &&
                        (NumberTheory.toMixedFractionString(-2.0).equals("-2")) &&
                        (NumberTheory.toMixedFractionString(-1234567890.0).equals("-1234567890")) &&
                        (NumberTheory.toMixedFractionString(1.0/2.0).equals("1/2")) &&
                        (NumberTheory.toMixedFractionString(-1.0/2.0).equals("-1/2")) &&
                        (NumberTheory.toMixedFractionString(2.0/3.0).equals("2/3")) &&
                        (NumberTheory.toMixedFractionString(-2.0/3.0).equals("-2/3")) &&
                        (NumberTheory.toMixedFractionString(263.0/326.0).equals("263/326")) &&
                        (NumberTheory.toMixedFractionString(-263.0/326.0).equals("-263/326")) &&
                        (NumberTheory.toMixedFractionString(2.0+5.0/6.0).equals("2+5/6")) &&
                        (NumberTheory.toMixedFractionString(-2.0-5.0/6.0).equals("-2-5/6")) &&
                        (NumberTheory.toMixedFractionString(2+263.0/326.0).equals("2+263/326")) &&
                        (NumberTheory.toMixedFractionString(-2-263.0/326.0).equals("-2-263/326")) &&
                        (NumberTheory.toMixedFractionString(20+263.0/326.0).equals("20+263/326")) &&
                        (NumberTheory.toMixedFractionString(-20-263.0/326.0).equals("-20-263/326")) &&
                        (NumberTheory.toMixedFractionString(200+263.0/326.0).equals("200+263/326")) &&
                        (NumberTheory.toMixedFractionString(-200-263.0/326.0).equals("-200-263/326")) &&
                        (NumberTheory.toMixedFractionString(2000+263.0/326.0).equals("2000+263/326")) &&
                        (NumberTheory.toMixedFractionString(-2000-263.0/326.0).equals("-2000-263/326")) &&
                        (NumberTheory.toMixedFractionString(20000+263.0/326.0).equals("20000+263/326")) &&
                        (NumberTheory.toMixedFractionString(-20000-263.0/326.0).equals("-20000-263/326")) &&
                        (NumberTheory.toMixedFractionString(200000+263.0/326.0).equals("200000+263/326")) &&
                        (NumberTheory.toMixedFractionString(-200000-263.0/326.0).equals("-200000-263/326")) &&
                        (NumberTheory.toMixedFractionString(2000000+263.0/326.0).equals("2000000+263/326")) &&
                        (NumberTheory.toMixedFractionString(-2000000-263.0/326.0).equals("-2000000-263/326")) &&
                        (NumberTheory.toMixedFractionString(20000000+263.0/326.0).equals("20000000+263/326")) &&
                        (NumberTheory.toMixedFractionString(-20000000-263.0/326.0).equals("-20000000-263/326")) &&
                        (NumberTheory.toMixedFractionString(200000000+263.0/326.0).equals("200000000+263/326")) &&
                        (NumberTheory.toMixedFractionString(-200000000-263.0/326.0).equals("-200000000-263/326")) &&
                        (NumberTheory.toMixedFractionString(2000000000+263.0/326.0).equals("2000000000+263/326")) &&
                        (NumberTheory.toMixedFractionString(-2000000000-263.0/326.0).equals("-2000000000-263/326")) &&
                        (NumberTheory.toMixedFractionString(20000000000.0+263.0/326.0).equals("20000000000+263/326")) &&
                        (NumberTheory.toMixedFractionString(-20000000000.0-263.0/326.0).equals("-20000000000-263/326"))
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0056() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "To fraction";
        TestCommonTools.consolePrintTestApiStart(56, testDescr);
        if (
                (NumberTheory.toFractionString(0.0).equals("0")) &&
                        (NumberTheory.toFractionString(1.0).equals("1")) &&
                        (NumberTheory.toFractionString(2.0).equals("2")) &&
                        (NumberTheory.toFractionString(1234567890.0).equals("1234567890")) &&
                        (NumberTheory.toFractionString(-1.0).equals("-1")) &&
                        (NumberTheory.toFractionString(-2.0).equals("-2")) &&
                        (NumberTheory.toFractionString(-1234567890.0).equals("-1234567890")) &&
                        (NumberTheory.toFractionString(1.0/2.0).equals("1/2")) &&
                        (NumberTheory.toFractionString(-1.0/2.0).equals("-1/2")) &&
                        (NumberTheory.toFractionString(2.0/3.0).equals("2/3")) &&
                        (NumberTheory.toFractionString(-2.0/3.0).equals("-2/3")) &&
                        (NumberTheory.toFractionString(263.0/326.0).equals("263/326")) &&
                        (NumberTheory.toFractionString(-263.0/326.0).equals("-263/326")) &&
                        (NumberTheory.toFractionString(17.0/6.0).equals("17/6")) &&
                        (NumberTheory.toFractionString(-17.0/6.0).equals("-17/6")) &&
                        (NumberTheory.toFractionString(915.0/326.0).equals("915/326")) &&
                        (NumberTheory.toFractionString(-915.0/326.0).equals("-915/326")) &&
                        (NumberTheory.toFractionString(6783.0/326.0).equals("6783/326")) &&
                        (NumberTheory.toFractionString(-6783.0/326.0).equals("-6783/326")) &&
                        (NumberTheory.toFractionString(65463.0/326.0).equals("65463/326")) &&
                        (NumberTheory.toFractionString(-65463.0/326.0).equals("-65463/326")) &&
                        (NumberTheory.toFractionString(652263.0/326.0).equals("652263/326")) &&
                        (NumberTheory.toFractionString(-652263.0/326.0).equals("-652263/326")) &&
                        (NumberTheory.toFractionString(6520263.0/326.0).equals("6520263/326")) &&
                        (NumberTheory.toFractionString(-6520263.0/326.0).equals("-6520263/326")) &&
                        (NumberTheory.toFractionString(65200263.0/326.0).equals("65200263/326")) &&
                        (NumberTheory.toFractionString(-65200263.0/326.0).equals("-65200263/326")) &&
                        (NumberTheory.toFractionString(652000263.0/326.0).equals("652000263/326")) &&
                        (NumberTheory.toFractionString(-652000263.0/326.0).equals("-652000263/326")) &&
                        (NumberTheory.toFractionString(6520000263.0/326.0).equals("6520000263/326")) &&
                        (NumberTheory.toFractionString(-6520000263.0/326.0).equals("-6520000263/326")) &&
                        (NumberTheory.toFractionString(65200000263.0/326.0).equals("65200000263/326")) &&
                        (NumberTheory.toFractionString(-65200000263.0/326.0).equals("-65200000263/326")) &&
                        (NumberTheory.toFractionString(652000000263.0/326.0).equals("652000000263/326")) &&
                        (NumberTheory.toFractionString(-652000000263.0/326.0).equals("-652000000263/326")) &&
                        (NumberTheory.toFractionString(6520000000263.0/326.0).equals("6520000000263/326")) &&
                        (NumberTheory.toFractionString(-6520000000263.0/326.0).equals("-6520000000263/326"))
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0057() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Variadic user function";
        TestCommonTools.consolePrintTestApiStart(57, testDescr);
        Function f = new Function("f(...) = sum( i, 1, [npar], par(i) )");
        if (
                (f.calculate(1) == 1) &&
                        (f.calculate(1,2) == 3) &&
                        (f.calculate(1,2,3) == 6) &&
                        (f.calculate(1,2,3,4) == 10) &&
                        (f.calculate(1,2,3,4,5) == 15)
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0058() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Variadic user function with extension";
        TestCommonTools.consolePrintTestApiStart(58, testDescr);
        FunExtVar gx = new FunExtVar();
        Function g = new Function("g", gx);
        if (
                (g.calculate(1) == 1) &&
                        (g.calculate(1,2) == 3) &&
                        (g.calculate(1,2,3) == 6) &&
                        (g.calculate(1,2,3,4) == 10) &&
                        (g.calculate(1,2,3,4,5) == 15)
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0059() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Almost int rounding disable / enable";
        TestCommonTools.consolePrintTestApiStart(59, testDescr);
        boolean u1 = mXparser.checkIfAlmostIntRounding();
        mXparser.disableAlmostIntRounding();
        boolean u2 = mXparser.checkIfAlmostIntRounding();
        mXparser.enableAlmostIntRounding();
        boolean u3 = mXparser.checkIfAlmostIntRounding();
        if ( (u1 == true) && (u2 == false) && (u3 == true))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0060() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringIndexOutOfBoundsException asking for tokens of empty expression #135";
        TestCommonTools.consolePrintTestApiStart(60, testDescr);
        Expression e = new Expression("");
        List<Token> tokens = e.getCopyOfInitialTokens();
        if (tokens.size() == 0)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0061() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument check syntax #145";
        TestCommonTools.consolePrintTestApiStart(61, testDescr);
        Argument x = new Argument("AAAAA", 730000000);
        if (x.checkSyntax() == Argument.NO_SYNTAX_ERRORS)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0062() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument check syntax #145";
        TestCommonTools.consolePrintTestApiStart(62, testDescr);
        Argument x = new Argument("AAAAA = 730000000");
        if (x.checkSyntax() == Argument.NO_SYNTAX_ERRORS)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0063() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument check syntax #145";
        TestCommonTools.consolePrintTestApiStart(63, testDescr);
        Argument x = new Argument("AAAAA = y*730000000");
        if (x.checkSyntax() == Argument.SYNTAX_ERROR_OR_STATUS_UNKNOWN)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0064() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument check syntax #145";
        TestCommonTools.consolePrintTestApiStart(64, testDescr);
        Argument y = new Argument("y", 2);
        Argument x = new Argument("AAAAA = y*730000000", y);
        if (x.checkSyntax() == Argument.NO_SYNTAX_ERRORS)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0065() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument check syntax #145";
        TestCommonTools.consolePrintTestApiStart(65, testDescr);
        Expression e = new Expression("f(2)-2 * [ww]+a+[qq1]");
        String[] units = e.getMissingUserDefinedUnits();
        String[] args = e.getMissingUserDefinedArguments();
        String[] fun = e.getMissingUserDefinedFunctions();
        if (units.length == 2 && args.length == 1 && fun.length == 1)
            if (units[0].equals("[ww]") && units[1].equals("[qq1]"))
                if (args[0].equals("a") && fun[0].equals("f"))
                    testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0066() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Trigonometric functions special values - compared to Math";
        TestCommonTools.consolePrintTestApiStart(66, testDescr);
        testResult = true;
        for (SpecialValueTrigonometric sv : SpecialValueTrigonometric.valuesListTrig) {
            if (Math.abs(sv.sin - Math.sin(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
            if (Math.abs(sv.cos - Math.cos(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
            if (!Double.isNaN(sv.tan))
                if (Math.abs(sv.tan - Math.tan(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
            if (!Double.isNaN(sv.ctan))
                if (Math.abs(sv.ctan - 1.0/Math.tan(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
            if (!Double.isNaN(sv.sec))
                if (Math.abs(sv.sec - 1.0/Math.cos(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
            if (!Double.isNaN(sv.csc))
                if (Math.abs(sv.csc - 1.0/Math.sin(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0067() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Inverse trigonometric functions special values - compared to Math";
        TestCommonTools.consolePrintTestApiStart(67, testDescr);
        testResult = true;
        for (SpecialValue sv : SpecialValueTrigonometric.valuesListAsin) {
            if (!Double.isNaN(sv.fv))
                if (Math.abs(sv.fv - Math.asin(sv.x)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
        }
        for (SpecialValue sv : SpecialValueTrigonometric.valuesListAcos) {
            if (!Double.isNaN(sv.fv))
                if (Math.abs(sv.fv - Math.acos(sv.x)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
        }
        for (SpecialValue sv : SpecialValueTrigonometric.valuesListAtan) {
            if (!Double.isNaN(sv.fv))
                if (Math.abs(sv.fv - Math.atan(sv.x)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
        }
        for (SpecialValue sv : SpecialValueTrigonometric.valuesListActan) {
            if (!Double.isNaN(sv.fv)) {
                double actan = Double.NaN;
                if (sv.x > 0) actan = Math.atan(1.0/sv.x);
                else if (sv.x < 0) actan = Math.atan(1.0/sv.x) + MathConstants.PI;
                if (Math.abs(sv.fv - actan) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
            }
        }
        for (SpecialValue sv : SpecialValueTrigonometric.valuesListAsec) {
            if (!Double.isNaN(sv.fv)) {
                double asec = Math.acos(1.0/sv.x);
                if (Math.abs(sv.fv - asec) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
            }
        }
        for (SpecialValue sv : SpecialValueTrigonometric.valuesListAcsc) {
            if (!Double.isNaN(sv.fv)) {
                double acsc = Math.asin(1.0/sv.x);
                if (Math.abs(sv.fv - acsc) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
            }
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0068() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Trigonometric functions special values - compared to MathFunctions";
        TestCommonTools.consolePrintTestApiStart(68, testDescr);
        testResult = true;
        for (SpecialValueTrigonometric sv : SpecialValueTrigonometric.valuesListTrig) {
            if (Math.abs(sv.sin - MathFunctions.sin(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
            if (Math.abs(sv.cos - MathFunctions.cos(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
            if (!Double.isNaN(sv.tan))
                if (Math.abs(sv.tan - MathFunctions.tan(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
            if (!Double.isNaN(sv.ctan))
                if (Math.abs(sv.ctan - MathFunctions.ctan(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
            if (!Double.isNaN(sv.sec))
                if (Math.abs(sv.sec - MathFunctions.sec(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
            if (!Double.isNaN(sv.csc))
                if (Math.abs(sv.csc - MathFunctions.cosec(sv.xrad)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0069() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Inverse trigonometric functions special values - compared to MathFunctions";
        TestCommonTools.consolePrintTestApiStart(69, testDescr);
        testResult = true;
        for (SpecialValue sv : SpecialValueTrigonometric.valuesListAsin) {
            if (!Double.isNaN(sv.fv))
                if (Math.abs(sv.fv - MathFunctions.asin(sv.x)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
        }
        for (SpecialValue sv : SpecialValueTrigonometric.valuesListAcos) {
            if (!Double.isNaN(sv.fv))
                if (Math.abs(sv.fv - MathFunctions.acos(sv.x)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
        }
        for (SpecialValue sv : SpecialValueTrigonometric.valuesListAtan) {
            if (!Double.isNaN(sv.fv))
                if (Math.abs(sv.fv - MathFunctions.atan(sv.x)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
        }
        for (SpecialValue sv : SpecialValueTrigonometric.valuesListActan) {
            if (!Double.isNaN(sv.fv)) {
                double actan = Double.NaN;
                actan = MathFunctions.actan(sv.x);
                if (Math.abs(sv.fv - actan) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
            }
        }
        for (SpecialValue sv : SpecialValueTrigonometric.valuesListAsec) {
            if (!Double.isNaN(sv.fv)) {
                double asec = MathFunctions.asec(sv.x);
                if (Math.abs(sv.fv - asec) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
            }
        }
        for (SpecialValue sv : SpecialValueTrigonometric.valuesListAcsc) {
            if (!Double.isNaN(sv.fv)) {
                double acsc = MathFunctions.acosec(sv.x);
                if (Math.abs(sv.fv - acsc) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
            }
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0070() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Sine test";
        TestCommonTools.consolePrintTestApiStart(70, testDescr);
        testResult = true;
        for (double a = -6; a <= 6; a+=0.1) {
            if (Math.abs(Math.sin(a) - MathFunctions.sin(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0071() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Cosine test";
        TestCommonTools.consolePrintTestApiStart(71, testDescr);
        testResult = true;
        for (double a = -6; a <= 6; a+=0.1) {
            if (Math.abs(Math.cos(a) - MathFunctions.cos(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0072() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Tangent test";
        TestCommonTools.consolePrintTestApiStart(72, testDescr);
        testResult = true;
        for (double a = -6; a <= 6; a+=0.1) {
            if (Math.abs(Math.tan(a) - MathFunctions.tan(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0073() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Cotangent test";
        TestCommonTools.consolePrintTestApiStart(73, testDescr);
        testResult = true;
        for (double a = -6; a <= 6; a+=0.1) {
            if (Math.abs(1.0/Math.tan(a) - MathFunctions.ctan(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0074() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Secant test";
        TestCommonTools.consolePrintTestApiStart(74, testDescr);
        testResult = true;
        for (double a = -6; a <= 6; a+=0.1) {
            if (Math.abs(1.0/Math.cos(a) - MathFunctions.sec(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0075() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Cosecant test";
        TestCommonTools.consolePrintTestApiStart(75, testDescr);
        testResult = true;
        for (double a = -6; a <= 6; a+=0.1) {
            if (Math.abs(1.0/Math.sin(a) - MathFunctions.cosec(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0076() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Inverse sine test";
        TestCommonTools.consolePrintTestApiStart(76, testDescr);
        testResult = true;
        for (double a = -0.9; a <= 0.9; a+=0.1) {
            if (Math.abs(Math.asin(a) - MathFunctions.asin(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0077() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Inverse cosine test";
        TestCommonTools.consolePrintTestApiStart(77, testDescr);
        testResult = true;
        for (double a = -0.9; a <= 0.9; a+=0.1) {
            if (Math.abs(Math.acos(a) - MathFunctions.acos(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0078() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Inverse tangent test";
        TestCommonTools.consolePrintTestApiStart(78, testDescr);
        testResult = true;
        for (double a = -5; a <= 5; a+=0.1) {
            if (Math.abs(Math.atan(a) - MathFunctions.atan(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0079() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Inverse ctangent test";
        TestCommonTools.consolePrintTestApiStart(79, testDescr);
        testResult = true;
        for (double a = -5; a <= 5; a+=0.1) {
            double atan = Double.NaN;
            if (a > 0) atan = Math.atan(1/a);
            else if (a < 0) atan = Math.atan(1/a) + MathConstants.PI;
            if (Math.abs(atan - MathFunctions.actan(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0080() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Inverse secant test";
        TestCommonTools.consolePrintTestApiStart(80, testDescr);
        testResult = true;
        for (double a = -5.05; a <= 5.05; a+=0.1) {
            if (Math.abs(Math.acos(1/a) - MathFunctions.asec(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0081() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Inverse cosecant test";
        TestCommonTools.consolePrintTestApiStart(81, testDescr);
        testResult = true;
        for (double a = -5.05; a <= 5.05; a+=0.1) {
            if (Math.abs(Math.asin(1/a) - MathFunctions.acosec(a)) > BinaryRelations.DEFAULT_COMPARISON_EPSILON) testResult = false;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0082() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument extension test";
        TestCommonTools.consolePrintTestApiStart(82, testDescr);
        testResult = true;
        Argument pim = new Argument("pim", new PiMultArgExt());
        if (pim.getArgumentBodyType() != Argument.BODY_EXTENDED) testResult = false;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0083() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument extension test";
        TestCommonTools.consolePrintTestApiStart(83, testDescr);
        testResult = true;
        Argument pim = new Argument("pim", new PiMultArgExt());
        if (pim.getArgumentBodyType() != Argument.BODY_EXTENDED) testResult = false;
        pim.setArgumentValue(3.0);
        if (pim.getArgumentBodyType() != Argument.BODY_RUNTIME) testResult = false;
        if (pim.getArgumentValue() != 3.0) testResult = false;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0084() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument extension test";
        TestCommonTools.consolePrintTestApiStart(84, testDescr);
        testResult = true;
        Argument pim = new Argument("pim", new PiMultArgExt());
        if (pim.getArgumentBodyType() != Argument.BODY_EXTENDED) testResult = false;
        pim.setArgumentExpressionString("2+3");
        if (pim.getArgumentBodyType() != Argument.BODY_RUNTIME) testResult = false;
        if (pim.getArgumentValue() != 5.0) testResult = false;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0085() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(85, testDescr);
        testResult = true;
        Expression e = new Expression("2.1e2(.3+0.4).01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi");
        if (!e.getCanonicalExpressionString().equals("2.1e2*(.3+0.4)*.01*(3-2)*(3^2)*2*cos(2.1*pi)*2*sin(1.9*pi)*0.1*pi")) testResult = false;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0086() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(86, testDescr);
        testResult = true;
        Expression e = new Expression("2.1a2.1e2(.3+0.4).01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi\n");
        if (!e.getCanonicalExpressionString().equals("2.1*a*2.1e2*(.3+0.4)*.01*(3-2)*(3^2)*2*cos(2.1*pi)*2*sin(1.9*pi)*0.1*pi")) testResult = false;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0087() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(87, testDescr);
        testResult = testCanonicalString("2x","2*x");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0088() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(88, testDescr);
        testResult = testCanonicalString("2xy", "2*xy");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0089() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(89, testDescr);
        testResult = testCanonicalString("2xy", "2*x*y","x");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0090() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(90, testDescr);
        testResult = testCanonicalString("2xyzsin(x)cos(x)2(3+4)6", "2*x*yz*sin(x)*cos(x)*2*(3+4)*6", "x");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0091() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(91, testDescr);
        testResult = testCanonicalString("2xyz2","2*x*y*z2", "x", "y");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0092() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(92, testDescr);
        testResult = testCanonicalString("2xyz2","2*x*y*z2","x", "y", "z");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0093() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(93, testDescr);
        testResult = testCanonicalString("2xyz2.1", "2*x*y*z*2.1", "x", "y");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0094() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(94, testDescr);
        testResult = testCanonicalString("2xyz2.1e", "2*x*y*z*2.1*e","x", "y");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0095() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(95, testDescr);
        testResult = testCanonicalString("2xyz2.1e3", "2*x*y*z*2.1e3","x", "y");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0096() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(96, testDescr);
        testResult = testCanonicalString("2xyzh.1234", "2*x*y*z*h.1234","x", "y");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0097() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(97, testDescr);
        testResult = testCanonicalString("2.1xyzh.1234", "2.1*x*y*z*h.1234","x", "y");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0098() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(98, testDescr);
        testResult = testCanonicalString("-2.1xyzh.1234", "-2.1*x*y*z*h.1234","x", "y");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0099() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(99, testDescr);
        testResult = testCanonicalString("1_2_3-2.1xyzh.1234", "1_2_3-2.1*x*y*z*h.1234","x", "y");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0100() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(100, testDescr);
        testResult = testCanonicalString("1_2_3xyzh.1234", "1_2_3*x*y*z*h.1234","x", "y");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0101() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(101, testDescr);
        testResult = testCanonicalString("2_3xyzh.1234", "2_3*x*y*z*h.1234","x", "y");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0102() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(102, testDescr);
        testResult = testCanonicalString("b4.0123xyzh.1234", "b4.0123*x*y*z*h.1234","x", "y");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0103() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(103, testDescr);
        testResult = testCanonicalString("2.1apipi[h-]2.1e2pi(.3+0.4)[h-]pi.01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi", "2.1*a*pi*pi*[h-]*2.1e2*pi*(.3+0.4)*[h-]*pi*.01*(3-2)*(3^2)*2*cos(2.1*pi)*2*sin(1.9*pi)*0.1*pi");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0104() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(104, testDescr);
        testResult = testCanonicalString("xy1_2_3zh.1234", "x*y*1_2_3*z*h.1234","x", "y");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0105() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(105, testDescr);
        testResult = testCanonicalString("xyh.1234z1_2_3", "x*y*h.1234*z*1_2_3","x", "y");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0106() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(106, testDescr);
        testResult = testCanonicalString("xyh.1234z1_2_3", "xy*h.1234*z*1_2_3");

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0107() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(107, testDescr);
        testResult = testCanonicalString("2xx","2*xx");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0108() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(108, testDescr);
        testResult = testCanonicalString("2xxyy", "2*xxyy");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0109() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(109, testDescr);
        testResult = testCanonicalString("2xxyy", "2*xx*yy","xx");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0110() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(110, testDescr);
        testResult = testCanonicalString("2xxyyzsin(xx)cos(xx)2(3+4)6", "2*xx*yyz*sin(xx)*cos(xx)*2*(3+4)*6", "xx");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0111() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(111, testDescr);
        testResult = testCanonicalString("2xxyyz2","2*xx*yy*z2", "xx", "yy");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0112() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(112, testDescr);
        testResult = testCanonicalString("2xxyyz2","2*xx*yy*z2","xx", "yy", "z");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0113() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(113, testDescr);
        testResult = testCanonicalString("2xxyyz2.1", "2*xx*yy*z*2.1", "xx", "yy");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0114() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(114, testDescr);
        testResult = testCanonicalString("2xxyyz2.1e", "2*xx*yy*z*2.1*e","xx", "yy");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0115() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(115, testDescr);
        testResult = testCanonicalString("2xxyyz2.1e3", "2*xx*yy*z*2.1e3","xx", "yy");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0116() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(116, testDescr);
        testResult = testCanonicalString("2xxyyzh.1234", "2*xx*yy*z*h.1234","xx", "yy");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0117() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(117, testDescr);
        testResult = testCanonicalString("2.1xxyyzh.1234", "2.1*xx*yy*z*h.1234","xx", "yy");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0118() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(118, testDescr);
        testResult = testCanonicalString("-2.1xxyyzh.1234", "-2.1*xx*yy*z*h.1234","xx", "yy");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0119() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(119, testDescr);
        testResult = testCanonicalString("1_2_3-2.1xxyyzh.1234", "1_2_3-2.1*xx*yy*z*h.1234","xx", "yy");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0120() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(120, testDescr);
        testResult = testCanonicalString("1_2_3xxyyzh.1234", "1_2_3*xx*yy*z*h.1234","xx", "yy");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0121() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(121, testDescr);
        testResult = testCanonicalString("2_3xxyyzh.1234", "2_3*xx*yy*z*h.1234","xx", "yy");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0122() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(122, testDescr);
        testResult = testCanonicalString("b4.0123xxyyzh.1234", "b4.0123*xx*yy*z*h.1234","xx", "yy");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0123() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(123, testDescr);
        testResult = testCanonicalString("2.1apipi[h-]2.1e2pi(.3+0.4)[h-]pi.01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi", "2.1*a*pi*pi*[h-]*2.1e2*pi*(.3+0.4)*[h-]*pi*.01*(3-2)*(3^2)*2*cos(2.1*pi)*2*sin(1.9*pi)*0.1*pi");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0124() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(124, testDescr);
        testResult = testCanonicalString("xxyy1_2_3zh.1234", "xx*yy*1_2_3*z*h.1234","xx", "yy");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0125() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(125, testDescr);
        testResult = testCanonicalString("xxyyh.1234z1_2_3", "xx*yy*h.1234*z*1_2_3","xx", "yy");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0126() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(126, testDescr);
        testResult = testCanonicalString("xxyyh.1234z1_2_3", "xxyy*h.1234*z*1_2_3");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0127() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(127, testDescr);
        testResult = testCanonicalString("2pi2√√pi", "2*pi2*√√pi");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0128() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(128, testDescr);
        testResult = testCanonicalString("2pi2√√2pi", "2*pi2*√√2*pi");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0129() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication on/off API - global and local";
        TestCommonTools.consolePrintTestApiStart(129, testDescr);
        mXparser.enableImpliedMultiplicationMode();
        Expression e1 = new Expression("2pi");
        boolean global1 = mXparser.checkIfImpliedMultiplicationMode();
        boolean local1 = e1.checkIfImpliedMultiplicationMode();
        mXparser.disableImpliedMultiplicationMode();
        Expression e2 = new Expression("2pi");
        boolean global2 = mXparser.checkIfImpliedMultiplicationMode();
        boolean local2 = e2.checkIfImpliedMultiplicationMode();
        if (global1 && local1 && !global2 && !local2)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0130() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Unicode Parser Keywords on/off API - global and local";
        TestCommonTools.consolePrintTestApiStart(130, testDescr);
        mXparser.enableUnicodeBuiltinKeyWordsMode();
        Expression e1 = new Expression("2pi");
        boolean global1 = mXparser.checkIfUnicodeBuiltinKeyWordsMode();
        boolean local1 = e1.checkIfUnicodeBuiltinKeyWordsMode();
        mXparser.disableUnicodeBuiltinKeyWordsMode();
        Expression e2 = new Expression("2pi");
        boolean global2 = mXparser.checkIfUnicodeBuiltinKeyWordsMode();
        boolean local2 = e2.checkIfUnicodeBuiltinKeyWordsMode();
        if (global1 && local1 && !global2 && !local2)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0131() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication on/off API - global - check syntax impact";
        TestCommonTools.consolePrintTestApiStart(131, testDescr);
        mXparser.enableImpliedMultiplicationMode();
        Expression e1 = new Expression("2pi");
        boolean syn1 = e1.checkSyntax();
        mXparser.disableImpliedMultiplicationMode();
        Expression e2 = new Expression("2pi");
        boolean syn2 = e2.checkSyntax();
        if (syn1 && !syn2)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0132() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication on/off API - local - check syntax impact";
        TestCommonTools.consolePrintTestApiStart(132, testDescr);
        Expression e = new Expression("2pi");
        e.enableImpliedMultiplicationMode();
        boolean syn1 = e.checkSyntax();
        e.disableImpliedMultiplicationMode();
        boolean syn2 = e.checkSyntax();
        if (syn1 && !syn2)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0133() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Unicode Parser Keywords on/off API - global - check syntax impact";
        TestCommonTools.consolePrintTestApiStart(133, testDescr);
        mXparser.enableUnicodeBuiltinKeyWordsMode();
        Expression e1 = new Expression("√π");
        boolean syn1 = e1.checkSyntax();
        mXparser.disableUnicodeBuiltinKeyWordsMode();
        Expression e2 = new Expression("√π");
        boolean syn2 = e2.checkSyntax();
        if (syn1 && !syn2)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0134() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Unicode Parser Keywords on/off API - local - check syntax impact";
        TestCommonTools.consolePrintTestApiStart(134, testDescr);
        Expression e = new Expression("√π");
        e.enableUnicodeBuiltinKeyWordsMode();
        boolean syn1 = e.checkSyntax();
        e.disableUnicodeBuiltinKeyWordsMode();
        boolean syn2 = e.checkSyntax();
        if (syn1 && !syn2)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0135() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Unicode Parser Keywords on/off API - global - syntax help";
        TestCommonTools.consolePrintTestApiStart(135, testDescr);
        mXparser.enableUnicodeBuiltinKeyWordsMode();
        int n1 = mXparser.getKeyWords().size();
        mXparser.disableUnicodeBuiltinKeyWordsMode();
        int n2 = mXparser.getKeyWords().size();
        if (n1 == n2 + 49)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0136() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Unicode Parser Keywords on/off API - local - syntax help";
        TestCommonTools.consolePrintTestApiStart(136, testDescr);
        Expression e = new Expression("2pi");
        e.enableUnicodeBuiltinKeyWordsMode();
        int n1 = e.getKeyWords().size();
        e.disableUnicodeBuiltinKeyWordsMode();
        int n2 = e.getKeyWords().size();
        if (n1 == n2 + 49)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0137() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Attempt to fix expression string on/off API - global and local";
        TestCommonTools.consolePrintTestApiStart(137, testDescr);
        mXparser.enableAttemptToFixExpStrMode();
        Expression e1 = new Expression("-+2++3--3+-4-+5-->6<--7<->8++");
        boolean global1 = mXparser.checkIfAttemptToFixExpStrMode();
        boolean local1 = e1.checkIfAttemptToFixExpStrMode();
        mXparser.disableAttemptToFixExpStrMode();
        Expression e2 = new Expression("-+2++3--3+-4-+5-->6<--7<->8++");
        boolean global2 = mXparser.checkIfAttemptToFixExpStrMode();
        boolean local2 = e2.checkIfAttemptToFixExpStrMode();
        if (global1 && local1 && !global2 && !local2)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0138() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Attempt to fix expression string on/off API - global - check syntax impact";
        TestCommonTools.consolePrintTestApiStart(138, testDescr);
        mXparser.enableAttemptToFixExpStrMode();
        Expression e1 = new Expression("-+2++3--3+-4-+5-->6<--7<->8++");
        boolean syn1 = e1.checkSyntax();
        mXparser.disableAttemptToFixExpStrMode();
        Expression e2 = new Expression("-+2++3--3+-4-+5-->6<--7<->8++");
        boolean syn2 = e2.checkSyntax();
        if (syn1 && !syn2)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0139() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Attempt to fix expression string on/off API - local - check syntax impact";
        TestCommonTools.consolePrintTestApiStart(139, testDescr);
        Expression e = new Expression("-+2++3--3+-4-+5-->6<--7<->8++");
        e.enableAttemptToFixExpStrMode();
        boolean syn1 = e.checkSyntax();
        e.disableAttemptToFixExpStrMode();
        boolean syn2 = e.checkSyntax();
        if (syn1 && !syn2)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0140() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(140, testDescr);
        testResult = testCanonicalString("2--3", "2+3");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0141() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(141, testDescr);
        testResult = testCanonicalString("2++3", "2+3");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0142() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(142, testDescr);
        testResult = testCanonicalString("2+-3", "2-3");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0143() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(143, testDescr);
        testResult = testCanonicalString("2-+3", "2-3");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0144() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(144, testDescr);
        testResult = testCanonicalString("2--3<--4", "2+3<--4");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0145() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(145, testDescr);
        testResult = testCanonicalString("2--3-->4", "2+3-->4");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0146() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(146, testDescr);
        testResult = testCanonicalString("+2--3-->4-", "2+3-->4");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0147() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(147, testDescr);
        testResult = testCanonicalString("-2--3-->4+", "-2+3-->4");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    public static boolean testCanonicalString(String expStr, String expResStr, String... elements) {
        Expression e = new Expression(expStr);
        if (elements != null)
            if (elements.length > 0)
                for (String str : elements)
                    e.addArguments(new Argument(str, "0"));
        return expResStr.equals(e.getCanonicalExpressionString());
    }
}


