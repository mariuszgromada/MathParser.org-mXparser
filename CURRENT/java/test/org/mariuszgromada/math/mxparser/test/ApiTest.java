/*
 * @(#)ApiTest.java        6.2.0    2026-11-13
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
package org.mariuszgromada.math.mxparser.test;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;
import java.util.Map;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Set;
import java.util.Random;
import java.util.concurrent.Callable;
import java.util.concurrent.Executors;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Future;
import org.mariuszgromada.math.mxparser.*;
import org.mariuszgromada.math.mxparser.mathcollection.*;
import org.mariuszgromada.math.mxparser.parsertokens.*;

import java.io.File;
import java.nio.file.FileSystems;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;

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
 * @version        6.2.0
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
                && syn2 == Expression.SYNTAX_ERROR
                && syn3 == Expression.NO_SYNTAX_ERRORS
                && syn4 == Expression.NO_SYNTAX_ERRORS
                && syn5 == Expression.NO_SYNTAX_ERRORS
                && syn6 == Expression.SYNTAX_ERROR
                && syn7 == Expression.SYNTAX_ERROR
                && syn8 == Expression.SYNTAX_ERROR
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
                && syn2 == Expression.SYNTAX_ERROR
                && syn3 == Expression.NO_SYNTAX_ERRORS
                && syn4 == Expression.SYNTAX_ERROR
                && syn5 == Expression.NO_SYNTAX_ERRORS
                && syn6 == Expression.SYNTAX_ERROR
                && syn7 == Expression.NO_SYNTAX_ERRORS
                && syn8 == Expression.SYNTAX_ERROR
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
                && syn2 == Expression.SYNTAX_ERROR
                && syn3 == Expression.NO_SYNTAX_ERRORS
                && syn4 == Expression.SYNTAX_ERROR
                && syn5 == Expression.NO_SYNTAX_ERRORS
                && syn6 == Expression.SYNTAX_ERROR
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
                && syn2 == Expression.SYNTAX_ERROR
                && syn3 == Expression.NO_SYNTAX_ERRORS
                && syn4 == Expression.SYNTAX_ERROR
                && syn5 == Expression.SYNTAX_ERROR
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
                && syn2 == Expression.SYNTAX_ERROR
                && syn3 == Expression.NO_SYNTAX_ERRORS
                && syn4 == Expression.SYNTAX_ERROR
                && syn5 == Expression.NO_SYNTAX_ERRORS
                && syn6 == Expression.SYNTAX_ERROR
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
                && syn2 == Expression.SYNTAX_ERROR
                && syn3 == Expression.NO_SYNTAX_ERRORS
                && syn4 == Expression.SYNTAX_ERROR
                && syn5 == Expression.NO_SYNTAX_ERRORS
                && syn6 == Expression.SYNTAX_ERROR
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
                && syn2 == Expression.SYNTAX_ERROR
                && syn3 == Expression.NO_SYNTAX_ERRORS
                && syn4 == Expression.SYNTAX_ERROR
                && syn5 == Expression.NO_SYNTAX_ERRORS
                && syn6 == Expression.SYNTAX_ERROR
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
                (e.checkSyntax() == Expression.SYNTAX_ERROR) &&
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
                (e.checkSyntax() == Expression.SYNTAX_ERROR) &&
                        (e.checkLexSyntax() == Expression.SYNTAX_ERROR)
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
        if (	(Token.getTokenTypeDescription(BinaryRelation.TYPE_ID).equals(BinaryRelation.TYPE_DESC)) &&
                (Token.getTokenTypeDescription(BitwiseOperator.TYPE_ID).equals(BitwiseOperator.TYPE_DESC)) &&
                (Token.getTokenTypeDescription(BooleanOperator.TYPE_ID).equals(BooleanOperator.TYPE_DESC)) &&
                (Token.getTokenTypeDescription(CalculusOperator.TYPE_ID).equals(CalculusOperator.TYPE_DESC)) &&
                (Token.getTokenTypeDescription(ConstantValue.TYPE_ID).equals(ConstantValue.TYPE_DESC)) &&
                (Token.getTokenTypeDescription(Function1Arg.TYPE_ID).equals(Function1Arg.TYPE_DESC)) &&
                (Token.getTokenTypeDescription(Function2Arg.TYPE_ID).equals(Function2Arg.TYPE_DESC)) &&
                (Token.getTokenTypeDescription(Function3Arg.TYPE_ID).equals(Function3Arg.TYPE_DESC)) &&
                (Token.getTokenTypeDescription(FunctionVariadic.TYPE_ID).equals(FunctionVariadic.TYPE_DESC)) &&
                (Token.getTokenTypeDescription(Operator.TYPE_ID).equals(Operator.TYPE_DESC)) &&
                (Token.getTokenTypeDescription(ParserSymbol.TYPE_ID).equals(ParserSymbol.TYPE_DESC)) &&
                (Token.getTokenTypeDescription(RandomVariable.TYPE_ID).equals(RandomVariable.TYPE_DESC)) &&
                (Token.getTokenTypeDescription(Unit.TYPE_ID).equals(Unit.TYPE_DESC)) &&
                (Token.getTokenTypeDescription(Argument.TYPE_ID).equals(Argument.TYPE_DESC)) &&
                (Token.getTokenTypeDescription(Constant.TYPE_ID).equals(Constant.TYPE_DESC)) &&
                (Token.getTokenTypeDescription(RecursiveArgument.TYPE_ID_RECURSIVE).equals(RecursiveArgument.TYPE_DESC_RECURSIVE)) &&
                (Token.getTokenTypeDescription(Function.TYPE_ID).equals(Function.TYPE_DESC))
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
        if (x.checkSyntax() == Argument.SYNTAX_ERROR)
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
    @Test
    public void testApi0148() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = true;
        String testDescr = "Calc Steps Register - Expression 2*(3+4)+5";
        TestCommonTools.consolePrintTestApiStart(148, testDescr);
        Expression e = new Expression("2*(3+4)+5");
        CalcStepsRegister calcStepsRegister = new CalcStepsRegister();
        double result = e.calculate(calcStepsRegister);
        if (result != calcStepsRegister.result) testResult = false;
        if (!e.getExpressionString().equals(calcStepsRegister.expressionStringStart)) testResult = false;
        if (calcStepsRegister.argumentNameStart.length() > 0) testResult = false;
        if (calcStepsRegister.functionNameStart.length() > 0) testResult = false;
        if (calcStepsRegister.calcStepRecords.size() != 4)  testResult = false;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0149() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = true;
        String testDescr = "Calc Steps Register - Argument x = 2*(3+4)+5";
        TestCommonTools.consolePrintTestApiStart(149, testDescr);
        Argument x = new Argument("x", "2*(3+4)+5");
        CalcStepsRegister calcStepsRegister = new CalcStepsRegister();
        double result = x.getArgumentValue(calcStepsRegister);
        if (result != calcStepsRegister.result) testResult = false;
        if (!x.getArgumentName().equals(calcStepsRegister.argumentNameStart)) testResult = false;
        if (!x.getArgumentExpressionString().equals(calcStepsRegister.expressionStringStart)) testResult = false;
        if (calcStepsRegister.functionNameStart.length() > 0) testResult = false;
        if (calcStepsRegister.calcStepRecords.size() != 4)  testResult = false;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0150() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = true;
        String testDescr = "Calc Steps Register - Function f(x) = 2*(3+4)+5";
        TestCommonTools.consolePrintTestApiStart(150, testDescr);
        Function f = new Function("f(x) = 2*(3+4)+5");
        CalcStepsRegister calcStepsRegister = new CalcStepsRegister();
        double result = f.calculate(calcStepsRegister);
        if (!f.getFunctionName().equals(calcStepsRegister.functionNameStart)) testResult = false;
        if (!f.getFunctionExpressionString().trim().equals(calcStepsRegister.expressionStringStart)) testResult = false;
        if (calcStepsRegister.argumentNameStart.length() > 0) testResult = false;
        if (calcStepsRegister.calcStepRecords.size() != 4)  testResult = false;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0151() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = true;
        String testDescr = "Calc Steps Register - Expression f(x,y)+z+(x*y)/z";
        TestCommonTools.consolePrintTestApiStart(151, testDescr);
        CalcStepsRegister calcStepsRegister = new CalcStepsRegister();
        Argument x = new Argument("x", "2*rList(2,1,3,5,4)");
        Argument y = new Argument("y = 2*x", x);
        Argument z = new Argument("z = 3*y/x", x, y);
        Function f = new Function("f(a,b) = a*b");
        Expression e = new Expression("f(x,y)+z+(x*y)/z", x, y, z, f);
        double result = e.calculate(calcStepsRegister);
        if (result != calcStepsRegister.result) testResult = false;
        if (!e.getExpressionString().equals(calcStepsRegister.expressionStringStart)) testResult = false;
        if (calcStepsRegister.argumentNameStart.length() > 0) testResult = false;
        if (calcStepsRegister.functionNameStart.length() > 0) testResult = false;
        if (calcStepsRegister.calcStepRecords.size() != 60)  testResult = false;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0152() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(152, testDescr);
        testResult = testCanonicalString("sum(i, 1, 10, 2*xi)", "sum(i,1,10,2*x*i)");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0153() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(153, testDescr);
        testResult = testCanonicalString("sum(i, 1, 10, xi*2)", "sum(i,1,10,x*i*2)");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0154() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(154, testDescr);
        testResult = testCanonicalString("sum(i, 1, 10, 2*ix)", "sum(i,1,10,2*i*x)");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0155() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(155, testDescr);
        testResult = testCanonicalString("sum(i, 1, 10, ix*2)", "sum(i,1,10,i*x*2)");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0156() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(156, testDescr);
        testResult = testCanonicalString("sum(i, 1, 10, 2*xpi)", "sum(i,1,10,2*x*pi)");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0157() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(157, testDescr);
        testResult = testCanonicalString("sum(i, 1, 10, xpi*2)", "sum(i,1,10,x*pi*2)");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0158() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(158, testDescr);
        testResult = testCanonicalString("sum(i, 1, 10, 2*pix)", "sum(i,1,10,2*pi*x)");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0159() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(159, testDescr);
        testResult = testCanonicalString("sum(i, 1, 10, pix*2)", "sum(i,1,10,pi*x*2)");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0160() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(160, testDescr);
        testResult = testCanonicalString("300+Caster_Attack*3", "300+Cast*e*r_Attack*3");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0161() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(161, testDescr);
        testResult = testCanonicalString("300+Caster_Attack(2)*3", "300+Cast*e*r_Attack(2)*3");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0162() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(162, testDescr);
        testResult = testCanonicalString("300+Caster_AttackC(2)*3", "300+Cast*e*r_Attack*C(2)*3");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0163() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(163, testDescr);
        mXparser.disableImpliedMultiplicationMode();
        testResult = testCanonicalString("300+Caster_AttackC(2)*3", "300+Caster_AttackC(2)*3");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0164() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Serialization / Deserialization: Argument x Bytes";
        TestCommonTools.consolePrintTestApiStart(164, testDescr);
        Argument x = new Argument("x = 3");
        Argument y = new Argument("y = 2*x", x);
        SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
        byte[] data = SerializationUtils.serializeToBytes(y);
        mXparser.consolePrintln();
        mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
        Argument ys = SerializationUtils.deserializeFromBytes(data);
        mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
        SerializationUtils.disableBinarySerialization();
        if (ys != null)
            if (y.getArgumentName().equals(ys.getArgumentName()) && y.getArgumentValue() == ys.getArgumentValue())
                testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0165() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Serialization / Deserialization: Function x String";
        TestCommonTools.consolePrintTestApiStart(165, testDescr);
        Constant c = new Constant("c = 3");
        Function g = new Function("g(x) = 2*x + c", c);
        Function f = new Function("f(x,y) = g(x)*g(y)", g);
        SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
        String data = SerializationUtils.serializeToString(f);
        mXparser.consolePrintln();
        mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
        Function fs = SerializationUtils.deserializeFromString(data);
        mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
        SerializationUtils.disableBinarySerialization();
        if (fs != null)
            if (f.getFunctionName().equals(fs.getFunctionName()) && f.calculate(2,3) == fs.calculate(2, 3))
                testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0166() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Serialization / Deserialization: RecursiveArgument x Bytes";
        TestCommonTools.consolePrintTestApiStart(166, testDescr);
        RecursiveArgument fib = new RecursiveArgument("fib(n)= fib(n-1)+fib(n-2)");
        SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
        byte[] data = SerializationUtils.serializeToBytes(fib);
        mXparser.consolePrintln();
        mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
        RecursiveArgument fibs = SerializationUtils.deserializeFromBytes(data);
        mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
        SerializationUtils.disableBinarySerialization();
        fib.addBaseCase(0, 0);
        fib.addBaseCase(1, 1);
        if (fibs != null) {
            fibs.addBaseCase(0, 0);
            fibs.addBaseCase(1, 1);
            if (fib.getArgumentName().equals(fibs.getArgumentName()) && fib.getArgumentValue(10) == fibs.getArgumentValue(10))
                testResult = true;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0167() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Serialization / Deserialization: Extended Argument x String";
        TestCommonTools.consolePrintTestApiStart(167, testDescr);
        Argument x = new Argument("x", new PiMultArgExt());
        SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
        String s = SerializationUtils.serializeToString(x);
        mXparser.consolePrintln();
        mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
        Argument xs = SerializationUtils.deserializeFromString(s);
        mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
        SerializationUtils.disableBinarySerialization();
        if (xs != null) {
            if (x.getArgumentName().equals(xs.getArgumentName()) && x.getArgumentValue() == xs.getArgumentValue())
                testResult = true;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0168() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Serialization / Deserialization: Extended Function x Bytes";
        TestCommonTools.consolePrintTestApiStart(168, testDescr);
        Function f = new Function("f", new FunExt());
        SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
        byte[] data = SerializationUtils.serializeToBytes(f);
        mXparser.consolePrintln();
        mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
        Function fs = SerializationUtils.deserializeFromBytes(data);
        mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
        SerializationUtils.disableBinarySerialization();
        if (fs != null) {
            if (f.getFunctionName().equals(fs.getFunctionName()) && f.calculate(2, 3) == fs.calculate(2, 3))
                testResult = true;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0169() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Serialization / Deserialization: Extended Function Variadic x String";
        TestCommonTools.consolePrintTestApiStart(168, testDescr);
        Function f = new Function("f", new FunExtVar());
        SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
        String data = SerializationUtils.serializeToString(f);
        mXparser.consolePrintln();
        mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
        Function fs = SerializationUtils.deserializeFromString(data);
        mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
        SerializationUtils.disableBinarySerialization();
        if (fs != null) {
            if (f.getFunctionName().equals(fs.getFunctionName()) && f.calculate(2, 3, 4, 5) == fs.calculate(2, 3, 4, 5))
                testResult = true;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0170() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Serialization / Deserialization: Constant x Bytes";
        TestCommonTools.consolePrintTestApiStart(170, testDescr);
        Constant b = new Constant("b = 5");
        Constant a = new Constant("a = 2*b", b);
        SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
        byte[] data = SerializationUtils.serializeToBytes(a);
        mXparser.consolePrintln();
        mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
        Constant as = SerializationUtils.deserializeFromBytes(data);
        mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
        SerializationUtils.disableBinarySerialization();
        if (as != null) {
            if (a.getConstantName().equals(as.getConstantName()) && a.getConstantValue() == as.getConstantValue())
                testResult = true;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0171() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Serialization / Deserialization: Expression x Bytes";
        TestCommonTools.consolePrintTestApiStart(171, testDescr);
        Constant a = new Constant("a = 0.0001");
        Function s = new Function("s(x) = if( abs(x) < a, x, 2*s(x/2)*c(x/2) )", a);
        Function c = new Function("c(x) = if( abs(x) < a, 1, c(x/2)^2-s(x/2)^2 )", a);
        a = null;
        s.addDefinitions(c);
        c.addDefinitions(s);
        Expression e1 = new Expression("sin(5)-s(5)", s);
        Expression e2 = new Expression("cos(5)-c(5)", c);
        double v1 = e1.calculate();
        double v2 = e2.calculate();
        boolean syn1 = e1.getSyntaxStatus();
        boolean syn2 = e2.getSyntaxStatus();
        c = null;
        s = null;
        mXparser.consolePrintln();
        SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
        byte[] data1 = SerializationUtils.serializeToBytes(e1);
        mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
        byte[] data2 = SerializationUtils.serializeToBytes(e2);
        mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
        Expression es1 = SerializationUtils.deserializeFromBytes(data1);
        mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
        Expression es2 = SerializationUtils.deserializeFromBytes(data2);
        mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
        SerializationUtils.disableBinarySerialization();
        if (es1 != null && es2 != null) {
            boolean syns1 = es1.getSyntaxStatus();
            boolean syns2 = es2.getSyntaxStatus();
            double vs1 = es1.calculate();
            double vs2 = es2.calculate();
            if (syn1 == syns1 && syn2 == syns2)
                if (e1.getExpressionString().equals(es1.getExpressionString()) && e2.getExpressionString().equals(es2.getExpressionString()) && v1 == vs1 && v2 == vs2)
                    testResult = true;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0172() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Serialization / Deserialization: Expression x File";
        TestCommonTools.consolePrintTestApiStart(171, testDescr);
        Argument x = new Argument("x = 5");
        Function f = new Function("f(x,y) = x + 2*y");
        Expression e = new Expression("f(2,3)*x", f, x);
        double v = e.calculate();
        String tmpPath = System.getProperty("java.io.tmpdir");
        File tmpDir = new File(tmpPath);
        SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
        try {
            String filePath = tmpDir.getCanonicalPath() + FileSystems.getDefault().getSeparator() + "mxp_ser_test.ser";
            mXparser.consolePrintln();
            boolean serializationDone = SerializationUtils.serializeToFile(e, filePath);
            mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
            Expression es = SerializationUtils.deserializeFromFile(filePath);
            mXparser.consolePrintln(SerializationUtils.getLastOperationMessage());
            File toRemove = new File(filePath);
            boolean isDeleted = toRemove.delete();
            mXparser.consolePrintln("File: " + filePath + " is deleted = " + isDeleted);
            if (es != null) {
                double vs = es.calculate();
                if (e.getExpressionString().equals(es.getExpressionString()) && v == vs)
                    testResult = true;
            }
        } catch (Exception ex) {
            mXparser.consolePrintln(ex.getMessage());
            ex.printStackTrace();
        }
        SerializationUtils.disableBinarySerialization();
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0173() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Disabled serialization: serializeToBytes";
        TestCommonTools.consolePrintTestApiStart(173, testDescr);
        Argument x = new Argument("x = 5");
        SerializationUtils.disableBinarySerialization();
        byte[] data = SerializationUtils.serializeToBytes(x);
        if (data == null && !SerializationUtils.checkLastOperationWasSuccessful())
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0174() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Disabled serialization: serializeToString";
        TestCommonTools.consolePrintTestApiStart(174, testDescr);
        Argument x = new Argument("x = 5");
        SerializationUtils.disableBinarySerialization();
        String data = SerializationUtils.serializeToString(x);
        if (data == null && !SerializationUtils.checkLastOperationWasSuccessful())
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0175() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Disabled serialization: serializeToFile";
        TestCommonTools.consolePrintTestApiStart(175, testDescr);
        Argument x = new Argument("x = 5");
        SerializationUtils.disableBinarySerialization();
        String tmpPath = System.getProperty("java.io.tmpdir");
        File tmpDir = new File(tmpPath);
        try {
            String filePath = tmpDir.getCanonicalPath() + FileSystems.getDefault().getSeparator() + "mxp_ser_test.ser";
            mXparser.consolePrintln();
            boolean serializationDone = SerializationUtils.serializeToFile(x, filePath);
            if (!serializationDone && !SerializationUtils.checkLastOperationWasSuccessful())
                testResult = true;
        } catch (Exception ex) {
            mXparser.consolePrintln(ex.getMessage());
            ex.printStackTrace();
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0176() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Disabled serialization: deserializeFromBytes";
        TestCommonTools.consolePrintTestApiStart(176, testDescr);
        SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
        Argument x = new Argument("x = 5");
        byte[] data = SerializationUtils.serializeToBytes(x);
        SerializationUtils.disableBinarySerialization();
        Argument xs = SerializationUtils.deserializeFromBytes(data);
        if (data != null && xs == null && !SerializationUtils.checkLastOperationWasSuccessful())
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0177() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Disabled serialization: deserializeFromString";
        TestCommonTools.consolePrintTestApiStart(177, testDescr);
        SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
        Argument x = new Argument("x = 5");
        String data = SerializationUtils.serializeToString(x);
        SerializationUtils.disableBinarySerialization();
        Argument xs = SerializationUtils.deserializeFromString(data);
        if (data != null && xs == null && !SerializationUtils.checkLastOperationWasSuccessful())
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0178() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Disabled serialization: deserializeFromFile";
        TestCommonTools.consolePrintTestApiStart(178, testDescr);
        Argument x = new Argument("x = 5");
        String tmpPath = System.getProperty("java.io.tmpdir");
        File tmpDir = new File(tmpPath);
        try {
            String filePath = tmpDir.getCanonicalPath() + FileSystems.getDefault().getSeparator() + "mxp_ser_test.ser";
            mXparser.consolePrintln();
            SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
            boolean serializationDone = SerializationUtils.serializeToFile(x, filePath);
            SerializationUtils.disableBinarySerialization();
            Argument xs = SerializationUtils.deserializeFromFile(filePath);
            if (serializationDone && xs == null && !SerializationUtils.checkLastOperationWasSuccessful())
                testResult = true;
        } catch (Exception ex) {
            mXparser.consolePrintln(ex.getMessage());
            ex.printStackTrace();
        }
        SerializationUtils.disableBinarySerialization();
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0179() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = true;
        String testDescr = "Check all descriptions of keywords - lengths";
        TestCommonTools.consolePrintTestApiStart(179, testDescr);
        List<KeyWord> keywords = mXparser.getKeyWords();
        for (KeyWord kw : keywords)
            if (kw.description.length() <= 5) {
                testResult = false;
                break;
            }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0180() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = true;
        String testDescr = "Check all descriptions of keywords - type description";
        TestCommonTools.consolePrintTestApiStart(180, testDescr);
        List<KeyWord> keywords = mXparser.getKeyWords();
        for (KeyWord kw : keywords)
            if (!kw.description.toLowerCase().contains(Token.getTokenTypeDescription(kw.wordTypeId).toLowerCase())) {
                mXparser.consolePrintln(Token.getTokenTypeDescription(kw.wordTypeId));
                mXparser.consolePrintHelp(kw.description);
                testResult = false;
                break;
            }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0181() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Check all parser token types - descriptions";
        TestCommonTools.consolePrintTestApiStart(181, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        if (BinaryRelation.TYPE_DESC.equals(stringResources.BINARY_RELATION)
                && BitwiseOperator.TYPE_DESC.equals(stringResources.BITWISE_OPERATOR)
                && BooleanOperator.TYPE_DESC.equals(stringResources.BOOLEAN_OPERATOR)
                && CalculusOperator.TYPE_DESC.equals(stringResources.CALCULUS_OPERATOR)
                && ConstantValue.TYPE_DESC.equals(stringResources.CONSTANT_VALUE)
                && Function1Arg.TYPE_DESC.equals(stringResources.FUNCTION_1_ARG)
                && Function2Arg.TYPE_DESC.equals(stringResources.FUNCTION_2_ARG)
                && Function3Arg.TYPE_DESC.equals(stringResources.FUNCTION_3_ARG)
                && FunctionVariadic.TYPE_DESC.equals(stringResources.FUNCTION_VARIADIC)
                && Operator.TYPE_DESC.equals(stringResources.OPERATOR)
                && ParserSymbol.TYPE_DESC.equals(stringResources.PARSER_SYMBOL)
                && RandomVariable.TYPE_DESC.equals(stringResources.RANDOM_VARIABLE)
                && Unit.TYPE_DESC.equals(stringResources.UNIT)
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0182() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Check all user defined token types - descriptions";
        TestCommonTools.consolePrintTestApiStart(182, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        if (Argument.TYPE_DESC.equals(stringResources.USER_DEFINED_ARGUMENT)
                && Constant.TYPE_DESC.equals(stringResources.USER_DEFINED_CONSTANT)
                && Expression.TYPE_DESC.equals(stringResources.USER_DEFINED_EXPRESSION)
                && Function.TYPE_DESC.equals(stringResources.USER_DEFINED_FUNCTION)
                && RecursiveArgument.TYPE_DESC_RECURSIVE.equals(stringResources.USER_DEFINED_RECURSIVE_ARGUMENT)
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0183() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Check all user defined token types - descriptions";
        TestCommonTools.consolePrintTestApiStart(183, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        if (Argument.TYPE_DESC.equals(stringResources.USER_DEFINED_ARGUMENT)
                && Constant.TYPE_DESC.equals(stringResources.USER_DEFINED_CONSTANT)
                && Expression.TYPE_DESC.equals(stringResources.USER_DEFINED_EXPRESSION)
                && Function.TYPE_DESC.equals(stringResources.USER_DEFINED_FUNCTION)
                && RecursiveArgument.TYPE_DESC_RECURSIVE.equals(stringResources.USER_DEFINED_RECURSIVE_ARGUMENT)
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0184() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public Argument(String argumentDefinitionString, PrimitiveElement...elements) - argumentDefinitionString == null, elements == null";
        TestCommonTools.consolePrintTestApiStart(184, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        Argument a = new Argument(null);
        Argument[] x = null;
        Argument b = new Argument("b", x);
        if (
                !a.checkSyntax()
                && a.getErrorMessage().contains(stringResources.PROVIDED_STRING_IS_NULL)
                && !b.checkSyntax()
                && b.getErrorMessage().contains(stringResources.PROVIDED_ELEMENTS_ARE_NULL)
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0185() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public Argument(String argumentDefinitionString, PrimitiveElement...elements) - nameOnlyTokenRegExp";
        TestCommonTools.consolePrintTestApiStart(185, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        Argument a = new Argument("a");
        Argument b = new Argument("   b   ");
        if (
                a.getArgumentName().equals("a")
                && a.checkSyntax()
                && a.getArgumentType() == Argument.FREE_ARGUMENT
                && a.getErrorMessage().contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
                && b.getArgumentName().equals("b")
                && b.checkSyntax()
                && b.getArgumentType() == Argument.FREE_ARGUMENT
                && b.getErrorMessage().contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0186() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public Argument(String argumentDefinitionString, PrimitiveElement...elements) - constArgDefStrRegExp";
        TestCommonTools.consolePrintTestApiStart(186, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        Argument a = new Argument("a = 2*4");
        Argument b = new Argument("   b    = 2*a   ");
        Argument c = new Argument("   c    = 2*a   ");
        c.addArguments(a);
        if (
                a.getArgumentName().equals("a")
                && a.checkSyntax()
                && a.getArgumentType() == Argument.FREE_ARGUMENT
                && a.getArgumentValue() == 8
                && a.getErrorMessage().contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
                && b.getArgumentName().equals("b")
                && b.getArgumentExpressionString().equals("2*a")
                && b.getErrorMessage().contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
                && b.getArgumentType() == Argument.DEPENDENT_ARGUMENT
                && !b.checkSyntax()
                && b.getErrorMessage().contains(stringResources.INVALID_TOKEN)
                && !b.getErrorMessage().contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
                && c.getArgumentName().equals("c")
                && c.checkSyntax()
                && c.getErrorMessage().contains(stringResources.NO_ERRORS_DETECTED)
                ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0187() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public Argument(String argumentDefinitionString, PrimitiveElement...elements) - incorrect definition string";
        TestCommonTools.consolePrintTestApiStart(187, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        Argument a = new Argument("a+2");
        Argument b = new Argument("b( = 2   ");
        Argument c = new Argument("   c(x) = 2*x   ");
        if (
                !a.checkSyntax()
                && a.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_DEFINITION)
                && a.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && a.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
                && !b.checkSyntax()
                && b.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_DEFINITION)
                && b.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && b.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
                && !c.checkSyntax()
                && c.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_DEFINITION)
                && c.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && c.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0188() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public Argument(String argumentDefinitionString, boolean forceDependent, PrimitiveElement...elements) - argumentDefinitionString == null, elements == null";
        TestCommonTools.consolePrintTestApiStart(188, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        Argument a = new Argument(null, true);
        Argument[] x = null;
        Argument b = new Argument("b", true, x);
        if (
                !a.checkSyntax()
                && a.getErrorMessage().contains(stringResources.PROVIDED_STRING_IS_NULL)
                && !b.checkSyntax()
                && b.getErrorMessage().contains(stringResources.PROVIDED_ELEMENTS_ARE_NULL)
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0189() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public Argument(String argumentDefinitionString, boolean forceDependent, PrimitiveElement...elements) - nameOnlyTokenRegExp";
        TestCommonTools.consolePrintTestApiStart(189, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        Argument a = new Argument("a", true);
        Argument b = new Argument("   b   ", true);
        if (
                a.getArgumentName().equals("a")
                && a.checkSyntax()
                && a.getArgumentType() == Argument.FREE_ARGUMENT
                && a.getErrorMessage().contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
                && b.getArgumentName().equals("b")
                && b.checkSyntax()
                && b.getArgumentType() == Argument.FREE_ARGUMENT
                && b.getErrorMessage().contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0190() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public Argument(String argumentDefinitionString, boolean forceDependent, PrimitiveElement...elements)";
        TestCommonTools.consolePrintTestApiStart(190, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        Argument a = new Argument("a = 2", false);
        Argument b = new Argument("b = 2", true);
        if (
                a.getArgumentName().equals("a")
                && a.getErrorMessage().contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
                && a.checkSyntax()
                && a.getArgumentType() == Argument.FREE_ARGUMENT
                && b.getErrorMessage().contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
                && b.getArgumentName().equals("b")
                && b.checkSyntax()
                && b.getArgumentType() == Argument.DEPENDENT_ARGUMENT
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0191() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public Argument(String argumentName, double argumentValue) - argumentName = null";
        TestCommonTools.consolePrintTestApiStart(191, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        Argument a = new Argument(null,2);
        if (a.getErrorMessage().contains(stringResources.PROVIDED_STRING_IS_NULL)
                && !a.checkSyntax()
                && a.getArgumentName().length() == 0
                && Double.isNaN(a.getArgumentValue())
                && a.getArgumentType() == Argument.FREE_ARGUMENT
            ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0192() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public Argument(String argumentName, double argumentValue) - invalid argumentName";
        TestCommonTools.consolePrintTestApiStart(192, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        Argument a = new Argument("1",2);
        Argument b = new Argument("x()",2);
        Argument c = new Argument("x(1)",2);
        Argument d = new Argument("x = ",2);
        Argument e = new Argument("1+x",2);
        Argument f = new Argument("1x",2);
        if (a.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_NAME)
                && a.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && a.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
                && !a.checkSyntax()
                && b.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_NAME)
                && b.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && b.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
                && !b.checkSyntax()
                && c.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_NAME)
                && c.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && c.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
                && !c.checkSyntax()
                && d.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_NAME)
                && d.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && d.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
                && !d.checkSyntax()
                && e.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_NAME)
                && e.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && e.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
                && !e.checkSyntax()
                && f.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_NAME)
                && f.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && f.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
                && !f.checkSyntax()
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0193() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public Argument(String argumentName, double argumentValue)";
        TestCommonTools.consolePrintTestApiStart(193, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        Argument a = new Argument("a",1);
        Argument a1 = new Argument("a1",2);
        Argument a1b = new Argument("a1b",3);
        Argument x = new Argument("   x ",4);
        if (
                a.getErrorMessage().contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
                && a.checkSyntax()
                && a.getArgumentType() == Argument.FREE_ARGUMENT
                && a.getArgumentBodyType() == Argument.BODY_RUNTIME
                && a.getArgumentName().equals("a")
                && a.getArgumentValue() == 1
                && a1.getErrorMessage().contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
                && a1.checkSyntax()
                && a1.getArgumentType() == Argument.FREE_ARGUMENT
                && a1.getArgumentBodyType() == Argument.BODY_RUNTIME
                && a1.getArgumentName().equals("a1")
                && a1.getArgumentValue() == 2
                && a1b.getErrorMessage().contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
                && a1b.checkSyntax()
                && a1b.getArgumentType() == Argument.FREE_ARGUMENT
                && a1b.getArgumentBodyType() == Argument.BODY_RUNTIME
                && a1b.getArgumentName().equals("a1b")
                && a1b.getArgumentValue() == 3
                && x.getErrorMessage().contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
                && x.checkSyntax()
                && x.getArgumentType() == Argument.FREE_ARGUMENT
                && x.getArgumentBodyType() == Argument.BODY_RUNTIME
                && x.getArgumentName().equals("x")
                && x.getArgumentValue() == 4
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0194() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public Argument(String argumentName, ArgumentExtension argumentExtension) - argumentName = null, argumentExtension = null";
        TestCommonTools.consolePrintTestApiStart(194, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        Argument a = new Argument(null,new PiMultArgExt());
        PiMultArgExt nullExtension = null;
        Argument b = new Argument("b", nullExtension);
        if (
                a.getErrorMessage().contains(stringResources.PROVIDED_STRING_IS_NULL)
                && !a.checkSyntax()
                && a.getArgumentName().length() == 0
                && a.getArgumentType() == Argument.FREE_ARGUMENT
                && a.getArgumentBodyType() == Argument.BODY_RUNTIME
                && Double.isNaN(a.getArgumentValue())
                && b.getErrorMessage().contains(stringResources.PROVIDED_EXTENSION_IS_NULL)
                && !b.checkSyntax()
                && b.getArgumentName().length() == 0
                && b.getArgumentType() == Argument.FREE_ARGUMENT
                && b.getArgumentBodyType() == Argument.BODY_RUNTIME
                && Double.isNaN(b.getArgumentValue())
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0195() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public Argument(String argumentName, ArgumentExtension argumentExtension) - invalid argumentName";
        TestCommonTools.consolePrintTestApiStart(195, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        PiMultArgExt piMultArgExt = new PiMultArgExt();
        Argument a = new Argument("1", piMultArgExt);
        Argument b = new Argument("x()", piMultArgExt);
        Argument c = new Argument("x(1)", piMultArgExt);
        Argument d = new Argument("x = ", piMultArgExt);
        Argument e = new Argument("1+x", piMultArgExt);
        Argument f = new Argument("1x", piMultArgExt);
        if (a.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_NAME)
                && a.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && a.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
                && !a.checkSyntax()
                && b.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_NAME)
                && b.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && b.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
                && !b.checkSyntax()
                && c.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_NAME)
                && c.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && c.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
                && !c.checkSyntax()
                && d.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_NAME)
                && d.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && d.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
                && !d.checkSyntax()
                && e.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_NAME)
                && e.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && e.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
                && !e.checkSyntax()
                && f.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_NAME)
                && f.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && f.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
                && !f.checkSyntax()
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0196() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public Argument(String argumentName, ArgumentExtension argumentExtension)";
        TestCommonTools.consolePrintTestApiStart(196, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        Argument a = new Argument("a",new PiMultArgExt());
        Argument b = new Argument("  b ",new PiMultArgExt());
        if (
                a.getErrorMessage().contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
                && a.checkSyntax()
                && a.getArgumentName().equals("a")
                && a.getArgumentType() == Argument.FREE_ARGUMENT
                && a.getArgumentBodyType() == Argument.BODY_EXTENDED
                && b.getErrorMessage().contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
                && b.checkSyntax()
                && b.getArgumentName().equals("b")
                && b.getArgumentType() == Argument.FREE_ARGUMENT
                && b.getArgumentBodyType() == Argument.BODY_EXTENDED
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0197() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public Argument(String argumentName, String argumentExpressionString, PrimitiveElement... elements) - argumentName = null, argumentExpressionString = null, elements = null";
        TestCommonTools.consolePrintTestApiStart(197, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        String nullString = null;
        Argument[] nullElements = null;
        Argument a = new Argument(nullString, "2+3");
        Argument b = new Argument("b", nullString);
        Argument c = new Argument("b", "2+3", nullElements);
        if (
                a.getErrorMessage().contains(stringResources.PROVIDED_STRING_IS_NULL)
                && !a.checkSyntax()
                && a.getArgumentName().length() == 0
                && a.getArgumentType() == Argument.FREE_ARGUMENT
                && a.getArgumentBodyType() == Argument.BODY_RUNTIME
                && Double.isNaN(a.getArgumentValue())
                && b.getErrorMessage().contains(stringResources.PROVIDED_STRING_IS_NULL)
                && !b.checkSyntax()
                && b.getArgumentName().length() == 0
                && b.getArgumentType() == Argument.FREE_ARGUMENT
                && b.getArgumentBodyType() == Argument.BODY_RUNTIME
                && Double.isNaN(b.getArgumentValue())
                && c.getErrorMessage().contains(stringResources.PROVIDED_ELEMENTS_ARE_NULL)
                && !c.checkSyntax()
                && c.getArgumentName().length() == 0
                && c.getArgumentType() == Argument.FREE_ARGUMENT
                && c.getArgumentBodyType() == Argument.BODY_RUNTIME
                && Double.isNaN(c.getArgumentValue())
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0198() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public Argument(String argumentName, String argumentExpressionString, PrimitiveElement... elements) - invalid argumentName";
        TestCommonTools.consolePrintTestApiStart(198, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        Argument a = new Argument("1", "2+3");
        Argument b = new Argument("x()", "2+3");
        Argument c = new Argument("x(1)", "2+3");
        Argument d = new Argument("x = ", "2+3");
        Argument e = new Argument("1+x", "2+3");
        Argument f = new Argument("1x", "2+3");
        if (a.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_NAME)
                && a.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && a.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
                && !a.checkSyntax()
                && b.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_NAME)
                && b.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && b.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
                && !b.checkSyntax()
                && c.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_NAME)
                && c.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && c.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
                && !c.checkSyntax()
                && d.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_NAME)
                && d.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && d.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
                && !d.checkSyntax()
                && e.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_NAME)
                && e.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && e.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
                && !e.checkSyntax()
                && f.getErrorMessage().contains(stringResources.INVALID_ARGUMENT_NAME)
                && f.getErrorMessage().contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && f.getErrorMessage().contains(stringResources.PATTERN_EXAMPLES)
                && !f.checkSyntax()
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0199() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public Argument(String argumentName, ArgumentExtension argumentExtension)";
        TestCommonTools.consolePrintTestApiStart(199, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        Argument a = new Argument("a","2+3");
        Argument b = new Argument("  b ","2*3");
        if (a.getErrorMessage().contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
                && a.checkSyntax()
                && a.getArgumentName().equals("a")
                && a.getArgumentType() == Argument.DEPENDENT_ARGUMENT
                && a.getArgumentBodyType() == Argument.BODY_RUNTIME
                && a.getArgumentValue() == 5
                && b.getErrorMessage().contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
                && b.checkSyntax()
                && b.getArgumentName().equals("b")
                && b.getArgumentType() == Argument.DEPENDENT_ARGUMENT
                && b.getArgumentBodyType() == Argument.BODY_RUNTIME
                && b.getArgumentValue() == 6
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0200() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - setDescription, getDescription";
        TestCommonTools.consolePrintTestApiStart(200, testDescr);
        Argument a = new Argument("a = 2");
        a.setDescription("b");
        if (a.getDescription().equals("b"))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0201() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - setVerboseMode, setSilentMode, getVerboseMode";
        TestCommonTools.consolePrintTestApiStart(201, testDescr);
        Argument a = new Argument("a", "2+3");
        a.setVerboseMode();
        boolean v1 = a.getVerboseMode();
        a.setSilentMode();
        boolean v2 = a.getVerboseMode();
        if (v1 & !v2)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0202() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Expression API - error while calculate - behaviour test";
        TestCommonTools.consolePrintTestApiStart(202, testDescr);
        Argument x = new Argument("x = if(isNaN(x) || x> 3, 100, x/2)");
        x.addArguments(x);
        String e1 = x.getErrorMessage();
        boolean syn = x.checkSyntax();
        String e2 = x.getErrorMessage();
        double v = x.getArgumentValue();
        String e3 = x.getErrorMessage();
        StringResources stringResources = StringModel.getStringResources();
        if (e1.contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION)
                && syn
                && e2.contains(stringResources.NO_ERRORS_DETECTED)
                && Double.isNaN(v)
                && e3.contains(stringResources.RECURSION_CALLS_COUNTER_EXCEEDED)
                && e3.contains(stringResources.ERROR_WHILE_EXECUTING_THE_CALCULATE)
                && e3.contains(stringResources.EXCEPTION)
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0203() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public getComputingTime()";
        TestCommonTools.consolePrintTestApiStart(203, testDescr);
        Argument a = new Argument("a", 2);
        Argument b = new Argument("b", "sum(i, 1, 200000, i)");
        a.getArgumentValue();
        b.getArgumentValue();
        if (a.getComputingTime() == 0 && b.getComputingTime() > 0)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0204() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public void setArgumentName(String argumentName)";
        TestCommonTools.consolePrintTestApiStart(204, testDescr);
        Argument a = new Argument("a", 2);
        a.setArgumentName(null);
        Argument b = new Argument("1a2", 2);
        b.setArgumentName(null);
        Argument c = new Argument("1a2", 2);
        c.setArgumentName("c");
        c.setArgumentValue(2);
        Argument d = new Argument("d", 2);
        d.setArgumentName("1a2");
        if (a.getArgumentName().equals("a")
                && a.checkSyntax()
                && b.getArgumentName().length() == 0
                && c.getArgumentName().equals("c")
                && c.getArgumentValue() == 2
                && d.getArgumentName().equals("d")
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0205() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public void setArgumentExpressionString(String argumentExpressionString)";
        TestCommonTools.consolePrintTestApiStart(205, testDescr);
        Argument a = new Argument("a = 2");
        a.setArgumentExpressionString("2+3");
        Argument b = new Argument("b = 2");
        b.setArgumentExpressionString(null);
        if (a.getArgumentType() == Argument.DEPENDENT_ARGUMENT
                && a.getArgumentValue() == 5
                && a.getArgumentExpressionString().equals("2+3")
                && b.getArgumentType() == Argument.FREE_ARGUMENT
                && b.getArgumentValue() == 2
                && b.getArgumentExpressionString().equals("")
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0206() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public void addDefinitions(PrimitiveElement... elements), public void addArguments(Argument... arguments)";
        TestCommonTools.consolePrintTestApiStart(206, testDescr);
        Argument x = new Argument("x = a + b + f(4)");
        Argument a = new Argument("a = 2");
        Constant b = new Constant("b = 3");
        Function f = new Function("f(x) = x");
        Argument[] nullElements = null;
        double v1 = x.getArgumentValue();
        String msg1 = x.getErrorMessage() ;
        x.addDefinitions(nullElements);
        x.addDefinitions(a, b, f);
        double v2 = x.getArgumentValue();
        String msg2 = x.getErrorMessage();
        x.removeDefinitions(a, b, f);
        x.removeDefinitions(nullElements);
        double v3 = x.getArgumentValue();
        String msg3 = x.getErrorMessage();
        StringResources stringResources = StringModel.getStringResources();
        if (Double.isNaN(v1)
                && msg1.contains(stringResources.INVALID_TOKEN)
                && msg1.contains(stringResources.ERRORS_HAVE_BEEN_FOUND)
                && msg1.contains("'a'") && msg1.contains("'b'") && msg1.contains("'f'") && !msg1.contains("[f]")
                && v2 == 9
                && msg2.contains(stringResources.NO_ERRORS_DETECTED)
                && !msg2.contains("'a'") && !msg2.contains("'b'") && msg2.contains("'f'") && msg2.contains("[f]")
                && Double.isNaN(v3)
                && msg3.contains(stringResources.INVALID_TOKEN)
                && msg3.contains(stringResources.ERRORS_HAVE_BEEN_FOUND)
                && msg3.contains("'a'") && msg3.contains("'b'") && msg3.contains("'f'") && !msg3.contains("[f]")
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0207() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - add/remove Arguments, add/remove Constants, add/remove Functions - objects";
        TestCommonTools.consolePrintTestApiStart(207, testDescr);
        Argument x = new Argument("x = a + b + f(4)");
        Argument a = new Argument("a = 2");
        Constant b = new Constant("b = 3");
        Function f = new Function("f(x) = x");
        Argument[] nullArg = null;
        Constant[] nullConst = null;
        Function[] nullFun = null;
        double v1 = x.getArgumentValue();
        String msg1 = x.getErrorMessage() ;
        x.addArguments(a);
        x.addArguments(nullArg);
        x.addConstants(b);
        x.addConstants(nullConst);
        x.addFunctions(f);
        x.addFunctions(nullFun);
        double v2 = x.getArgumentValue();
        String msg2 = x.getErrorMessage();
        x.removeArguments(a);
        x.removeArguments(nullArg);
        x.removeConstants(b);
        x.removeConstants(nullConst);
        x.removeFunctions(f);
        x.removeFunctions(nullFun);
        double v3 = x.getArgumentValue();
        String msg3 = x.getErrorMessage();
        StringResources stringResources = StringModel.getStringResources();
        if (Double.isNaN(v1)
                && msg1.contains(stringResources.INVALID_TOKEN)
                && msg1.contains(stringResources.ERRORS_HAVE_BEEN_FOUND)
                && msg1.contains("'a'") && msg1.contains("'b'") && msg1.contains("'f'") && !msg1.contains("[f]")
                && v2 == 9
                && msg2.contains(stringResources.NO_ERRORS_DETECTED)
                && !msg2.contains("'a'") && !msg2.contains("'b'") && msg2.contains("'f'") && msg2.contains("[f]")
                && Double.isNaN(v3)
                && msg3.contains(stringResources.INVALID_TOKEN)
                && msg3.contains(stringResources.ERRORS_HAVE_BEEN_FOUND)
                && msg3.contains("'a'") && msg3.contains("'b'") && msg3.contains("'f'") && !msg3.contains("[f]")
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0208() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - addConstants(List<Constant> constantsList) / getConstantIndex / getConstant / getConstantsNumber / removeAllConstants";
        TestCommonTools.consolePrintTestApiStart(208, testDescr);
        Argument x = new Argument("x = a + b + c + d");
        Constant a = new Constant("a = 1");
        Constant b = new Constant("b = 2");
        Constant c = new Constant("c = 3");
        Constant d = new Constant("d = 4");
        List<Constant> constList = new ArrayList<Constant>();
        constList.add(a);
        constList.add(b);
        constList.add(c);
        constList.add(d);

        boolean syn1 = x.checkSyntax();
        String msg1 = x.getErrorMessage();
        int nconst1 = x.getConstantsNumber();
        int apos0 = x.getConstantIndex(null);
        int apos1 = x.getConstantIndex("a");
        Constant afound1 = x.getConstant(apos1);
        Constant afound11 = x.getConstant(null);

        x.addConstants(constList);

        boolean syn2 = x.checkSyntax();
        String msg2 = x.getErrorMessage();
        int nconst2 = x.getConstantsNumber();
        int apos2 = x.getConstantIndex("a");
        Constant afound2 = x.getConstant(apos2);
        Constant afound21 = x.getConstant("a");

        x.removeAllConstants();

        boolean syn3 = x.checkSyntax();
        String msg3 = x.getErrorMessage();
        int nconst3 = x.getConstantsNumber();
        int apos3 = x.getConstantIndex("a");
        Constant afound3 = x.getConstant(apos3);
        Constant afound31 = x.getConstant("a");

        StringResources stringResources = StringModel.getStringResources();
        if (!syn1
                && msg1.contains(stringResources.INVALID_TOKEN)
                && msg1.contains("'a'") && msg1.contains("'b'") && msg1.contains("'c'") && msg1.contains("'d'")
                && nconst1 == 0 && apos0 == -1
                && afound1 == null & afound11 == null
                && syn2
                && msg2.contains(stringResources.NO_ERRORS_DETECTED)
                && !msg2.contains("'a'") && !msg2.contains("'b'") && !msg2.contains("'c'") && !msg2.contains("'d'")
                && nconst2 == 4 && apos2 == 0
                && afound2 == afound21 && afound2.getConstantName().equals("a")
                && !syn3
                && msg3.contains(stringResources.INVALID_TOKEN)
                && msg3.contains("'a'") && msg3.contains("'b'") && msg3.contains("'c'") && msg3.contains("'d'")
                && nconst3 == 0 && apos3 == -1
                && afound3 == null & afound31 == null
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0209() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - defineArguments(String... argumentsNames / getArgumentIndex(String argumentName) / getArgument(String argumentName) / getArgument(int argumentIndex) / getArgumentsNumber() / removeAllArguments()";
        TestCommonTools.consolePrintTestApiStart(209, testDescr);
        Argument x = new Argument("x = a+b+c+d+e+f");
        String[] nullStr = null;
        x.defineArguments(nullStr);
        boolean syn1 = x.checkSyntax();
        String msg1 = x.getErrorMessage();
        int narg1 = x.getArgumentsNumber();
        int apos0 = x.getArgumentIndex(null);
        int apos1 = x.getArgumentIndex("a");
        Argument afound1 = x.getArgument(apos1);
        Argument afound11 = x.getArgument("a");
        x.defineArguments("c", "a", "b");
        boolean syn2 = x.checkSyntax();
        String msg2 = x.getErrorMessage();
        int narg2 = x.getArgumentsNumber();
        int apos2 = x.getArgumentIndex("a");
        Argument afound2 = x.getArgument(apos2);
        Argument afound21 = x.getArgument("a");
        x.defineArguments(nullStr);
        x.defineArguments("d", "f");
        boolean syn3 = x.checkSyntax();
        String msg3 = x.getErrorMessage();
        int narg3 = x.getArgumentsNumber();
        int apos3 = x.getArgumentIndex("a");
        Argument afound3 = x.getArgument(apos3);
        Argument afound31 = x.getArgument("a");
        x.removeAllArguments();
        x.defineArguments(nullStr);
        boolean syn4 = x.checkSyntax();
        String msg4 = x.getErrorMessage();
        int narg4 = x.getArgumentsNumber();
        int apos4 = x.getArgumentIndex("a");
        Argument afound4 = x.getArgument(apos4);
        Argument afound41 = x.getArgument("a");
        StringResources stringResources = StringModel.getStringResources();
        if (!syn1
                && msg1.contains(stringResources.INVALID_TOKEN)
                && msg1.contains("'a'") && msg1.contains("'b'") && msg1.contains("'c'") && msg1.contains("'d'") && msg1.contains("'f'")
                && narg1 == 0 && apos0 == -1 && apos1 == -1
                && afound1 == null && afound11 == null
                && !syn2
                && msg2.contains(stringResources.INVALID_TOKEN)
                && msg2.contains("'d'") && msg2.contains("'f'")
                && narg2 == 3 && apos2 == 1
                && afound2 == afound21 && afound2.getArgumentName().equals("a")
                && syn3
                && msg3.contains(stringResources.NO_ERRORS_DETECTED)
                && !msg3.contains("'a'") && !msg3.contains("'b'") && !msg3.contains("'c'") && !msg3.contains("'d'") && !msg3.contains("'f'")
                && narg3 == 5 && apos3 == 1
                && afound3 == afound31 && afound3.getArgumentName().equals("a")
                && !syn4
                && msg4.contains(stringResources.INVALID_TOKEN)
                && msg4.contains("'a'") && msg4.contains("'b'") && msg4.contains("'c'") && msg4.contains("'d'") && msg4.contains("'f'")
                && narg4 == 0 && apos4 == -1
                && afound4 == null && afound41 == null
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0210() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - defineArguments(String... getFunctionIndex / getFunction / getFunctionsNumber / removeAllFunctions";
        TestCommonTools.consolePrintTestApiStart(210, testDescr);
        Argument x = new Argument("x = a(1)+b(2)+c(3)+d(4)");
        Function a = new Function("a(x) = x");
        Function b = new Function("b(x) = x");
        Function c = new Function("c(x) = x");
        Function d = new Function("d(x) = x");
        int nfun0 = x.getFunctionsNumber();
        x.addFunctions(a, b, c, d);
        boolean syn1 = x.checkSyntax();
        String msg1 = x.getErrorMessage();
        int nfun1 = x.getFunctionsNumber();
        Function n1 = x.getFunction(null);
        Function n2 = x.getFunction(-1);
        Function f = x.getFunction("f");
        int bpos = x.getFunctionIndex("b");
        Function b1 = x.getFunction(bpos);
        x.removeAllFunctions();
        int nfun2 = x.getFunctionsNumber();
        boolean syn2 = x.checkSyntax();
        String msg2 = x.getErrorMessage();
        StringResources stringResources = StringModel.getStringResources();
        if (nfun0 == 0
                && syn1
                && msg1.contains(stringResources.NO_ERRORS_DETECTED)
                && nfun1 == 4
                && n1 == null
                && n2 == null
                && f == null
                && bpos == 1
                && b1 == b
                && nfun2 == 0
                && !syn2
                && msg2.contains(stringResources.INVALID_TOKEN)
                && msg2.contains("'a'") && msg2.contains("'b'") && msg2.contains("'c'") && msg2.contains("'d'")
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0211() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - public Argument clone()";
        TestCommonTools.consolePrintTestApiStart(211, testDescr);
        Argument xx = new Argument("x = a(1)+b(2)+c(3)+d(4)");
        Function a = new Function("a(x) = x");
        Function b = new Function("b(x) = x");
        Function c = new Function("c(x) = x");
        Function d = new Function("d(x) = x");
        Argument xc = xx.clone();
        if (xx.getArgumentName().equals(xc.getArgumentName())
                && xx.getArgumentExpressionString().equals(xc.getArgumentExpressionString())
                && xx.getDescription().equals(xc.getDescription())
                && xx.getArgumentType() == xc.getArgumentType()
                && xx.getArgumentBodyType() == xc.getArgumentBodyType()
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0212() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Function API - public Function(String functionName, String functionExpressionString, PrimitiveElement... elements)";
        TestCommonTools.consolePrintTestApiStart(212, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        String nullStr = null;
        Argument[] nullElements = null;
        Constant c = new Constant("c = 1");
        Function f1 = new Function(nullStr, "2+3", nullElements);
        Function f2 = new Function("f", nullStr, nullElements);
        Function f3 = new Function("f", "2+3", nullElements);
        Function f4 = new Function("1f", "2+3", c);
        Function f5 = new Function("f1(", "2+3", c);
        Function f6 = new Function("  f   ", "  2+3 ", c);
        boolean syn1 = f1.checkSyntax(); String msg1 = f1.getErrorMessage();
        boolean syn2 = f2.checkSyntax(); String msg2 = f2.getErrorMessage();
        boolean syn3 = f3.checkSyntax(); String msg3 = f3.getErrorMessage();
        String msg4 = f4.getErrorMessage(); boolean syn4 = f4.checkSyntax();
        String msg5 = f5.getErrorMessage(); boolean syn5 = f5.checkSyntax();
        String msg6 = f6.getErrorMessage(); boolean syn6 = f6.checkSyntax();
        if (!syn1 && msg1.contains(stringResources.PROVIDED_STRING_IS_NULL)
                && !syn2 && msg2.contains(stringResources.PROVIDED_STRING_IS_NULL)
                && !syn3 && msg3.contains(stringResources.PROVIDED_ELEMENTS_ARE_NULL)
                && !syn4 && msg4.contains(stringResources.INVALID_FUNCTION_NAME)
                && msg4.contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && msg4.contains(stringResources.PATTERN_EXAMPLES)
                && !syn5 && msg5.contains(stringResources.INVALID_FUNCTION_NAME)
                && msg5.contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && msg5.contains(stringResources.PATTERN_EXAMPLES)
                && syn6 && msg6.contains(stringResources.NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION)
                && f6.getFunctionName().equals("f")
                && f6.getFunctionExpressionString().equals("2+3")
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0213() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Function API - Function(String functionName, String  functionExpressionString, String... argumentsNames)";
        TestCommonTools.consolePrintTestApiStart(213, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        String nullStr = null;
        Argument[] nullElements = null;
        Function f1 = new Function(nullStr, "2+3", nullElements);
        Function f2 = new Function("f", nullStr, nullElements);
        Function f3 = new Function("f", "2+3", nullElements);
        Function f4 = new Function("1f", "2+3*x", "x");
        Function f5 = new Function("f1( ", "2+3*x", "x");
        Function f6 = new Function("  f   ", "  2+3*x  ", "x");
        boolean syn1 = f1.checkSyntax(); String msg1 = f1.getErrorMessage();
        boolean syn2 = f2.checkSyntax(); String msg2 = f2.getErrorMessage();
        boolean syn3 = f3.checkSyntax(); String msg3 = f3.getErrorMessage();
        String msg4 = f4.getErrorMessage(); boolean syn4 = f4.checkSyntax();
        String msg5 = f5.getErrorMessage(); boolean syn5 = f5.checkSyntax();
        String msg6 = f6.getErrorMessage(); boolean syn6 = f6.checkSyntax();
        if (!syn1 && msg1.contains(stringResources.PROVIDED_STRING_IS_NULL)
                && !syn2 && msg2.contains(stringResources.PROVIDED_STRING_IS_NULL)
                && !syn3 && msg3.contains(stringResources.PROVIDED_ELEMENTS_ARE_NULL)
                && !syn4 && msg4.contains(stringResources.INVALID_FUNCTION_NAME)
                && msg4.contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && msg4.contains(stringResources.PATTERN_EXAMPLES)
                && !syn5 && msg5.contains(stringResources.INVALID_FUNCTION_NAME)
                && msg5.contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && msg5.contains(stringResources.PATTERN_EXAMPLES)
                && syn6 && msg6.contains(stringResources.NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION)
                && f6.getFunctionName().equals("f")
                && f6.getFunctionExpressionString().equals("2+3*x")
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0214() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Function API - public Function(String functionDefinitionString, PrimitiveElement... elements)";
        TestCommonTools.consolePrintTestApiStart(214, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        String nullStr = null;
        Argument[] nullElements = null;
        Constant c = new Constant("c = 1");
        Function f1 = new Function(nullStr, c);
        Function f2 = new Function("f(x) = 2", nullElements);
        Function f3 = new Function(nullStr, nullElements);
        Function f4 = new Function("f = 2+3*x", c);
        Function f5 = new Function(" 2+3*x", c);
        Function f6 = new Function("  f(x)   =   2+3*x   ", c);
        Function f7 = new Function("  f(...)   =   [npar]   ", c);
        boolean syn1 = f1.checkSyntax(); String msg1 = f1.getErrorMessage();
        boolean syn2 = f2.checkSyntax(); String msg2 = f2.getErrorMessage();
        boolean syn3 = f3.checkSyntax(); String msg3 = f3.getErrorMessage();
        String msg4 = f4.getErrorMessage(); boolean syn4 = f4.checkSyntax();
        String msg5 = f5.getErrorMessage(); boolean syn5 = f5.checkSyntax();
        String msg6 = f6.getErrorMessage(); boolean syn6 = f6.checkSyntax();
        String msg7 = f7.getErrorMessage(); boolean syn7 = f7.checkSyntax();
        if (!syn1 && msg1.contains(stringResources.PROVIDED_STRING_IS_NULL)
                && !syn2 && msg2.contains(stringResources.PROVIDED_ELEMENTS_ARE_NULL)
                && !syn3 && msg3.contains(stringResources.PROVIDED_STRING_IS_NULL)
                && !syn4 && msg4.contains(stringResources.INVALID_FUNCTION_DEFINITION)
                && msg4.contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && msg4.contains(stringResources.PATTERN_EXAMPLES)
                && !syn5 && msg5.contains(stringResources.INVALID_FUNCTION_DEFINITION)
                && msg5.contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && msg5.contains(stringResources.PATTERN_EXAMPLES)
                && syn6 && msg6.contains(stringResources.NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION)
                && f6.getFunctionName().equals("f")
                && f6.getFunctionExpressionString().equals("2+3*x")
                && syn7 && msg7.contains(stringResources.NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION)
                && f7.getFunctionName().equals("f")
                && f7.getFunctionExpressionString().equals("[npar]")
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0215() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Function API - public Function(String functionName, FunctionExtension functionExtension)";
        TestCommonTools.consolePrintTestApiStart(215, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        String nullStr = null;
        FunExt funExtNull = null;
        FunExt funExt = new FunExt();
        Function f1 = new Function(nullStr, funExt);
        Function f2 = new Function("f", funExtNull);
        Function f3 = new Function(nullStr, funExtNull);
        Function f4 = new Function("1f", funExt);
        Function f5 = new Function("f1(", funExt);
        Function f6 = new Function("f", funExt);
        boolean syn1 = f1.checkSyntax(); String msg1 = f1.getErrorMessage();
        boolean syn2 = f2.checkSyntax(); String msg2 = f2.getErrorMessage();
        boolean syn3 = f3.checkSyntax(); String msg3 = f3.getErrorMessage();
        String msg4 = f4.getErrorMessage(); boolean syn4 = f4.checkSyntax();
        String msg5 = f5.getErrorMessage(); boolean syn5 = f5.checkSyntax();
        String msg6 = f6.getErrorMessage(); boolean syn6 = f6.checkSyntax();
        if (!syn1 && msg1.contains(stringResources.PROVIDED_STRING_IS_NULL)
                && !syn2 && msg2.contains(stringResources.PROVIDED_EXTENSION_IS_NULL)
                && !syn3 && msg3.contains(stringResources.PROVIDED_STRING_IS_NULL)
                && !syn4 && msg4.contains(stringResources.INVALID_FUNCTION_NAME)
                && msg4.contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && msg4.contains(stringResources.PATTERN_EXAMPLES)
                && !syn5 && msg5.contains(stringResources.INVALID_FUNCTION_NAME)
                && msg5.contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && msg5.contains(stringResources.PATTERN_EXAMPLES)
                && syn6 && msg6.contains(stringResources.NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION)
                && f6.getFunctionName().equals("f")
                && f6.getFunctionBodyType() == Function.BODY_EXTENDED
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0216() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Function API - public Function(String functionName, FunctionExtensionVariadic functionExtensionVariadic) + checkSyntax + getErrorMessage";
        TestCommonTools.consolePrintTestApiStart(216, testDescr);
        StringResources stringResources = StringModel.getStringResources();
        String nullStr = null;
        FunExtVar funExtNull = null;
        FunExtVar funExt = new FunExtVar();
        Function f1 = new Function(nullStr, funExt);
        Function f2 = new Function("f", funExtNull);
        Function f3 = new Function(nullStr, funExtNull);
        Function f4 = new Function("1f", funExt);
        Function f5 = new Function("f1(", funExt);
        Function f6 = new Function("f", funExt);
        boolean syn1 = f1.checkSyntax(); String msg1 = f1.getErrorMessage();
        boolean syn2 = f2.checkSyntax(); String msg2 = f2.getErrorMessage();
        boolean syn3 = f3.checkSyntax(); String msg3 = f3.getErrorMessage();
        String msg4 = f4.getErrorMessage(); boolean syn4 = f4.checkSyntax();
        String msg5 = f5.getErrorMessage(); boolean syn5 = f5.checkSyntax();
        String msg6 = f6.getErrorMessage(); boolean syn6 = f6.checkSyntax();
        if (!syn1 && msg1.contains(stringResources.PROVIDED_STRING_IS_NULL)
                && !syn2 && msg2.contains(stringResources.PROVIDED_EXTENSION_IS_NULL)
                && !syn3 && msg3.contains(stringResources.PROVIDED_STRING_IS_NULL)
                && !syn4 && msg4.contains(stringResources.INVALID_FUNCTION_NAME)
                && msg4.contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && msg4.contains(stringResources.PATTERN_EXAMPLES)
                && !syn5 && msg5.contains(stringResources.INVALID_FUNCTION_NAME)
                && msg5.contains(stringResources.PATTERN_DOES_NOT_MATCH)
                && msg5.contains(stringResources.PATTERN_EXAMPLES)
                && syn6 && msg6.contains(stringResources.NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION)
                && f6.getFunctionName().equals("f")
                && f6.getFunctionBodyType() == Function.BODY_EXTENDED
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0217() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Function API - setDescription /  setFunctionName / getDescription / getFunctionName / getFunctionExpressionString / getFunctionBodyType";
        TestCommonTools.consolePrintTestApiStart(217, testDescr);
        Function f = new Function("f(x,y) = 2*x+3*y");
        f.setDescription("This is a new description");
        f.setFunctionName("g");
        f.setFunctionName("1g");
        f.setFunctionName(null);
        f.setDescription(null);
        if (f.getDescription().equals("This is a new description")
                && f.getFunctionName().equals("g")
                && f.getFunctionExpressionString().equals("2*x+3*y")
                && f.getFunctionBodyType() == Function.BODY_RUNTIME
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0218() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Function API - public double calculate(double... parameters) + getComputingTime";
        TestCommonTools.consolePrintTestApiStart(218, testDescr);
        Function fErr = new Function("f = 2+3");
        Function f = new Function("f(n) = sum(i, 1, n, i)");
        Function fVar = new Function("f(...) = sum(i, 1, par(1), i)");
        Function fExt = new Function("f", new LongComputingFunExt());
        Function fExtVar = new Function("f", new LongComputingFunExtVar());
        double range = 2000000;
        double result = 0;
        for (int i = 1; i <= range; i++)
            result += i;
        double[] nullParams = null;
        double[] zerLengthParams = new double[0];

        double dErr = fErr.calculate(range); double tErr = fErr.getComputingTime();
        double dNullParams = f.calculate(nullParams); double tNullParams = f.getComputingTime();
        double dZerLengthParams = f.calculate(zerLengthParams); double tZerLengthParams = f.getComputingTime();
        double df = f.calculate(range); double tf = f.getComputingTime();
        double dfVar = fVar.calculate(range); double tfVar = fVar.getComputingTime();
        double dfExt = fExt.calculate(range); double tfExt = fExt.getComputingTime();
        double dfExtVar = fExtVar.calculate(range); double tfExtVar = fExtVar.getComputingTime();

        if (Double.isNaN(dErr) && tErr == 0
                && Double.isNaN(dNullParams) && tNullParams == 0
                && Double.isNaN(dZerLengthParams)  && tZerLengthParams == 0
                && df == result && tf > 0
                && dfVar == result && tfVar > 0
                && dfExt == result && tfExt > 0
                && dfExtVar == result && tfExtVar > 0
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0219() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Function API - public calculate(Argument... arguments) + getComputingTime";
        TestCommonTools.consolePrintTestApiStart(219, testDescr);
        Function fErr = new Function("f = 2+3");
        Function f = new Function("f(n) = sum(i, 1, n, i)");
        Function fVar = new Function("f(...) = sum(i, 1, par(1), i)");
        Function fExt = new Function("f", new LongComputingFunExt());
        Function fExtVar = new Function("f", new LongComputingFunExtVar());
        Argument range = new Argument("range = 2000000");
        double result = 0;
        double drange = range.getArgumentValue();
        for (int i = 1; i <= drange; i++)
            result += i;
        Argument[] nullParams = null;
        Argument[] zerLengthParams = new Argument[0];

        double dErr = fErr.calculate(range); double tErr = fErr.getComputingTime();
        double dNullParams = f.calculate(nullParams); double tNullParams = f.getComputingTime();
        double dZerLengthParams = f.calculate(zerLengthParams); double tZerLengthParams = f.getComputingTime();
        double df = f.calculate(range); double tf = f.getComputingTime();
        double dfVar = fVar.calculate(range); double tfVar = fVar.getComputingTime();
        double dfExt = fExt.calculate(range); double tfExt = fExt.getComputingTime();
        double dfExtVar = fExtVar.calculate(range); double tfExtVar = fExtVar.getComputingTime();

        if (Double.isNaN(dErr) && tErr == 0
                && Double.isNaN(dNullParams) && tNullParams == 0
                && Double.isNaN(dZerLengthParams)  && tZerLengthParams == 0
                && df == result && tf > 0
                && dfVar == result && tfVar > 0
                && dfExt == result && tfExt > 0
                && dfExtVar == result && tfExtVar > 0
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0220() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Function API - calculate(CalcStepsRegister calcStepsRegister) + getComputingTime";
        TestCommonTools.consolePrintTestApiStart(220, testDescr);
        Argument range = new Argument("range = 4000000");
        Function fErr = new Function("f = 2+3");
        Function f = new Function("f(n) = sum(i, 1, n, i)");
        Expression e = new Expression("f(range)", range, f);
        Function fVar = new Function("f(...) = sum(i, 1, par(1), i)");
        Expression eVar = new Expression("f(range)", range, fVar);
        Function fExt = new Function("f", new LongComputingFunExt());
        Expression eExt = new Expression("f(range)", range, fExt);
        Function fExtVar = new Function("f", new LongComputingFunExtVar());
        Expression eExtVar = new Expression("f(range)", range, fExtVar);
        double result = 0;
        double drange =  range.getArgumentValue();
        for (int i = 1; i <= drange; i++)
            result += i;
        CalcStepsRegister calcStepsRegister = null;

        double dErr = fErr.calculate(calcStepsRegister); double tErr = fErr.getComputingTime();
        double df = e.calculate(calcStepsRegister); double tf = f.getComputingTime();
        double dfVar = eVar.calculate(calcStepsRegister); double tfVar = fVar.getComputingTime();
        double dfExt = eExt.calculate(calcStepsRegister); double tfExt = fExt.getComputingTime();
        double dfExtVar = eExtVar.calculate(calcStepsRegister); double tfExtVar = fExtVar.getComputingTime();

        if (Double.isNaN(dErr) && tErr == 0
                && df == result && tf > 0
                && dfVar == result && tfVar > 0
                && dfExt == result && tfExt > 0
                && dfExtVar == result && tfExtVar > 0
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0221() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Function API - setArgumentValue";
        TestCommonTools.consolePrintTestApiStart(221, testDescr);
        Function fErr = new Function("f = 2+3");
        Function f = new Function("f(n) = sum(i, 1, n, i)");
        Function fVar = new Function("f(...) = sum(i, 1, par(1), i)");
        Function fExt = new Function("f", new LongComputingFunExt());
        Function fExtVar = new Function("f", new LongComputingFunExtVar());
        double range = 1000000;
        double result = 0;
        for (int i = 1; i <= range; i++)
            result += i;

        fErr.setArgumentValue(0, 1);
        f.setArgumentValue(0, range);
        f.setArgumentValue(-1, -1);
        f.setArgumentValue(10, 10);
        fVar.setArgumentValue(0, range);
        fVar.setArgumentValue(-1, -1);
        fVar.setArgumentValue(10, 10);
        fExt.setArgumentValue(0, range);
        fExt.setArgumentValue(-1, -1);
        fExt.setArgumentValue(10, 10);
        fExtVar.setArgumentValue(0, range);
        fExtVar.setArgumentValue(-1, -1);
        fExtVar.setArgumentValue(10, 10);

        double df = f.calculate();
        double dfVar = fVar.calculate();
        double dfExt = fExt.calculate();
        double dfExtVar = fExtVar.calculate(range);

        if (df == result
                && Double.isNaN(dfVar)
                && dfExt == result
                && dfExtVar == result
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0222() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Function API - setVerboseMode, setSilentMode, getVerboseMode";
        TestCommonTools.consolePrintTestApiStart(222, testDescr);
        Function a = new Function("a", "2+3", "x");
        a.setVerboseMode();
        boolean v1 = a.getVerboseMode();
        a.setSilentMode();
        boolean v2 = a.getVerboseMode();
        if (v1 & !v2)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0223() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Function API - public void addDefinitions(PrimitiveElement... elements), public void addArguments(Argument... arguments)";
        TestCommonTools.consolePrintTestApiStart(206, testDescr);
        Function x = new Function("x(n) = a + b + f(n)");
        Argument a = new Argument("a = 2");
        Constant b = new Constant("b = 3");
        Function f = new Function("f(x) = x");
        Argument[] nullElements = null;
        double v1 = x.calculate(4);
        String msg1 = x.getErrorMessage() ;
        x.addDefinitions(nullElements);
        x.addDefinitions(a, b, f);
        double v2 = x.calculate(4);
        String msg2 = x.getErrorMessage();
        x.removeDefinitions(a, b, f);
        x.removeDefinitions(nullElements);
        double v3 = x.calculate(4);
        String msg3 = x.getErrorMessage();
        StringResources stringResources = StringModel.getStringResources();
        if (Double.isNaN(v1)
                && msg1.contains(stringResources.INVALID_TOKEN)
                && msg1.contains(stringResources.ERRORS_HAVE_BEEN_FOUND)
                && msg1.contains("'a'") && msg1.contains("'b'") && msg1.contains("'f'") && !msg1.contains("[f]")
                && v2 == 9
                && msg2.contains(stringResources.NO_ERRORS_DETECTED)
                && !msg2.contains("'a'") && !msg2.contains("'b'") && msg2.contains("'f'") && msg2.contains("[f]")
                && Double.isNaN(v3)
                && msg3.contains(stringResources.INVALID_TOKEN)
                && msg3.contains(stringResources.ERRORS_HAVE_BEEN_FOUND)
                && msg3.contains("'a'") && msg3.contains("'b'") && msg3.contains("'f'") && !msg3.contains("[f]")
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0224() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Function API - add/remove Arguments, add/remove Constants, add/remove Functions - objects";
        TestCommonTools.consolePrintTestApiStart(224, testDescr);
        Function x = new Function("x(n) = a + b + f(n)");
        Argument a = new Argument("a = 2");
        Constant b = new Constant("b = 3");
        Function f = new Function("f(x) = x");
        Argument[] nullArg = null;
        Constant[] nullConst = null;
        Function[] nullFun = null;
        double v1 = x.calculate(4);
        String msg1 = x.getErrorMessage() ;
        x.addArguments(a);
        x.addArguments(nullArg);
        x.addConstants(b);
        x.addConstants(nullConst);
        x.addFunctions(f);
        x.addFunctions(nullFun);
        double v2 = x.calculate(4);
        String msg2 = x.getErrorMessage();
        x.removeArguments(a);
        x.removeArguments(nullArg);
        x.removeConstants(b);
        x.removeConstants(nullConst);
        x.removeFunctions(f);
        x.removeFunctions(nullFun);
        double v3 = x.calculate(4);
        String msg3 = x.getErrorMessage();
        StringResources stringResources = StringModel.getStringResources();
        if (Double.isNaN(v1)
                && msg1.contains(stringResources.INVALID_TOKEN)
                && msg1.contains(stringResources.ERRORS_HAVE_BEEN_FOUND)
                && msg1.contains("'a'") && msg1.contains("'b'") && msg1.contains("'f'") && !msg1.contains("[f]")
                && v2 == 9
                && msg2.contains(stringResources.NO_ERRORS_DETECTED)
                && !msg2.contains("'a'") && !msg2.contains("'b'") && msg2.contains("'f'") && msg2.contains("[f]")
                && Double.isNaN(v3)
                && msg3.contains(stringResources.INVALID_TOKEN)
                && msg3.contains(stringResources.ERRORS_HAVE_BEEN_FOUND)
                && msg3.contains("'a'") && msg3.contains("'b'") && msg3.contains("'f'") && !msg3.contains("[f]")
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0225() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Function API - addConstants(List<Constant> constantsList) / getConstantIndex / getConstant / getConstantsNumber / removeAllConstants";
        TestCommonTools.consolePrintTestApiStart(225, testDescr);
        Function x = new Function("x(n) = a + b + c + d");
        Constant a = new Constant("a = 1");
        Constant b = new Constant("b = 2");
        Constant c = new Constant("c = 3");
        Constant d = new Constant("d = 4");
        List<Constant> constList = new ArrayList<Constant>();
        constList.add(a);
        constList.add(b);
        constList.add(c);
        constList.add(d);

        boolean syn1 = x.checkSyntax();
        String msg1 = x.getErrorMessage();
        int nconst1 = x.getConstantsNumber();
        int apos0 = x.getConstantIndex(null);
        int apos1 = x.getConstantIndex("a");
        Constant afound1 = x.getConstant(apos1);
        Constant afound11 = x.getConstant(null);

        x.addConstants(constList);

        boolean syn2 = x.checkSyntax();
        String msg2 = x.getErrorMessage();
        int nconst2 = x.getConstantsNumber();
        int apos2 = x.getConstantIndex("a");
        Constant afound2 = x.getConstant(apos2);
        Constant afound21 = x.getConstant("a");

        x.removeAllConstants();

        boolean syn3 = x.checkSyntax();
        String msg3 = x.getErrorMessage();
        int nconst3 = x.getConstantsNumber();
        int apos3 = x.getConstantIndex("a");
        Constant afound3 = x.getConstant(apos3);
        Constant afound31 = x.getConstant("a");

        StringResources stringResources = StringModel.getStringResources();
        if (!syn1
                && msg1.contains(stringResources.INVALID_TOKEN)
                && msg1.contains("'a'") && msg1.contains("'b'") && msg1.contains("'c'") && msg1.contains("'d'")
                && nconst1 == 0 && apos0 == -1
                && afound1 == null & afound11 == null
                && syn2
                && msg2.contains(stringResources.NO_ERRORS_DETECTED)
                && !msg2.contains("'a'") && !msg2.contains("'b'") && !msg2.contains("'c'") && !msg2.contains("'d'")
                && nconst2 == 4 && apos2 == 0
                && afound2 == afound21 && afound2.getConstantName().equals("a")
                && !syn3
                && msg3.contains(stringResources.INVALID_TOKEN)
                && msg3.contains("'a'") && msg3.contains("'b'") && msg3.contains("'c'") && msg3.contains("'d'")
                && nconst3 == 0 && apos3 == -1
                && afound3 == null & afound31 == null
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0226() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Function API - defineArguments(String... argumentsNames) / getArgumentIndex(String argumentName) / getArgument(String argumentName) / getArgument(int argumentIndex) / getArgumentsNumber() / removeAllArguments()";
        TestCommonTools.consolePrintTestApiStart(226, testDescr);
        Function x = new Function("x(n) = a+b+c+d+e+f");
        String[] nullStr = null;
        x.defineArguments(nullStr);
        boolean syn1 = x.checkSyntax();
        String msg1 = x.getErrorMessage();
        int narg1 = x.getArgumentsNumber();
        int apos0 = x.getArgumentIndex(null);
        int apos1 = x.getArgumentIndex("a");
        Argument afound1 = x.getArgument(apos1);
        Argument afound11 = x.getArgument("a");
        x.defineArguments("c", "a", "b");
        boolean syn2 = x.checkSyntax();
        String msg2 = x.getErrorMessage();
        int narg2 = x.getArgumentsNumber();
        int apos2 = x.getArgumentIndex("a");
        Argument afound2 = x.getArgument(apos2);
        Argument afound21 = x.getArgument("a");
        x.defineArguments(nullStr);
        x.defineArguments("d", "f");
        boolean syn3 = x.checkSyntax();
        String msg3 = x.getErrorMessage();
        int narg3 = x.getArgumentsNumber();
        int apos3 = x.getArgumentIndex("a");
        Argument afound3 = x.getArgument(apos3);
        Argument afound31 = x.getArgument("a");
        x.removeAllArguments();
        x.defineArguments(nullStr);
        boolean syn4 = x.checkSyntax();
        String msg4 = x.getErrorMessage();
        int narg4 = x.getArgumentsNumber();
        int apos4 = x.getArgumentIndex("a");
        Argument afound4 = x.getArgument(apos4);
        Argument afound41 = x.getArgument("a");
        StringResources stringResources = StringModel.getStringResources();
        if (!syn1
                && msg1.contains(stringResources.INVALID_TOKEN)
                && msg1.contains("'a'") && msg1.contains("'b'") && msg1.contains("'c'") && msg1.contains("'d'") && msg1.contains("'f'")
                && narg1 == 1 && apos0 == -1 && apos1 == -1
                && afound1 == null && afound11 == null
                && !syn2
                && msg2.contains(stringResources.INVALID_TOKEN)
                && msg2.contains("'d'") && msg2.contains("'f'")
                && narg2 == 4 && apos2 == 2
                && afound2 == afound21 && afound2.getArgumentName().equals("a")
                && syn3
                && msg3.contains(stringResources.NO_ERRORS_DETECTED)
                && !msg3.contains("'a'") && !msg3.contains("'b'") && !msg3.contains("'c'") && !msg3.contains("'d'") && !msg3.contains("'f'")
                && narg3 == 6 && apos3 == 2
                && afound3 == afound31 && afound3.getArgumentName().equals("a")
                && !syn4
                && msg4.contains(stringResources.INVALID_TOKEN)
                && msg4.contains("'a'") && msg4.contains("'b'") && msg4.contains("'c'") && msg4.contains("'d'") && msg4.contains("'f'")
                && narg4 == 0 && apos4 == -1
                && afound4 == null && afound41 == null
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0227() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Function API - defineArguments(String... getFunctionIndex / getFunction / getFunctionsNumber / removeAllFunctions";
        TestCommonTools.consolePrintTestApiStart(227, testDescr);
        Function x = new Function("x(n) = a(1)+b(2)+c(3)+d(4)");
        Function a = new Function("a(x) = x");
        Function b = new Function("b(x) = x");
        Function c = new Function("c(x) = x");
        Function d = new Function("d(x) = x");
        int nfun0 = x.getFunctionsNumber();
        x.addFunctions(a, b, c, d);
        boolean syn1 = x.checkSyntax();
        String msg1 = x.getErrorMessage();
        int nfun1 = x.getFunctionsNumber();
        Function n1 = x.getFunction(null);
        Function n2 = x.getFunction(-1);
        Function f = x.getFunction("f");
        int bpos = x.getFunctionIndex("b");
        Function b1 = x.getFunction(bpos);
        x.removeAllFunctions();
        int nfun2 = x.getFunctionsNumber();
        boolean syn2 = x.checkSyntax();
        String msg2 = x.getErrorMessage();
        StringResources stringResources = StringModel.getStringResources();
        if (nfun0 == 0
                && syn1
                && msg1.contains(stringResources.NO_ERRORS_DETECTED)
                && nfun1 == 4
                && n1 == null
                && n2 == null
                && f == null
                && bpos == 2
                && b1 == b
                && nfun2 == 0
                && !syn2
                && msg2.contains(stringResources.INVALID_TOKEN)
                && msg2.contains("'a'") && msg2.contains("'b'") && msg2.contains("'c'") && msg2.contains("'d'")
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0228() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Function API - getRecursiveMode";
        TestCommonTools.consolePrintTestApiStart(228, testDescr);
        Function f1 = new Function("f1(n) = if(n > 1; n*f1(n-1); 1)");
        Function f2 = new Function("f2(n) = if(n > 1; n*sin(n-1); 1)");
        boolean syn1 = f1.checkSyntax();
        boolean syn2 = f2.checkSyntax();
        if (syn1 && syn2 && f1.getRecursiveMode() && !f2.getRecursiveMode())
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0229() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Function API - getParametersNumber / setParametersNumber / getParameterName";
        TestCommonTools.consolePrintTestApiStart(229, testDescr);
        Function f1 = new Function("f1(x) = 2*x");
        Function f2 = new Function("f2(x,y) = x+y");
        Function f3 = new Function("f3(...) = [npar]");
        Function f4 = new Function("f4", new FunExt());
        Function f5 = new Function("f4", new FunExtVar());
        Function f6 = new Function("f6(x,y) = x+y");
        int n1 = f1.getParametersNumber();
        f1.calculate(1,2,3,4,5);
        int n11 = f1.getParametersNumber();
        int n2 = f2.getParametersNumber();
        f2.calculate(1,2,3,4,5);
        int n21 = f2.getParametersNumber();
        int n3 = f3.getParametersNumber();
        f3.calculate(1,2,3,4,5);
        int n31 = f3.getParametersNumber();
        int n4 = f4.getParametersNumber();
        f4.calculate(1,2,3,4,5);
        int n41 = f4.getParametersNumber();
        int n5 = f5.getParametersNumber();
        f5.calculate(1,2,3,4,5);
        int n51 = f5.getParametersNumber();

        int n6 = f6.getParametersNumber();
        f6.setParametersNumber(-1);
        int n61 = f6.getParametersNumber();
        f6.setParametersNumber(3);
        int n62 = f6.getParametersNumber();

        String x1 = f1.getParameterName(0);
        String x11 = f1.getParameterName(-1);
        String x12 = f1.getParameterName(10);

        String x2 = f2.getParameterName(0);
        String x21 = f2.getParameterName(1);
        String x22 = f2.getParameterName(10);

        String x3 = f3.getParameterName(0);
        String x31 = f3.getParameterName(-1);
        String x32 = f3.getParameterName(10);

        String x4 = f4.getParameterName(1);
        String x41 = f4.getParameterName(-1);
        String x42 = f4.getParameterName(10);

        String x5 = f5.getParameterName(1);
        String x51 = f5.getParameterName(-1);
        String x52 = f5.getParameterName(10);

        if (n1 == 1 && n11 == 1
                && n2 == 2 && n21 == 2
                && n3 == -1 && n31 == 5
                && n4 == 2 && n41 == 2
                && n5 == -1 && n51 == 5
                && n6 == 2 && n61 == 2 && n62 == 3
                && x1.equals("x") && x11.equals("") && x12.equals("")
                && x2.equals("x") && x21.equals("y") && x22.equals("")
                && x3.equals("") && x31.equals("") && x32.equals("")
                && x4.equals("y") && x41.equals("") && x42.equals("")
                && x5.equals("") && x51.equals("") && x52.equals("")
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0230() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "console print always true test - just for API use & test coverage";
        TestCommonTools.consolePrintTestApiStart(230, testDescr);
        mXparser.consolePrintln("test");
        mXparser.consolePrintln();
        mXparser.consolePrint("test");
        mXparser.consolePrintHelp();
        mXparser.consolePrintLicense();
        mXparser.consolePrintSettings();
        mXparser.consolePrintSettings("aaa");
        String[] strArray = new String[2]; strArray[0] = "a"; strArray[1] = "b";
        String[] nullStrArray = null;
        mXparser.consolePrintln(strArray);
        mXparser.consolePrintln(nullStrArray);
        mXparser.consolePrintHelp("sin");
        Argument x = new Argument("x = 2");
        Constant c = new Constant("c  = 3");
        Function f = new Function("f(x,y,z)=x*y*z");
        RecursiveArgument r = new RecursiveArgument("r(n) = n*r(n-1)");
        r.addBaseCase(1,1);
        Expression e = new Expression("2+2 + x + c + f(1,2,3) + r(5)", x, c, f, r);
        mXparser.consolePrintTokens(e.getCopyOfInitialTokens());
        mXparser.consolePrintln(e.getCopyOfInitialTokens());
        e.consolePrintCopyOfInitialTokens();
        StringModel.getStringResources().print();
        StringModel.getStringResources().printInitSrc();
        StringModel.print();
        StringModel.printDescriptions();
        License.consolePrintLicense();
        mXparser.resetConsoleOutput();
        mXparser.setConsolePrefix("aaa");
        mXparser.setDefaultConsolePrefix();
        mXparser.setConsoleOutputPrefix("aaa");
        mXparser.setDefaultConsoleOutputPrefix();
        CalcStepsRegister calcStepsRegister = new CalcStepsRegister();
        e.setVerboseMode();
        e.calculate(calcStepsRegister);
        e.setSilentMode();
        calcStepsRegister.consolePrint();
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0231() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - consolePrintln / consolePrintln / resetConsoleOutput / getConsoleOutput / setConsoleOutputPrefix";
        TestCommonTools.consolePrintTestApiStart(231, testDescr);
        mXparser.resetConsoleOutput();
        String cleanA = mXparser.getConsoleOutput();
        mXparser.setConsoleOutputPrefix("TEST A: ");
        mXparser.consolePrintln("A1");
        mXparser.consolePrintln("A2");
        String testA = mXparser.getConsoleOutput();
        mXparser.setConsoleOutputPrefix("TEST B: ");
        mXparser.consolePrint("B1");
        mXparser.consolePrintln("B2");
        String testB = mXparser.getConsoleOutput();
        mXparser.resetConsoleOutput();
        String cleanB = mXparser.getConsoleOutput();
        mXparser.setDefaultConsoleOutputPrefix();
        mXparser.consolePrintln("C1");
        mXparser.consolePrintln("C2");
        String testC = mXparser.getConsoleOutput();
        mXparser.resetConsoleOutput();
        String cleanC = mXparser.getConsoleOutput();

        String newLine = System.lineSeparator();

        String resultA =
                "TEST A: A1" + newLine +
                "TEST A: A2" + newLine +
                "TEST A: "
                ;

        String resultB =
                "TEST A: A1" + newLine +
                "TEST A: A2" + newLine +
                "TEST A: B1B2" + newLine +
                "TEST B: "
                ;

        String defaultPrefix = "[mXparser-v." + mXparser.VERSION + "] ";
        String resultC =
                defaultPrefix + "C1" + newLine +
                defaultPrefix + "C2" + newLine +
                defaultPrefix
                ;

        if (testA.equals(resultA) && cleanA.length() == 0
                && testB.equals(resultB) && cleanB.length() == 0
                && testC.equals(resultC) && cleanC.length() == 0
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0232() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getLicense";
        TestCommonTools.consolePrintTestApiStart(232, testDescr);
        String license1 = License.geTermsOfAgreement();
        String license2 = License.MATHPARSERORG_MXPARSER_DUAL_LICENSE_AGREEMENT;
        String license3 = mXparser.LICENSE;
        String license4 = mXparser.getLicense();

        if (license1.equals(license2) && license3.contains(license1) && license4.contains(license1))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0233() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - mXparser.cancelCurrentCalculation / wait / resetCancelCurrentCalculationFlag";
        TestCommonTools.consolePrintTestApiStart(233, testDescr);
        mXparser.resetCancelCurrentCalculationFlag();
        boolean isCancelled0 = mXparser.isCurrentCalculationCancelled();

        LongTest runner = new LongTest();
        Thread thread = new Thread(runner);
        boolean isAlive0 = thread.isAlive();
        thread.start();
        mXparser.wait(300);

        boolean isCancelled1 = mXparser.isCurrentCalculationCancelled();
        boolean isAlive1 = thread.isAlive();
        double v1 = runner.v;
        mXparser.wait(1000);

        boolean isCancelled2 = mXparser.isCurrentCalculationCancelled();
        boolean isAlive2 = thread.isAlive();
        double v2 = runner.v;
        mXparser.wait(1000);

        double v3 = runner.v;
        boolean isCancelled3 = mXparser.isCurrentCalculationCancelled();
        boolean isAlive3 = thread.isAlive();
        mXparser.cancelCurrentCalculation();

        mXparser.wait(1000);
        boolean isCancelled4 = mXparser.isCurrentCalculationCancelled();
        boolean isAlive4 = thread.isAlive();
        double v4 = runner.v;

        mXparser.resetCancelCurrentCalculationFlag();
        boolean isCancelled5 = mXparser.isCurrentCalculationCancelled();
        boolean isAlive5 = thread.isAlive();

        if (!isCancelled0 && !isAlive0
                && !isCancelled1 && v1 == 0 && isAlive1
                && !isCancelled2 && v2 == 0 && isAlive2
                && !isCancelled3 && v3 == 0 && isAlive3
                && isCancelled4 && Double.isNaN(v4) && !isAlive4
                && !isCancelled5 && !isAlive5
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0234() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Constant API - public Constant(String constantName, double constantValue)";
        TestCommonTools.consolePrintTestApiStart(234, testDescr);
        mXparser.resetCancelCurrentCalculationFlag();
        String nullStr = null;
        Constant c1 = new Constant(nullStr, 1);
        Constant c2 = new Constant("1a", 1);
        Constant c3 = new Constant("2+3", 1);
        Constant c4 = new Constant("f(1)", 1);
        Constant c5 = new Constant("a", 1);
        Constant c6 = new Constant("a1", 2);
        Constant c7 = new Constant(" [a1]   ", 3);

        String msg1 = c1.getErrorMessage();
        String msg2 = c2.getErrorMessage();
        String msg3 = c3.getErrorMessage();
        String msg4 = c4.getErrorMessage();
        String msg5 = c5.getErrorMessage();
        String msg6 = c6.getErrorMessage();
        String msg7 = c7.getErrorMessage();

        boolean syn1 = c1.getSyntaxStatus();
        boolean syn2 = c2.getSyntaxStatus();
        boolean syn3 = c3.getSyntaxStatus();
        boolean syn4 = c4.getSyntaxStatus();
        boolean syn5 = c5.getSyntaxStatus();
        boolean syn6 = c6.getSyntaxStatus();
        boolean syn7 = c7.getSyntaxStatus();

        String n1 = c1.getConstantName();
        String n2 = c2.getConstantName();
        String n3 = c3.getConstantName();
        String n4 = c4.getConstantName();
        String n5 = c5.getConstantName();
        String n6 = c6.getConstantName();
        String n7 = c7.getConstantName();

        double v1 = c1.getConstantValue();
        double v2 = c2.getConstantValue();
        double v3 = c3.getConstantValue();
        double v4 = c4.getConstantValue();
        double v5 = c5.getConstantValue();
        double v6 = c6.getConstantValue();
        double v7 = c7.getConstantValue();

        StringResources stringResources = StringModel.getStringResources();

        if (!syn1 && msg1.contains(stringResources.PROVIDED_STRING_IS_NULL) && Double.isNaN(v1) && n1.equals("")
                && !syn2 && msg2.contains(stringResources.INVALID_CONSTANT_NAME) && Double.isNaN(v2) && n2.equals("")
                && !syn3 && msg3.contains(stringResources.INVALID_CONSTANT_NAME) && Double.isNaN(v3) && n3.equals("")
                && !syn4 && msg4.contains(stringResources.INVALID_CONSTANT_NAME) && Double.isNaN(v4) && n4.equals("")
                && syn5 && msg5.contains(stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION) && v5 == 1 && n5.equals("a")
                && syn6 && msg6.contains(stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION) && v6 == 2 && n6.equals("a1")
                && syn7 && msg7.contains(stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION) && v7 == 3 && n7.equals("[a1]")
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0235() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Constant API - public Constant(String constantName, double constantValue, String description)";
        TestCommonTools.consolePrintTestApiStart(235, testDescr);
        mXparser.resetCancelCurrentCalculationFlag();
        String nullStr = null;
        String description = "test description";
        Constant c1 = new Constant(nullStr, 1, description);
        Constant c2 = new Constant("a", 1, nullStr);
        Constant c3 = new Constant("2+3", 1, description);
        Constant c4 = new Constant("f(1)", 1, description);
        Constant c5 = new Constant("a", 1, description);
        Constant c6 = new Constant("a1", 2, description);
        Constant c7 = new Constant(" [a1]   ", 3, description);

        String msg1 = c1.getErrorMessage();
        String msg2 = c2.getErrorMessage();
        String msg3 = c3.getErrorMessage();
        String msg4 = c4.getErrorMessage();
        String msg5 = c5.getErrorMessage();
        String msg6 = c6.getErrorMessage();
        String msg7 = c7.getErrorMessage();

        boolean syn1 = c1.getSyntaxStatus();
        boolean syn2 = c2.getSyntaxStatus();
        boolean syn3 = c3.getSyntaxStatus();
        boolean syn4 = c4.getSyntaxStatus();
        boolean syn5 = c5.getSyntaxStatus();
        boolean syn6 = c6.getSyntaxStatus();
        boolean syn7 = c7.getSyntaxStatus();

        String n1 = c1.getConstantName();
        String n2 = c2.getConstantName();
        String n3 = c3.getConstantName();
        String n4 = c4.getConstantName();
        String n5 = c5.getConstantName();
        String n6 = c6.getConstantName();
        String n7 = c7.getConstantName();

        String d1 = c1.getDescription();
        String d2 = c2.getDescription();
        String d3 = c3.getDescription();
        String d4 = c4.getDescription();
        String d5 = c5.getDescription();
        String d6 = c6.getDescription();
        String d7 = c7.getDescription();

        double v1 = c1.getConstantValue();
        double v2 = c2.getConstantValue();
        double v3 = c3.getConstantValue();
        double v4 = c4.getConstantValue();
        double v5 = c5.getConstantValue();
        double v6 = c6.getConstantValue();
        double v7 = c7.getConstantValue();

        StringResources stringResources = StringModel.getStringResources();

        if (!syn1 && msg1.contains(stringResources.PROVIDED_STRING_IS_NULL) && Double.isNaN(v1) && n1.equals("") && d1.equals("")
                && !syn2 && msg2.contains(stringResources.PROVIDED_STRING_IS_NULL) && Double.isNaN(v2) && n2.equals("") && d2.equals("")
                && !syn3 && msg3.contains(stringResources.INVALID_CONSTANT_NAME) && Double.isNaN(v3) && n3.equals("") && d3.equals("")
                && !syn4 && msg4.contains(stringResources.INVALID_CONSTANT_NAME) && Double.isNaN(v4) && n4.equals("") && d4.equals("")
                && syn5 && msg5.contains(stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION) && v5 == 1 && n5.equals("a") && d5.equals(description)
                && syn6 && msg6.contains(stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION) && v6 == 2 && n6.equals("a1") && d6.equals(description)
                && syn7 && msg7.contains(stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION) && v7 == 3 && n7.equals("[a1]") && d7.equals(description)
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0236() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Constant API - public Constant(String constantDefinitionString, PrimitiveElement...elements)";
        TestCommonTools.consolePrintTestApiStart(236, testDescr);
        mXparser.resetCancelCurrentCalculationFlag();
        String nullStr = null;
        Argument[] nullParams = null;
        Constant x = new Constant("x", 4);
        Constant c1 = new Constant(nullStr, x);
        Constant c2 = new Constant("a", nullParams);
        Constant c3 = new Constant("2+3", x);
        Constant c4 = new Constant("f(1)", x);
        Constant c5 = new Constant("a = 2*x", x);
        Constant c6 = new Constant("a1 = 3*x", x);
        Constant c7 = new Constant(" [a1]   =   4*x  ", x);

        String msg1 = c1.getErrorMessage();
        String msg2 = c2.getErrorMessage();
        String msg3 = c3.getErrorMessage();
        String msg4 = c4.getErrorMessage();
        String msg5 = c5.getErrorMessage();
        String msg6 = c6.getErrorMessage();
        String msg7 = c7.getErrorMessage();

        boolean syn1 = c1.getSyntaxStatus();
        boolean syn2 = c2.getSyntaxStatus();
        boolean syn3 = c3.getSyntaxStatus();
        boolean syn4 = c4.getSyntaxStatus();
        boolean syn5 = c5.getSyntaxStatus();
        boolean syn6 = c6.getSyntaxStatus();
        boolean syn7 = c7.getSyntaxStatus();

        String n1 = c1.getConstantName();
        String n2 = c2.getConstantName();
        String n3 = c3.getConstantName();
        String n4 = c4.getConstantName();
        String n5 = c5.getConstantName();
        String n6 = c6.getConstantName();
        String n7 = c7.getConstantName();

        double v1 = c1.getConstantValue();
        double v2 = c2.getConstantValue();
        double v3 = c3.getConstantValue();
        double v4 = c4.getConstantValue();
        double v5 = c5.getConstantValue();
        double v6 = c6.getConstantValue();
        double v7 = c7.getConstantValue();

        StringResources stringResources = StringModel.getStringResources();

        if (!syn1 && msg1.contains(stringResources.PROVIDED_STRING_IS_NULL) && Double.isNaN(v1) && n1.equals("")
                && !syn2 && msg2.contains(stringResources.PROVIDED_ELEMENTS_ARE_NULL) && Double.isNaN(v2) && n2.equals("")
                && !syn3 && msg3.contains(stringResources.INVALID_CONSTANT_DEFINITION) && Double.isNaN(v3) && n3.equals("")
                && !syn4 && msg4.contains(stringResources.INVALID_CONSTANT_DEFINITION) && Double.isNaN(v4) && n4.equals("")
                && syn5 && msg5.contains(stringResources.NO_ERRORS_DETECTED) && v5 == 8 && n5.equals("a")
                && syn6 && msg6.contains(stringResources.NO_ERRORS_DETECTED) && v6 == 12 && n6.equals("a1")
                && syn7 && msg7.contains(stringResources.NO_ERRORS_DETECTED) && v7 == 16 && n7.equals("[a1]")
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0237() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Constant API - setConstantName / setConstantValue / setDescription";
        TestCommonTools.consolePrintTestApiStart(237, testDescr);
        mXparser.resetCancelCurrentCalculationFlag();
        String nullStr = null;
        Constant x = new Constant("x", 4);
        Constant c1 = new Constant(nullStr, x);
        Constant c2 = new Constant("1a", 1);
        Constant c3 = new Constant("2+3", x);
        Constant c4 = new Constant("f(1)", x);
        Constant c5 = new Constant("a = 2*x", x);
        Constant c6 = new Constant("a1 = 3*x", x);
        Constant c7 = new Constant(" [a1]   =   4*x  ", x);

        c1.setConstantName("[c1]");
        c2.setConstantName("c2");
        c3.setConstantName("c3");
        c4.setConstantName("c4");
        c5.setConstantName(nullStr);
        c6.setConstantName("a1");
        c7.setConstantName("1a");

        c1.setConstantValue(1);
        c2.setConstantValue(2);
        c3.setConstantValue(3);
        c4.setConstantValue(4);
        c5.setConstantValue(5);
        c6.setConstantValue(6);
        c7.setConstantValue(7);

        String msg1 = c1.getErrorMessage();
        String msg2 = c2.getErrorMessage();
        String msg3 = c3.getErrorMessage();
        String msg4 = c4.getErrorMessage();
        String msg5 = c5.getErrorMessage();
        String msg6 = c6.getErrorMessage();
        String msg7 = c7.getErrorMessage();

        boolean syn1 = c1.getSyntaxStatus();
        boolean syn2 = c2.getSyntaxStatus();
        boolean syn3 = c3.getSyntaxStatus();
        boolean syn4 = c4.getSyntaxStatus();
        boolean syn5 = c5.getSyntaxStatus();
        boolean syn6 = c6.getSyntaxStatus();
        boolean syn7 = c7.getSyntaxStatus();

        String n1 = c1.getConstantName();
        String n2 = c2.getConstantName();
        String n3 = c3.getConstantName();
        String n4 = c4.getConstantName();
        String n5 = c5.getConstantName();
        String n6 = c6.getConstantName();
        String n7 = c7.getConstantName();

        double v1 = c1.getConstantValue();
        double v2 = c2.getConstantValue();
        double v3 = c3.getConstantValue();
        double v4 = c4.getConstantValue();
        double v5 = c5.getConstantValue();
        double v6 = c6.getConstantValue();
        double v7 = c7.getConstantValue();

        StringResources stringResources = StringModel.getStringResources();

        if (syn1 && msg1.contains(stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION) && v1 == 1 && n1.equals("[c1]")
                && syn2 && msg2.contains(stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION) && v2 == 2 && n2.equals("c2")
                && syn3 && msg3.contains(stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION) && v3 == 3 && n3.equals("c3")
                && syn4 && msg4.contains(stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION) && v4 == 4 && n4.equals("c4")
                && syn5 && msg5.contains(stringResources.NO_ERRORS_DETECTED) && v5 == 5 && n5.equals("a")
                && syn6 && msg6.contains(stringResources.NO_ERRORS_DETECTED) && v6 == 6 && n6.equals("a1")
                && syn7 && msg7.contains(stringResources.NO_ERRORS_DETECTED) && v7 == 7 && n7.equals("[a1]")
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0238() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "License API";
        TestCommonTools.consolePrintTestApiStart(238, testDescr);

        License.iConfirmNonCommercialUse("INFIMA1");
        boolean useType1 = License.checkIfUseTypeConfirmed();
        String msg1 = License.getUseTypeConfirmationMessage();
        String err1 = License.getErrorMessage();

        License.iConfirmCommercialUse("INFIMA2");
        boolean useType2 = License.checkIfUseTypeConfirmed();
        String msg2 = License.getUseTypeConfirmationMessage();
        String err2 = License.getErrorMessage();

        License.iConfirmNonCommercialUse("INFIMA3");
        boolean useType3 = License.checkIfUseTypeConfirmed();
        String msg3 = License.getUseTypeConfirmationMessage();
        String err3 = License.getErrorMessage();

        License.iConfirmCommercialUse("INFI");
        boolean useType4 = License.checkIfUseTypeConfirmed();
        String msg4 = License.getUseTypeConfirmationMessage();
        String err4 = License.getErrorMessage();

        StringResources stringResources = StringModel.getStringResources();
        String warning = "WARNING";
        String nonCommercial = "confirmed the non-commercial";

        if (useType1 && useType2 && useType3 && useType4
                && msg1.contains("INFIMA1") && msg2.contains("INFIMA1") && msg3.contains("INFIMA1") && msg4.contains("INFIMA1")
                && err1.length() == 0 && err2.contains(warning) && err3.contains(warning) && err4.contains(warning)
                && msg1.contains(nonCommercial) && msg2.contains(nonCommercial) && msg3.contains(nonCommercial) && msg4.contains(nonCommercial)
        )
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0239() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringModel / StringResources API";
        TestCommonTools.consolePrintTestApiStart(239, testDescr);
        TestStringResources testStringResources = new TestStringResources();
        TestStringResources nullStringResources = null;
        StringResources stringResources1 = StringModel.getStringResources();
        StringModel.setStringResources(nullStringResources);
        StringResources stringResources2 = StringModel.getStringResources();
        StringModel.setStringResources(testStringResources);
        StringResources stringResources3 = StringModel.getStringResources();
        mXparser.resetConsoleOutput();
        mXparser.consolePrintHelp();
        String help1 = mXparser.getConsoleOutput();
        StringModel.setDefaultStringResources();
        StringResources stringResources4 = StringModel.getStringResources();
        mXparser.resetConsoleOutput();
        mXparser.consolePrintHelp();
        String help2 = mXparser.getConsoleOutput();

        if (stringResources1 == stringResources2
                && stringResources3 == testStringResources
                && stringResources4 != testStringResources
                && !help1.equals(help2)

                && help1.contains(testStringResources.ALL_HELP_CONTENT)
                && !help2.contains(testStringResources.ALL_HELP_CONTENT)
                && !help1.contains(stringResources4.ALL_HELP_CONTENT)
                && help2.contains(stringResources4.ALL_HELP_CONTENT)

                && help1.contains(testStringResources.KEYWORD)
                && !help2.contains(testStringResources.KEYWORD)
                && !help1.contains(stringResources4.KEYWORD)
                && help2.contains(stringResources4.KEYWORD)

                && help1.contains(testStringResources.SYNTAX)
                && !help2.contains(testStringResources.SYNTAX)
                && !help1.contains(stringResources4.SYNTAX)
                && help2.contains(stringResources4.SYNTAX)

                && help1.contains(testStringResources.NUMBER_LITERAL)
                && !help2.contains(testStringResources.NUMBER_LITERAL)
                && !help1.contains(stringResources4.NUMBER_LITERAL)
                && help2.contains(stringResources4.NUMBER_LITERAL)

                && help1.contains(testStringResources.DESCRIPTION)
                && !help2.contains(testStringResources.DESCRIPTION)
                && !help1.contains(stringResources4.DESCRIPTION)
                && help2.contains(stringResources4.DESCRIPTION)

                && !testStringResources.USER_LANGUAGE.equals(stringResources4.USER_LANGUAGE)
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0240() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "SerializationUtils API - enable / disable / isEnabled / status / message";
        TestCommonTools.consolePrintTestApiStart(240, testDescr);
        SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
        boolean statusEnabled = SerializationUtils.checkLastOperationWasSuccessful();
        boolean isEnabled = SerializationUtils.isBinarySerializationEnabled();
        String msgEnabled = SerializationUtils.getLastOperationMessage();
        SerializationUtils.disableBinarySerialization();
        boolean isDisabled = !SerializationUtils.isBinarySerializationEnabled();
        boolean statusDisabled = SerializationUtils.checkLastOperationWasSuccessful();
        String msgDisabled = SerializationUtils.getLastOperationMessage();
        StringResources stringResources = StringModel.getStringResources();
        if (isEnabled && isDisabled
                && statusEnabled && statusDisabled
                && msgEnabled.contains(stringResources.BINARY_SERIALIZATION_ENABLED)
                && msgDisabled.contains(stringResources.BINARY_SERIALIZATION_DISABLED)
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0241() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "SerializationUtils API - serializeToFile / nullFilePath + zerLengthPath + nullObject + wrongFilePath";
        TestCommonTools.consolePrintTestApiStart(241, testDescr);
        SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();

        String nullFilePath = null;
        String zerLengthPath = "";
        Argument nullObject = null;
        Argument x = new Argument("x");
        String wrongFilePath = "X:/XYZ";
        String tmpPath = System.getProperty("java.io.tmpdir");

        boolean nullFilePathExecuted = SerializationUtils.serializeToFile(x, nullFilePath);
        String nullFilePathMsg = SerializationUtils.getLastOperationMessage();
        boolean nullFilePathStatus = SerializationUtils.checkLastOperationWasSuccessful();

        boolean zerLengthPathExecuted = SerializationUtils.serializeToFile(x, zerLengthPath);
        String zerLengthPathPathMsg = SerializationUtils.getLastOperationMessage();
        boolean zerLengthPathStatus = SerializationUtils.checkLastOperationWasSuccessful();

        boolean nullObjectExecuted = SerializationUtils.serializeToFile(nullObject, tmpPath);
        String nullObjectPathMsg = SerializationUtils.getLastOperationMessage();
        boolean nullObjectStatus = SerializationUtils.checkLastOperationWasSuccessful();

        boolean wrongFilePathExecuted = SerializationUtils.serializeToFile(x, wrongFilePath);
        String wrongFilePathPathMsg = SerializationUtils.getLastOperationMessage();
        boolean wrongFilePathStatus = SerializationUtils.checkLastOperationWasSuccessful();

        SerializationUtils.disableBinarySerialization();

        StringResources stringResources = StringModel.getStringResources();

        if (!nullFilePathExecuted
                && !nullFilePathStatus
                && nullFilePathMsg.contains(stringResources.NULL_FILE_PATH_PROVIDED)

                && !zerLengthPathExecuted
                && !zerLengthPathStatus
                && zerLengthPathPathMsg.contains(stringResources.FILE_PATH_ZERO_LENGTH_PROVIDED)

                && !nullObjectExecuted
                && !nullObjectStatus
                && nullObjectPathMsg.contains(stringResources.NULL_OBJECT_PROVIDED)

                && !wrongFilePathExecuted
                && !wrongFilePathStatus
                && wrongFilePathPathMsg.contains(stringResources.EXCEPTION)

        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0242() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "SerializationUtils API - serializeToBytes / nullObject";
        TestCommonTools.consolePrintTestApiStart(242, testDescr);
        SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();

        Argument nullObject = null;

        byte[] nullObjectExecuted = SerializationUtils.serializeToBytes(nullObject);
        String nullObjectPathMsg = SerializationUtils.getLastOperationMessage();
        boolean nullObjectStatus = SerializationUtils.checkLastOperationWasSuccessful();

        SerializationUtils.disableBinarySerialization();

        StringResources stringResources = StringModel.getStringResources();

        if (nullObjectExecuted == null
                && !nullObjectStatus
                && nullObjectPathMsg.contains(stringResources.NULL_OBJECT_PROVIDED)
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0243() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "SerializationUtils API - deserializeFromBytes / deserializeFromString + nullData";
        TestCommonTools.consolePrintTestApiStart(243, testDescr);
        SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();

        byte[] nullData = null;
        String nullStr = null;

        Argument nullDataX = SerializationUtils.deserializeFromBytes(nullData);
        String nullDataMsg = SerializationUtils.getLastOperationMessage();
        boolean nullDataStatus = SerializationUtils.checkLastOperationWasSuccessful();

        Argument nullStrX = SerializationUtils.deserializeFromString(nullStr);
        String nullStrMsg = SerializationUtils.getLastOperationMessage();
        boolean nullStrStatus = SerializationUtils.checkLastOperationWasSuccessful();


        SerializationUtils.disableBinarySerialization();

        StringResources stringResources = StringModel.getStringResources();

        if (nullDataX == null
                && !nullDataStatus
                && nullDataMsg.contains(stringResources.NULL_DATA_PROVIDED)

                && nullStrX == null
                && !nullStrStatus
                && nullStrMsg.contains(stringResources.NULL_DATA_PROVIDED)
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0244() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "SerializationUtils API - deserializeFromFile / nullFilePath + zerLengthPath + nullObject + wrongFilePath";
        TestCommonTools.consolePrintTestApiStart(244, testDescr);
        SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();

        String nullFilePath = null;
        String zerLengthPath = "";
        String wrongFilePath = "X:/XYZ";
        String tmpPath = System.getProperty("java.io.tmpdir");

        Argument nullFilePathExecuted = SerializationUtils.deserializeFromFile(nullFilePath);
        String nullFilePathMsg = SerializationUtils.getLastOperationMessage();
        boolean nullFilePathStatus = SerializationUtils.checkLastOperationWasSuccessful();

        Argument zerLengthPathExecuted = SerializationUtils.deserializeFromFile(zerLengthPath);
        String zerLengthPathPathMsg = SerializationUtils.getLastOperationMessage();
        boolean zerLengthPathStatus = SerializationUtils.checkLastOperationWasSuccessful();

        Argument notAFileExecuted = SerializationUtils.deserializeFromFile(tmpPath);
        String notAFilePathMsg = SerializationUtils.getLastOperationMessage();
        boolean notAFileStatus = SerializationUtils.checkLastOperationWasSuccessful();

        Argument wrongFilePathExecuted = SerializationUtils.deserializeFromFile(wrongFilePath);
        String wrongFilePathPathMsg = SerializationUtils.getLastOperationMessage();
        boolean wrongFilePathStatus = SerializationUtils.checkLastOperationWasSuccessful();


        SerializationUtils.disableBinarySerialization();

        StringResources stringResources = StringModel.getStringResources();

        if (nullFilePathExecuted == null
                && !nullFilePathStatus
                && nullFilePathMsg.contains(stringResources.NULL_FILE_PATH_PROVIDED)

                && zerLengthPathExecuted == null
                && !zerLengthPathStatus
                && zerLengthPathPathMsg.contains(stringResources.FILE_PATH_ZERO_LENGTH_PROVIDED)

                && notAFileExecuted == null
                && !notAFileStatus
                && notAFilePathMsg.contains(stringResources.FILE_PATH_IS_NOT_A_FILE)

                && wrongFilePathExecuted == null
                && !wrongFilePathStatus
                && wrongFilePathPathMsg.contains(stringResources.FILE_PATH_NOT_EXISTS)

        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0245() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(245, testDescr);
        testResult = testCanonicalString("2 x", "2*x");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0246() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(246, testDescr);
        testResult = testCanonicalString("x 2 ", "x*2");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0247() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(247, testDescr);
        testResult = testCanonicalString("2 x sin(x) ", "2*x*sin(x)");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0248() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(248, testDescr);
        testResult = testCanonicalString("  (  2+3)  n x sin(  x )   ", "(2+3)*n*x*sin(x)");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0249() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Implied Multiplication & canonical expression string test";
        TestCommonTools.consolePrintTestApiStart(249, testDescr);
        testResult = testCanonicalString("-  (-2+3)  -n -x sin(  -  x   )   ", "-(-2+3)-n-x*sin(-x)");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0250() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsCsv()";
        TestCommonTools.consolePrintTestApiStart(250, testDescr);
        int elementsNumber = mXparser.getKeyWords().size();
        String help = mXparser.getHelpAsCsv();
        int linesNumber = StringUtils.countLines(help);
        String quote = "\"";
        String dlm = ";";
        String quoteDlm = quote + dlm + quote;
        int dlmOccurrences = StringUtils.countOccurrences(help, quoteDlm);
        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementsNumber + 1
                && elementsNumber > 500
                && dlmOccurrences == linesNumber * 4
                && help.contains(quote + stringResources.KEYWORD + quote)
                && help.contains(quote + stringResources.TYPE + quote)
                && help.contains(quote + stringResources.SYNTAX + quote)
                && help.contains(quote + stringResources.SINCE + quote)
                && help.contains(quote + stringResources.DESCRIPTION + quote)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0251() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsCsv(query)";
        TestCommonTools.consolePrintTestApiStart(251, testDescr);
        String query = "sine";
        int elementsNumber = mXparser.getKeyWords(query).size();
        String help = mXparser.getHelpAsCsv(query);
        int linesNumber = StringUtils.countLines(help);
        String quote = "\"";
        String dlm = ";";
        String quoteDlm = quote + dlm + quote;
        int dlmOccurrences = StringUtils.countOccurrences(help, quoteDlm);
        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementsNumber +1
                && elementsNumber > 5
                && elementsNumber < 100
                && dlmOccurrences == linesNumber * 4
                && help.contains(quote + stringResources.KEYWORD + quote)
                && help.contains(quote + stringResources.TYPE + quote)
                && help.contains(quote + stringResources.SYNTAX + quote)
                && help.contains(quote + stringResources.SINCE + quote)
                && help.contains(quote + stringResources.DESCRIPTION + quote)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0252() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsCsv(asjfdkasjfdhkjhkasfdlkh)";
        TestCommonTools.consolePrintTestApiStart(252, testDescr);
        String query = "asjfdkasjfdhkjhkasfdlkh";
        int elementsNumber = mXparser.getKeyWords(query).size();
        String help = mXparser.getHelpAsCsv(query);
        int linesNumber = StringUtils.countLines(help);
        String quote = "\"";
        String dlm = ";";
        String quoteDlm = quote + dlm + quote;
        int dlmOccurrences = StringUtils.countOccurrences(help, quoteDlm);
        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementsNumber +1
                && elementsNumber == 0
                && dlmOccurrences == linesNumber * 4
                && help.contains(quote + stringResources.KEYWORD + quote)
                && help.contains(quote + stringResources.TYPE + quote)
                && help.contains(quote + stringResources.SYNTAX + quote)
                && help.contains(quote + stringResources.SINCE + quote)
                && help.contains(quote + stringResources.DESCRIPTION + quote)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0253() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsCsv(null)";
        TestCommonTools.consolePrintTestApiStart(253, testDescr);
        String query = null;
        int elementsNumber = mXparser.getKeyWords(query).size();
        String help = mXparser.getHelpAsCsv(query);
        int linesNumber = StringUtils.countLines(help);
        String quote = "\"";
        String dlm = ";";
        String quoteDlm = quote + dlm + quote;
        int dlmOccurrences = StringUtils.countOccurrences(help, quoteDlm);
        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementsNumber +1
                && elementsNumber > 500
                && dlmOccurrences == linesNumber * 4
                && help.contains(quote + stringResources.KEYWORD + quote)
                && help.contains(quote + stringResources.TYPE + quote)
                && help.contains(quote + stringResources.SYNTAX + quote)
                && help.contains(quote + stringResources.SINCE + quote)
                && help.contains(quote + stringResources.DESCRIPTION + quote)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0254() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsCsv(quote, delimiter, addHeader)";
        TestCommonTools.consolePrintTestApiStart(254, testDescr);
        int elementsNumber = mXparser.getKeyWords().size();
        String quote = "''";
        String dlm = ";;";
        String quoteDlm = quote + dlm + quote;
        String help = mXparser.getHelpAsCsv(quote, dlm, false);
        int linesNumber = StringUtils.countLines(help);
        int dlmOccurrences = StringUtils.countOccurrences(help, quoteDlm);
        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementsNumber
                && elementsNumber > 500
                && dlmOccurrences == linesNumber * 4
                && !help.contains(quote + stringResources.KEYWORD + quote)
                && !help.contains(quote + stringResources.TYPE + quote)
                && !help.contains(quote + stringResources.SYNTAX + quote)
                && !help.contains(quote + stringResources.SINCE + quote)
                && !help.contains(quote + stringResources.DESCRIPTION + quote)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0255() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsCsv(query, quote, delimiter, addHeader)";
        TestCommonTools.consolePrintTestApiStart(255, testDescr);
        String query = "sine";
        int elementsNumber = mXparser.getKeyWords(query).size();
        String quote = "''";
        String dlm = ";;";
        String quoteDlm = quote + dlm + quote;
        String help = mXparser.getHelpAsCsv(query, quote, dlm, true);
        int linesNumber = StringUtils.countLines(help);
        int dlmOccurrences = StringUtils.countOccurrences(help, quoteDlm);
        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementsNumber + 1
                && elementsNumber > 5
                && elementsNumber < 100
                && dlmOccurrences == linesNumber * 4
                && help.contains(quote + stringResources.KEYWORD + quote)
                && help.contains(quote + stringResources.TYPE + quote)
                && help.contains(quote + stringResources.SYNTAX + quote)
                && help.contains(quote + stringResources.SINCE + quote)
                && help.contains(quote + stringResources.DESCRIPTION + quote)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0256() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsHtmlTable()";
        TestCommonTools.consolePrintTestApiStart(256, testDescr);
        int elementsNumber = mXparser.getKeyWords().size();
        String help = mXparser.getHelpAsHtmlTable();
        int linesNumber = StringUtils.countLines(help);

        String tdLeft = "<td>";
        String tdRight = "</td>";
        String thLeft = "<th>";
        String thRight = "</th>";
        String tableLeft = "<table>";
        String tableRight = "</table>";
        String tbodyLeft = "<tbody>";
        String tbodyRight = "</tbody>";
        String captionLeft = "<caption>";
        String captionRight = "</caption>";
        String figureLeft = "<figure>";
        String figureRight = "</figure>";
        String figcaptionLeft = "<figcaption>";
        String figcaptionRight = "</figcaption>";
        String cssClass = "class=\"";

        int tdLeftOccurrences = StringUtils.countOccurrences(help, tdLeft);
        int tdRightOccurrences = StringUtils.countOccurrences(help, tdRight);
        int thLeftOccurrences = StringUtils.countOccurrences(help, thLeft);
        int thRightOccurrences = StringUtils.countOccurrences(help, thRight);
        int tableLeftOccurrences = StringUtils.countOccurrences(help, tableLeft);
        int tableRightOccurrences = StringUtils.countOccurrences(help, tableRight);
        int tbodyLeftOccurrences = StringUtils.countOccurrences(help, tbodyLeft);
        int tbodyRightOccurrences = StringUtils.countOccurrences(help, tbodyRight);
        int captionLeftOccurrences = StringUtils.countOccurrences(help, captionLeft);
        int captionRightOccurrences = StringUtils.countOccurrences(help, captionRight);
        int figureLeftOccurrences = StringUtils.countOccurrences(help, figureLeft);
        int figureRightOccurrences = StringUtils.countOccurrences(help, figureRight);
        int figcaptionLeftOccurrences = StringUtils.countOccurrences(help, figcaptionLeft);
        int figcaptionRightOccurrences = StringUtils.countOccurrences(help, figcaptionRight);
        int cssClassOccurrences = StringUtils.countOccurrences(help, cssClass);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementsNumber + 6
                && elementsNumber > 500
                && figureLeftOccurrences == 0
                && figcaptionLeftOccurrences == 0
                && tableLeftOccurrences == 1
                && captionLeftOccurrences == 1
                && tbodyLeftOccurrences == 1
                && thLeftOccurrences == 5
                && tdLeftOccurrences == elementsNumber * 5
                && tdLeftOccurrences == tdRightOccurrences
                && thLeftOccurrences == thRightOccurrences
                && tableLeftOccurrences == tableRightOccurrences
                && tbodyLeftOccurrences == tbodyRightOccurrences
                && captionLeftOccurrences == captionRightOccurrences
                && figureLeftOccurrences == figureRightOccurrences
                && figcaptionLeftOccurrences == figcaptionRightOccurrences
                && cssClassOccurrences == 0
                && help.contains(thLeft + stringResources.KEYWORD + thRight)
                && help.contains(thLeft + stringResources.TYPE + thRight)
                && help.contains(thLeft + stringResources.SYNTAX + thRight)
                && help.contains(thLeft + stringResources.SINCE + thRight)
                && help.contains(thLeft + stringResources.DESCRIPTION + thRight)
                && help.contains(stringResources.ALL_HELP_CONTENT)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0257() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsHtmlTable(sine)";
        TestCommonTools.consolePrintTestApiStart(257, testDescr);
        String query = "sine";
        int elementNumber = mXparser.getKeyWords(query).size();
        String help = mXparser.getHelpAsHtmlTable(query);
        int linesNumber = StringUtils.countLines(help);

        String tdLeft = "<td>";
        String tdRight = "</td>";
        String thLeft = "<th>";
        String thRight = "</th>";
        String tableLeft = "<table>";
        String tableRight = "</table>";
        String tbodyLeft = "<tbody>";
        String tbodyRight = "</tbody>";
        String captionLeft = "<caption>";
        String captionRight = "</caption>";
        String figureLeft = "<figure>";
        String figureRight = "</figure>";
        String figcaptionLeft = "<figcaption>";
        String figcaptionRight = "</figcaption>";
        String cssClass = "class=\"";

        int tdLeftOccurrences = StringUtils.countOccurrences(help, tdLeft);
        int tdRightOccurrences = StringUtils.countOccurrences(help, tdRight);
        int thLeftOccurrences = StringUtils.countOccurrences(help, thLeft);
        int thRightOccurrences = StringUtils.countOccurrences(help, thRight);
        int tableLeftOccurrences = StringUtils.countOccurrences(help, tableLeft);
        int tableRightOccurrences = StringUtils.countOccurrences(help, tableRight);
        int tbodyLeftOccurrences = StringUtils.countOccurrences(help, tbodyLeft);
        int tbodyRightOccurrences = StringUtils.countOccurrences(help, tbodyRight);
        int captionLeftOccurrences = StringUtils.countOccurrences(help, captionLeft);
        int captionRightOccurrences = StringUtils.countOccurrences(help, captionRight);
        int figureLeftOccurrences = StringUtils.countOccurrences(help, figureLeft);
        int figureRightOccurrences = StringUtils.countOccurrences(help, figureRight);
        int figcaptionLeftOccurrences = StringUtils.countOccurrences(help, figcaptionLeft);
        int figcaptionRightOccurrences = StringUtils.countOccurrences(help, figcaptionRight);
        int cssClassOccurrences = StringUtils.countOccurrences(help, cssClass);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementNumber + 6
                && elementNumber > 5
                && elementNumber < 100
                && figureLeftOccurrences == 0
                && figcaptionLeftOccurrences == 0
                && tableLeftOccurrences == 1
                && captionLeftOccurrences == 1
                && tbodyLeftOccurrences == 1
                && thLeftOccurrences == 5
                && tdLeftOccurrences == elementNumber * 5
                && tdLeftOccurrences == tdRightOccurrences
                && thLeftOccurrences == thRightOccurrences
                && tableLeftOccurrences == tableRightOccurrences
                && tbodyLeftOccurrences == tbodyRightOccurrences
                && captionLeftOccurrences == captionRightOccurrences
                && figureLeftOccurrences == figureRightOccurrences
                && figcaptionLeftOccurrences == figcaptionRightOccurrences
                && cssClassOccurrences == 0
                && help.contains(thLeft + stringResources.KEYWORD + thRight)
                && help.contains(thLeft + stringResources.TYPE + thRight)
                && help.contains(thLeft + stringResources.SYNTAX + thRight)
                && help.contains(thLeft + stringResources.SINCE + thRight)
                && help.contains(thLeft + stringResources.DESCRIPTION + thRight)
                && help.contains(stringResources.HELP_CONTENT_LIMITED_TO_QUERY)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0258() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsHtmlTable(asjfdkasjfdhkjhkasfdlkh)";
        TestCommonTools.consolePrintTestApiStart(258, testDescr);
        String query = "asjfdkasjfdhkjhkasfdlkh";
        int elementNumber = mXparser.getKeyWords(query).size();
        String help = mXparser.getHelpAsHtmlTable(query);
        int linesNumber = StringUtils.countLines(help);

        String tdLeft = "<td>";
        String tdRight = "</td>";
        String thLeft = "<th>";
        String thRight = "</th>";
        String tableLeft = "<table>";
        String tableRight = "</table>";
        String tbodyLeft = "<tbody>";
        String tbodyRight = "</tbody>";
        String captionLeft = "<caption>";
        String captionRight = "</caption>";
        String figureLeft = "<figure>";
        String figureRight = "</figure>";
        String figcaptionLeft = "<figcaption>";
        String figcaptionRight = "</figcaption>";
        String cssClass = "class=\"";

        int tdLeftOccurrences = StringUtils.countOccurrences(help, tdLeft);
        int tdRightOccurrences = StringUtils.countOccurrences(help, tdRight);
        int thLeftOccurrences = StringUtils.countOccurrences(help, thLeft);
        int thRightOccurrences = StringUtils.countOccurrences(help, thRight);
        int tableLeftOccurrences = StringUtils.countOccurrences(help, tableLeft);
        int tableRightOccurrences = StringUtils.countOccurrences(help, tableRight);
        int tbodyLeftOccurrences = StringUtils.countOccurrences(help, tbodyLeft);
        int tbodyRightOccurrences = StringUtils.countOccurrences(help, tbodyRight);
        int captionLeftOccurrences = StringUtils.countOccurrences(help, captionLeft);
        int captionRightOccurrences = StringUtils.countOccurrences(help, captionRight);
        int figureLeftOccurrences = StringUtils.countOccurrences(help, figureLeft);
        int figureRightOccurrences = StringUtils.countOccurrences(help, figureRight);
        int figcaptionLeftOccurrences = StringUtils.countOccurrences(help, figcaptionLeft);
        int figcaptionRightOccurrences = StringUtils.countOccurrences(help, figcaptionRight);
        int cssClassOccurrences = StringUtils.countOccurrences(help, cssClass);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementNumber + 6
                && elementNumber == 0
                && figureLeftOccurrences == 0
                && figcaptionLeftOccurrences == 0
                && tableLeftOccurrences == 1
                && captionLeftOccurrences == 1
                && tbodyLeftOccurrences == 1
                && thLeftOccurrences == 5
                && tdLeftOccurrences == elementNumber * 5
                && tdLeftOccurrences == tdRightOccurrences
                && thLeftOccurrences == thRightOccurrences
                && tableLeftOccurrences == tableRightOccurrences
                && tbodyLeftOccurrences == tbodyRightOccurrences
                && captionLeftOccurrences == captionRightOccurrences
                && figureLeftOccurrences == figureRightOccurrences
                && figcaptionLeftOccurrences == figcaptionRightOccurrences
                && cssClassOccurrences == 0
                && help.contains(thLeft + stringResources.KEYWORD + thRight)
                && help.contains(thLeft + stringResources.TYPE + thRight)
                && help.contains(thLeft + stringResources.SYNTAX + thRight)
                && help.contains(thLeft + stringResources.SINCE + thRight)
                && help.contains(thLeft + stringResources.DESCRIPTION + thRight)
                && help.contains(stringResources.HELP_CONTENT_LIMITED_TO_QUERY)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0259() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsHtmlTable(addHeader = true, addCaption = true, addFigure = true, caption = '', cssClass = '')";
        TestCommonTools.consolePrintTestApiStart(259, testDescr);
        int elementNumber = mXparser.getKeyWords().size();
        String help = mXparser.getHelpAsHtmlTable(true, true, true, "", "");
        int linesNumber = StringUtils.countLines(help);

        String tdLeft = "<td>";
        String tdRight = "</td>";
        String thLeft = "<th>";
        String thRight = "</th>";
        String tableLeft = "<table>";
        String tableRight = "</table>";
        String tbodyLeft = "<tbody>";
        String tbodyRight = "</tbody>";
        String captionLeft = "<caption>";
        String captionRight = "</caption>";
        String figureLeft = "<figure>";
        String figureRight = "</figure>";
        String figcaptionLeft = "<figcaption>";
        String figcaptionRight = "</figcaption>";
        String cssClass = "class=\"";

        int tdLeftOccurrences = StringUtils.countOccurrences(help, tdLeft);
        int tdRightOccurrences = StringUtils.countOccurrences(help, tdRight);
        int thLeftOccurrences = StringUtils.countOccurrences(help, thLeft);
        int thRightOccurrences = StringUtils.countOccurrences(help, thRight);
        int tableLeftOccurrences = StringUtils.countOccurrences(help, tableLeft);
        int tableRightOccurrences = StringUtils.countOccurrences(help, tableRight);
        int tbodyLeftOccurrences = StringUtils.countOccurrences(help, tbodyLeft);
        int tbodyRightOccurrences = StringUtils.countOccurrences(help, tbodyRight);
        int captionLeftOccurrences = StringUtils.countOccurrences(help, captionLeft);
        int captionRightOccurrences = StringUtils.countOccurrences(help, captionRight);
        int figureLeftOccurrences = StringUtils.countOccurrences(help, figureLeft);
        int figureRightOccurrences = StringUtils.countOccurrences(help, figureRight);
        int figcaptionLeftOccurrences = StringUtils.countOccurrences(help, figcaptionLeft);
        int figcaptionRightOccurrences = StringUtils.countOccurrences(help, figcaptionRight);
        int cssClassOccurrences = StringUtils.countOccurrences(help, cssClass);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementNumber + 8
                && elementNumber > 500
                && figureLeftOccurrences == 1
                && figcaptionLeftOccurrences == 1
                && tableLeftOccurrences == 1
                && captionLeftOccurrences == 0
                && tbodyLeftOccurrences == 1
                && thLeftOccurrences == 5
                && tdLeftOccurrences == elementNumber * 5
                && tdLeftOccurrences == tdRightOccurrences
                && thLeftOccurrences == thRightOccurrences
                && tableLeftOccurrences == tableRightOccurrences
                && tbodyLeftOccurrences == tbodyRightOccurrences
                && captionLeftOccurrences == captionRightOccurrences
                && figureLeftOccurrences == figureRightOccurrences
                && figcaptionLeftOccurrences == figcaptionRightOccurrences
                && cssClassOccurrences == 0
                && help.contains(thLeft + stringResources.KEYWORD + thRight)
                && help.contains(thLeft + stringResources.TYPE + thRight)
                && help.contains(thLeft + stringResources.SYNTAX + thRight)
                && help.contains(thLeft + stringResources.SINCE + thRight)
                && help.contains(thLeft + stringResources.DESCRIPTION + thRight)
                && help.contains(stringResources.ALL_HELP_CONTENT)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0260() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsHtmlTable(addHeader = true, addCaption = true, addFigure = true, caption = 'This is a caption', cssClass = 'wp-1')";
        TestCommonTools.consolePrintTestApiStart(260, testDescr);
        int elementNumber = mXparser.getKeyWords().size();
        String captionText = "This is a caption";
        String cssClassText = "wp-1";
        String help = mXparser.getHelpAsHtmlTable(true, true, true, captionText, cssClassText);
        int linesNumber = StringUtils.countLines(help);

        String tdLeft = "<td>";
        String tdRight = "</td>";
        String thLeft = "<th>";
        String thRight = "</th>";
        String tableLeft = "<table>";
        String tableRight = "</table>";
        String tbodyLeft = "<tbody>";
        String tbodyRight = "</tbody>";
        String captionLeft = "<caption>";
        String captionRight = "</caption>";
        String cssClass = "class=\"" + cssClassText + "\"";
        String figureLeft = "<figure " + cssClass + ">";
        String figureRight = "</figure>";
        String figcaptionLeft = "<figcaption>";
        String figcaptionRight = "</figcaption>";

        int tdLeftOccurrences = StringUtils.countOccurrences(help, tdLeft);
        int tdRightOccurrences = StringUtils.countOccurrences(help, tdRight);
        int thLeftOccurrences = StringUtils.countOccurrences(help, thLeft);
        int thRightOccurrences = StringUtils.countOccurrences(help, thRight);
        int tableLeftOccurrences = StringUtils.countOccurrences(help, tableLeft);
        int tableRightOccurrences = StringUtils.countOccurrences(help, tableRight);
        int tbodyLeftOccurrences = StringUtils.countOccurrences(help, tbodyLeft);
        int tbodyRightOccurrences = StringUtils.countOccurrences(help, tbodyRight);
        int captionLeftOccurrences = StringUtils.countOccurrences(help, captionLeft);
        int captionRightOccurrences = StringUtils.countOccurrences(help, captionRight);
        int figureLeftOccurrences = StringUtils.countOccurrences(help, figureLeft);
        int figureRightOccurrences = StringUtils.countOccurrences(help, figureRight);
        int figcaptionLeftOccurrences = StringUtils.countOccurrences(help, figcaptionLeft);
        int figcaptionRightOccurrences = StringUtils.countOccurrences(help, figcaptionRight);
        int cssClassOccurrences = StringUtils.countOccurrences(help, cssClass);
        int captionTextOccurrences = StringUtils.countOccurrences(help, captionText);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementNumber + 8
                && elementNumber > 500
                && figureLeftOccurrences == 1
                && figcaptionLeftOccurrences == 1
                && tableLeftOccurrences == 1
                && captionLeftOccurrences == 0
                && tbodyLeftOccurrences == 1
                && thLeftOccurrences == 5
                && tdLeftOccurrences == elementNumber * 5
                && tdLeftOccurrences == tdRightOccurrences
                && thLeftOccurrences == thRightOccurrences
                && tableLeftOccurrences == tableRightOccurrences
                && tbodyLeftOccurrences == tbodyRightOccurrences
                && captionLeftOccurrences == captionRightOccurrences
                && figureLeftOccurrences == figureRightOccurrences
                && figcaptionLeftOccurrences == figcaptionRightOccurrences
                && cssClassOccurrences == 1
                && captionTextOccurrences == 1
                && help.contains(thLeft + stringResources.KEYWORD + thRight)
                && help.contains(thLeft + stringResources.TYPE + thRight)
                && help.contains(thLeft + stringResources.SYNTAX + thRight)
                && help.contains(thLeft + stringResources.SINCE + thRight)
                && help.contains(thLeft + stringResources.DESCRIPTION + thRight)
                && help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0261() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsHtmlTable(addHeader = true, addCaption = true, addFigure = false, caption = 'This is a caption', cssClass = 'wp-1')";
        TestCommonTools.consolePrintTestApiStart(261, testDescr);
        int elementNumber = mXparser.getKeyWords().size();
        String captionText = "This is a caption";
        String cssClassText = "wp-1";
        String help = mXparser.getHelpAsHtmlTable(true, true, false, captionText, cssClassText);
        int linesNumber = StringUtils.countLines(help);

        String cssClass = "class=\"" + cssClassText + "\"";
        String tdLeft = "<td>";
        String tdRight = "</td>";
        String thLeft = "<th>";
        String thRight = "</th>";
        String tableLeft = "<table " + cssClass + ">";
        String tableRight = "</table>";
        String tbodyLeft = "<tbody>";
        String tbodyRight = "</tbody>";
        String captionLeft = "<caption>";
        String captionRight = "</caption>";
        String figureLeft = "<figure>";
        String figureRight = "</figure>";
        String figcaptionLeft = "<figcaption>";
        String figcaptionRight = "</figcaption>";

        int tdLeftOccurrences = StringUtils.countOccurrences(help, tdLeft);
        int tdRightOccurrences = StringUtils.countOccurrences(help, tdRight);
        int thLeftOccurrences = StringUtils.countOccurrences(help, thLeft);
        int thRightOccurrences = StringUtils.countOccurrences(help, thRight);
        int tableLeftOccurrences = StringUtils.countOccurrences(help, tableLeft);
        int tableRightOccurrences = StringUtils.countOccurrences(help, tableRight);
        int tbodyLeftOccurrences = StringUtils.countOccurrences(help, tbodyLeft);
        int tbodyRightOccurrences = StringUtils.countOccurrences(help, tbodyRight);
        int captionLeftOccurrences = StringUtils.countOccurrences(help, captionLeft);
        int captionRightOccurrences = StringUtils.countOccurrences(help, captionRight);
        int figureLeftOccurrences = StringUtils.countOccurrences(help, figureLeft);
        int figureRightOccurrences = StringUtils.countOccurrences(help, figureRight);
        int figcaptionLeftOccurrences = StringUtils.countOccurrences(help, figcaptionLeft);
        int figcaptionRightOccurrences = StringUtils.countOccurrences(help, figcaptionRight);
        int cssClassOccurrences = StringUtils.countOccurrences(help, cssClass);
        int captionTextOccurrences = StringUtils.countOccurrences(help, captionText);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementNumber + 6
                && elementNumber > 500
                && figureLeftOccurrences == 0
                && figcaptionLeftOccurrences == 0
                && tableLeftOccurrences == 1
                && captionLeftOccurrences == 1
                && tbodyLeftOccurrences == 1
                && thLeftOccurrences == 5
                && tdLeftOccurrences == elementNumber * 5
                && tdLeftOccurrences == tdRightOccurrences
                && thLeftOccurrences == thRightOccurrences
                && tableLeftOccurrences == tableRightOccurrences
                && tbodyLeftOccurrences == tbodyRightOccurrences
                && captionLeftOccurrences == captionRightOccurrences
                && figureLeftOccurrences == figureRightOccurrences
                && figcaptionLeftOccurrences == figcaptionRightOccurrences
                && cssClassOccurrences == 1
                && captionTextOccurrences == 1
                && help.contains(thLeft + stringResources.KEYWORD + thRight)
                && help.contains(thLeft + stringResources.TYPE + thRight)
                && help.contains(thLeft + stringResources.SYNTAX + thRight)
                && help.contains(thLeft + stringResources.SINCE + thRight)
                && help.contains(thLeft + stringResources.DESCRIPTION + thRight)
                && help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0262() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsHtmlTable(addHeader = false, addCaption = true, addFigure = false, caption = 'This is a caption', cssClass = 'wp-1')";
        TestCommonTools.consolePrintTestApiStart(262, testDescr);
        int elementNumber = mXparser.getKeyWords().size();
        String captionText = "This is a caption";
        String cssClassText = "wp-1";
        String help = mXparser.getHelpAsHtmlTable(false, true, false, captionText, cssClassText);
        int linesNumber = StringUtils.countLines(help);

        String cssClass = "class=\"" + cssClassText + "\"";
        String tdLeft = "<td>";
        String tdRight = "</td>";
        String thLeft = "<th>";
        String thRight = "</th>";
        String tableLeft = "<table " + cssClass + ">";
        String tableRight = "</table>";
        String tbodyLeft = "<tbody>";
        String tbodyRight = "</tbody>";
        String captionLeft = "<caption>";
        String captionRight = "</caption>";
        String figureLeft = "<figure>";
        String figureRight = "</figure>";
        String figcaptionLeft = "<figcaption>";
        String figcaptionRight = "</figcaption>";

        int tdLeftOccurrences = StringUtils.countOccurrences(help, tdLeft);
        int tdRightOccurrences = StringUtils.countOccurrences(help, tdRight);
        int thLeftOccurrences = StringUtils.countOccurrences(help, thLeft);
        int thRightOccurrences = StringUtils.countOccurrences(help, thRight);
        int tableLeftOccurrences = StringUtils.countOccurrences(help, tableLeft);
        int tableRightOccurrences = StringUtils.countOccurrences(help, tableRight);
        int tbodyLeftOccurrences = StringUtils.countOccurrences(help, tbodyLeft);
        int tbodyRightOccurrences = StringUtils.countOccurrences(help, tbodyRight);
        int captionLeftOccurrences = StringUtils.countOccurrences(help, captionLeft);
        int captionRightOccurrences = StringUtils.countOccurrences(help, captionRight);
        int figureLeftOccurrences = StringUtils.countOccurrences(help, figureLeft);
        int figureRightOccurrences = StringUtils.countOccurrences(help, figureRight);
        int figcaptionLeftOccurrences = StringUtils.countOccurrences(help, figcaptionLeft);
        int figcaptionRightOccurrences = StringUtils.countOccurrences(help, figcaptionRight);
        int cssClassOccurrences = StringUtils.countOccurrences(help, cssClass);
        int captionTextOccurrences = StringUtils.countOccurrences(help, captionText);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementNumber + 5
                && elementNumber > 500
                && figureLeftOccurrences == 0
                && figcaptionLeftOccurrences == 0
                && tableLeftOccurrences == 1
                && captionLeftOccurrences == 1
                && tbodyLeftOccurrences == 1
                && thLeftOccurrences == 0
                && tdLeftOccurrences == elementNumber * 5
                && tdLeftOccurrences == tdRightOccurrences
                && thLeftOccurrences == thRightOccurrences
                && tableLeftOccurrences == tableRightOccurrences
                && tbodyLeftOccurrences == tbodyRightOccurrences
                && captionLeftOccurrences == captionRightOccurrences
                && figureLeftOccurrences == figureRightOccurrences
                && figcaptionLeftOccurrences == figcaptionRightOccurrences
                && cssClassOccurrences == 1
                && captionTextOccurrences == 1
                && !help.contains(thLeft + stringResources.KEYWORD + thRight)
                && !help.contains(thLeft + stringResources.TYPE + thRight)
                && !help.contains(thLeft + stringResources.SYNTAX + thRight)
                && !help.contains(thLeft + stringResources.SINCE + thRight)
                && !help.contains(thLeft + stringResources.DESCRIPTION + thRight)
                && help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0263() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsHtmlTable(addHeader = false, addCaption = false, addFigure = false, caption = 'This is a caption', cssClass = 'wp-1')";
        TestCommonTools.consolePrintTestApiStart(263, testDescr);
        int elementNumber = mXparser.getKeyWords().size();
        String captionText = "This is a caption";
        String cssClassText = "wp-1";
        String help = mXparser.getHelpAsHtmlTable(false, false, false, captionText, cssClassText);
        int linesNumber = StringUtils.countLines(help);

        String cssClass = "class=\"" + cssClassText + "\"";
        String tdLeft = "<td>";
        String tdRight = "</td>";
        String thLeft = "<th>";
        String thRight = "</th>";
        String tableLeft = "<table " + cssClass + ">";
        String tableRight = "</table>";
        String tbodyLeft = "<tbody>";
        String tbodyRight = "</tbody>";
        String captionLeft = "<caption>";
        String captionRight = "</caption>";
        String figureLeft = "<figure>";
        String figureRight = "</figure>";
        String figcaptionLeft = "<figcaption>";
        String figcaptionRight = "</figcaption>";

        int tdLeftOccurrences = StringUtils.countOccurrences(help, tdLeft);
        int tdRightOccurrences = StringUtils.countOccurrences(help, tdRight);
        int thLeftOccurrences = StringUtils.countOccurrences(help, thLeft);
        int thRightOccurrences = StringUtils.countOccurrences(help, thRight);
        int tableLeftOccurrences = StringUtils.countOccurrences(help, tableLeft);
        int tableRightOccurrences = StringUtils.countOccurrences(help, tableRight);
        int tbodyLeftOccurrences = StringUtils.countOccurrences(help, tbodyLeft);
        int tbodyRightOccurrences = StringUtils.countOccurrences(help, tbodyRight);
        int captionLeftOccurrences = StringUtils.countOccurrences(help, captionLeft);
        int captionRightOccurrences = StringUtils.countOccurrences(help, captionRight);
        int figureLeftOccurrences = StringUtils.countOccurrences(help, figureLeft);
        int figureRightOccurrences = StringUtils.countOccurrences(help, figureRight);
        int figcaptionLeftOccurrences = StringUtils.countOccurrences(help, figcaptionLeft);
        int figcaptionRightOccurrences = StringUtils.countOccurrences(help, figcaptionRight);
        int cssClassOccurrences = StringUtils.countOccurrences(help, cssClass);
        int captionTextOccurrences = StringUtils.countOccurrences(help, captionText);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementNumber + 4
                && elementNumber > 500
                && figureLeftOccurrences == 0
                && figcaptionLeftOccurrences == 0
                && tableLeftOccurrences == 1
                && captionLeftOccurrences == 0
                && tbodyLeftOccurrences == 1
                && thLeftOccurrences == 0
                && tdLeftOccurrences == elementNumber * 5
                && tdLeftOccurrences == tdRightOccurrences
                && thLeftOccurrences == thRightOccurrences
                && tableLeftOccurrences == tableRightOccurrences
                && tbodyLeftOccurrences == tbodyRightOccurrences
                && captionLeftOccurrences == captionRightOccurrences
                && figureLeftOccurrences == figureRightOccurrences
                && figcaptionLeftOccurrences == figcaptionRightOccurrences
                && cssClassOccurrences == 1
                && captionTextOccurrences == 0
                && !help.contains(thLeft + stringResources.KEYWORD + thRight)
                && !help.contains(thLeft + stringResources.TYPE + thRight)
                && !help.contains(thLeft + stringResources.SYNTAX + thRight)
                && !help.contains(thLeft + stringResources.SINCE + thRight)
                && !help.contains(thLeft + stringResources.DESCRIPTION + thRight)
                && !help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0264() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsHtmlTable(addHeader = false, addCaption = false, addFigure = true, caption = 'This is a caption', cssClass = '')";
        TestCommonTools.consolePrintTestApiStart(264, testDescr);
        int elementNumber = mXparser.getKeyWords().size();
        String captionText = "This is a caption";
        String help = mXparser.getHelpAsHtmlTable(false, false, true, captionText, "");
        int linesNumber = StringUtils.countLines(help);

        String cssClass = "class=\"";
        String tdLeft = "<td>";
        String tdRight = "</td>";
        String thLeft = "<th>";
        String thRight = "</th>";
        String tableLeft = "<table>";
        String tableRight = "</table>";
        String tbodyLeft = "<tbody>";
        String tbodyRight = "</tbody>";
        String captionLeft = "<caption>";
        String captionRight = "</caption>";
        String figureLeft = "<figure>";
        String figureRight = "</figure>";
        String figcaptionLeft = "<figcaption>";
        String figcaptionRight = "</figcaption>";

        int tdLeftOccurrences = StringUtils.countOccurrences(help, tdLeft);
        int tdRightOccurrences = StringUtils.countOccurrences(help, tdRight);
        int thLeftOccurrences = StringUtils.countOccurrences(help, thLeft);
        int thRightOccurrences = StringUtils.countOccurrences(help, thRight);
        int tableLeftOccurrences = StringUtils.countOccurrences(help, tableLeft);
        int tableRightOccurrences = StringUtils.countOccurrences(help, tableRight);
        int tbodyLeftOccurrences = StringUtils.countOccurrences(help, tbodyLeft);
        int tbodyRightOccurrences = StringUtils.countOccurrences(help, tbodyRight);
        int captionLeftOccurrences = StringUtils.countOccurrences(help, captionLeft);
        int captionRightOccurrences = StringUtils.countOccurrences(help, captionRight);
        int figureLeftOccurrences = StringUtils.countOccurrences(help, figureLeft);
        int figureRightOccurrences = StringUtils.countOccurrences(help, figureRight);
        int figcaptionLeftOccurrences = StringUtils.countOccurrences(help, figcaptionLeft);
        int figcaptionRightOccurrences = StringUtils.countOccurrences(help, figcaptionRight);
        int cssClassOccurrences = StringUtils.countOccurrences(help, cssClass);
        int captionTextOccurrences = StringUtils.countOccurrences(help, captionText);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementNumber + 6
                && elementNumber > 500
                && figureLeftOccurrences == 1
                && figcaptionLeftOccurrences == 0
                && tableLeftOccurrences == 1
                && captionLeftOccurrences == 0
                && tbodyLeftOccurrences == 1
                && thLeftOccurrences == 0
                && tdLeftOccurrences == elementNumber * 5
                && tdLeftOccurrences == tdRightOccurrences
                && thLeftOccurrences == thRightOccurrences
                && tableLeftOccurrences == tableRightOccurrences
                && tbodyLeftOccurrences == tbodyRightOccurrences
                && captionLeftOccurrences == captionRightOccurrences
                && figureLeftOccurrences == figureRightOccurrences
                && figcaptionLeftOccurrences == figcaptionRightOccurrences
                && cssClassOccurrences == 0
                && captionTextOccurrences == 0
                && !help.contains(thLeft + stringResources.KEYWORD + thRight)
                && !help.contains(thLeft + stringResources.TYPE + thRight)
                && !help.contains(thLeft + stringResources.SYNTAX + thRight)
                && !help.contains(thLeft + stringResources.SINCE + thRight)
                && !help.contains(thLeft + stringResources.DESCRIPTION + thRight)
                && !help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0265() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsHtmlTable(query, addHeader = true, addCaption = true, addFigure = true, caption = '', cssClass = '')";
        TestCommonTools.consolePrintTestApiStart(265, testDescr);
        String query = "sine";
        int elementNumber = mXparser.getKeyWords(query).size();
        String help = mXparser.getHelpAsHtmlTable(query, true, true, true, "", "");
        int linesNumber = StringUtils.countLines(help);

        String tdLeft = "<td>";
        String tdRight = "</td>";
        String thLeft = "<th>";
        String thRight = "</th>";
        String tableLeft = "<table>";
        String tableRight = "</table>";
        String tbodyLeft = "<tbody>";
        String tbodyRight = "</tbody>";
        String captionLeft = "<caption>";
        String captionRight = "</caption>";
        String figureLeft = "<figure>";
        String figureRight = "</figure>";
        String figcaptionLeft = "<figcaption>";
        String figcaptionRight = "</figcaption>";
        String cssClass = "class=\"";

        int tdLeftOccurrences = StringUtils.countOccurrences(help, tdLeft);
        int tdRightOccurrences = StringUtils.countOccurrences(help, tdRight);
        int thLeftOccurrences = StringUtils.countOccurrences(help, thLeft);
        int thRightOccurrences = StringUtils.countOccurrences(help, thRight);
        int tableLeftOccurrences = StringUtils.countOccurrences(help, tableLeft);
        int tableRightOccurrences = StringUtils.countOccurrences(help, tableRight);
        int tbodyLeftOccurrences = StringUtils.countOccurrences(help, tbodyLeft);
        int tbodyRightOccurrences = StringUtils.countOccurrences(help, tbodyRight);
        int captionLeftOccurrences = StringUtils.countOccurrences(help, captionLeft);
        int captionRightOccurrences = StringUtils.countOccurrences(help, captionRight);
        int figureLeftOccurrences = StringUtils.countOccurrences(help, figureLeft);
        int figureRightOccurrences = StringUtils.countOccurrences(help, figureRight);
        int figcaptionLeftOccurrences = StringUtils.countOccurrences(help, figcaptionLeft);
        int figcaptionRightOccurrences = StringUtils.countOccurrences(help, figcaptionRight);
        int cssClassOccurrences = StringUtils.countOccurrences(help, cssClass);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementNumber + 8
                && elementNumber > 5
                && elementNumber < 100
                && figureLeftOccurrences == 1
                && figcaptionLeftOccurrences == 1
                && tableLeftOccurrences == 1
                && captionLeftOccurrences == 0
                && tbodyLeftOccurrences == 1
                && thLeftOccurrences == 5
                && tdLeftOccurrences == elementNumber * 5
                && tdLeftOccurrences == tdRightOccurrences
                && thLeftOccurrences == thRightOccurrences
                && tableLeftOccurrences == tableRightOccurrences
                && tbodyLeftOccurrences == tbodyRightOccurrences
                && captionLeftOccurrences == captionRightOccurrences
                && figureLeftOccurrences == figureRightOccurrences
                && figcaptionLeftOccurrences == figcaptionRightOccurrences
                && cssClassOccurrences == 0
                && help.contains(thLeft + stringResources.KEYWORD + thRight)
                && help.contains(thLeft + stringResources.TYPE + thRight)
                && help.contains(thLeft + stringResources.SYNTAX + thRight)
                && help.contains(thLeft + stringResources.SINCE + thRight)
                && help.contains(thLeft + stringResources.DESCRIPTION + thRight)
                && help.contains(stringResources.HELP_CONTENT_LIMITED_TO_QUERY)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0266() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsHtmlTable(query, addHeader = true, addCaption = true, addFigure = true, caption = 'This is a caption', cssClass = 'wp-1')";
        TestCommonTools.consolePrintTestApiStart(266, testDescr);
        String query = "sine";
        int elementNumber = mXparser.getKeyWords(query).size();
        String captionText = "This is a caption";
        String cssClassText = "wp-1";
        String help = mXparser.getHelpAsHtmlTable(query, true, true, true, captionText, cssClassText);
        int linesNumber = StringUtils.countLines(help);

        String tdLeft = "<td>";
        String tdRight = "</td>";
        String thLeft = "<th>";
        String thRight = "</th>";
        String tableLeft = "<table>";
        String tableRight = "</table>";
        String tbodyLeft = "<tbody>";
        String tbodyRight = "</tbody>";
        String captionLeft = "<caption>";
        String captionRight = "</caption>";
        String cssClass = "class=\"" + cssClassText + "\"";
        String figureLeft = "<figure " + cssClass + ">";
        String figureRight = "</figure>";
        String figcaptionLeft = "<figcaption>";
        String figcaptionRight = "</figcaption>";

        int tdLeftOccurrences = StringUtils.countOccurrences(help, tdLeft);
        int tdRightOccurrences = StringUtils.countOccurrences(help, tdRight);
        int thLeftOccurrences = StringUtils.countOccurrences(help, thLeft);
        int thRightOccurrences = StringUtils.countOccurrences(help, thRight);
        int tableLeftOccurrences = StringUtils.countOccurrences(help, tableLeft);
        int tableRightOccurrences = StringUtils.countOccurrences(help, tableRight);
        int tbodyLeftOccurrences = StringUtils.countOccurrences(help, tbodyLeft);
        int tbodyRightOccurrences = StringUtils.countOccurrences(help, tbodyRight);
        int captionLeftOccurrences = StringUtils.countOccurrences(help, captionLeft);
        int captionRightOccurrences = StringUtils.countOccurrences(help, captionRight);
        int figureLeftOccurrences = StringUtils.countOccurrences(help, figureLeft);
        int figureRightOccurrences = StringUtils.countOccurrences(help, figureRight);
        int figcaptionLeftOccurrences = StringUtils.countOccurrences(help, figcaptionLeft);
        int figcaptionRightOccurrences = StringUtils.countOccurrences(help, figcaptionRight);
        int cssClassOccurrences = StringUtils.countOccurrences(help, cssClass);
        int captionTextOccurrences = StringUtils.countOccurrences(help, captionText);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementNumber + 8
                && elementNumber > 5
                && elementNumber < 100
                && figureLeftOccurrences == 1
                && figcaptionLeftOccurrences == 1
                && tableLeftOccurrences == 1
                && captionLeftOccurrences == 0
                && tbodyLeftOccurrences == 1
                && thLeftOccurrences == 5
                && tdLeftOccurrences == elementNumber * 5
                && tdLeftOccurrences == tdRightOccurrences
                && thLeftOccurrences == thRightOccurrences
                && tableLeftOccurrences == tableRightOccurrences
                && tbodyLeftOccurrences == tbodyRightOccurrences
                && captionLeftOccurrences == captionRightOccurrences
                && figureLeftOccurrences == figureRightOccurrences
                && figcaptionLeftOccurrences == figcaptionRightOccurrences
                && cssClassOccurrences == 1
                && captionTextOccurrences == 1
                && help.contains(thLeft + stringResources.KEYWORD + thRight)
                && help.contains(thLeft + stringResources.TYPE + thRight)
                && help.contains(thLeft + stringResources.SYNTAX + thRight)
                && help.contains(thLeft + stringResources.SINCE + thRight)
                && help.contains(thLeft + stringResources.DESCRIPTION + thRight)
                && help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0267() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsHtmlTable(query, addHeader = true, addCaption = true, addFigure = false, caption = 'This is a caption', cssClass = 'wp-1')";
        TestCommonTools.consolePrintTestApiStart(267, testDescr);
        String query = "sine";
        int elementNumber = mXparser.getKeyWords(query).size();
        String captionText = "This is a caption";
        String cssClassText = "wp-1";
        String help = mXparser.getHelpAsHtmlTable(query, true, true, false, captionText, cssClassText);
        int linesNumber = StringUtils.countLines(help);

        String cssClass = "class=\"" + cssClassText + "\"";
        String tdLeft = "<td>";
        String tdRight = "</td>";
        String thLeft = "<th>";
        String thRight = "</th>";
        String tableLeft = "<table " + cssClass + ">";
        String tableRight = "</table>";
        String tbodyLeft = "<tbody>";
        String tbodyRight = "</tbody>";
        String captionLeft = "<caption>";
        String captionRight = "</caption>";
        String figureLeft = "<figure>";
        String figureRight = "</figure>";
        String figcaptionLeft = "<figcaption>";
        String figcaptionRight = "</figcaption>";

        int tdLeftOccurrences = StringUtils.countOccurrences(help, tdLeft);
        int tdRightOccurrences = StringUtils.countOccurrences(help, tdRight);
        int thLeftOccurrences = StringUtils.countOccurrences(help, thLeft);
        int thRightOccurrences = StringUtils.countOccurrences(help, thRight);
        int tableLeftOccurrences = StringUtils.countOccurrences(help, tableLeft);
        int tableRightOccurrences = StringUtils.countOccurrences(help, tableRight);
        int tbodyLeftOccurrences = StringUtils.countOccurrences(help, tbodyLeft);
        int tbodyRightOccurrences = StringUtils.countOccurrences(help, tbodyRight);
        int captionLeftOccurrences = StringUtils.countOccurrences(help, captionLeft);
        int captionRightOccurrences = StringUtils.countOccurrences(help, captionRight);
        int figureLeftOccurrences = StringUtils.countOccurrences(help, figureLeft);
        int figureRightOccurrences = StringUtils.countOccurrences(help, figureRight);
        int figcaptionLeftOccurrences = StringUtils.countOccurrences(help, figcaptionLeft);
        int figcaptionRightOccurrences = StringUtils.countOccurrences(help, figcaptionRight);
        int cssClassOccurrences = StringUtils.countOccurrences(help, cssClass);
        int captionTextOccurrences = StringUtils.countOccurrences(help, captionText);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementNumber + 6
                && elementNumber > 5
                && elementNumber < 100
                && figureLeftOccurrences == 0
                && figcaptionLeftOccurrences == 0
                && tableLeftOccurrences == 1
                && captionLeftOccurrences == 1
                && tbodyLeftOccurrences == 1
                && thLeftOccurrences == 5
                && tdLeftOccurrences == elementNumber * 5
                && tdLeftOccurrences == tdRightOccurrences
                && thLeftOccurrences == thRightOccurrences
                && tableLeftOccurrences == tableRightOccurrences
                && tbodyLeftOccurrences == tbodyRightOccurrences
                && captionLeftOccurrences == captionRightOccurrences
                && figureLeftOccurrences == figureRightOccurrences
                && figcaptionLeftOccurrences == figcaptionRightOccurrences
                && cssClassOccurrences == 1
                && captionTextOccurrences == 1
                && help.contains(thLeft + stringResources.KEYWORD + thRight)
                && help.contains(thLeft + stringResources.TYPE + thRight)
                && help.contains(thLeft + stringResources.SYNTAX + thRight)
                && help.contains(thLeft + stringResources.SINCE + thRight)
                && help.contains(thLeft + stringResources.DESCRIPTION + thRight)
                && help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0268() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsHtmlTable(query, addHeader = false, addCaption = true, addFigure = false, caption = 'This is a caption', cssClass = 'wp-1')";
        TestCommonTools.consolePrintTestApiStart(268, testDescr);
        String query = "sine";
        int elementNumber = mXparser.getKeyWords(query).size();
        String captionText = "This is a caption";
        String cssClassText = "wp-1";
        String help = mXparser.getHelpAsHtmlTable(query, false, true, false, captionText, cssClassText);
        int linesNumber = StringUtils.countLines(help);

        String cssClass = "class=\"" + cssClassText + "\"";
        String tdLeft = "<td>";
        String tdRight = "</td>";
        String thLeft = "<th>";
        String thRight = "</th>";
        String tableLeft = "<table " + cssClass + ">";
        String tableRight = "</table>";
        String tbodyLeft = "<tbody>";
        String tbodyRight = "</tbody>";
        String captionLeft = "<caption>";
        String captionRight = "</caption>";
        String figureLeft = "<figure>";
        String figureRight = "</figure>";
        String figcaptionLeft = "<figcaption>";
        String figcaptionRight = "</figcaption>";

        int tdLeftOccurrences = StringUtils.countOccurrences(help, tdLeft);
        int tdRightOccurrences = StringUtils.countOccurrences(help, tdRight);
        int thLeftOccurrences = StringUtils.countOccurrences(help, thLeft);
        int thRightOccurrences = StringUtils.countOccurrences(help, thRight);
        int tableLeftOccurrences = StringUtils.countOccurrences(help, tableLeft);
        int tableRightOccurrences = StringUtils.countOccurrences(help, tableRight);
        int tbodyLeftOccurrences = StringUtils.countOccurrences(help, tbodyLeft);
        int tbodyRightOccurrences = StringUtils.countOccurrences(help, tbodyRight);
        int captionLeftOccurrences = StringUtils.countOccurrences(help, captionLeft);
        int captionRightOccurrences = StringUtils.countOccurrences(help, captionRight);
        int figureLeftOccurrences = StringUtils.countOccurrences(help, figureLeft);
        int figureRightOccurrences = StringUtils.countOccurrences(help, figureRight);
        int figcaptionLeftOccurrences = StringUtils.countOccurrences(help, figcaptionLeft);
        int figcaptionRightOccurrences = StringUtils.countOccurrences(help, figcaptionRight);
        int cssClassOccurrences = StringUtils.countOccurrences(help, cssClass);
        int captionTextOccurrences = StringUtils.countOccurrences(help, captionText);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementNumber + 5
                && elementNumber > 5
                && elementNumber < 100
                && figureLeftOccurrences == 0
                && figcaptionLeftOccurrences == 0
                && tableLeftOccurrences == 1
                && captionLeftOccurrences == 1
                && tbodyLeftOccurrences == 1
                && thLeftOccurrences == 0
                && tdLeftOccurrences == elementNumber * 5
                && tdLeftOccurrences == tdRightOccurrences
                && thLeftOccurrences == thRightOccurrences
                && tableLeftOccurrences == tableRightOccurrences
                && tbodyLeftOccurrences == tbodyRightOccurrences
                && captionLeftOccurrences == captionRightOccurrences
                && figureLeftOccurrences == figureRightOccurrences
                && figcaptionLeftOccurrences == figcaptionRightOccurrences
                && cssClassOccurrences == 1
                && captionTextOccurrences == 1
                && !help.contains(thLeft + stringResources.KEYWORD + thRight)
                && !help.contains(thLeft + stringResources.TYPE + thRight)
                && !help.contains(thLeft + stringResources.SYNTAX + thRight)
                && !help.contains(thLeft + stringResources.SINCE + thRight)
                && !help.contains(thLeft + stringResources.DESCRIPTION + thRight)
                && help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0269() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsHtmlTable(query, addHeader = false, addCaption = false, addFigure = false, caption = 'This is a caption', cssClass = 'wp-1')";
        TestCommonTools.consolePrintTestApiStart(269, testDescr);
        String query = "sine";
        int elementNumber = mXparser.getKeyWords(query).size();
        String captionText = "This is a caption";
        String cssClassText = "wp-1";
        String help = mXparser.getHelpAsHtmlTable(query, false, false, false, captionText, cssClassText);
        int linesNumber = StringUtils.countLines(help);

        String cssClass = "class=\"" + cssClassText + "\"";
        String tdLeft = "<td>";
        String tdRight = "</td>";
        String thLeft = "<th>";
        String thRight = "</th>";
        String tableLeft = "<table " + cssClass + ">";
        String tableRight = "</table>";
        String tbodyLeft = "<tbody>";
        String tbodyRight = "</tbody>";
        String captionLeft = "<caption>";
        String captionRight = "</caption>";
        String figureLeft = "<figure>";
        String figureRight = "</figure>";
        String figcaptionLeft = "<figcaption>";
        String figcaptionRight = "</figcaption>";

        int tdLeftOccurrences = StringUtils.countOccurrences(help, tdLeft);
        int tdRightOccurrences = StringUtils.countOccurrences(help, tdRight);
        int thLeftOccurrences = StringUtils.countOccurrences(help, thLeft);
        int thRightOccurrences = StringUtils.countOccurrences(help, thRight);
        int tableLeftOccurrences = StringUtils.countOccurrences(help, tableLeft);
        int tableRightOccurrences = StringUtils.countOccurrences(help, tableRight);
        int tbodyLeftOccurrences = StringUtils.countOccurrences(help, tbodyLeft);
        int tbodyRightOccurrences = StringUtils.countOccurrences(help, tbodyRight);
        int captionLeftOccurrences = StringUtils.countOccurrences(help, captionLeft);
        int captionRightOccurrences = StringUtils.countOccurrences(help, captionRight);
        int figureLeftOccurrences = StringUtils.countOccurrences(help, figureLeft);
        int figureRightOccurrences = StringUtils.countOccurrences(help, figureRight);
        int figcaptionLeftOccurrences = StringUtils.countOccurrences(help, figcaptionLeft);
        int figcaptionRightOccurrences = StringUtils.countOccurrences(help, figcaptionRight);
        int cssClassOccurrences = StringUtils.countOccurrences(help, cssClass);
        int captionTextOccurrences = StringUtils.countOccurrences(help, captionText);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementNumber + 4
                && elementNumber > 5
                && elementNumber < 100
                && figureLeftOccurrences == 0
                && figcaptionLeftOccurrences == 0
                && tableLeftOccurrences == 1
                && captionLeftOccurrences == 0
                && tbodyLeftOccurrences == 1
                && thLeftOccurrences == 0
                && tdLeftOccurrences == elementNumber * 5
                && tdLeftOccurrences == tdRightOccurrences
                && thLeftOccurrences == thRightOccurrences
                && tableLeftOccurrences == tableRightOccurrences
                && tbodyLeftOccurrences == tbodyRightOccurrences
                && captionLeftOccurrences == captionRightOccurrences
                && figureLeftOccurrences == figureRightOccurrences
                && figcaptionLeftOccurrences == figcaptionRightOccurrences
                && cssClassOccurrences == 1
                && captionTextOccurrences == 0
                && !help.contains(thLeft + stringResources.KEYWORD + thRight)
                && !help.contains(thLeft + stringResources.TYPE + thRight)
                && !help.contains(thLeft + stringResources.SYNTAX + thRight)
                && !help.contains(thLeft + stringResources.SINCE + thRight)
                && !help.contains(thLeft + stringResources.DESCRIPTION + thRight)
                && !help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0270() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsHtmlTable(query, addHeader = false, addCaption = false, addFigure = true, caption = 'This is a caption', cssClass = '')";
        TestCommonTools.consolePrintTestApiStart(270, testDescr);
        String query = "sine";
        int elementNumber = mXparser.getKeyWords(query).size();
        String captionText = "This is a caption";
        String help = mXparser.getHelpAsHtmlTable(query, false, false, true, captionText, "");
        int linesNumber = StringUtils.countLines(help);

        String cssClass = "class=\"";
        String tdLeft = "<td>";
        String tdRight = "</td>";
        String thLeft = "<th>";
        String thRight = "</th>";
        String tableLeft = "<table>";
        String tableRight = "</table>";
        String tbodyLeft = "<tbody>";
        String tbodyRight = "</tbody>";
        String captionLeft = "<caption>";
        String captionRight = "</caption>";
        String figureLeft = "<figure>";
        String figureRight = "</figure>";
        String figcaptionLeft = "<figcaption>";
        String figcaptionRight = "</figcaption>";

        int tdLeftOccurrences = StringUtils.countOccurrences(help, tdLeft);
        int tdRightOccurrences = StringUtils.countOccurrences(help, tdRight);
        int thLeftOccurrences = StringUtils.countOccurrences(help, thLeft);
        int thRightOccurrences = StringUtils.countOccurrences(help, thRight);
        int tableLeftOccurrences = StringUtils.countOccurrences(help, tableLeft);
        int tableRightOccurrences = StringUtils.countOccurrences(help, tableRight);
        int tbodyLeftOccurrences = StringUtils.countOccurrences(help, tbodyLeft);
        int tbodyRightOccurrences = StringUtils.countOccurrences(help, tbodyRight);
        int captionLeftOccurrences = StringUtils.countOccurrences(help, captionLeft);
        int captionRightOccurrences = StringUtils.countOccurrences(help, captionRight);
        int figureLeftOccurrences = StringUtils.countOccurrences(help, figureLeft);
        int figureRightOccurrences = StringUtils.countOccurrences(help, figureRight);
        int figcaptionLeftOccurrences = StringUtils.countOccurrences(help, figcaptionLeft);
        int figcaptionRightOccurrences = StringUtils.countOccurrences(help, figcaptionRight);
        int cssClassOccurrences = StringUtils.countOccurrences(help, cssClass);
        int captionTextOccurrences = StringUtils.countOccurrences(help, captionText);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementNumber + 6
                && elementNumber > 5
                && elementNumber < 100
                && figureLeftOccurrences == 1
                && figcaptionLeftOccurrences == 0
                && tableLeftOccurrences == 1
                && captionLeftOccurrences == 0
                && tbodyLeftOccurrences == 1
                && thLeftOccurrences == 0
                && tdLeftOccurrences == elementNumber * 5
                && tdLeftOccurrences == tdRightOccurrences
                && thLeftOccurrences == thRightOccurrences
                && tableLeftOccurrences == tableRightOccurrences
                && tbodyLeftOccurrences == tbodyRightOccurrences
                && captionLeftOccurrences == captionRightOccurrences
                && figureLeftOccurrences == figureRightOccurrences
                && figcaptionLeftOccurrences == figcaptionRightOccurrences
                && cssClassOccurrences == 0
                && captionTextOccurrences == 0
                && !help.contains(thLeft + stringResources.KEYWORD + thRight)
                && !help.contains(thLeft + stringResources.TYPE + thRight)
                && !help.contains(thLeft + stringResources.SYNTAX + thRight)
                && !help.contains(thLeft + stringResources.SINCE + thRight)
                && !help.contains(thLeft + stringResources.DESCRIPTION + thRight)
                && !help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0271() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsHtmlTable() - check clean for HTML";
        TestCommonTools.consolePrintTestApiStart(271, testDescr);
        String help = mXparser.getHelpAsHtmlTable();

        String ampPure = "&";
        String ampHtml = "&amp;";
        String ltPure = "<";
        String ltHtml = "&lt;";
        String gtPure = ">";
        String gtHtml = "&gt;";

        int ampPureOccurrences = StringUtils.countOccurrences(help, ampPure);
        int ampHtmlOccurrences = StringUtils.countOccurrences(help, ampHtml);
        int ltPureOccurrences = StringUtils.countOccurrences(help, ltPure);
        int ltHtmlOccurrences = StringUtils.countOccurrences(help, ltHtml);
        int gtPureOccurrences = StringUtils.countOccurrences(help, gtPure);
        int gtHtmlRightOccurrences = StringUtils.countOccurrences(help, gtHtml);

        int deltaLtGtureOccurrences = Math.abs(ltPureOccurrences - gtPureOccurrences);

        if (deltaLtGtureOccurrences == 0
                && ampPureOccurrences == ampHtmlOccurrences + ltHtmlOccurrences + gtHtmlRightOccurrences
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0272() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsMarkdownTable()";
        TestCommonTools.consolePrintTestApiStart(272, testDescr);
        int elementsNumber = mXparser.getKeyWords().size();
        String help = cleanMarkdownBackslash(mXparser.getHelpAsMarkdownTable());
        int linesNumber = StringUtils.countLines(help);

        String captionStart = "### ";
        String headLeft = "|---";
        String headRight = "---|";
        String dlm = "|";

        int captionStartOccurrences = StringUtils.countOccurrences(help, captionStart);
        int headLeftOccurrences = StringUtils.countOccurrences(help, headLeft);
        int headRightOccurrences = StringUtils.countOccurrences(help, headRight);
        int dlmOccurrences = StringUtils.countOccurrences(help, dlm);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementsNumber + 3
                && elementsNumber > 500
                && captionStartOccurrences == 1
                && headLeftOccurrences == 5
                && dlmOccurrences == (elementsNumber + 2) * 6
                && headLeftOccurrences == headRightOccurrences
                && help.contains(dlm + stringResources.KEYWORD + dlm)
                && help.contains(dlm + stringResources.TYPE + dlm)
                && help.contains(dlm + stringResources.SYNTAX + dlm)
                && help.contains(dlm + stringResources.SINCE + dlm)
                && help.contains(dlm + stringResources.DESCRIPTION + dlm)
                && help.contains(stringResources.ALL_HELP_CONTENT)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0273() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsMarkdownTable(sine)";
        TestCommonTools.consolePrintTestApiStart(273, testDescr);
        String query = "sine";
        int elementsNumber = mXparser.getKeyWords(query).size();
        String help = cleanMarkdownBackslash(mXparser.getHelpAsMarkdownTable(query));
        int linesNumber = StringUtils.countLines(help);

        String captionStart = "### ";
        String headLeft = "|---";
        String headRight = "---|";
        String dlm = "|";

        int captionStartOccurrences = StringUtils.countOccurrences(help, captionStart);
        int headLeftOccurrences = StringUtils.countOccurrences(help, headLeft);
        int headRightOccurrences = StringUtils.countOccurrences(help, headRight);
        int dlmOccurrences = StringUtils.countOccurrences(help, dlm);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementsNumber + 3
                && elementsNumber > 5
                && elementsNumber < 100
                && captionStartOccurrences == 1
                && headLeftOccurrences == 5
                && dlmOccurrences == (elementsNumber + 2) * 6
                && headLeftOccurrences == headRightOccurrences
                && help.contains(dlm + stringResources.KEYWORD + dlm)
                && help.contains(dlm + stringResources.TYPE + dlm)
                && help.contains(dlm + stringResources.SYNTAX + dlm)
                && help.contains(dlm + stringResources.SINCE + dlm)
                && help.contains(dlm + stringResources.DESCRIPTION + dlm)
                && help.contains(stringResources.HELP_CONTENT_LIMITED_TO_QUERY)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0274() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsMarkdownTable(asjfdkasjfdhkjhkasfdlkh)";
        TestCommonTools.consolePrintTestApiStart(274, testDescr);
        String query = "asjfdkasjfdhkjhkasfdlkh";
        int elementsNumber = mXparser.getKeyWords(query).size();
        String help = cleanMarkdownBackslash(mXparser.getHelpAsMarkdownTable(query));
        int linesNumber = StringUtils.countLines(help);

        String captionStart = "### ";
        String headLeft = "|---";
        String headRight = "---|";
        String dlm = "|";

        int captionStartOccurrences = StringUtils.countOccurrences(help, captionStart);
        int headLeftOccurrences = StringUtils.countOccurrences(help, headLeft);
        int headRightOccurrences = StringUtils.countOccurrences(help, headRight);
        int dlmOccurrences = StringUtils.countOccurrences(help, dlm);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementsNumber + 3
                && elementsNumber == 0
                && captionStartOccurrences == 1
                && headLeftOccurrences == 5
                && dlmOccurrences == (elementsNumber + 2) * 6
                && headLeftOccurrences == headRightOccurrences
                && help.contains(dlm + stringResources.KEYWORD + dlm)
                && help.contains(dlm + stringResources.TYPE + dlm)
                && help.contains(dlm + stringResources.SYNTAX + dlm)
                && help.contains(dlm + stringResources.SINCE + dlm)
                && help.contains(dlm + stringResources.DESCRIPTION + dlm)
                && help.contains(stringResources.HELP_CONTENT_LIMITED_TO_QUERY)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0275() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsMarkdownTable(addHeader = true, addCaption = true, caption = '')";
        TestCommonTools.consolePrintTestApiStart(275, testDescr);
        int elementsNumber = mXparser.getKeyWords().size();
        String help = cleanMarkdownBackslash(mXparser.getHelpAsMarkdownTable(true, true, ""));
        int linesNumber = StringUtils.countLines(help);

        String captionStart = "### ";
        String headLeft = "|---";
        String headRight = "---|";
        String dlm = "|";

        int captionStartOccurrences = StringUtils.countOccurrences(help, captionStart);
        int headLeftOccurrences = StringUtils.countOccurrences(help, headLeft);
        int headRightOccurrences = StringUtils.countOccurrences(help, headRight);
        int dlmOccurrences = StringUtils.countOccurrences(help, dlm);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementsNumber + 3
                && elementsNumber > 500
                && captionStartOccurrences == 1
                && headLeftOccurrences == 5
                && dlmOccurrences == (elementsNumber + 2) * 6
                && headLeftOccurrences == headRightOccurrences
                && help.contains(dlm + stringResources.KEYWORD + dlm)
                && help.contains(dlm + stringResources.TYPE + dlm)
                && help.contains(dlm + stringResources.SYNTAX + dlm)
                && help.contains(dlm + stringResources.SINCE + dlm)
                && help.contains(dlm + stringResources.DESCRIPTION + dlm)
                && help.contains(stringResources.ALL_HELP_CONTENT)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0276() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsMarkdownTable(addHeader = true, addCaption = true, caption = 'This is a caption')";
        TestCommonTools.consolePrintTestApiStart(276, testDescr);
        String captionText = "This is a caption";
        int elementsNumber = mXparser.getKeyWords().size();
        String help = cleanMarkdownBackslash(mXparser.getHelpAsMarkdownTable(true, true, captionText));
        int linesNumber = StringUtils.countLines(help);

        String captionStart = "### ";
        String headLeft = "|---";
        String headRight = "---|";
        String dlm = "|";

        int captionStartOccurrences = StringUtils.countOccurrences(help, captionStart);
        int headLeftOccurrences = StringUtils.countOccurrences(help, headLeft);
        int headRightOccurrences = StringUtils.countOccurrences(help, headRight);
        int dlmOccurrences = StringUtils.countOccurrences(help, dlm);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementsNumber + 3
                && elementsNumber > 500
                && captionStartOccurrences == 1
                && headLeftOccurrences == 5
                && dlmOccurrences == (elementsNumber + 2) * 6
                && headLeftOccurrences == headRightOccurrences
                && help.contains(dlm + stringResources.KEYWORD + dlm)
                && help.contains(dlm + stringResources.TYPE + dlm)
                && help.contains(dlm + stringResources.SYNTAX + dlm)
                && help.contains(dlm + stringResources.SINCE + dlm)
                && help.contains(dlm + stringResources.DESCRIPTION + dlm)
                && help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0277() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsMarkdownTable(addHeader = true, addCaption = false, caption = 'This is a caption')";
        TestCommonTools.consolePrintTestApiStart(277, testDescr);
        String captionText = "This is a caption";
        int elementsNumber = mXparser.getKeyWords().size();
        String help = cleanMarkdownBackslash(mXparser.getHelpAsMarkdownTable(true, false, captionText));
        int linesNumber = StringUtils.countLines(help);

        String captionStart = "### ";
        String headLeft = "|---";
        String headRight = "---|";
        String dlm = "|";

        int captionStartOccurrences = StringUtils.countOccurrences(help, captionStart);
        int headLeftOccurrences = StringUtils.countOccurrences(help, headLeft);
        int headRightOccurrences = StringUtils.countOccurrences(help, headRight);
        int dlmOccurrences = StringUtils.countOccurrences(help, dlm);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementsNumber + 2
                && elementsNumber > 500
                && captionStartOccurrences == 0
                && headLeftOccurrences == 5
                && dlmOccurrences == (elementsNumber + 2) * 6
                && headLeftOccurrences == headRightOccurrences
                && help.contains(dlm + stringResources.KEYWORD + dlm)
                && help.contains(dlm + stringResources.TYPE + dlm)
                && help.contains(dlm + stringResources.SYNTAX + dlm)
                && help.contains(dlm + stringResources.SINCE + dlm)
                && help.contains(dlm + stringResources.DESCRIPTION + dlm)
                && !help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0278() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsMarkdownTable(addHeader = false, addCaption = false, caption = 'This is a caption')";
        TestCommonTools.consolePrintTestApiStart(278, testDescr);
        String captionText = "This is a caption";
        int elementsNumber = mXparser.getKeyWords().size();
        String help = cleanMarkdownBackslash(mXparser.getHelpAsMarkdownTable(false, false, captionText));
        int linesNumber = StringUtils.countLines(help);

        String captionStart = "### ";
        String headLeft = "|---";
        String headRight = "---|";
        String dlm = "|";

        int captionStartOccurrences = StringUtils.countOccurrences(help, captionStart);
        int headLeftOccurrences = StringUtils.countOccurrences(help, headLeft);
        int headRightOccurrences = StringUtils.countOccurrences(help, headRight);
        int dlmOccurrences = StringUtils.countOccurrences(help, dlm);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementsNumber + 2
                && elementsNumber > 500
                && captionStartOccurrences == 0
                && headLeftOccurrences == 5
                && dlmOccurrences == (elementsNumber + 2) * 6
                && headLeftOccurrences == headRightOccurrences
                && !help.contains(dlm + stringResources.KEYWORD + dlm)
                && !help.contains(dlm + stringResources.TYPE + dlm)
                && !help.contains(dlm + stringResources.SYNTAX + dlm)
                && !help.contains(dlm + stringResources.SINCE + dlm)
                && !help.contains(dlm + stringResources.DESCRIPTION + dlm)
                && !help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0279() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsMarkdownTable(query, addHeader = true, addCaption = true, caption = '')";
        TestCommonTools.consolePrintTestApiStart(279, testDescr);
        String query = "sine";
        int elementsNumber = mXparser.getKeyWords(query).size();
        String help = cleanMarkdownBackslash(mXparser.getHelpAsMarkdownTable(query,true, true, ""));
        int linesNumber = StringUtils.countLines(help);

        String captionStart = "### ";
        String headLeft = "|---";
        String headRight = "---|";
        String dlm = "|";

        int captionStartOccurrences = StringUtils.countOccurrences(help, captionStart);
        int headLeftOccurrences = StringUtils.countOccurrences(help, headLeft);
        int headRightOccurrences = StringUtils.countOccurrences(help, headRight);
        int dlmOccurrences = StringUtils.countOccurrences(help, dlm);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementsNumber + 3
                && elementsNumber > 5
                && elementsNumber < 100
                && captionStartOccurrences == 1
                && headLeftOccurrences == 5
                && dlmOccurrences == (elementsNumber + 2) * 6
                && headLeftOccurrences == headRightOccurrences
                && help.contains(dlm + stringResources.KEYWORD + dlm)
                && help.contains(dlm + stringResources.TYPE + dlm)
                && help.contains(dlm + stringResources.SYNTAX + dlm)
                && help.contains(dlm + stringResources.SINCE + dlm)
                && help.contains(dlm + stringResources.DESCRIPTION + dlm)
                && help.contains(stringResources.HELP_CONTENT_LIMITED_TO_QUERY)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0280() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsMarkdownTable(query, addHeader = true, addCaption = true, caption = 'This is a caption')";
        TestCommonTools.consolePrintTestApiStart(280, testDescr);
        String captionText = "This is a caption";
        String query = "sine";
        int elementsNumber = mXparser.getKeyWords(query).size();
        String help = cleanMarkdownBackslash(mXparser.getHelpAsMarkdownTable(query, true, true, captionText));
        int linesNumber = StringUtils.countLines(help);

        String captionStart = "### ";
        String headLeft = "|---";
        String headRight = "---|";
        String dlm = "|";

        int captionStartOccurrences = StringUtils.countOccurrences(help, captionStart);
        int headLeftOccurrences = StringUtils.countOccurrences(help, headLeft);
        int headRightOccurrences = StringUtils.countOccurrences(help, headRight);
        int dlmOccurrences = StringUtils.countOccurrences(help, dlm);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementsNumber + 3
                && elementsNumber > 5
                && elementsNumber < 100
                && captionStartOccurrences == 1
                && headLeftOccurrences == 5
                && dlmOccurrences == (elementsNumber + 2) * 6
                && headLeftOccurrences == headRightOccurrences
                && help.contains(dlm + stringResources.KEYWORD + dlm)
                && help.contains(dlm + stringResources.TYPE + dlm)
                && help.contains(dlm + stringResources.SYNTAX + dlm)
                && help.contains(dlm + stringResources.SINCE + dlm)
                && help.contains(dlm + stringResources.DESCRIPTION + dlm)
                && help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0281() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsMarkdownTable(query, addHeader = true, addCaption = false, caption = 'This is a caption')";
        TestCommonTools.consolePrintTestApiStart(281, testDescr);
        String captionText = "This is a caption";
        String query = "sine";
        int elementsNumber = mXparser.getKeyWords(query).size();
        String help = cleanMarkdownBackslash(mXparser.getHelpAsMarkdownTable(query, true, false, captionText));
        int linesNumber = StringUtils.countLines(help);

        String captionStart = "### ";
        String headLeft = "|---";
        String headRight = "---|";
        String dlm = "|";

        int captionStartOccurrences = StringUtils.countOccurrences(help, captionStart);
        int headLeftOccurrences = StringUtils.countOccurrences(help, headLeft);
        int headRightOccurrences = StringUtils.countOccurrences(help, headRight);
        int dlmOccurrences = StringUtils.countOccurrences(help, dlm);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementsNumber + 2
                && elementsNumber > 5
                && elementsNumber < 100
                && captionStartOccurrences == 0
                && headLeftOccurrences == 5
                && dlmOccurrences == (elementsNumber + 2) * 6
                && headLeftOccurrences == headRightOccurrences
                && help.contains(dlm + stringResources.KEYWORD + dlm)
                && help.contains(dlm + stringResources.TYPE + dlm)
                && help.contains(dlm + stringResources.SYNTAX + dlm)
                && help.contains(dlm + stringResources.SINCE + dlm)
                && help.contains(dlm + stringResources.DESCRIPTION + dlm)
                && !help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0282() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsMarkdownTable(addHeader = false, addCaption = false, caption = 'This is a caption')";
        TestCommonTools.consolePrintTestApiStart(282, testDescr);
        String captionText = "This is a caption";
        String query = "sine";
        int elementsNumber = mXparser.getKeyWords(query).size();
        String help = cleanMarkdownBackslash(mXparser.getHelpAsMarkdownTable(query, false, false, captionText));
        int linesNumber = StringUtils.countLines(help);

        String captionStart = "### ";
        String headLeft = "|---";
        String headRight = "---|";
        String dlm = "|";

        int captionStartOccurrences = StringUtils.countOccurrences(help, captionStart);
        int headLeftOccurrences = StringUtils.countOccurrences(help, headLeft);
        int headRightOccurrences = StringUtils.countOccurrences(help, headRight);
        int dlmOccurrences = StringUtils.countOccurrences(help, dlm);

        StringResources stringResources = StringModel.getStringResources();

        if (linesNumber == elementsNumber + 2
                && elementsNumber > 5
                && elementsNumber < 100
                && captionStartOccurrences == 0
                && headLeftOccurrences == 5
                && dlmOccurrences == (elementsNumber + 2) * 6
                && headLeftOccurrences == headRightOccurrences
                && !help.contains(dlm + stringResources.KEYWORD + dlm)
                && !help.contains(dlm + stringResources.TYPE + dlm)
                && !help.contains(dlm + stringResources.SYNTAX + dlm)
                && !help.contains(dlm + stringResources.SINCE + dlm)
                && !help.contains(dlm + stringResources.DESCRIPTION + dlm)
                && !help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0283() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsMarkdownTable() - check clean for MD";
        TestCommonTools.consolePrintTestApiStart(283, testDescr);
        String help = mXparser.getHelpAsMarkdownTable();
        int elementsNumber = mXparser.getKeyWords().size();

        String pipePure = "|";
        String pipeMd = "\\|";
        String backslashMdPipe = "\\\\|";

        int pipePureOccurrences = StringUtils.countOccurrences(help, pipePure);
        int pipeMdOccurrences = StringUtils.countOccurrences(help, pipeMd);
        int backslashMdPipeOccurrences = StringUtils.countOccurrences(help, backslashMdPipe);

        if (pipePureOccurrences == (elementsNumber + 2) * 6 + (pipeMdOccurrences - backslashMdPipeOccurrences)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0284() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelp()";
        TestCommonTools.consolePrintTestApiStart(284, testDescr);
        int elementsNumber = mXparser.getKeyWords().size();
        String help = mXparser.getHelp();
        int linesNumber = StringUtils.countLines(help);
        StringResources stringResources = StringModel.getStringResources();
        String dlm = " ";
        if (linesNumber == elementsNumber + 3
                && elementsNumber > 500
                && help.contains(dlm + stringResources.KEYWORD + dlm)
                && help.contains(dlm + stringResources.TYPE + dlm)
                && help.contains(dlm + stringResources.SYNTAX + dlm)
                && help.contains(dlm + stringResources.SINCE + dlm)
                && help.contains(dlm + stringResources.DESCRIPTION)
                && help.contains(stringResources.ALL_HELP_CONTENT)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0285() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelp(addHeader = true, addCaption = true, caption = '')";
        TestCommonTools.consolePrintTestApiStart(285, testDescr);
        int elementsNumber = mXparser.getKeyWords().size();
        String help = mXparser.getHelp(true, true, "");
        int linesNumber = StringUtils.countLines(help);
        StringResources stringResources = StringModel.getStringResources();
        String dlm = " ";
        if (linesNumber == elementsNumber + 3
                && elementsNumber > 500
                && help.contains(dlm + stringResources.KEYWORD + dlm)
                && help.contains(dlm + stringResources.TYPE + dlm)
                && help.contains(dlm + stringResources.SYNTAX + dlm)
                && help.contains(dlm + stringResources.SINCE + dlm)
                && help.contains(dlm + stringResources.DESCRIPTION)
                && help.contains(stringResources.ALL_HELP_CONTENT)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0286() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelp(addHeader = true, addCaption = true, caption = 'This is a caption')";
        TestCommonTools.consolePrintTestApiStart(286, testDescr);
        int elementsNumber = mXparser.getKeyWords().size();
        String captionText = "This is a caption";
        String help = mXparser.getHelp(true, true, captionText);
        int linesNumber = StringUtils.countLines(help);
        StringResources stringResources = StringModel.getStringResources();
        String dlm = " ";
        if (linesNumber == elementsNumber + 3
                && elementsNumber > 500
                && help.contains(dlm + stringResources.KEYWORD + dlm)
                && help.contains(dlm + stringResources.TYPE + dlm)
                && help.contains(dlm + stringResources.SYNTAX + dlm)
                && help.contains(dlm + stringResources.SINCE + dlm)
                && help.contains(dlm + stringResources.DESCRIPTION)
                && help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0287() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelp(addHeader = true, addCaption = false, caption = 'This is a caption')";
        TestCommonTools.consolePrintTestApiStart(287, testDescr);
        int elementsNumber = mXparser.getKeyWords().size();
        String captionText = "This is a caption";
        String help = mXparser.getHelp(true, false, captionText);
        int linesNumber = StringUtils.countLines(help);
        StringResources stringResources = StringModel.getStringResources();
        String dlm = " ";
        if (linesNumber == elementsNumber + 2
                && elementsNumber > 500
                && help.contains(dlm + stringResources.KEYWORD + dlm)
                && help.contains(dlm + stringResources.TYPE + dlm)
                && help.contains(dlm + stringResources.SYNTAX + dlm)
                && help.contains(dlm + stringResources.SINCE + dlm)
                && help.contains(dlm + stringResources.DESCRIPTION)
                && !help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0288() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelp(addHeader = false, addCaption = false, caption = 'This is a caption')";
        TestCommonTools.consolePrintTestApiStart(288, testDescr);
        int elementsNumber = mXparser.getKeyWords().size();
        String captionText = "This is a caption";
        String help = mXparser.getHelp(false, false, captionText);
        int linesNumber = StringUtils.countLines(help);
        StringResources stringResources = StringModel.getStringResources();
        String dlm = " ";
        if (linesNumber == elementsNumber
                && elementsNumber > 500
                && !help.contains(dlm + stringResources.KEYWORD + dlm)
                && !help.contains(dlm + stringResources.TYPE + dlm)
                && !help.contains(dlm + stringResources.SYNTAX + dlm)
                && !help.contains(dlm + stringResources.SINCE + dlm)
                && !help.contains(dlm + stringResources.DESCRIPTION)
                && !help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0289() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelp(query)";
        TestCommonTools.consolePrintTestApiStart(289, testDescr);
        String query = "sine";
        int elementsNumber = mXparser.getKeyWords(query).size();
        String help = mXparser.getHelp(query);
        int linesNumber = StringUtils.countLines(help);
        StringResources stringResources = StringModel.getStringResources();
        String dlm = " ";
        if (linesNumber == elementsNumber + 3
                && elementsNumber > 5
                && elementsNumber < 100
                && help.contains(dlm + stringResources.KEYWORD + dlm)
                && help.contains(dlm + stringResources.TYPE + dlm)
                && help.contains(dlm + stringResources.SYNTAX + dlm)
                && help.contains(dlm + stringResources.SINCE + dlm)
                && help.contains(dlm + stringResources.DESCRIPTION)
                && help.contains(stringResources.HELP_CONTENT_LIMITED_TO_QUERY)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0290() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelp(query, addHeader = true, addCaption = true, caption = '')";
        TestCommonTools.consolePrintTestApiStart(290, testDescr);
        String query = "sine";
        int elementsNumber = mXparser.getKeyWords(query).size();
        String help = mXparser.getHelp(query, true, true, "");
        int linesNumber = StringUtils.countLines(help);
        StringResources stringResources = StringModel.getStringResources();
        String dlm = " ";
        if (linesNumber == elementsNumber + 3
                && elementsNumber > 5
                && elementsNumber < 100
                && help.contains(dlm + stringResources.KEYWORD + dlm)
                && help.contains(dlm + stringResources.TYPE + dlm)
                && help.contains(dlm + stringResources.SYNTAX + dlm)
                && help.contains(dlm + stringResources.SINCE + dlm)
                && help.contains(dlm + stringResources.DESCRIPTION)
                && help.contains(stringResources.HELP_CONTENT_LIMITED_TO_QUERY)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0291() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelp(query, addHeader = true, addCaption = true, caption = 'This is a caption')";
        TestCommonTools.consolePrintTestApiStart(291, testDescr);
        String query = "sine";
        int elementsNumber = mXparser.getKeyWords(query).size();
        String captionText = "This is a caption";
        String help = mXparser.getHelp(query, true, true, captionText);
        int linesNumber = StringUtils.countLines(help);
        StringResources stringResources = StringModel.getStringResources();
        String dlm = " ";
        if (linesNumber == elementsNumber + 3
                && elementsNumber > 5
                && elementsNumber < 100
                && help.contains(dlm + stringResources.KEYWORD + dlm)
                && help.contains(dlm + stringResources.TYPE + dlm)
                && help.contains(dlm + stringResources.SYNTAX + dlm)
                && help.contains(dlm + stringResources.SINCE + dlm)
                && help.contains(dlm + stringResources.DESCRIPTION)
                && help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0292() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelp(query, addHeader = true, addCaption = false, caption = 'This is a caption')";
        TestCommonTools.consolePrintTestApiStart(292, testDescr);
        String query = "sine";
        int elementsNumber = mXparser.getKeyWords(query).size();
        String captionText = "This is a caption";
        String help = mXparser.getHelp(query, true, false, captionText);
        int linesNumber = StringUtils.countLines(help);
        StringResources stringResources = StringModel.getStringResources();
        String dlm = " ";
        if (linesNumber == elementsNumber + 2
                && elementsNumber > 5
                && elementsNumber < 100
                && help.contains(dlm + stringResources.KEYWORD + dlm)
                && help.contains(dlm + stringResources.TYPE + dlm)
                && help.contains(dlm + stringResources.SYNTAX + dlm)
                && help.contains(dlm + stringResources.SINCE + dlm)
                && help.contains(dlm + stringResources.DESCRIPTION)
                && !help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0293() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelp(query, addHeader = false, addCaption = false, caption = 'This is a caption')";
        TestCommonTools.consolePrintTestApiStart(293, testDescr);
        String query = "sine";
        int elementsNumber = mXparser.getKeyWords(query).size();
        String captionText = "This is a caption";
        String help = mXparser.getHelp(query, false, false, captionText);
        int linesNumber = StringUtils.countLines(help);
        StringResources stringResources = StringModel.getStringResources();
        String dlm = " ";
        if (linesNumber == elementsNumber
                && elementsNumber > 5
                && elementsNumber < 100
                && !help.contains(dlm + stringResources.KEYWORD + dlm)
                && !help.contains(dlm + stringResources.TYPE + dlm)
                && !help.contains(dlm + stringResources.SYNTAX + dlm)
                && !help.contains(dlm + stringResources.SINCE + dlm)
                && !help.contains(dlm + stringResources.DESCRIPTION)
                && !help.contains(captionText)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0294() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getKeyWords(query) - advanced search tag: key=";
        TestCommonTools.consolePrintTestApiStart(294, testDescr);
        int elementsNumber = mXparser.getKeyWords().size();
        int tagNumber0 = mXparser.getKeyWords("key=").size();
        int tagNumber1 = mXparser.getKeyWords("key").size();
        int tagNumber2 = mXparser.getKeyWords("key=s").size();
        int tagNumber3 = mXparser.getKeyWords("key=sin").size();
        int tagNumber2ref = mXparser.getKeyWords("s").size();
        int tagNumber3ref = mXparser.getKeyWords("sin").size();

        if (tagNumber0 == 0
                && tagNumber1 < elementsNumber
                && tagNumber2 > 0
                && tagNumber3 > 0
                && tagNumber2 > tagNumber3
                && tagNumber2ref > tagNumber3ref
                && tagNumber2ref > tagNumber2
                && tagNumber3ref > tagNumber3
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0295() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getKeyWords(query) - advanced search tag: desc=";
        TestCommonTools.consolePrintTestApiStart(295, testDescr);
        int elementsNumber = mXparser.getKeyWords().size();
        int tagNumber0 = mXparser.getKeyWords("desc=").size();
        int tagNumber1 = mXparser.getKeyWords("desc").size();
        int tagNumber2 = mXparser.getKeyWords("desc=s").size();
        int tagNumber3 = mXparser.getKeyWords("desc=sin").size();
        int tagNumber2ref = mXparser.getKeyWords("s").size();
        int tagNumber3ref = mXparser.getKeyWords("sin").size();

        if (tagNumber0 == 0
                && tagNumber1 < elementsNumber
                && tagNumber2 > 0
                && tagNumber3 > 0
                && tagNumber2 > tagNumber3
                && tagNumber2ref > tagNumber3ref
                && tagNumber2ref > tagNumber2
                && tagNumber3ref > tagNumber3
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0296() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getKeyWords(query) - advanced search tag: syn=";
        TestCommonTools.consolePrintTestApiStart(296, testDescr);
        int elementsNumber = mXparser.getKeyWords().size();
        int tagNumber0 = mXparser.getKeyWords("syn=").size();
        int tagNumber1 = mXparser.getKeyWords("syn").size();
        int tagNumber2 = mXparser.getKeyWords("syn=s").size();
        int tagNumber3 = mXparser.getKeyWords("syn=sin").size();
        int tagNumber2ref = mXparser.getKeyWords("s").size();
        int tagNumber3ref = mXparser.getKeyWords("sin").size();

        if (tagNumber0 == 0
                && tagNumber1 < elementsNumber
                && tagNumber2 > 0
                && tagNumber3 > 0
                && tagNumber2 > tagNumber3
                && tagNumber2ref > tagNumber3ref
                && tagNumber2ref > tagNumber2
                && tagNumber3ref > tagNumber3
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0297() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getKeyWords(query) - advanced search tag: since=";
        TestCommonTools.consolePrintTestApiStart(297, testDescr);
        int elementsNumber = mXparser.getKeyWords().size();
        int tagNumber0 = mXparser.getKeyWords("since=").size();
        int tagNumber1 = mXparser.getKeyWords("since").size();
        int tagNumber2 = mXparser.getKeyWords("since=4").size();
        int tagNumber3 = mXparser.getKeyWords("since=4.1").size();
        int tagNumber2ref = mXparser.getKeyWords("4").size();
        int tagNumber3ref = mXparser.getKeyWords("4.1").size();

        if (tagNumber0 == 0
                && tagNumber1 < elementsNumber
                && tagNumber2 > 0
                && tagNumber3 > 0
                && tagNumber2 > tagNumber3
                && tagNumber2ref > tagNumber3ref
                && tagNumber2ref > tagNumber2
                && tagNumber3ref > tagNumber3
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0298() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getKeyWords(query) - advanced search tag: type=";
        TestCommonTools.consolePrintTestApiStart(298, testDescr);
        int elementsNumber = mXparser.getKeyWords().size();
        int tagNumber0 = mXparser.getKeyWords("type=").size();
        int tagNumber1 = mXparser.getKeyWords("type").size();
        int tagNumber2 = mXparser.getKeyWords("type=b").size();
        int tagNumber3 = mXparser.getKeyWords("type=binary").size();
        int tagNumber2ref = mXparser.getKeyWords("b").size();
        int tagNumber3ref = mXparser.getKeyWords("binary").size();

        if (tagNumber0 == 0
                && tagNumber1 < elementsNumber
                && tagNumber2 > 0
                && tagNumber3 > 0
                && tagNumber2 > tagNumber3
                && tagNumber2ref > tagNumber3ref
                && tagNumber2ref > tagNumber2
                && tagNumber3ref > tagNumber3
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0299() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getKeyWords(query) - advanced search tag: type=";
        TestCommonTools.consolePrintTestApiStart(299, testDescr);
        int elementsNumber = mXparser.getKeyWords().size();
        int tagNumber0 = mXparser.getKeyWords("typeid=").size();
        int tagNumber1 = mXparser.getKeyWords("typeid").size();
        int tagNumber2 = mXparser.getKeyWords("type=binary relation").size();
        int tagNumber3 = mXparser.getKeyWords("typeid=3").size();
        int tagNumber2ref = mXparser.getKeyWords("b").size();
        int tagNumber3ref = mXparser.getKeyWords("binary").size();

        if (tagNumber0 == 0
                && tagNumber1 < elementsNumber
                && tagNumber2 > 0
                && tagNumber3 > 0
                && tagNumber2 == tagNumber3
                && tagNumber2ref > tagNumber3ref
                && tagNumber2ref > tagNumber2
                && tagNumber3ref > tagNumber3
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0300() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getKeyWords(query) - advanced search tag: keyid=";
        TestCommonTools.consolePrintTestApiStart(300, testDescr);
        int elementsNumber = mXparser.getKeyWords().size();
        int tagNumber0 = mXparser.getKeyWords("keyid=").size();
        int tagNumber1 = mXparser.getKeyWords("keyid").size();
        String keyStr = mXparser.getKeyWords("keyid=" + Unit.SECOND_ARC_ID).get(0).wordString;

        if (tagNumber0 == 0
                && tagNumber1 < elementsNumber
                && keyStr.equals(Unit.SECOND_ARC_STR)
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0301() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsJson()";
        TestCommonTools.consolePrintTestApiStart(301, testDescr);
        int elementsNumber = mXparser.getKeyWords().size();
        String help = mXparser.getHelpAsJson();
        int linesNumber = StringUtils.countLines(help);

        StringResources stringResources = StringModel.getStringResources();

        String q = "\"";
        String qs = q + ":";

        String caption = q + stringResources.CAPTION + qs;
        String keyword = q + stringResources.KEYWORD + qs;
        String type = q + stringResources.TYPE + qs;
        String syntax = q + stringResources.SYNTAX + qs;
        String since = q + stringResources.SINCE + qs;
        String description = q + stringResources.DESCRIPTION + qs;
        String recordStart = "  {";
        String recordEnd1 = q + " },";
        String recordEnd2 = "  }";
        String keyColon = qs + " ";
        String partEnd = q + ",";
        String partEndCorrection = q + ": " + q + "," + q;

        int captionOccurrences = StringUtils.countOccurrences(help, caption);
        int keywordOccurrences = StringUtils.countOccurrences(help, keyword);
        int typeRightOccurrences = StringUtils.countOccurrences(help, type);
        int syntaxOccurrences = StringUtils.countOccurrences(help, syntax);
        int sinceOccurrences = StringUtils.countOccurrences(help, since);
        int descriptionOccurrences = StringUtils.countOccurrences(help, description);
        int recordStartOccurrences = StringUtils.countOccurrences(help, recordStart);
        int recordEnd1Occurrences = StringUtils.countOccurrences(help, recordEnd1);
        int recordEnd2Occurrences = StringUtils.countOccurrences(help, recordEnd2);
        int keyColonOccurrences = StringUtils.countOccurrences(help, keyColon);
        int partEndOccurrences = StringUtils.countOccurrences(help, partEnd);
        int partEndCorrectionOccurrences = StringUtils.countOccurrences(help, partEndCorrection);

        if (linesNumber == elementsNumber * 7 + 3
                && elementsNumber > 500
                && captionOccurrences == 1
                && keywordOccurrences == elementsNumber
                && typeRightOccurrences == elementsNumber
                && syntaxOccurrences == elementsNumber
                && sinceOccurrences == elementsNumber
                && descriptionOccurrences == elementsNumber
                && keyColonOccurrences == elementsNumber * 5 + 1
                && partEndOccurrences - partEndCorrectionOccurrences == elementsNumber * 4
                && recordStartOccurrences == recordEnd1Occurrences + recordEnd2Occurrences
                && help.contains(stringResources.ALL_HELP_CONTENT)
                && help.startsWith("[")
                && help.endsWith("]")
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0302() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsJson(addCaption = true, caption = '')";
        TestCommonTools.consolePrintTestApiStart(302, testDescr);
        int elementsNumber = mXparser.getKeyWords().size();
        String help = mXparser.getHelpAsJson(true, "");
        int linesNumber = StringUtils.countLines(help);

        StringResources stringResources = StringModel.getStringResources();

        String q = "\"";
        String qs = q + ":";

        String caption = q + stringResources.CAPTION + qs;
        String keyword = q + stringResources.KEYWORD + qs;
        String type = q + stringResources.TYPE + qs;
        String syntax = q + stringResources.SYNTAX + qs;
        String since = q + stringResources.SINCE + qs;
        String description = q + stringResources.DESCRIPTION + qs;
        String recordStart = "  {";
        String recordEnd1 = q + " },";
        String recordEnd2 = "  }";
        String keyColon = qs + " ";
        String partEnd = q + ",";
        String partEndCorrection = q + ": " + q + "," + q;

        int captionOccurrences = StringUtils.countOccurrences(help, caption);
        int keywordOccurrences = StringUtils.countOccurrences(help, keyword);
        int typeRightOccurrences = StringUtils.countOccurrences(help, type);
        int syntaxOccurrences = StringUtils.countOccurrences(help, syntax);
        int sinceOccurrences = StringUtils.countOccurrences(help, since);
        int descriptionOccurrences = StringUtils.countOccurrences(help, description);
        int recordStartOccurrences = StringUtils.countOccurrences(help, recordStart);
        int recordEnd1Occurrences = StringUtils.countOccurrences(help, recordEnd1);
        int recordEnd2Occurrences = StringUtils.countOccurrences(help, recordEnd2);
        int keyColonOccurrences = StringUtils.countOccurrences(help, keyColon);
        int partEndOccurrences = StringUtils.countOccurrences(help, partEnd);
        int partEndCorrectionOccurrences = StringUtils.countOccurrences(help, partEndCorrection);

        if (linesNumber == elementsNumber * 7 + 3
                && elementsNumber > 500
                && captionOccurrences == 1
                && keywordOccurrences == elementsNumber
                && typeRightOccurrences == elementsNumber
                && syntaxOccurrences == elementsNumber
                && sinceOccurrences == elementsNumber
                && descriptionOccurrences == elementsNumber
                && keyColonOccurrences == elementsNumber * 5 + 1
                && partEndOccurrences - partEndCorrectionOccurrences == elementsNumber * 4
                && recordStartOccurrences == recordEnd1Occurrences + recordEnd2Occurrences
                && help.contains(stringResources.ALL_HELP_CONTENT)
                && help.startsWith("[")
                && help.endsWith("]")
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0303() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsJson(addCaption = true, caption = 'This is a caption')";
        TestCommonTools.consolePrintTestApiStart(303, testDescr);
        String captionText = "This is a caption";
        int elementsNumber = mXparser.getKeyWords().size();
        String help = mXparser.getHelpAsJson(true, captionText);
        int linesNumber = StringUtils.countLines(help);

        StringResources stringResources = StringModel.getStringResources();

        String q = "\"";
        String qs = q + ":";

        String caption = q + stringResources.CAPTION + qs;
        String keyword = q + stringResources.KEYWORD + qs;
        String type = q + stringResources.TYPE + qs;
        String syntax = q + stringResources.SYNTAX + qs;
        String since = q + stringResources.SINCE + qs;
        String description = q + stringResources.DESCRIPTION + qs;
        String recordStart = "  {";
        String recordEnd1 = q + " },";
        String recordEnd2 = "  }";
        String keyColon = qs + " ";
        String partEnd = q + ",";
        String partEndCorrection = q + ": " + q + "," + q;

        int captionOccurrences = StringUtils.countOccurrences(help, caption);
        int keywordOccurrences = StringUtils.countOccurrences(help, keyword);
        int typeRightOccurrences = StringUtils.countOccurrences(help, type);
        int syntaxOccurrences = StringUtils.countOccurrences(help, syntax);
        int sinceOccurrences = StringUtils.countOccurrences(help, since);
        int descriptionOccurrences = StringUtils.countOccurrences(help, description);
        int recordStartOccurrences = StringUtils.countOccurrences(help, recordStart);
        int recordEnd1Occurrences = StringUtils.countOccurrences(help, recordEnd1);
        int recordEnd2Occurrences = StringUtils.countOccurrences(help, recordEnd2);
        int keyColonOccurrences = StringUtils.countOccurrences(help, keyColon);
        int partEndOccurrences = StringUtils.countOccurrences(help, partEnd);
        int partEndCorrectionOccurrences = StringUtils.countOccurrences(help, partEndCorrection);

        if (linesNumber == elementsNumber * 7 + 3
                && elementsNumber > 500
                && captionOccurrences == 1
                && keywordOccurrences == elementsNumber
                && typeRightOccurrences == elementsNumber
                && syntaxOccurrences == elementsNumber
                && sinceOccurrences == elementsNumber
                && descriptionOccurrences == elementsNumber
                && keyColonOccurrences == elementsNumber * 5 + 1
                && partEndOccurrences - partEndCorrectionOccurrences == elementsNumber * 4
                && recordStartOccurrences == recordEnd1Occurrences + recordEnd2Occurrences
                && help.contains(captionText)
                && help.startsWith("[")
                && help.endsWith("]")
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0304() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsJson(addCaption = false, caption = 'This is a caption')";
        TestCommonTools.consolePrintTestApiStart(304, testDescr);
        String captionText = "This is a caption";
        int elementsNumber = mXparser.getKeyWords().size();
        String help = mXparser.getHelpAsJson(false, captionText);
        int linesNumber = StringUtils.countLines(help);

        StringResources stringResources = StringModel.getStringResources();

        String q = "\"";
        String qs = q + ":";

        String caption = q + stringResources.CAPTION + qs;
        String keyword = q + stringResources.KEYWORD + qs;
        String type = q + stringResources.TYPE + qs;
        String syntax = q + stringResources.SYNTAX + qs;
        String since = q + stringResources.SINCE + qs;
        String description = q + stringResources.DESCRIPTION + qs;
        String recordStart = "  {";
        String recordEnd1 = q + " },";
        String recordEnd2 = "  }";
        String keyColon = qs + " ";
        String partEnd = q + ",";
        String partEndCorrection = q + ": " + q + "," + q;

        int captionOccurrences = StringUtils.countOccurrences(help, caption);
        int keywordOccurrences = StringUtils.countOccurrences(help, keyword);
        int typeRightOccurrences = StringUtils.countOccurrences(help, type);
        int syntaxOccurrences = StringUtils.countOccurrences(help, syntax);
        int sinceOccurrences = StringUtils.countOccurrences(help, since);
        int descriptionOccurrences = StringUtils.countOccurrences(help, description);
        int recordStartOccurrences = StringUtils.countOccurrences(help, recordStart);
        int recordEnd1Occurrences = StringUtils.countOccurrences(help, recordEnd1);
        int recordEnd2Occurrences = StringUtils.countOccurrences(help, recordEnd2);
        int keyColonOccurrences = StringUtils.countOccurrences(help, keyColon);
        int partEndOccurrences = StringUtils.countOccurrences(help, partEnd);
        int partEndCorrectionOccurrences = StringUtils.countOccurrences(help, partEndCorrection);

        if (linesNumber == elementsNumber * 7 + 2
                && elementsNumber > 500
                && captionOccurrences == 0
                && keywordOccurrences == elementsNumber
                && typeRightOccurrences == elementsNumber
                && syntaxOccurrences == elementsNumber
                && sinceOccurrences == elementsNumber
                && descriptionOccurrences == elementsNumber
                && keyColonOccurrences == elementsNumber * 5
                && partEndOccurrences - partEndCorrectionOccurrences == elementsNumber * 4
                && recordStartOccurrences == recordEnd1Occurrences + recordEnd2Occurrences
                && !help.contains(captionText)
                && help.startsWith("[")
                && help.endsWith("]")
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0305() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsJson(query)";
        TestCommonTools.consolePrintTestApiStart(305, testDescr);
        String query = "sine";
        int elementsNumber = mXparser.getKeyWords(query).size();
        String help = mXparser.getHelpAsJson(query);
        int linesNumber = StringUtils.countLines(help);

        StringResources stringResources = StringModel.getStringResources();

        String q = "\"";
        String qs = q + ":";

        String caption = q + stringResources.CAPTION + qs;
        String keyword = q + stringResources.KEYWORD + qs;
        String type = q + stringResources.TYPE + qs;
        String syntax = q + stringResources.SYNTAX + qs;
        String since = q + stringResources.SINCE + qs;
        String description = q + stringResources.DESCRIPTION + qs;
        String recordStart = "  {";
        String recordEnd1 = q + " },";
        String recordEnd2 = "  }";
        String keyColon = qs + " ";
        String partEnd = q + ",";
        String partEndCorrection = q + ": " + q + "," + q;

        int captionOccurrences = StringUtils.countOccurrences(help, caption);
        int keywordOccurrences = StringUtils.countOccurrences(help, keyword);
        int typeRightOccurrences = StringUtils.countOccurrences(help, type);
        int syntaxOccurrences = StringUtils.countOccurrences(help, syntax);
        int sinceOccurrences = StringUtils.countOccurrences(help, since);
        int descriptionOccurrences = StringUtils.countOccurrences(help, description);
        int recordStartOccurrences = StringUtils.countOccurrences(help, recordStart);
        int recordEnd1Occurrences = StringUtils.countOccurrences(help, recordEnd1);
        int recordEnd2Occurrences = StringUtils.countOccurrences(help, recordEnd2);
        int keyColonOccurrences = StringUtils.countOccurrences(help, keyColon);
        int partEndOccurrences = StringUtils.countOccurrences(help, partEnd);
        int partEndCorrectionOccurrences = StringUtils.countOccurrences(help, partEndCorrection);

        if (linesNumber == elementsNumber * 7 + 3
                && elementsNumber > 5
                && elementsNumber < 100
                && captionOccurrences == 1
                && keywordOccurrences == elementsNumber
                && typeRightOccurrences == elementsNumber
                && syntaxOccurrences == elementsNumber
                && sinceOccurrences == elementsNumber
                && descriptionOccurrences == elementsNumber
                && keyColonOccurrences == elementsNumber * 5 + 1
                && partEndOccurrences - partEndCorrectionOccurrences == elementsNumber * 4
                && recordStartOccurrences == recordEnd1Occurrences + recordEnd2Occurrences
                && help.contains(stringResources.HELP_CONTENT_LIMITED_TO_QUERY)
                && help.startsWith("[")
                && help.endsWith("]")
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0306() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsJson(query, addCaption = true, caption = '')";
        TestCommonTools.consolePrintTestApiStart(306, testDescr);
        String query = "sine";
        int elementsNumber = mXparser.getKeyWords(query).size();
        String help = mXparser.getHelpAsJson(query, true, "");
        int linesNumber = StringUtils.countLines(help);

        StringResources stringResources = StringModel.getStringResources();

        String q = "\"";
        String qs = q + ":";

        String caption = q + stringResources.CAPTION + qs;
        String keyword = q + stringResources.KEYWORD + qs;
        String type = q + stringResources.TYPE + qs;
        String syntax = q + stringResources.SYNTAX + qs;
        String since = q + stringResources.SINCE + qs;
        String description = q + stringResources.DESCRIPTION + qs;
        String recordStart = "  {";
        String recordEnd1 = q + " },";
        String recordEnd2 = "  }";
        String keyColon = qs + " ";
        String partEnd = q + ",";
        String partEndCorrection = q + ": " + q + "," + q;

        int captionOccurrences = StringUtils.countOccurrences(help, caption);
        int keywordOccurrences = StringUtils.countOccurrences(help, keyword);
        int typeRightOccurrences = StringUtils.countOccurrences(help, type);
        int syntaxOccurrences = StringUtils.countOccurrences(help, syntax);
        int sinceOccurrences = StringUtils.countOccurrences(help, since);
        int descriptionOccurrences = StringUtils.countOccurrences(help, description);
        int recordStartOccurrences = StringUtils.countOccurrences(help, recordStart);
        int recordEnd1Occurrences = StringUtils.countOccurrences(help, recordEnd1);
        int recordEnd2Occurrences = StringUtils.countOccurrences(help, recordEnd2);
        int keyColonOccurrences = StringUtils.countOccurrences(help, keyColon);
        int partEndOccurrences = StringUtils.countOccurrences(help, partEnd);
        int partEndCorrectionOccurrences = StringUtils.countOccurrences(help, partEndCorrection);

        if (linesNumber == elementsNumber * 7 + 3
                && elementsNumber > 5
                && elementsNumber < 100
                && captionOccurrences == 1
                && keywordOccurrences == elementsNumber
                && typeRightOccurrences == elementsNumber
                && syntaxOccurrences == elementsNumber
                && sinceOccurrences == elementsNumber
                && descriptionOccurrences == elementsNumber
                && keyColonOccurrences == elementsNumber * 5 + 1
                && partEndOccurrences - partEndCorrectionOccurrences == elementsNumber * 4
                && recordStartOccurrences == recordEnd1Occurrences + recordEnd2Occurrences
                && help.contains(stringResources.HELP_CONTENT_LIMITED_TO_QUERY)
                && help.startsWith("[")
                && help.endsWith("]")
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0307() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsJson(query, addCaption = true, caption = 'This is a caption')";
        TestCommonTools.consolePrintTestApiStart(307, testDescr);
        String captionText = "This is a caption";
        String query = "sine";
        int elementsNumber = mXparser.getKeyWords(query).size();
        String help = mXparser.getHelpAsJson(query, true, captionText);
        int linesNumber = StringUtils.countLines(help);

        StringResources stringResources = StringModel.getStringResources();

        String q = "\"";
        String qs = q + ":";

        String caption = q + stringResources.CAPTION + qs;
        String keyword = q + stringResources.KEYWORD + qs;
        String type = q + stringResources.TYPE + qs;
        String syntax = q + stringResources.SYNTAX + qs;
        String since = q + stringResources.SINCE + qs;
        String description = q + stringResources.DESCRIPTION + qs;
        String recordStart = "  {";
        String recordEnd1 = q + " },";
        String recordEnd2 = "  }";
        String keyColon = qs + " ";
        String partEnd = q + ",";
        String partEndCorrection = q + ": " + q + "," + q;

        int captionOccurrences = StringUtils.countOccurrences(help, caption);
        int keywordOccurrences = StringUtils.countOccurrences(help, keyword);
        int typeRightOccurrences = StringUtils.countOccurrences(help, type);
        int syntaxOccurrences = StringUtils.countOccurrences(help, syntax);
        int sinceOccurrences = StringUtils.countOccurrences(help, since);
        int descriptionOccurrences = StringUtils.countOccurrences(help, description);
        int recordStartOccurrences = StringUtils.countOccurrences(help, recordStart);
        int recordEnd1Occurrences = StringUtils.countOccurrences(help, recordEnd1);
        int recordEnd2Occurrences = StringUtils.countOccurrences(help, recordEnd2);
        int keyColonOccurrences = StringUtils.countOccurrences(help, keyColon);
        int partEndOccurrences = StringUtils.countOccurrences(help, partEnd);
        int partEndCorrectionOccurrences = StringUtils.countOccurrences(help, partEndCorrection);

        if (linesNumber == elementsNumber * 7 + 3
                && elementsNumber > 5
                && elementsNumber < 100
                && captionOccurrences == 1
                && keywordOccurrences == elementsNumber
                && typeRightOccurrences == elementsNumber
                && syntaxOccurrences == elementsNumber
                && sinceOccurrences == elementsNumber
                && descriptionOccurrences == elementsNumber
                && keyColonOccurrences == elementsNumber * 5 + 1
                && partEndOccurrences - partEndCorrectionOccurrences == elementsNumber * 4
                && recordStartOccurrences == recordEnd1Occurrences + recordEnd2Occurrences
                && help.contains(captionText)
                && help.startsWith("[")
                && help.endsWith("]")
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0308() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser API - getHelpAsJson(query, addCaption = false, caption = 'This is a caption')";
        TestCommonTools.consolePrintTestApiStart(308, testDescr);
        String captionText = "This is a caption";
        String query = "sine";
        int elementsNumber = mXparser.getKeyWords(query).size();
        String help = mXparser.getHelpAsJson(query, false, captionText);
        int linesNumber = StringUtils.countLines(help);

        StringResources stringResources = StringModel.getStringResources();

        String q = "\"";
        String qs = q + ":";

        String caption = q + stringResources.CAPTION + qs;
        String keyword = q + stringResources.KEYWORD + qs;
        String type = q + stringResources.TYPE + qs;
        String syntax = q + stringResources.SYNTAX + qs;
        String since = q + stringResources.SINCE + qs;
        String description = q + stringResources.DESCRIPTION + qs;
        String recordStart = "  {";
        String recordEnd1 = q + " },";
        String recordEnd2 = "  }";
        String keyColon = qs + " ";
        String partEnd = q + ",";
        String partEndCorrection = q + ": " + q + "," + q;

        int captionOccurrences = StringUtils.countOccurrences(help, caption);
        int keywordOccurrences = StringUtils.countOccurrences(help, keyword);
        int typeRightOccurrences = StringUtils.countOccurrences(help, type);
        int syntaxOccurrences = StringUtils.countOccurrences(help, syntax);
        int sinceOccurrences = StringUtils.countOccurrences(help, since);
        int descriptionOccurrences = StringUtils.countOccurrences(help, description);
        int recordStartOccurrences = StringUtils.countOccurrences(help, recordStart);
        int recordEnd1Occurrences = StringUtils.countOccurrences(help, recordEnd1);
        int recordEnd2Occurrences = StringUtils.countOccurrences(help, recordEnd2);
        int keyColonOccurrences = StringUtils.countOccurrences(help, keyColon);
        int partEndOccurrences = StringUtils.countOccurrences(help, partEnd);
        int partEndCorrectionOccurrences = StringUtils.countOccurrences(help, partEndCorrection);

        if (linesNumber == elementsNumber * 7 + 2
                && elementsNumber > 5
                && elementsNumber < 100
                && captionOccurrences == 0
                && keywordOccurrences == elementsNumber
                && typeRightOccurrences == elementsNumber
                && syntaxOccurrences == elementsNumber
                && sinceOccurrences == elementsNumber
                && descriptionOccurrences == elementsNumber
                && keyColonOccurrences == elementsNumber * 5
                && partEndOccurrences - partEndCorrectionOccurrences == elementsNumber * 4
                && recordStartOccurrences == recordEnd1Occurrences + recordEnd2Occurrences
                && !help.contains(captionText)
                && help.startsWith("[")
                && help.endsWith("]")
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0309() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Argument API - cloneThreadSafe()";
        TestCommonTools.consolePrintTestApiStart(309, testDescr);

        Function f = new Function("f(x) = x^2");
        Constant c = new Constant("c = 3");
        Argument a = new Argument("a = 2");
        a.setDescription("Clone");
        Argument b = new Argument("b = 2*a + f(c-c)", a, f, c);
        Argument bc = b.cloneForThreadSafe();
        Argument ac = bc.getArgument("a");

        String a_n1 = a.getArgumentName(); String b_n1 = b.getArgumentName();
        String ac_n1 = ac.getArgumentName(); String bc_n1 = bc.getArgumentName();

        double a_v1 = a.getArgumentValue(); double b_v1 = b.getArgumentValue();
        double ac_v1 = ac.getArgumentValue(); double bc_v1 = bc.getArgumentValue();

        a.setArgumentValue(3);
        double a_v2 = a.getArgumentValue(); double b_v2 = b.getArgumentValue();
        double ac_v2 = ac.getArgumentValue(); double bc_v2 = bc.getArgumentValue();

        ac.setArgumentValue(4);
        double a_v3 = a.getArgumentValue(); double b_v3 = b.getArgumentValue();
        double ac_v3 = ac.getArgumentValue(); double bc_v3 = bc.getArgumentValue();

        a.setArgumentName("b");
        String a_n2 = a.getArgumentName(); String b_n2 = b.getArgumentName();
        String ac_n2 = ac.getArgumentName(); String bc_n2 = bc.getArgumentName();

        boolean a_s1 = a.checkSyntax(); boolean b_s1 = b.checkSyntax();
        String a_m1 = a.getErrorMessage(); String b_m1 = b.getErrorMessage();
        boolean ac_s1 = ac.checkSyntax(); boolean bc_s1 = bc.checkSyntax();
        String ac_m1 = ac.getErrorMessage(); String bc_m1 = bc.getErrorMessage();

        ac.setArgumentName("c");
        String a_n3 = a.getArgumentName(); String b_n3 = b.getArgumentName();
        String ac_n3 = ac.getArgumentName(); String bc_n3 = bc.getArgumentName();

        boolean a_s2 = a.checkSyntax(); boolean b_s2 = b.checkSyntax();
        String a_m2 = a.getErrorMessage(); String b_m2 = b.getErrorMessage();
        boolean ac_s2 = ac.checkSyntax(); boolean bc_s2 = bc.checkSyntax();
        String ac_m2 = ac.getErrorMessage(); String bc_m2 = bc.getErrorMessage();


        StringResources stringResources = StringModel.getStringResources();

        if (a != ac && b != bc
                && a.getDescription().equals("Clone")
                && ac.getDescription().equals("Clone")
                && a.getArgumentType() == ac.getArgumentType()
                && b.getArgumentType() == bc.getArgumentType()
                && a.getArgumentBodyType() == ac.getArgumentBodyType()
                && b.getArgumentBodyType() == bc.getArgumentBodyType()
                && a_n1.equals(ac_n1)
                && b_n1.equals(bc_n1)

                && a_v1 == 2 && b_v1 == 4
                && ac_v1 == 2 && bc_v1 == 4

                && a_v2 == 3 && b_v2 == 6
                && ac_v2 == 2 && bc_v2 == 4

                && a_v3 == 3 && b_v3 == 6
                && ac_v3 == 4 && bc_v3 == 8

                && a_s1 && !b_s1
                && a_m1.contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION) && b_m1.contains(stringResources.INVALID_TOKEN)
                && ac_s1 && bc_s1
                && ac_m1.contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION) && bc_m1.contains(stringResources.ALREADY_CHECKED_NO_ERRORS)
                && !a_n2.equals(ac_n2)
                && b_n2.equals(bc_n2)

                && a_s2 && !b_s2
                && a_m2.contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION) && b_m2.contains(stringResources.INVALID_TOKEN)
                && ac_s2 && !bc_s2
                && ac_m2.contains(stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION) && bc_m2.contains(stringResources.INVALID_TOKEN)
                && !a_n3.equals(ac_n3)
                && b_n3.equals(bc_n3)
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0310() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Constant API - cloneThreadSafe()";
        TestCommonTools.consolePrintTestApiStart(310, testDescr);

        Constant a = new Constant("a = 3");
        a.setDescription("Clone");
        Expression e = new Expression("a*a", a);
        Constant ac = a.cloneForThreadSafe();

        String a_n1 = a.getConstantName(); String ac_n1 = ac.getConstantName();
        double a_v1 = a.getConstantValue(); double ac_v1 = ac.getConstantValue();
        a.setConstantName("b");
        a.setConstantValue(4);
        String a_n2 = a.getConstantName(); String ac_n2 = ac.getConstantName();
        double a_v2 = a.getConstantValue(); double ac_v2 = ac.getConstantValue();
        ac.setConstantName("c");
        ac.setConstantValue(5);
        String a_n3 = a.getConstantName(); String ac_n3 = ac.getConstantName();
        double a_v3 = a.getConstantValue(); double ac_v3 = ac.getConstantValue();

        if (a != ac
                && a.getDescription().equals("Clone")
                && ac.getDescription().equals("Clone")
                && a_n1.equals("a") && ac_n1.equals("a")
                && a_v1 == 3 && ac_v1 == 3
                && a_n2.equals("b") && ac_n2.equals("a")
                && a_v2 == 4 && ac_v2 == 3
                && a_n3.equals("b") && ac_n3.equals("c")
                && a_v3 == 4 && ac_v3 == 5
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0311() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "RecursiveArgument API - cloneThreadSafe()";
        TestCommonTools.consolePrintTestApiStart(311, testDescr);

        Constant c = new Constant("c = 2");
        Constant a = new Constant("a = 2");
        Function g = new Function("g(x,y) = x - y");

        RecursiveArgument f = new RecursiveArgument("fib(n) = fib(n-1)+fib(n-2) + g(c,a)", c, a, g);
        f.addBaseCase(0, 0);
        f.addBaseCase(1, 1);
        f.setDescription("Clone");

        String f_n1 = f.getArgumentName(); double f_v1 = f.getArgumentValue(6);
        RecursiveArgument fc = f.cloneForThreadSafe();
        String fc_n1 = fc.getArgumentName(); double fc_v1 = fc.getArgumentValue(6);
        double f_v2 = f.getArgumentValue(8); double fc_v2 = fc.getArgumentValue(8);
        double f_v3 = f.getArgumentValue(19); double fc_v3 = fc.getArgumentValue(19);

        if (f != fc
                && f.getDescription().equals("Clone")
                && fc.getDescription().equals("Clone")
                && f_n1.equals("fib") && fc_n1.equals("fib")
                && f_v1 == 8 && fc_v1 == 8
                && f_v2 == 21 && fc_v2 == 21
                && f_v3 == 4181 && fc_v3 == 4181
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0312() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Function API - cloneThreadSafe()";
        TestCommonTools.consolePrintTestApiStart(312, testDescr);

        Constant a = new Constant("a = 0.001");
        Function s = new Function("s(x) = if( abs(x) < a, x, 2*s(x/2)*c(x/2) )", a);
        Function c = new Function("c(x) = if( abs(x) < a, 1, c(x/2)^2-s(x/2)^2 )", a);
        s.addDefinitions(c);
        c.addDefinitions(s);
        s.setDescription("Clone");
        c.setDescription("Clone");
        a.setDescription("Clone");

        double s_v1 = s.calculate(MathConstants.PIBY2); double c_v1 = c.calculate(MathConstants.PIBY2);
        Function sc = s.cloneForThreadSafe();
        Function cc = c.cloneForThreadSafe();
        double sc_v1 = sc.calculate(MathConstants.PIBY2); double cc_v1 = cc.calculate(MathConstants.PIBY2);

        double s_v2 = s.calculate(MathConstants.PI); double c_v2 = c.calculate(MathConstants.PI);
        double sc_v2 = sc.calculate(MathConstants.PI); double cc_v2 = cc.calculate(MathConstants.PI);

        Function sc_c = sc.getFunction("c");
        Function sc_c_s = sc_c.getFunction("s");
        Constant sc_a = sc.getConstant("a");
        Constant sc_c_a = sc_c.getConstant("a");

        Function cc_s = cc.getFunction("s");
        Function cc_s_c = cc_s.getFunction("c");
        Constant cc_a = cc.getConstant("a");
        Constant cc_s_a = cc_s.getConstant("a");

        if (s != sc && c != cc
                && s_v1 == sc_v1
                && c_v1 == cc_v1
                && s_v2 == sc_v2
                && c_v2 == cc_v2
                && sc == sc_c_s
                && cc == cc_s_c
                && sc_a == sc_c_a
                && cc_a == cc_s_a
                && s.getDescription().equals("Clone")
                && c.getDescription().equals("Clone")
                && a.getDescription().equals("Clone")
                && sc.getDescription().equals("Clone")
                && cc.getDescription().equals("Clone")
                && sc_a.getDescription().equals("Clone")
                && cc_a.getDescription().equals("Clone")
                && s.getFunctionName().equals("s")
                && c.getFunctionName().equals("c")
                && a.getConstantName().equals("a")
                && sc.getFunctionName().equals("s")
                && cc.getFunctionName().equals("c")
                && sc_a.getConstantName().equals("a")
                && cc_a.getConstantName().equals("a")
        ) testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0313() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Expression API - cloneThreadSafe()";
        TestCommonTools.consolePrintTestApiStart(313, testDescr);

        Constant a = new Constant("a = 3");
        Argument x = new Argument("x = 2");
        Argument y = new Argument("y = x^a + a^2", x, a);
        Function f = new Function("f(x) = 2*x + a", a);
        Function g = new Function("g(x,y) = f(x) + f(y)", f);
        RecursiveArgument fib = new RecursiveArgument("fib(n) = fib(n-1)+fib(n-2) + a", a);
        fib.addBaseCase(0, 0);
        fib.addBaseCase(1, 1);
        Expression e = new Expression("y+g(2,3) + fib(10) + f(x) + f(a)", g, y, fib, f, x, a);

        double e_v1 = e.calculate();
        Expression ec = e.cloneForThreadSafe();
        double ec_v1 = ec.calculate();

        Argument y1 = ec.getArgument("y");
        Argument x1 = ec.getArgument("x");
        Argument fib1 = ec.getArgument("fib");
        Function g1 = ec.getFunction("g");
        Function f1 = ec.getFunction("f");
        Constant a1 = ec.getConstant("a");

        Function f2 = g1.getFunction("f");
        Constant a2 = fib1.getConstant("a");

        Constant a3 = f1.getConstant("a");
        Argument x2 = y1.getArgument("x");
        Constant a4 = y1.getConstant("a");

        boolean s1 = ec.getSyntaxStatus();
        boolean p1 = e.getSyntaxStatus();
        a1.setConstantName("b");
        boolean s2 = ec.getSyntaxStatus();
        boolean p2 = e.getSyntaxStatus();
        a1.setConstantName("c");
        boolean s3 = ec.checkSyntax();
        boolean p3 = e.checkSyntax();
        a1.setConstantName("a");
        boolean s4 = ec.checkSyntax();
        boolean p4 = e.checkSyntax();
        boolean s5 = ec.getSyntaxStatus();
        boolean p5 = e.getSyntaxStatus();

        x1.setArgumentName("z");
        boolean s6 = ec.getSyntaxStatus();
        boolean p6 = e.getSyntaxStatus();
        boolean s7 = ec.checkSyntax();
        boolean p7 = e.checkSyntax();
        x1.setArgumentName("x");
        boolean s8 = ec.checkSyntax();
        boolean p8 = e.checkSyntax();
        boolean s9 = ec.getSyntaxStatus();
        boolean p9 = e.getSyntaxStatus();
        String n1 = f1.getFunctionName();
        f1.setFunctionName("ff");
        boolean s10 = ec.getSyntaxStatus();
        boolean p10 = e.getSyntaxStatus();
        boolean s11 = ec.checkSyntax();
        boolean p11 = e.checkSyntax();
        f1.setFunctionName("f");
        String n2 = f1.getFunctionName();
        boolean s12 = ec.checkSyntax();
        boolean p12 = e.checkSyntax();
        double e_v2 = e.calculate();
        double ec_v2 = ec.calculate();
        if (e != ec
                && e_v1 == ec_v1
                && a != a1
                && a1 == a2
                && a1 == a3
                && a1 == a4
                && x != x1
                && x1 == x2
                && f != f1
                && f1 == f2
                && y != y1
                && fib != fib1
                && s1 && p1
                && !s2 && p2
                && !s3 && p3
                && s4 && p4
                && s5 && p5
                && !s6 && p6
                && !s7 && p7
                && s8 && p8
                && s9 && p9
                && !s10 && p10
                && !s11 && p11
                && s12 && p12
                && e_v2 == ec_v2
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0314() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String exprStr = "(2 + 6 - (13 * 24 + 5 / (123 - 364 + 23))) - (2 + 6 - (13 * 24 + 5 / (123 - 364 + 23))) + (2 + 6 - (13 * 24 + 5 / (123 - 364 + 23))) * 345 * ((897 - 323)/ 23)";
        String testDescr = "Expression + CalcStepsRegister + Full Compilation: " + exprStr;
        TestCommonTools.consolePrintTestApiStart(314, testDescr);
        CalcStepsRegister r1 = new CalcStepsRegister();
        CalcStepsRegister r2 = new CalcStepsRegister();
        CalcStepsRegister r3 = new CalcStepsRegister();
        Expression e = new Expression(exprStr);
        double v1 = e.calculate(r1);
        double v2 = e.calculate(r2);
        double v3 = e.calculate(r3);

        if ( v1 == v2
                && v1 == v3
                && r1.calcStepRecords.size() == r2.calcStepRecords.size()
                && r1.calcStepRecords.size() == r3.calcStepRecords.size()
                && r1.toString().equals(r2.toString())
                && r1.toString().equals(r3.toString())
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0315() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String exprStr = "f(x,y)+z+(x*y)/z";
        String testDescr = "Expression + CalcStepsRegister + Full Compilation: " + exprStr;
        TestCommonTools.consolePrintTestApiStart(315, testDescr);
        CalcStepsRegister r1 = new CalcStepsRegister();
        CalcStepsRegister r2 = new CalcStepsRegister();
        CalcStepsRegister r3 = new CalcStepsRegister();

        Argument x = new Argument("x", "2*rList(2,2,2,2,2)");
        Argument y = new Argument("y = 2*x", x);
        Argument z = new Argument("z = 3*y/x", x, y);
        Function f = new Function("f(a,b) = a*b");

        Expression e = new Expression(exprStr, x, y, z, f);
        double v1 = e.calculate(r1);
        double v2 = e.calculate(r2);
        double v3 = e.calculate(r3);

        if ( v1 == v2
                && v1 == v3
                && r1.calcStepRecords.size() == r2.calcStepRecords.size()
                && r1.calcStepRecords.size() == r3.calcStepRecords.size()
                && r1.toString().equals(r2.toString())
                && r1.toString().equals(r3.toString())
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0316() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String exprStr = "f(a,b) = g(a,b) * a*b";
        String testDescr = "Expression + CalcStepsRegister + Full Compilation: " + exprStr;
        TestCommonTools.consolePrintTestApiStart(316, testDescr);
        CalcStepsRegister r1 = new CalcStepsRegister();
        CalcStepsRegister r2 = new CalcStepsRegister();
        CalcStepsRegister r3 = new CalcStepsRegister();

        Function g = new Function("g(a,b) = a*b");
        Function f = new Function("f(a,b) = g(a,b) * a*b", g);

        f.setArgumentValue(0, 1);
        f.setArgumentValue(1, 1);
        double v1 = f.calculate(r1);
        double v2 = f.calculate(r2);
        double v3 = f.calculate(r3);

        if ( v1 == v2
                && v1 == v3
                && r1.calcStepRecords.size() == r2.calcStepRecords.size()
                && r1.calcStepRecords.size() == r3.calcStepRecords.size()
                && r1.toString().equals(r2.toString())
                && r1.toString().equals(r3.toString())
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0317() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String exprStr = "z = 3*y/x";
        String testDescr = "Expression + CalcStepsRegister + Full Compilation: " + exprStr;
        TestCommonTools.consolePrintTestApiStart(317, testDescr);
        CalcStepsRegister r1 = new CalcStepsRegister();
        CalcStepsRegister r2 = new CalcStepsRegister();
        CalcStepsRegister r3 = new CalcStepsRegister();

        Argument x = new Argument("x", "2*rList(2,2,2,2,2)");
        Argument y = new Argument("y = 2*x", x);
        Argument z = new Argument("z = 3*y/x", x, y);

        double v1 = z.getArgumentValue(r1);
        double v2 = z.getArgumentValue(r2);
        double v3 = z.getArgumentValue(r3);

        if ( v1 == v2
                && v1 == v3
                && r1.calcStepRecords.size() == r2.calcStepRecords.size()
                && r1.calcStepRecords.size() == r3.calcStepRecords.size()
                && r1.toString().equals(r2.toString())
                && r1.toString().equals(r3.toString())
        ) testResult = true;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0318() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - French";
        TestCommonTools.consolePrintTestApiStart(318, testDescr);
        StringResources French = StringResources.languageFrench();
        StringModel.setStringResources(French);
        String userLanguage = StringModel.getStringResources().USER_LANGUAGE;
        mXparser.consolePrintln("USER_LANGUAGE = " + userLanguage);
        if (userLanguage.equals("Français"))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0319() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - German";
        TestCommonTools.consolePrintTestApiStart(319, testDescr);
        StringResources German = StringResources.languageGerman();
        StringModel.setStringResources(German);
        String userLanguage = StringModel.getStringResources().USER_LANGUAGE;
        mXparser.consolePrintln("USER_LANGUAGE = " + userLanguage);
        if (userLanguage.equals("Deutsch"))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0320() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - Italian";
        TestCommonTools.consolePrintTestApiStart(320, testDescr);
        StringResources Italian = StringResources.languageItalian();
        StringModel.setStringResources(Italian);
        String userLanguage = StringModel.getStringResources().USER_LANGUAGE;
        mXparser.consolePrintln("USER_LANGUAGE = " + userLanguage);
        if (userLanguage.equals("Italiano"))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0321() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - Polish";
        TestCommonTools.consolePrintTestApiStart(321, testDescr);
        StringResources Polish = StringResources.languagePolish();
        StringModel.setStringResources(Polish);
        String userLanguage = StringModel.getStringResources().USER_LANGUAGE;
        mXparser.consolePrintln("USER_LANGUAGE = " + userLanguage);
        if (userLanguage.equals("Polski"))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0322() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - Portuguese";
        TestCommonTools.consolePrintTestApiStart(322, testDescr);
        StringResources Portuguese = StringResources.languagePortuguese();
        StringModel.setStringResources(Portuguese);
        String userLanguage = StringModel.getStringResources().USER_LANGUAGE;
        mXparser.consolePrintln("USER_LANGUAGE = " + userLanguage);
        if (userLanguage.equals("Português"))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0323() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - Spanish";
        TestCommonTools.consolePrintTestApiStart(323, testDescr);
        StringResources Spanish = StringResources.languageSpanish();
        StringModel.setStringResources(Spanish);
        String userLanguage = StringModel.getStringResources().USER_LANGUAGE;
        mXparser.consolePrintln("USER_LANGUAGE = " + userLanguage);
        if (userLanguage.equals("Español"))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0324() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - English";
        TestCommonTools.consolePrintTestApiStart(324, testDescr);
        StringResources English = StringResources.languageEnglish();
        StringModel.setStringResources(English);
        String userLanguage = StringModel.getStringResources().USER_LANGUAGE;
        mXparser.consolePrintln("USER_LANGUAGE = " + userLanguage);
        if (userLanguage.equals("English"))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0325() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(String) - English";
        TestCommonTools.consolePrintTestApiStart(325, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage("en");
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageEnglish().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0326() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(String) - French";
        TestCommonTools.consolePrintTestApiStart(326, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage("fr");
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageFrench().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0327() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(String) - German";
        TestCommonTools.consolePrintTestApiStart(327, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage("de");
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageGerman().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0328() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(String) - Italian";
        TestCommonTools.consolePrintTestApiStart(328, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage("it");
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageItalian().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0329() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(String) - Polish";
        TestCommonTools.consolePrintTestApiStart(329, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage("pl");
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languagePolish().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0330() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(String) - Portuguese";
        TestCommonTools.consolePrintTestApiStart(330, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage("pt");
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languagePortuguese().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0331() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(String) - Spanish";
        TestCommonTools.consolePrintTestApiStart(331, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage("es");
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageSpanish().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0332() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(String) - Not supported";
        TestCommonTools.consolePrintTestApiStart(332, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage("xyz");
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageEnglish().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0333() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(Locale) - UK";
        TestCommonTools.consolePrintTestApiStart(333, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage(Locale.UK);
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageEnglish().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0334() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(Locale) - US";
        TestCommonTools.consolePrintTestApiStart(334, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage(Locale.US);
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageEnglish().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0335() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(Locale) - ENGLISH";
        TestCommonTools.consolePrintTestApiStart(335, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage(Locale.ENGLISH);
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageEnglish().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0336() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(Locale) - CANADA";
        TestCommonTools.consolePrintTestApiStart(336, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage(Locale.CANADA);
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageEnglish().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0337() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(Locale) - FRENCH";
        TestCommonTools.consolePrintTestApiStart(337, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage(Locale.FRENCH);
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageFrench().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0338() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(Locale) - FRANCE";
        TestCommonTools.consolePrintTestApiStart(338, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage(Locale.FRANCE);
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageFrench().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0339() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(Locale) - CANADA_FRENCH";
        TestCommonTools.consolePrintTestApiStart(339, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage(Locale.CANADA_FRENCH);
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageFrench().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0340() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(Locale) - GERMAN";
        TestCommonTools.consolePrintTestApiStart(340, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage(Locale.GERMAN);
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageGerman().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0341() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(Locale) - GERMANY";
        TestCommonTools.consolePrintTestApiStart(341, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage(Locale.GERMANY);
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageGerman().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0342() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(Locale) - ITALIAN";
        TestCommonTools.consolePrintTestApiStart(342, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage(Locale.ITALIAN);
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageItalian().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0343() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(Locale) - ITALY";
        TestCommonTools.consolePrintTestApiStart(343, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage(Locale.ITALY);
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageItalian().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0344() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(Locale) - pl-PL";
        TestCommonTools.consolePrintTestApiStart(344, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage(new Locale("pl", "PL"));
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languagePolish().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0345() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(Locale) - pt-PT";
        TestCommonTools.consolePrintTestApiStart(345, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage(new Locale("pt", "PT"));
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languagePortuguese().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0346() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(Locale) - pt-BR";
        TestCommonTools.consolePrintTestApiStart(346, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage(new Locale("pt", "BR"));
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languagePortuguese().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0347() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(Locale) - es-ES";
        TestCommonTools.consolePrintTestApiStart(347, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage(new Locale("es", "ES"));
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageSpanish().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0348() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(Locale) - es-AR";
        TestCommonTools.consolePrintTestApiStart(348, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage(new Locale("es", "AR"));
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageSpanish().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0349() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(Locale) - no-NO";
        StringResources lang = StringResources.bestMatchingLanguage(new Locale("no", "NO"));
        TestCommonTools.consolePrintTestApiStart(349, testDescr);
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageEnglish().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0350() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser - enableSelectBestMatchingLanguage + checkIfSelectBestMatchingLanguage";
        TestCommonTools.consolePrintTestApiStart(350, testDescr);
        mXparser.enableSelectBestMatchingLanguage();
        if (mXparser.checkIfSelectBestMatchingLanguage())
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0351() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser - disableSelectBestMatchingLanguage + checkIfSelectBestMatchingLanguage";
        TestCommonTools.consolePrintTestApiStart(351, testDescr);
        mXparser.disableSelectBestMatchingLanguage();
        if (!mXparser.checkIfSelectBestMatchingLanguage())
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0352() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser - enableSelectBestMatchingLanguage + disableSelectBestMatchingLanguage + enableSelectBestMatchingLanguage";
        TestCommonTools.consolePrintTestApiStart(352, testDescr);
        mXparser.enableSelectBestMatchingLanguage();
        String lang1 = StringModel.getStringResources().USER_LANGUAGE;
        mXparser.disableSelectBestMatchingLanguage();
        mXparser.enableSelectBestMatchingLanguage();
        String lang2 = StringModel.getStringResources().USER_LANGUAGE;
        StringResources lang = StringResources.bestMatchingLanguage(new Locale("no", "NO"));
        mXparser.consolePrintln("USER_LANGUAGE #1 = " + lang1 + ", USER_LANGUAGE #2 = " + lang2);
        if (lang1.equals(lang2))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0353() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser - disableSelectBestMatchingLanguage + enableSelectBestMatchingLanguage + disableSelectBestMatchingLanguage";
        TestCommonTools.consolePrintTestApiStart(352, testDescr);
        mXparser.disableSelectBestMatchingLanguage();
        String lang1 = StringModel.getStringResources().USER_LANGUAGE;
        mXparser.enableSelectBestMatchingLanguage();
        mXparser.disableSelectBestMatchingLanguage();
        String lang2 = StringModel.getStringResources().USER_LANGUAGE;
        StringResources lang = StringResources.bestMatchingLanguage(new Locale("no", "NO"));
        mXparser.consolePrintln("USER_LANGUAGE #1 = " + lang1 + ", USER_LANGUAGE #2 = " + lang2);
        mXparser.consolePrintln();
        if (lang1.equals(lang2) && lang1.equals(StringResources.languageEnglish().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0354() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser - changeLanguageTo(String) - pl";
        TestCommonTools.consolePrintTestApiStart(354, testDescr);
        mXparser.changeLanguageTo("pl");
        StringResources lang = StringModel.getStringResources();
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languagePolish().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0355() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser - changeLanguageTo(Locale) - pt-PT";
        TestCommonTools.consolePrintTestApiStart(355, testDescr);
        mXparser.changeLanguageTo(new Locale("pt", "PT"));
        StringResources lang = StringModel.getStringResources();
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languagePortuguese().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0356() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser - disableSelectBestMatchingLanguage + changeLanguageToBestMatching";
        TestCommonTools.consolePrintTestApiStart(356, testDescr);
        String osLang = Locale.getDefault().getLanguage();
        boolean isSupportedLanguage = osLang.equals("fr") || osLang.equals("de") || osLang.equals("it") || osLang.equals("pl")  || osLang.equals("pt") || osLang.equals("es");
        mXparser.disableSelectBestMatchingLanguage();
        mXparser.changeLanguageToBestMatching();
        String userLang = StringModel.getStringResources().USER_LANGUAGE;
        String englishLang = StringResources.languageEnglish().USER_LANGUAGE;
        mXparser.consolePrintln("OS_LANGUAGE = " + osLang);
        mXparser.consolePrintln("USER_LANGUAGE = " + userLang);
        if (isSupportedLanguage && !userLang.equals(englishLang))
            testResult = true;
        if (!isSupportedLanguage && userLang.equals(englishLang))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0357() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = true;
        String testDescr = "mXparser - getHelpAsMarkdownTable + case of wrongly escaping pipe in some MD engines |/\\|";
        TestCommonTools.consolePrintTestApiStart(357, testDescr);
        String helpString1 = mXparser.getHelpAsMarkdownTable();
        String helpString2 = mXparser.getHelpAsMarkdownTable("");
        String helpString3 = mXparser.getHelpAsMarkdownTable(true, true, "caption");
        String helpString4 = mXparser.getHelpAsMarkdownTable("", true, true, "caption");
        if (!helpString1.contains("\\\\ |") && helpString1.contains("\\\\|"))
            testResult = false;
        if (!helpString2.contains("\\\\ |") && helpString2.contains("\\\\|"))
            testResult = false;
        if (!helpString3.contains("\\\\ |") && helpString3.contains("\\\\|"))
            testResult = false;
        if (!helpString4.contains("\\\\ |") && helpString4.contains("\\\\|"))
            testResult = false;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0358() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = true;
        String testDescr = "Bitwise NAND translations";
        TestCommonTools.consolePrintTestApiStart(358, testDescr);
        String en = StringResources.languageEnglish().BITWISE_OPERATOR_NAND;
        String fr = StringResources.languageFrench().BITWISE_OPERATOR_NAND;
        String de = StringResources.languageGerman().BITWISE_OPERATOR_NAND;
        String it = StringResources.languageItalian().BITWISE_OPERATOR_NAND;
        String pl = StringResources.languagePolish().BITWISE_OPERATOR_NAND;
        String pt = StringResources.languagePortuguese().BITWISE_OPERATOR_NAND;
        String es = StringResources.languageSpanish().BITWISE_OPERATOR_NAND;
        String zh = StringResources.languageChinese().BITWISE_OPERATOR_NAND;
        if (en.equals(fr)) testResult = false;
        if (en.equals(de)) testResult = false;
        if (en.equals(it)) testResult = false;
        if (en.equals(pl)) testResult = false;
        if (en.equals(pt)) testResult = false;
        if (en.equals(es)) testResult = false;
        if (en.equals(zh)) testResult = false;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0359() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = true;
        String testDescr = "Bitwise NOR translations";
        TestCommonTools.consolePrintTestApiStart(359, testDescr);
        String en = StringResources.languageEnglish().BITWISE_OPERATOR_NOR;
        String fr = StringResources.languageFrench().BITWISE_OPERATOR_NOR;
        String de = StringResources.languageGerman().BITWISE_OPERATOR_NOR;
        String it = StringResources.languageItalian().BITWISE_OPERATOR_NOR;
        String pl = StringResources.languagePolish().BITWISE_OPERATOR_NOR;
        String pt = StringResources.languagePortuguese().BITWISE_OPERATOR_NOR;
        String es = StringResources.languageSpanish().BITWISE_OPERATOR_NOR;
        String zh = StringResources.languageChinese().BITWISE_OPERATOR_NOR;
        if (en.equals(fr)) testResult = false;
        if (en.equals(de)) testResult = false;
        if (en.equals(it)) testResult = false;
        if (en.equals(pl)) testResult = false;
        if (en.equals(pt)) testResult = false;
        if (en.equals(es)) testResult = false;
        if (en.equals(zh)) testResult = false;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0360() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = true;
        String testDescr = "Bitwise XNOR translations";
        TestCommonTools.consolePrintTestApiStart(360, testDescr);
        String en = StringResources.languageEnglish().BITWISE_OPERATOR_XNOR;
        String fr = StringResources.languageFrench().BITWISE_OPERATOR_XNOR;
        String de = StringResources.languageGerman().BITWISE_OPERATOR_XNOR;
        String it = StringResources.languageItalian().BITWISE_OPERATOR_XNOR;
        String pl = StringResources.languagePolish().BITWISE_OPERATOR_XNOR;
        String pt = StringResources.languagePortuguese().BITWISE_OPERATOR_XNOR;
        String es = StringResources.languageSpanish().BITWISE_OPERATOR_XNOR;
        String zh = StringResources.languageChinese().BITWISE_OPERATOR_XNOR;
        if (en.equals(fr)) testResult = false;
        if (en.equals(de)) testResult = false;
        if (en.equals(it)) testResult = false;
        if (en.equals(pl)) testResult = false;
        if (en.equals(pt)) testResult = false;
        if (en.equals(es)) testResult = false;
        if (en.equals(zh)) testResult = false;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0361() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = true;
        String testDescr = "Integer division translations";
        TestCommonTools.consolePrintTestApiStart(361, testDescr);
        String en = StringResources.languageEnglish().OPERATOR_DIVIDE_QUOTIENT;
        String fr = StringResources.languageFrench().OPERATOR_DIVIDE_QUOTIENT;
        String de = StringResources.languageGerman().OPERATOR_DIVIDE_QUOTIENT;
        String it = StringResources.languageItalian().OPERATOR_DIVIDE_QUOTIENT;
        String pl = StringResources.languagePolish().OPERATOR_DIVIDE_QUOTIENT;
        String pt = StringResources.languagePortuguese().OPERATOR_DIVIDE_QUOTIENT;
        String es = StringResources.languageSpanish().OPERATOR_DIVIDE_QUOTIENT;
        String zh = StringResources.languageChinese().OPERATOR_DIVIDE_QUOTIENT;
        if (en.equals(fr)) testResult = false;
        if (en.equals(de)) testResult = false;
        if (en.equals(it)) testResult = false;
        if (en.equals(pl)) testResult = false;
        if (en.equals(pt)) testResult = false;
        if (en.equals(es)) testResult = false;
        if (en.equals(zh)) testResult = false;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0362() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = true;
        String testDescr = "String Resources & Help test: Bitwise NAND";
        TestCommonTools.consolePrintTestApiStart(362, testDescr);
        String helpStr = mXparser.getHelpAsCsv("@~&");

        if (!helpStr.contains(BitwiseOperator.NAND_STR)) testResult = false;
        if (!helpStr.contains(BitwiseOperator.NAND_SINCE)) testResult = false;
        if (!helpStr.contains(BitwiseOperator.NAND_SYN)) testResult = false;

        StringResources sr = StringModel.getStringResources();
        if (!helpStr.contains(sr.BITWISE_OPERATOR)) testResult = false;
        if (!helpStr.contains(sr.BITWISE_OPERATOR_NAND)) testResult = false;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0363() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = true;
        String testDescr = "String Resources & Help test: Bitwise NOR";
        TestCommonTools.consolePrintTestApiStart(363, testDescr);
        String helpStr = mXparser.getHelpAsCsv("@~|");

        if (!helpStr.contains(BitwiseOperator.NOR_STR)) testResult = false;
        if (!helpStr.contains(BitwiseOperator.NOR_SINCE)) testResult = false;
        if (!helpStr.contains(BitwiseOperator.NOR_SYN)) testResult = false;

        StringResources sr = StringModel.getStringResources();
        if (!helpStr.contains(sr.BITWISE_OPERATOR)) testResult = false;
        if (!helpStr.contains(sr.BITWISE_OPERATOR_NOR)) testResult = false;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0364() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = true;
        String testDescr = "String Resources & Help test: Bitwise XNOR";
        TestCommonTools.consolePrintTestApiStart(364, testDescr);
        String helpStr = mXparser.getHelpAsCsv("@~^");

        if (!helpStr.contains(BitwiseOperator.XNOR_STR)) testResult = false;
        if (!helpStr.contains(BitwiseOperator.XNOR_SINCE)) testResult = false;
        if (!helpStr.contains(BitwiseOperator.XNOR_SYN)) testResult = false;

        StringResources sr = StringModel.getStringResources();
        if (!helpStr.contains(sr.BITWISE_OPERATOR)) testResult = false;
        if (!helpStr.contains(sr.BITWISE_OPERATOR_XNOR)) testResult = false;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0365() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = true;
        String testDescr = "String Resources & Help test: Integer division";
        TestCommonTools.consolePrintTestApiStart(365, testDescr);
        String helpStr = mXparser.getHelpAsCsv("\\");

        if (!helpStr.contains(Operator.DIVIDE_QUOTIENT_STR)) testResult = false;
        if (!helpStr.contains(Operator.DIVIDE_QUOTIENT_SINCE)) testResult = false;
        if (!helpStr.contains(Operator.DIVIDE_QUOTIENT_SYN)) testResult = false;

        StringResources sr = StringModel.getStringResources();
        if (!helpStr.contains(sr.OPERATOR)) testResult = false;
        if (!helpStr.contains(sr.OPERATOR_DIVIDE_QUOTIENT)) testResult = false;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0366() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = true;
        String testDescr = "String Resources & Help test: division central & east europe";
        TestCommonTools.consolePrintTestApiStart(366, testDescr);
        String helpStr = mXparser.getHelpAsCsv(":");

        if (!helpStr.contains(Operator.DIVIDE_EUROPE_STR)) testResult = false;
        if (!helpStr.contains(Operator.DIVIDE_SINCE_EUROPE)) testResult = false;
        if (!helpStr.contains(Operator.DIVIDE_EUROPE_SYN)) testResult = false;

        StringResources sr = StringModel.getStringResources();
        if (!helpStr.contains(sr.OPERATOR)) testResult = false;
        if (!helpStr.contains(sr.OPERATOR_DIVIDE)) testResult = false;

        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0367() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "disable / enable / check if Special Cases";
        TestCommonTools.consolePrintTestApiStart(367, testDescr);
        boolean specialCases0 = mXparser.checkIfSpecialCases();
        mXparser.disableSpecialCases();
        boolean specialCases1 = mXparser.checkIfSpecialCases();
        mXparser.setSpecialCases(false);
        boolean specialCases2 = mXparser.checkIfSpecialCases();
        mXparser.enableSpecialCases();
        boolean specialCases3 = mXparser.checkIfSpecialCases();
        mXparser.setSpecialCases(true);
        boolean specialCases4 = mXparser.checkIfSpecialCases();
        mXparser.setSpecialCases(false);
        boolean specialCases5 = mXparser.checkIfSpecialCases();

        if (specialCases0 && !specialCases1 && !specialCases2 && specialCases3 && specialCases4 && !specialCases5)
            testResult = true;

        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0368() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - Chinese";
        TestCommonTools.consolePrintTestApiStart(368, testDescr);
        StringResources Chinese = StringResources.languageChinese();
        StringModel.setStringResources(Chinese);
        String userLanguage = StringModel.getStringResources().USER_LANGUAGE;
        mXparser.consolePrintln("USER_LANGUAGE = " + userLanguage);
        if (userLanguage.equals("中文"))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }

    @Test
    public void testApi0369() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(String) - Chinese";
        TestCommonTools.consolePrintTestApiStart(369, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage("zh");
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageChinese().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0370() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "StringResources - BestMatchingLanguage(Locale) - zh-CN";
        TestCommonTools.consolePrintTestApiStart(370, testDescr);
        StringResources lang = StringResources.bestMatchingLanguage(new Locale("zh", "CN"));
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageChinese().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0371() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser - changeLanguageTo(String) - zh";
        TestCommonTools.consolePrintTestApiStart(371, testDescr);
        mXparser.changeLanguageTo("zh");
        StringResources lang = StringModel.getStringResources();
        mXparser.consolePrintln("USER_LANGUAGE = " + lang.USER_LANGUAGE);
        if (lang.USER_LANGUAGE.equals(StringResources.languageChinese().USER_LANGUAGE))
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    @Test
    public void testApi0372() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "mXparser - warmUpBeforeConcurrentUse()";
        TestCommonTools.consolePrintTestApiStart(372, testDescr);
        boolean isWarmedUpFalse = mXparser.checkIfWarmedUpBeforeConcurrentUse();
        boolean isWarmedUp = mXparser.warmUpBeforeConcurrentUse();
        boolean isWarmedUpTrue = mXparser.checkIfWarmedUpBeforeConcurrentUse();
        if (!isWarmedUpFalse && isWarmedUp && isWarmedUpTrue)
            testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
        StringModel.setDefaultStringResources();
    }
    private static final class RecoveringArgumentSource implements ArgumentExtension {
        double value = 2;
        int failureKind;
        public double getArgumentValue() {
            int failure = failureKind;
            failureKind = 0;
            if (failure == 1) throw new IllegalStateException("planned callback failure");
            if (failure == 2) throw new AssertionError("planned callback failure");
            return value;
        }
        public ArgumentExtension clone() {
            RecoveringArgumentSource copy = new RecoveringArgumentSource();
            copy.value = value;
            copy.failureKind = failureKind;
            return copy;
        }
    }
    private static final class NestedRecoverySource implements ArgumentExtension {
        final Expression expression;
        NestedRecoverySource(Expression expression) { this.expression = expression; }
        public double getArgumentValue() { return expression.calculate(); }
        public ArgumentExtension clone() { return new NestedRecoverySource(expression.cloneForThreadSafe()); }
    }
    @Test
    public void testApi0373() {
        TestCommonTools.testApiSettingsInit();
        TestCommonTools.consolePrintTestApiStart(373, "Repeated calculation after callback exceptions");
        for (boolean compiled : new boolean[] {false, true}) {
            for (int failureKind : new int[] {1, 2}) {
                for (boolean registerSteps : new boolean[] {false, true}) {
                    RecoveringArgumentSource source = new RecoveringArgumentSource();
                    Argument value = new Argument("recoveringValue", source);
                    Expression expression = new Expression("recoveringValue+1", value);
                    if (compiled) Assertions.assertEquals(3, expression.calculate());
                    source.failureKind = failureKind;
                    Assertions.assertTrue(Double.isNaN(expression.calculate(registerSteps ? new CalcStepsRegister() : null)));
                    Assertions.assertTrue(expression.getErrorMessage().contains("planned callback failure"));
                    for (double nextValue : new double[] {5, 8, 11}) {
                        source.value = nextValue;
                        Assertions.assertEquals(nextValue + 1, expression.calculate(registerSteps ? new CalcStepsRegister() : null));
                    }
                    source.failureKind = failureKind;
                    Assertions.assertTrue(Double.isNaN(expression.calculate()));
                    for (double nextValue : new double[] {14, 17, 20}) {
                        source.value = nextValue;
                        Assertions.assertEquals(nextValue + 1, expression.calculate());
                    }
                }
            }
        }
        RecoveringArgumentSource source = new RecoveringArgumentSource();
        Argument base = new Argument("baseValue", 1);
        Expression original = new Expression("recoveringValue+baseValue", new Argument("recoveringValue", source), base);
        Assertions.assertEquals(3, original.calculate());
        Expression clone = original.cloneForThreadSafe();
        source.failureKind = 1;
        Assertions.assertTrue(Double.isNaN(original.calculate()));
        clone.getArgument("baseValue").setArgumentValue(5);
        Assertions.assertEquals(7, clone.calculate());
        base.setArgumentValue(8);
        source.value = 3;
        Assertions.assertEquals(11, original.calculate());
        base.setArgumentValue(9);
        source.value = 4;
        Assertions.assertEquals(13, original.calculate());
        clone.getArgument("baseValue").setArgumentValue(10);
        Assertions.assertEquals(12, clone.calculate());

        RecoveringArgumentSource innerSource = new RecoveringArgumentSource();
        Expression inner = new Expression("recoveringValue+1", new Argument("recoveringValue", innerSource));
        Expression outer = new Expression("nestedValue*2", new Argument("nestedValue", new NestedRecoverySource(inner)));
        innerSource.failureKind = 1;
        Assertions.assertTrue(Double.isNaN(outer.calculate()));
        innerSource.value = 5;
        Assertions.assertEquals(12, outer.calculate());
        innerSource.value = 8;
        Assertions.assertEquals(18, outer.calculate());
        TestCommonTools.consolePrintTestApiEnd(true);
    }
    @Test
    public void testApi0374() {
        TestCommonTools.testApiSettingsInit();
        TestCommonTools.consolePrintTestApiStart(374, "Gamma recurrence without representable progress");
        for (double s : new double[] {Double.NEGATIVE_INFINITY, -Double.MAX_VALUE, -0x1.0p54}) {
            Assertions.assertEquals(s, s + 1);
            for (double x : new double[] {1, 2}) {
                Assertions.assertTrue(Double.isNaN(SpecialFunctions.regularizedGammaLowerP(s, x)));
                Assertions.assertTrue(Double.isNaN(SpecialFunctions.regularizedGammaUpperQ(s, x)));
            }
            for (double x : new double[] {0, -0.0, BinaryRelations.DEFAULT_COMPARISON_EPSILON / 2, -BinaryRelations.DEFAULT_COMPARISON_EPSILON / 2}) {
                Assertions.assertEquals(0, SpecialFunctions.regularizedGammaLowerP(s, x));
                Assertions.assertEquals(1, SpecialFunctions.regularizedGammaUpperQ(s, x));
            }
            Assertions.assertTrue(Double.isNaN(SpecialFunctions.regularizedGammaLowerP(s, -1)));
            Assertions.assertTrue(Double.isNaN(SpecialFunctions.regularizedGammaUpperQ(s, -1)));
            Assertions.assertTrue(Double.isNaN(SpecialFunctions.regularizedGammaLowerP(s, Double.NaN)));
            Assertions.assertTrue(Double.isNaN(SpecialFunctions.regularizedGammaUpperQ(s, Double.NaN)));
        }
        Assertions.assertTrue(Double.isNaN(SpecialFunctions.regularizedGammaLowerP(Double.NaN, 0)));
        Assertions.assertTrue(Double.isNaN(SpecialFunctions.regularizedGammaUpperQ(Double.NaN, 0)));
        Assertions.assertTrue(Double.isNaN(SpecialFunctions.incompleteGammaLower(Double.NEGATIVE_INFINITY, 2)));
        Assertions.assertTrue(Double.isNaN(SpecialFunctions.incompleteGammaUpper(Double.NEGATIVE_INFINITY, 2)));
        for (String name : new String[] {"GammaL", "GammaU", "GammaRegL", "GammaRegU", "GammaP", "GammaQ"}) {
            double expected = name.equals("GammaU") || name.equals("GammaRegU") || name.equals("GammaQ")
                    ? 0.1353352832366127 : 0.8646647167633873;
            for (boolean compiled : new boolean[] {false, true}) {
                Argument s = new Argument("s", 1);
                Expression expression = new Expression(name + "(s,2)", s);
                Assertions.assertTrue(expression.checkSyntax());
                if (compiled) Assertions.assertEquals(expected, expression.calculate(), 1e-14);
                s.setArgumentValue(Double.NEGATIVE_INFINITY);
                Assertions.assertTrue(Double.isNaN(expression.calculate()));
                s.setArgumentValue(1);
                Assertions.assertEquals(expected, expression.calculate(), 1e-14);
                s.setArgumentValue(Double.NEGATIVE_INFINITY);
                Assertions.assertTrue(Double.isNaN(expression.calculate()));
                s.setArgumentValue(1);
                Assertions.assertEquals(expected, expression.calculate(), 1e-14);
            }
        }
        TestCommonTools.consolePrintTestApiEnd(true);
    }
    public static String cleanMarkdownBackslash(String str) {
        return str.replace("\\\\", "").replace("\\|", "");
    }
    public static boolean testCanonicalString(String expStr, String expResStr, String... elements) {
        mXparser.consolePrintln();
        mXparser.consolePrintln("------ expStr = " + expStr);
        mXparser.consolePrintln("------ expResStr = " + expResStr);
        Expression e = new Expression(expStr);
        if (elements != null)
            if (elements.length > 0)
                for (String str : elements)
                    e.addArguments(new Argument(str, 0));
        String canExprStr = e.getCanonicalExpressionString();
        mXparser.consolePrintln("------ canExprStr = " + canExprStr);
        return expResStr.equals(canExprStr);
    }

    @Test
    @SuppressWarnings("deprecation")
    public void testApi0375() {
        TestCommonTools.testApiSettingsInit();
        TestCommonTools.consolePrintTestApiStart(375, "Function setFunction restores recursive self without duplicate registration");
        for (boolean variadic : new boolean[] {false, true})
            for (boolean suppliedSelf : new boolean[] {false, true}) {
                Function function = new Function("old(t)=t+1");
                for (String name : new String[] {"f", "g"}) {
                    String definition = variadic
                        ? name + "(...)=if(par(1)>0,par(1)*" + name + "(par(1)-1),1)"
                        : name + "(t)=if(t>0,t*" + name + "(t-1),1)";
                    function.setFunction(definition, suppliedSelf
                        ? new PrimitiveElement[] {function} : new PrimitiveElement[0]);
                    Assertions.assertTrue(function.getFunction(name) == function);
                    Assertions.assertTrue(function.checkSyntax());
                    Assertions.assertEquals(120, function.calculate(5.));
                    Assertions.assertEquals(6, function.calculate(3.));
                }
                function.setFunction("h(t)=t+2");
                Assertions.assertTrue(function.getFunction("h") == function);
                Assertions.assertEquals(7, function.calculate(5.));
            }
        TestCommonTools.consolePrintTestApiEnd(true);
    }

    @Test
    public void testApi0376() {
        TestCommonTools.testApiSettingsInit();
        TestCommonTools.consolePrintTestApiStart(376, "Other numeral base conversion from int and double digit parameters");
        for (int base : new int[] {2, 3, 8, 10, 16, 36}) {
            double expected = base * base + 1;
            Assertions.assertEquals(expected, mXparser.convOthBase2Decimal(base, 1, 0, 1));
            Assertions.assertEquals(expected, mXparser.convOthBase2Decimal((double)base, 1., 0., 1.));
            Assertions.assertEquals(expected, mXparser.convOthBase2Decimal(base, new int[] {1, 0, 1}));
            Assertions.assertEquals(expected, mXparser.convOthBase2Decimal((double)base, new double[] {1., 0., 1.}));
        }
        Assertions.assertEquals(250, mXparser.convOthBase2Decimal(16, 15, 10));
        Assertions.assertEquals(250, mXparser.convOthBase2Decimal(16., 15., 10.));
        Assertions.assertEquals(123, mXparser.convOthBase2Decimal(10, 0, 1, 2, 3));
        Assertions.assertEquals(123, mXparser.convOthBase2Decimal(10., 0., 1., 2., 3.));
        Assertions.assertEquals(3, mXparser.convOthBase2Decimal(1, 1, 1, 1));
        Assertions.assertEquals(3, mXparser.convOthBase2Decimal(1., 1., 1., 1.));
        Assertions.assertEquals(0, mXparser.convOthBase2Decimal(1, new int[0]));
        Assertions.assertEquals(0, mXparser.convOthBase2Decimal(1., new double[0]));
        Assertions.assertEquals(5, mXparser.convOthBase2Decimal(2.9, 1.9, 0.2, 1.8));
        Assertions.assertTrue(Double.isNaN(mXparser.convOthBase2Decimal(2, new int[0])));
        Assertions.assertTrue(Double.isNaN(mXparser.convOthBase2Decimal(2., new double[0])));
        Assertions.assertTrue(Double.isNaN(mXparser.convOthBase2Decimal(2, (int[])null)));
        Assertions.assertTrue(Double.isNaN(mXparser.convOthBase2Decimal(2., (double[])null)));
        Assertions.assertTrue(Double.isNaN(mXparser.convOthBase2Decimal(2, 1, 2)));
        Assertions.assertTrue(Double.isNaN(mXparser.convOthBase2Decimal(2., 1., 2.)));
        Assertions.assertTrue(Double.isNaN(mXparser.convOthBase2Decimal(1, 1, 0)));
        Assertions.assertTrue(Double.isNaN(mXparser.convOthBase2Decimal(1., 1., 0.)));
        Assertions.assertTrue(Double.isNaN(mXparser.convOthBase2Decimal(0, 1)));
        Assertions.assertTrue(Double.isNaN(mXparser.convOthBase2Decimal(0., 1.)));
        Assertions.assertTrue(Double.isNaN(mXparser.convOthBase2Decimal(2., Double.NaN)));
        TestCommonTools.consolePrintTestApiEnd(true);
    }

    // LaTeX API IDs 0388-0422 are reserved for matching Java/C#/C++ scenarios.

    private static List<KeyWord> latexKeywords() { return mXparser.getKeyWords(); }

    private static Expression latexExpression(String source) {
        Expression e = new Expression(source);
        if (source.equals("a(b+c)")) e.addArguments(new Argument("a"));
        if (source.equals("[my_unit]")) e.addConstants(new Constant("[my_unit]", 1));
        return e;
    }
    private static String latexExport(String source) {
        String text = latexExpression(source).getExpressionAsLaTeX();
        return text;
    }
    private static long latexTokenKey(int type, int id) { return ((long)type << 32) | (id & 0xffffffffL); }
    @Test
    public void testApi0388() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: public token inventory and equivalent square root rules";
        TestCommonTools.consolePrintTestApiStart(388, testDescr);
        List<KeyWord> keywords = latexKeywords();
        Set<Long> actual = new HashSet<>();
        for (KeyWord kw : keywords) actual.add(latexTokenKey(kw.wordTypeId, kw.wordId));
        // The two additional UDF-context keys are not in the public ordinary-expression vocabulary.
        Assertions.assertEquals(529, keywords.size());
        Assertions.assertEquals(414, actual.size());
        Assertions.assertEquals(latexExport("sqrt(x+1)"), latexExport("√(x+1)"));
        Assertions.assertEquals("\\sqrt[{3}]{x}", latexExport("root(3,x)"));
        Assertions.assertEquals("\\sqrt[3]{x}", latexExport("∛x"));
        Assertions.assertEquals("\\sqrt[{4}]{x}", latexExport("root(4,x)"));
        Assertions.assertEquals("\\sqrt[4]{x}", latexExport("∜x"));
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    private static String latexCalculusArguments(int id, int count) {
        if (id == CalculusOperator.INT_ID || id == CalculusOperator.SOLVE_ID) return "f(x),x,a,b";
        if (id == CalculusOperator.DERN_ID) return count == 3 ? "f(x),n,x" : "f(x),n,x,eps,m";
        if (id == CalculusOperator.DER_ID || id == CalculusOperator.DER_LEFT_ID || id == CalculusOperator.DER_RIGHT_ID)
            return count == 2 ? "f(x),x" : count == 3 ? "f(x),x,p" : count == 4 ? "f(x),x,eps,m" : "f(x),x,p,eps,m";
        if (id == CalculusOperator.FORW_DIFF_ID || id == CalculusOperator.BACKW_DIFF_ID) return count == 2 ? "f(x),x" : "f(x),x,h";
        return count == 4 ? "i,a,b,f(i)" : "i,a,b,f(i),h";
    }
    private static int[] latexCalculusArities(int id) {
        if (id == CalculusOperator.INT_ID || id == CalculusOperator.SOLVE_ID) return new int[]{4};
        if (id == CalculusOperator.DERN_ID) return new int[]{3, 5};
        if (id == CalculusOperator.DER_ID || id == CalculusOperator.DER_LEFT_ID || id == CalculusOperator.DER_RIGHT_ID) return new int[]{2, 3, 4, 5};
        if (id == CalculusOperator.FORW_DIFF_ID || id == CalculusOperator.BACKW_DIFF_ID) return new int[]{2, 3};
        return new int[]{4, 5};
    }
    private static String latexAliasInput(KeyWord kw) {
        int t = kw.wordTypeId, id = kw.wordId;
        String w = kw.wordString;
        if (t == ParserSymbol.NUMBER_TYPE_ID) return "2.10";
        if (t == ParserSymbol.TYPE_ID) return id == ParserSymbol.BLANK_ID ? " " : id == ParserSymbol.COMMA_ID ? "f(a" + w + "b)" : "(a)";
        if (t == Function1Arg.TYPE_ID) return w + "(x)";
        if (t == Function2Arg.TYPE_ID) return w + "(a,b)";
        if (t == Function3Arg.TYPE_ID) return w + "(a,b,c)";
        if (t == FunctionVariadic.TYPE_ID) return w + (id == FunctionVariadic.IFF_ID ? "(a,b,c,x)" : "(a,b,c)");
        if (t == CalculusOperator.TYPE_ID) return w + "(" + latexCalculusArguments(id, latexCalculusArities(id)[0]) + ")";
        Token token = new Token(); token.tokenTypeId = t; token.tokenId = id;
        if (token.isUnaryLeftOperator()) return w + "a";
        if (token.isUnaryRightOperator()) return "a" + w;
        if (token.isBinaryOperator()) return "a" + w + "b";
        return w;
    }
    @Test
    public void testApi0389() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: builtin aliases and calculus arity variants";
        TestCommonTools.consolePrintTestApiStart(389, testDescr);
        Map<Long, String> canonical = new HashMap<>();
        for (KeyWord kw : latexKeywords()) {
            long key = latexTokenKey(kw.wordTypeId, kw.wordId);
            String input = latexAliasInput(kw);
            canonical.putIfAbsent(key, input);
            String reference = canonical.get(key);
            String scenario = "Alias " + kw.wordTypeId + ":" + kw.wordId + " " + kw.wordString;
            String actual = latexExport(input), expected = latexExport(reference);
            Assertions.assertEquals(expected, actual, scenario);
            Assertions.assertFalse(actual.contains("@+"), scenario);
            Assertions.assertFalse(actual.contains("@-"), scenario);
            if (kw.wordTypeId == CalculusOperator.TYPE_ID) {
                for (int count : latexCalculusArities(kw.wordId)) {
                    String variant = kw.wordString + "(" + latexCalculusArguments(kw.wordId, count) + ")";
                    Assertions.assertEquals(latexCalculusExpected(kw.wordId, count), latexExport(variant), "Calculus arity " + variant);
                }
            }
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    private static String latexCalculusExpected(int id, int count) {
        if (id == CalculusOperator.INT_ID) return "\\int_a^bf(x)\\,\\mathrm{d}x";
        if (id == CalculusOperator.SOLVE_ID) return "\\operatorname{root}_{x\\in[a,b]}(f(x)=0)";
        if (id == CalculusOperator.DERN_ID) return "\\frac{\\mathrm d^{n}}{\\mathrm d x^{n}}[f(x)]";
        if (id == CalculusOperator.DER_ID || id == CalculusOperator.DER_LEFT_ID || id == CalculusOperator.DER_RIGHT_ID) {
            String derivative = id == CalculusOperator.DER_ID ? "\\frac{\\mathrm d}{\\mathrm d x}[f(x)]"
                    : "D_x^" + (id == CalculusOperator.DER_LEFT_ID ? "-" : "+") + "[f(x)]";
            return count == 3 || count == 5 ? "\\left." + derivative + "\\right\\rvert_{x=p}" : derivative;
        }
        if (id == CalculusOperator.FORW_DIFF_ID || id == CalculusOperator.BACKW_DIFF_ID)
            return (id == CalculusOperator.FORW_DIFF_ID ? "\\Delta" : "\\nabla") + "_{x," + (count == 2 ? "1" : "h") + "}[f(x)]";
        String range = count == 4 ? "_{i=a}^{b}" : "_{\\substack{i=a+k\\cdot h\\\\k\\in\\mathbb Z,\\;0\\le k\\le\\frac{b-a}{h}}}";
        if (id == CalculusOperator.SUM_ID) return "\\sum" + range + "f(i)";
        if (id == CalculusOperator.PROD_ID) return "\\prod" + range + "f(i)";
        if (id == CalculusOperator.MIN_ID) return "\\min" + range + "f(i)";
        if (id == CalculusOperator.MAX_ID) return "\\max" + range + "f(i)";
        String statistic = id == CalculusOperator.AVG_ID ? "\\operatorname{mean}" : id == CalculusOperator.VAR_ID ? "s^2" : "s";
        return statistic + "\\left((f(i))" + range + "\\right)";
    }
    private static final String[][] LATEX_REFERENCE = {
        {"(a+b)/c", "\\frac{a+b}{c}"},
        {"a/(b+c)", "\\frac{a}{b+c}"},
        {"a*b/c", "\\frac{a\\cdot b}{c}"},
        {"a/b*c", "\\frac{a}{b}\\cdot c"},
        {"a/(b*c)", "\\frac{a}{b\\cdot c}"},
        {"a/b^c", "\\frac{a}{b^{c}}"},
        {"a/(b/c)", "\\frac{a}{\\frac{b}{c}}"},
        {"(a/b)/c", "\\frac{\\frac{a}{b}}{c}"},
        {"a^b^c", "a^{b^{c}}"},
        {"(a^b)^c", "(a^{b})^{c}"},
        {"-a^2", "-a^{2}"},
        {"(-a)^2", "(-a)^{2}"},
        {"2x^2", "2x^{2}"},
        {"a(b+c)", "a\\cdot(b+c)"},
        {"sin(x)", "\\sin x"},
        {"(sin(x))^2", "\\sin^{2}x"},
        {"(sin(x+2))^2", "\\sin^{2}(x+2)"},
        {"sin(x)^n", "\\sin^{n}x"},
        {"sin(x^2)", "\\sin(x^{2})"},
        {"sin(x^2)^3", "\\sin^{3}(x^{2})"},
        {"((sin((x))))^2", "\\sin^{2}x"},
        {"sin(cos(x)^2)^3", "\\sin^{3}(\\cos^{2}x)"},
        {"sin(2*x)", "\\sin 2x"},
        {"sin(2*x)+y", "\\sin 2x+y"},
        {"sin(2*x)*y", "\\sin(2x)\\cdot y"},
        {"sin(x)/cos(x)^2", "\\frac{\\sin x}{\\cos^{2}x}"},
        {"sin(x/y)", "\\sin\\left(\\frac{x}{y}\\right)"},
        {"sin(x)*cos(y)", "\\sin(x)\\cdot\\cos(y)"},
        {"-sin(x)^2", "-\\sin^{2}x"},
        {"(-sin(x))^2", "(-\\sin x)^{2}"},
        {"sin(x)^(-1)", "(\\sin x)^{-1}"},
        {"sin(x)^(-n)", "(\\sin x)^{-n}"},
        {"sin(x)^(n+1)", "(\\sin x)^{n+1}"},
        {"sin(x)^2^3", "(\\sin x)^{2^{3}}"},
        {"(sin(x)^2)^3", "(\\sin^{2}x)^{3}"},
        {"asin(x)", "\\arcsin x"},
        {"asin(x)^2", "(\\arcsin x)^{2}"},
        {"ctg(x)^2", "\\cot^{2}x"},
        {"tgh(x)^3", "\\tanh^{3}x"},
        {"cosech(x)^2", "\\operatorname{csch}^{2}x"},
        {"sin(x+2)", "\\sin(x+2)"},
        {"sin(x)^2+cos(x)^2", "\\sin^{2}x+\\cos^{2}x"},
        {"sin(x)*y", "\\sin(x)\\cdot y"},
        {"sqrt(x^2+y^2)", "\\sqrt{x^{2}+y^{2}}"},
        {"sqrt(x+1)", "\\sqrt{x+1}"},
        {"√(x+1)", "\\sqrt{x+1}"},
        {"root(3,x+y)", "\\sqrt[{3}]{x+y}"},
        {"abs(x-2)", "\\left\\lvert x-2\\right\\rvert"},
        {"log(2,x+y)", "\\log_{2}(x+y)"},
        {"mod(-5,3)", "\\operatorname{rem}(-5,3)"},
        {"C(n,k)", "\\binom{n}{k}"},
        {"Bern(2,n)", "B_2(n)"},
        {"Stirl1(n,k)", "\\left[\\genfrac{}{}{0pt}{}{n}{k}\\right]"},
        {"EulerPol(m,x)", "E_m(x)"},
        {"Gamma(0)", "\\Gamma(0)"},
        {"logGamma(x)", "\\ln\\left\\lvert\\Gamma(x)\\right\\rvert"},
        {"LambW1(z)", "W_{-1}(z)"},
        {"GammaRegU(s,x)", "Q(s,x)"},
        {"BetaInc(x,a,b)", "B_x(a,b)"},
        {"BetaI(x,a,b)", "I_x(a,b)"},
        {"sum(i,1,5,i^2)", "\\sum_{i=1}^{5}i^{2}"},
        {"prod(i,5,1,f(i),-2)", "\\prod_{\\substack{i=5-2k\\\\k\\in\\mathbb Z_{\\ge0},\\,i\\ge1}}f(i)"},
        {"int(sin(x),x,a,b)", "\\int_a^b\\sin(x)\\,\\mathrm{d}x"},
        {"der-(f(x),x,p)", "\\left.D_x^-[f(x)]\\right\\rvert_{x=p}"},
        {"der(f(x),x,p,eps,m)", "\\left.\\frac{\\mathrm d}{\\mathrm d x}[f(x)]\\right\\rvert_{x=p}"},
        {"diff(f(x),x,h)", "\\Delta_{x,h}[f(x)]"},
        {"solve(f(x),x,a,b)", "\\operatorname{root}_{x\\in[a,b]}(f(x)=0)"},
        {"if(x,1,-1)", "\\begin{cases}1&\\text{if }x\\ne0\\\\-1&\\text{otherwise}\\end{cases}"},
        {"iff(x<0,-1,x>0,1)", "\\begin{cases}-1&\\text{if }x<0\\\\1&\\text{else if }x>0\\\\\\text{undefined}&\\text{otherwise}\\end{cases}"},
        {"ConFrac(a,b,c)", "a+\\frac{1}{b+\\frac{1}{c}}"},
        {"ConPol(a,b,c)", "K_{3}(a,b,c)"},
        {"mean(a,b,c)", "\\frac{a+b+c}{3}"},
        {"var(a,b,c)", "s^2(a,b,c)"},
        {"pNor(x,mu,sigma)", "f_{\\mathcal N(\\mathit{mu},\\mathit{sigma}^{2})}(x)"},
        {"qStud(p,v)", "Q_{t_v}(p)"},
        {"rList(1,1,2)", "\\operatorname{draw}(\\mathcal U_{\\mathrm{list}}(1,1,2))"},
        {"[Int3]", "\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{3},10^{3}])"},
        {"xor(a,b,c)", "\\operatorname{exactlyOne}(a,b,c)"},
        {"a @>> b", "\\operatorname{ashr}(a,b)"},
        {"CHi(x,a,b)", "\\mathbf{1}_{[a,b]}(x)"},
        {"[Mb]", "\\mathrm{Mibit}"},
        {"[MB]", "\\mathrm{MiB}"},
        {"2*[km/h]", "2\\,\\mathrm{km}/\\mathrm{h}"},
        {"my_Function(x; y)", "\\operatorname{my\\_Function}(x,y)"}
    };
    @Test
    public void testApi0390() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: mathematical reference expressions";
        TestCommonTools.consolePrintTestApiStart(390, testDescr);
        for (String[] c : LATEX_REFERENCE) Assertions.assertEquals(c[1], latexExport(c[0]), c[0]);
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0391() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: observable binding of powers, signs and postfixes";
        TestCommonTools.consolePrintTestApiStart(391, testDescr);
        String[][] cases = {
            {"a^b!", "(a^{b})!"}, {"a*-b", "a\\cdot(-b)"},
            {"a#b*c", "\\operatorname{rem}(a,b)\\cdot c"},
            {"a^^b^c", "(\\mathord{{}^{b}\\!a})^{c}"},
            {"f(a,g(b,c);sin(a+b))", "f(a,g(b,c),\\sin(a+b))"}
        };
        for (String[] c : cases) Assertions.assertEquals(c[1], latexExport(c[0]), c[0]);
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0392() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: argument separators and token levels";
        TestCommonTools.consolePrintTestApiStart(392, testDescr);
        Assertions.assertEquals("f(a,g(b,c),a+b)", latexExport("f(a;g(b,c),a+b)"));
        Assertions.assertEquals(latexExport("f(a,g(b,c),a+b)"), latexExport("f(a;g(b;c);a+b)"));
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0393() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: structure reconstruction preserves copied tokens";
        TestCommonTools.consolePrintTestApiStart(393, testDescr);
        Expression expression = new Expression("sin(x)^2+x/y");
        List<Token> tokens = expression.getCopyOfInitialTokens();
        StringBuilder before = new StringBuilder();
        for (Token t : tokens) before.append(t.tokenStr).append(':').append(t.tokenTypeId).append(':')
                .append(t.tokenId).append(':').append(t.tokenLevel).append(':').append(t.tokenValue).append(';');
        Assertions.assertEquals("\\sin^{2}x+\\frac{x}{y}", expression.getExpressionAsLaTeX());
        StringBuilder after = new StringBuilder();
        for (Token t : tokens) after.append(t.tokenStr).append(':').append(t.tokenTypeId).append(':')
                .append(t.tokenId).append(':').append(t.tokenLevel).append(':').append(t.tokenValue).append(';');
        Assertions.assertEquals(before.toString(), after.toString());
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0394() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: malformed expression structure diagnostics";
        TestCommonTools.consolePrintTestApiStart(394, testDescr);
        for (String s : new String[]{"a/(b", "sin(,a)", "a**b", "f(a,,b)", "a,b", "()"})
            Assertions.assertThrows(IllegalStateException.class, () -> latexExport(s), s);
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0395() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: mathematical typography and numeric notation";
        TestCommonTools.consolePrintTestApiStart(395, testDescr);
        String[][] cases = {
            {"", ""}, {"   ", ""}, {"002.10", "002.10"}, {".25", "0.25"},
            {"2.30e-4", "2.30\\times 10^{-4}"}, {"14_3", "\\frac{14}{3}"},
            {"2_1_3", "2\\,\\frac{1}{3}"}, {"b1.", "(\\varepsilon)_{1}"},
            {"h.af1", "(\\mathrm{af1})_{16}"}, {"B36.z", "(\\mathrm{z})_{36}"},
            {"sin(x)!", "(\\sin x)!"}, {"sin(x)%", "(\\sin x)\\%"},
            {"sin(x)^2*y", "\\sin^{2}(x)\\cdot y"}, {"-sin(x)*y", "-\\sin(x)\\cdot y"},
            {"sin(-x)", "\\sin(-x)"}, {"sin(x)^0", "(\\sin x)^{0}"},
            {"sin(x)^2.5", "(\\sin x)^{2.5}"}, {"ln(x)^2", "(\\ln x)^{2}"},
            {"not(a|b)", "\\neg (a\\lor b)"}, {"a<(b<c)", "a<(b<c)"},
            {"(a<b)<c", "(a<b)<c"}, {"a-(b-c)", "a-(b-c)"},
            {"2*3", "2\\cdot 3"}, {"ab*cd", "\\mathit{ab}\\cdot \\mathit{cd}"},
            {"30*[deg]", "30^{\\circ}"}, {"2*[km]", "2\\,\\mathrm{km}"},
            {"[km/h]^2", "(\\mathrm{km}/\\mathrm{h})^{2}"}, {"[k]^2", "(10^{3})^{2}"},
            {"sin([km/h])", "\\sin(\\mathrm{km}/\\mathrm{h})"}, {"sin([k])", "\\sin(10^{3})"},
            {"logGamma(x+y)", "\\ln\\left\\lvert\\Gamma(x+y)\\right\\rvert"},
            {"GammaL(s,x)", "\\gamma(s,x)"}, {"GammaU(s,x)", "\\Gamma(s,x)"},
            {"GammaP(s,x)", "P(s,x)"}, {"diGamma(x)", "\\psi(x)"},
            {"rNor(mu,sigma+1)", "\\operatorname{draw}(\\mathcal N(\\mathit{mu},(\\mathit{sigma}+1)^{2}))"},
            {"ConFrac(a)", "a"}, {"ConFrac(a,b,c,d)", "a+\\frac{1}{b+\\frac{1}{c+\\frac{1}{d}}}"},
            {"mean(a,b+c,d)", "\\frac{a+b+c+d}{3}"},
            {"sum(i,1,n,x+y)", "\\sum_{i=1}^{n}(x+y)"},
            {"sum(i,1,n,f(i))*x", "(\\sum_{i=1}^{n}f(i))\\cdot x"},
            {"dern(f(x),n,x)", "\\frac{\\mathrm d^{n}}{\\mathrm d x^{n}}[f(x)]"},
            {"der+(f(x),x,p)", "\\left.D_x^+[f(x)]\\right\\rvert_{x=p}"},
            {"der(f(x),x,eps,m)", "\\frac{\\mathrm d}{\\mathrm d x}[f(x)]"},
            {"difb(f(x),x)", "\\nabla_{x,1}[f(x)]"},
            {"x_1+y2", "\\mathit{x\\_1}+\\mathit{y2}"},
            {"α+ς+Γ", "\\alpha+\\varsigma+\\Gamma"},
            {"[my_unit]", "[\\mathrm{my\\_unit}]"},
            {"f(a,b,c,d,x,y,z)", "f(a,b,c,d,x,y,z)"}
        };
        for (String[] c : cases) {
            try { Assertions.assertEquals(c[1], latexExport(c[0]), c[0]); } catch (IllegalStateException ex) {
                StringBuilder detail = new StringBuilder(c[0]);
                for (Token t : latexExpression(c[0]).getCopyOfInitialTokens()) detail.append(" [").append(t.tokenStr).append(":").append(t.tokenTypeId).append("]");
                throw new IllegalStateException(detail.toString(), ex);
            }
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0396() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: invalid builtin arities and calculus variables";
        TestCommonTools.consolePrintTestApiStart(396, testDescr);
        Set<Long> seen = new HashSet<>();
        for (KeyWord kw : latexKeywords()) {
            if (!seen.add(latexTokenKey(kw.wordTypeId, kw.wordId))) continue;
            if (kw.wordTypeId == Function1Arg.TYPE_ID || kw.wordTypeId == Function2Arg.TYPE_ID
                    || kw.wordTypeId == Function3Arg.TYPE_ID || kw.wordTypeId == FunctionVariadic.TYPE_ID
                    || kw.wordTypeId == CalculusOperator.TYPE_ID) {
                if (kw.wordTypeId == Function1Arg.TYPE_ID && kw.wordId == Function1Arg.PARAM_ID) continue;
                String source = kw.wordString + "()";
                Assertions.assertThrows(IllegalStateException.class, () -> latexExport(source), "Invalid arity " + source);
            }
        }
        for (String s : new String[]{"sin(a,b)", "log(a)", "if(a,b)", "iff(a,b,c)", "der(a)", "dern(a,b,c,d)", "int(a,b,c)", "sum(i,a,b)", "sum(2,a,b,f(i))", "diff(f(x),x+1)"})
            Assertions.assertThrows(IllegalStateException.class, () -> latexExport(s), s);
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0397() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: compiled expressions, dependencies and calculation history";
        TestCommonTools.consolePrintTestApiStart(397, testDescr);
        Argument x = new Argument("x=2");
        Argument y = new Argument("y=3*x", x);
        Function f = new Function("f(t)=t^2");
        Expression e = new Expression("f(y)+sin(x)", x, y, f);
        CalcStepsRegister steps = new CalcStepsRegister();
        double before = e.calculate(steps);
        String history = steps.toString();
        String diagnostic = e.getErrorMessage();
        double time = e.getComputingTime();
        boolean syntax = e.getSyntaxStatus();
        String text = e.getExpressionAsLaTeX();
        for (int i = 0; i < 10; i++) Assertions.assertEquals(text, e.getExpressionAsLaTeX());
        Assertions.assertEquals(diagnostic, e.getErrorMessage());
        Assertions.assertEquals(time, e.getComputingTime());
        Assertions.assertEquals(syntax, e.getSyntaxStatus());
        Assertions.assertEquals(history, steps.toString());
        Assertions.assertEquals(before, e.calculate());
        x.setArgumentValue(3);
        Assertions.assertEquals(text, e.getExpressionAsLaTeX());
        Assertions.assertEquals(81 + Math.sin(3), e.calculate(), 1e-12);
        e.setExpressionString("sqrt(x)");
        Assertions.assertEquals("\\sqrt{x}", e.getExpressionAsLaTeX());
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    private static final class LaTeXFunctionExtension implements FunctionExtension {
        int calculations, assignments, metadata;
        public int getParametersNumber() { return 1; }
        public void setParameterValue(int index, double value) { assignments++; }
        public String getParameterName(int index) { metadata++; return "x"; }
        public double calculate() { calculations++; return 42; }
        public LaTeXFunctionExtension clone() { return new LaTeXFunctionExtension(); }
    }
    @Test
    public void testApi0398() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: token metadata callbacks without evaluation";
        TestCommonTools.consolePrintTestApiStart(398, testDescr);
        LaTeXFunctionExtension extension = new LaTeXFunctionExtension();
        Function f = new Function("custom", extension);
        Expression e = new Expression("custom(x)", f);
        int metadataBefore = extension.metadata;
        Assertions.assertEquals("\\operatorname{custom}(x)", e.getExpressionAsLaTeX());
        Assertions.assertTrue(extension.metadata > metadataBefore);
        Assertions.assertEquals(0, extension.calculations);
        Assertions.assertEquals(0, extension.assignments);
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0399() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: random stream and cancellation state";
        TestCommonTools.consolePrintTestApiStart(399, testDescr);
        Random expected = new Random(12345);
        mXparser.setRandomGenerator(new Random(12345));
        try {
            Expression e = new Expression("[Uni]+rNor(0,1)");
            String once = e.getExpressionAsLaTeX();
            Assertions.assertEquals(once, e.getExpressionAsLaTeX());
            Assertions.assertEquals(expected.nextDouble(), new Expression("[Uni]").calculate());
            mXparser.cancelCurrentCalculation();
            Assertions.assertEquals("\\sin x", latexExport("sin(x)"));
            Assertions.assertTrue(mXparser.isCurrentCalculationCancelled());
        } finally { mXparser.resetCancelCurrentCalculationFlag(); mXparser.setRandomGenerator(new Random()); }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0400() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: deterministic independent parallel exports";
        TestCommonTools.consolePrintTestApiStart(400, testDescr);
        ExecutorService pool = Executors.newFixedThreadPool(4);
        try {
            List<Callable<String>> calls = new ArrayList<>();
            for (int i = 0; i < 32; i++) calls.add(() -> latexExport("sin(x)^n+sqrt(y/z)"));
            for (Future<String> value : pool.invokeAll(calls)) Assertions.assertEquals("\\sin^{n}x+\\sqrt{\\frac{y}{z}}", value.get());
        } finally { pool.shutdown(); }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0401() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: resource budgets and untrusted identifier safety";
        TestCommonTools.consolePrintTestApiStart(401, testDescr);
        StringBuilder deep = new StringBuilder();
        for (int i = 0; i < 300; i++) deep.append('(');
        deep.append('x'); for (int i = 0; i < 300; i++) deep.append(')');
        Assertions.assertThrows(IllegalStateException.class, () -> latexExport(deep.toString()));
        StringBuilder flat = new StringBuilder("x");
        for (int i = 0; i < 5999; i++) flat.append("+x");
        Assertions.assertEquals(flat.toString(), latexExport(flat.toString()));
        // A valid flat scope close to the token limit must also remain usable.
        StringBuilder nearLimit = new StringBuilder("x");
        for (int i = 1; i < 50000; i++) nearLimit.append("+x");
        Assertions.assertEquals(nearLimit.toString(), latexExport(nearLimit.toString()));
        nearLimit.append("+x");
        Assertions.assertThrows(IllegalStateException.class, () -> latexExport(nearLimit.toString()));
        StringBuilder continued = new StringBuilder("ConFrac(x");
        for (int i = 0; i < 300; i++) continued.append(",x");
        continued.append(')');
        Assertions.assertThrows(IllegalStateException.class, () -> latexExport(continued.toString()));
        for (String malicious : new String[]{"\\input{secret}", "a_b}", "a$", "a#"})
            Assertions.assertThrows(IllegalStateException.class, () -> latexExport(malicious));
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    /* Numeric interpretation of an already parsed tree. No LaTeX recognition,
     * parser state or source binding rules remain in the test suite. */
    private static double latexArithmeticValue(LaTeXParser.Node node, Map<String, Double> values) {
        List<LaTeXParser.Node> children = node.getChildren();
        if (node.getKind() == LaTeXParser.Kind.NUMBER) return Double.parseDouble(node.getText());
        if (node.getKind() == LaTeXParser.Kind.SYMBOL) {
            Assertions.assertTrue(values.containsKey(node.getText()), node.getText());
            return values.get(node.getText());
        }
        double left = latexArithmeticValue(children.get(0), values);
        switch (node.getKind()) {
            case POSITIVE: return left;
            case NEGATIVE: return -left;
            case PERCENT: return left / 100;
            case FLOOR: return Math.floor(left);
            case FACTORIAL:
                double value = 1; for (int i = 2; i <= left; i++) value *= i; return value;
            default: break;
        }
        double right = latexArithmeticValue(children.get(1), values);
        switch (node.getKind()) {
            case ADD: return left + right;
            case SUBTRACT: return left - right;
            case MULTIPLY: return left * right;
            case DIVIDE: return left / right;
            case POWER: return Math.pow(left, right);
            case REMAINDER: return left % right;
            default: throw new AssertionError("Unexpected arithmetic tree operation " + node.getKind());
        }
    }
    @Test
    public void testApi0402() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: arithmetic binding compared with independent values and evaluator";
        TestCommonTools.consolePrintTestApiStart(402, testDescr);
        Map<String, Double> values = new HashMap<>();
        values.put("a", 2.0); values.put("b", 3.0); values.put("c", 2.0);
        String[] operators = {Operator.PLUS_STR, Operator.MINUS_STR, Operator.MULTIPLY_STR,
            Operator.DIVIDE_STR, Operator.DIVIDE_QUOTIENT_STR, Operator.MOD_STR, Operator.POWER_STR};
        for (String first : operators) for (String second : operators) {
            for (String source : new String[]{"a" + first + "b" + second + "c",
                    "(a" + first + "b)" + second + "c", "a" + first + "(b" + second + "c)"}) {
                Expression e = new Expression(source, new Argument("a=2"), new Argument("b=3"), new Argument("c=2"));
                Assertions.assertTrue(e.checkSyntax(), source);
                double symbolic = latexArithmeticValue(LaTeXParser.parse(e.getExpressionAsLaTeX()), values);
                Assertions.assertEquals(symbolic, e.calculate(), 1e-10, source);
                Assertions.assertFalse(e.getExpressionAsLaTeX().isEmpty(), source);
            }
        }
        for (String source : new String[]{"-a^2", "(-a)^2", "a*-b", "a^-b^c", "a^b!", "-2^2", "2^-3!", "a%*b"}) {
            Expression e = new Expression(source, new Argument("a=2"), new Argument("b=3"), new Argument("c=2"));
            Assertions.assertTrue(e.checkSyntax(), source);
            Assertions.assertEquals(latexArithmeticValue(LaTeXParser.parse(e.getExpressionAsLaTeX()), values), e.calculate(), 1e-10, source);
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0403() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: renamed builtins and user function overrides";
        TestCommonTools.consolePrintTestApiStart(403, testDescr);
        mXparser.modifyBuiltinToken(Function1Arg.SIN_STR, "sine");
        Assertions.assertEquals("\\sin^{2}x", latexExport("sine(x)^2"));
        mXparser.unmodifyBuiltinTokens();
        mXparser.setToOverrideBuiltinTokens();
        Function f = new Function("sin(x)=x+1");
        Assertions.assertEquals("\\operatorname{sin}(x)", new Expression("sin(x)", f).getExpressionAsLaTeX());
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0404() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: minimum variadic arities and mathematical notation";
        TestCommonTools.consolePrintTestApiStart(404, testDescr);
        String[][] cases = {
            {"iff(x,y)", "\\begin{cases}y&\\text{if }x\\ne0\\\\\\text{undefined}&\\text{otherwise}\\end{cases}"},
            {"min(x)", "\\min(x)"}, {"max(x)", "\\max(x)"}, {"ConFrac(x)", "x"},
            {"ConPol(x)", "K_{1}(x)"}, {"gcd(x)", "\\gcd(x)"}, {"lcm(x)", "\\operatorname{lcm}(x)"},
            {"add(x)", "x"}, {"multi(x)", "x"}, {"mean(x)", "\\frac{x}{1}"},
            {"var(x)", "s^2(x)"}, {"std(x)", "s(x)"},
            {"rList(x)", "\\operatorname{draw}(\\mathcal U_{\\mathrm{list}}(x))"},
            {"coalesce(x)", "\\operatorname{first}_{\\ne\\mathrm{NaN}}(x)"},
            {"or(x)", "x\\ne0"}, {"and(x)", "x\\ne0"}, {"xor(x)", "\\operatorname{exactlyOne}(x)"},
            {"argmin(x)", "\\operatorname*{arg\\,min}_{\\mathrm{first},\\,1}(x)"},
            {"argmax(x)", "\\operatorname*{arg\\,max}_{\\mathrm{first},\\,1}(x)"},
            {"med(x)", "\\operatorname{median}(x)"}, {"mode(x)", "\\operatorname{mode}(x)"},
            {"base(x)", "\\operatorname{value}_x(\\varepsilon)"}, {"ndist(x)", "\\operatorname{nDistinct}(x)"}
        };
        Assertions.assertEquals(23, cases.length);
        for (String[] c : cases) Assertions.assertEquals(c[1], latexExport(c[0]), c[0]);
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0405() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: all builtin rules in powers and function arguments";
        TestCommonTools.consolePrintTestApiStart(405, testDescr);
        String[] contexts = {"X", "(X)^2", "(X)*c", "c-(X)", "(X)!", "c/(X)", "sin(X)",
                "-(X)", "sin(X)^2", "2*(X)", "rNor(0,X)", "(X)+c", "c^(X)"};
        Set<Long> seen = new HashSet<>();
        int rows = 0;
        for (KeyWord kw : latexKeywords()) {
            seen.add(latexTokenKey(kw.wordTypeId, kw.wordId));
            String source = kw.wordTypeId == ParserSymbol.TYPE_ID && kw.wordId == ParserSymbol.BLANK_ID ? " a " : latexAliasInput(kw);
            for (String context : contexts) {
                String input = context.replace("X", source);
                String actual = latexExport(input);
                Assertions.assertFalse(actual.contains("@+"), input);
                Assertions.assertFalse(actual.contains("@-"), input);
                // Ordinary numbered test output, consumed separately by real-renderer QA.
                // No lifecycle hook, private access, process property or test artifact writer.
                mXparser.consolePrintln("LATEX-CONTEXT\t" + input + "\t=> " + actual);
                rows++;
            }
        }
        Assertions.assertEquals(414, seen.size());
        Assertions.assertEquals(529 * contexts.length, rows);
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0406() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: review regressions: command boundaries, scopes and compound numbers";
        TestCommonTools.consolePrintTestApiStart(406, testDescr);
        String[][] cases = {
            {"2*x%", "2\\cdot x\\%"},
            {"a*b%", "a\\cdot b\\%"},
            {"100*r%", "100\\cdot r\\%"},
            {"sum(i,1,n,i,2)", "\\sum_{\\substack{i=1+2k\\\\k\\in\\mathbb Z_{\\ge0},\\,i\\le n}}i"},
            {"prod(i,10,a,i,-1)", "\\prod_{\\substack{i=10-k\\\\k\\in\\mathbb Z_{\\ge0},\\,i\\ge a}}i"},
            {"sum(i,0.5,n,i)", "\\sum_{\\substack{i=0.5+k\\\\k\\in\\mathbb Z_{\\ge0},\\,i\\le n}}i"},
            {"ConFrac(a+b)*c", "(a+b)\\cdot c"},
            {"c-ConFrac(a+b)", "c-(a+b)"},
            {"rNor(0,1e3)", "\\operatorname{draw}(\\mathcal N(0,(1\\times 10^{3})^{2}))"},
            {"rNor(0,2_1_3)", "\\operatorname{draw}(\\mathcal N(0,(2\\,\\frac{1}{3})^{2}))"},
            {"pNor(x,0,14_3)", "f_{\\mathcal N(0,(\\frac{14}{3})^{2})}(x)"},
            {"(a/b)^2", "(\\frac{a}{b})^{2}"},
            {"(a/b)!", "(\\frac{a}{b})!"},
            {"2e3!", "(2\\times 10^{3})!"},
            {"2*[k]", "2\\cdot 10^{3}"},
            {"3*[%]", "3\\cdot 10^{-2}"}
        };
        for (String[] c : cases) Assertions.assertEquals(c[1], latexExport(c[0]), c[0]);
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0407() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: review regressions: glyph identity, signs and iterated operator scope";
        TestCommonTools.consolePrintTestApiStart(407, testDescr);
        String[][] cases = {
            {"c*[c]", "{c}_{\\mathrm{user}}\\cdot c"},
            {"γ*[gam]", "{\\gamma}_{\\mathrm{user}}\\cdot\\gamma"},
            {"φ+[phi]", "{\\varphi}_{\\mathrm{user}}+\\varphi"},
            {"Ω*[Om]", "{\\Omega}_{\\mathrm{user}}\\cdot\\Omega"},
            {"-(-a)", "-(-a)"},
            {"a+(+b)", "a+(+b)"},
            {"add(a,-b)", "a+(-b)"},
            {"mean(a,-b)", "\\frac{a+(-b)}{2}"},
            {"a*(-b)", "a\\cdot(-b)"},
            {"sum(i,1,n,i)+1", "(\\sum_{i=1}^{n}i)+1"},
            {"1+sum(i,1,n,i)", "1+(\\sum_{i=1}^{n}i)"}
        };
        for (String[] c : cases) Assertions.assertEquals(c[1], latexExport(c[0]), c[0]);
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0408() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: review regressions: predicates and professional self-delimiting notation";
        TestCommonTools.consolePrintTestApiStart(408, testDescr);
        String[][] cases = {
            {"if(and(a,b),1,0)", "\\begin{cases}1&\\text{if }a\\ne0\\land b\\ne0\\\\0&\\text{otherwise}\\end{cases}"},
            {"if(or(a,b),1,0)", "\\begin{cases}1&\\text{if }a\\ne0\\lor b\\ne0\\\\0&\\text{otherwise}\\end{cases}"},
            {"if(xor(a,b),1,0)", "\\begin{cases}1&\\text{if }\\operatorname{exactlyOne}(a,b)\\\\0&\\text{otherwise}\\end{cases}"},
            {"if([true],1,0)", "\\begin{cases}1&\\text{if }\\mathrm{true}\\\\0&\\text{otherwise}\\end{cases}"},
            {"a*(b#c)", "a\\cdot\\operatorname{rem}(b,c)"},
            {"@~a+b", "\\operatorname{bitNot}(a)+b"},
            {"abs(x)^2", "\\left\\lvert x\\right\\rvert^{2}"},
            {"-sin(x)*y", "-\\sin(x)\\cdot y"},
            {"mean(a,b+c,d)", "\\frac{a+b+c+d}{3}"},
            {"base(x)", "\\operatorname{value}_x(\\varepsilon)"},
            {"logGamma(x)^2", "(\\ln\\left\\lvert\\Gamma(x)\\right\\rvert)^{2}"},
            {"logBeta(a,b)^2", "(\\ln B(a,b))^{2}"}
        };
        for (String[] c : cases) Assertions.assertEquals(c[1], latexExport(c[0]), c[0]);
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0409() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: diagnostics refer to existing offending tokens";
        TestCommonTools.consolePrintTestApiStart(409, testDescr);
        IllegalStateException missing = Assertions.assertThrows(IllegalStateException.class, () -> latexExport("a*"));
        Assertions.assertTrue(missing.getMessage().contains("token 1"), missing.getMessage());
        IllegalStateException middle = Assertions.assertThrows(IllegalStateException.class, () -> latexExport("a+*b"));
        Assertions.assertTrue(middle.getMessage().contains("token 1") || middle.getMessage().contains("token 2"), middle.getMessage());
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0410() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: protected root degree with nested radicals and bracketed symbols";
        TestCommonTools.consolePrintTestApiStart(410, testDescr);
        String[][] cases = {
            {"root(root(3,n),x)", "\\sqrt[{\\sqrt[{3}]{n}}]{x}"},
            {"root([my_unit],x)", "\\sqrt[{[\\mathrm{my\\_unit}]}]{x}"},
            {"root([Int3],x)", "\\sqrt[{\\operatorname{draw}(\\mathcal U_{\\mathbb Z}[-10^{3},10^{3}])}]{x}"},
            {"root(3,root(n,x))", "\\sqrt[{3}]{\\sqrt[{n}]{x}}"},
            {"root(root(root(2,n),m),x)", "\\sqrt[{\\sqrt[{\\sqrt[{2}]{n}}]{m}}]{x}"},
            {"root(n+1,x+y)", "\\sqrt[{n+1}]{x+y}"},
            {"root(n/x,y)", "\\sqrt[{\\frac{n}{x}}]{y}"},
            {"root(∛n,x)", "\\sqrt[{\\sqrt[3]{n}}]{x}"}
        };
        for (String[] c : cases) Assertions.assertEquals(c[1], new Expression(c[0], new Constant("[my_unit]", 1)).getExpressionAsLaTeX(), c[0]);
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0411() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "LaTeX export: complete scope of iterated minima and maxima";
        TestCommonTools.consolePrintTestApiStart(411, testDescr);
        String[][] cases = {
            {"mini(i,1,n,i)*2", "(\\min_{i=1}^{n}i)\\cdot 2"},
            {"2*mini(i,1,n,i)", "2\\cdot(\\min_{i=1}^{n}i)"},
            {"mini(i,1,n,i)+1", "(\\min_{i=1}^{n}i)+1"},
            {"1+mini(i,1,n,i)", "1+(\\min_{i=1}^{n}i)"},
            {"mini(i,1,n,i)-1", "(\\min_{i=1}^{n}i)-1"},
            {"1-mini(i,1,n,i)", "1-(\\min_{i=1}^{n}i)"},
            {"(mini(i,1,n,i))^2", "(\\min_{i=1}^{n}i)^{2}"},
            {"(mini(i,1,n,i))!", "(\\min_{i=1}^{n}i)!"},
            {"add(mini(i,1,n,i),1)", "(\\min_{i=1}^{n}i)+1"},
            {"mean(mini(i,1,n,i),1)", "\\frac{(\\min_{i=1}^{n}i)+1}{2}"},
            {"ConFrac(mini(i,1,n,i))+1", "(\\min_{i=1}^{n}i)+1"},
            {"sin(mini(i,1,n,i))", "\\sin(\\min_{i=1}^{n}i)"},
            {"maxi(i,1,n,i)*2", "(\\max_{i=1}^{n}i)\\cdot 2"},
            {"2*maxi(i,1,n,i)", "2\\cdot(\\max_{i=1}^{n}i)"},
            {"maxi(i,1,n,i)+1", "(\\max_{i=1}^{n}i)+1"},
            {"1+maxi(i,1,n,i)", "1+(\\max_{i=1}^{n}i)"},
            {"maxi(i,1,n,i)-1", "(\\max_{i=1}^{n}i)-1"},
            {"1-maxi(i,1,n,i)", "1-(\\max_{i=1}^{n}i)"},
            {"(maxi(i,1,n,i))^2", "(\\max_{i=1}^{n}i)^{2}"},
            {"(maxi(i,1,n,i))!", "(\\max_{i=1}^{n}i)!"},
            {"add(maxi(i,1,n,i),1)", "(\\max_{i=1}^{n}i)+1"},
            {"mean(maxi(i,1,n,i),1)", "\\frac{(\\max_{i=1}^{n}i)+1}{2}"},
            {"ConFrac(maxi(i,1,n,i))+1", "(\\max_{i=1}^{n}i)+1"},
            {"sin(maxi(i,1,n,i))", "\\sin(\\max_{i=1}^{n}i)"}
        };
        for (String[] c : cases) Assertions.assertEquals(c[1], latexExport(c[0]), c[0]);
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    private static String latexTreeShape(LaTeXParser.Node node) {
        if (node.getChildren().isEmpty()) return node.getKind() + ":" + node.getText();
        StringBuilder shape = new StringBuilder(node.getKind().name()).append('(');
        for (int i = 0; i < node.getChildren().size(); i++) {
            if (i > 0) shape.append(',');
            shape.append(latexTreeShape(node.getChildren().get(i)));
        }
        return shape.append(')').toString();
    }

    @Test
    public void testApi0412() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "symbolic LaTeX parser: arithmetic structure and grouping";
        TestCommonTools.consolePrintTestApiStart(412, testDescr);
        String[][] cases = {
            {"\\frac{x+1}{y-2}", "DIVIDE(ADD(SYMBOL:x,NUMBER:1),SUBTRACT(SYMBOL:y,NUMBER:2))"},
            {"\\frac{a}{b}\\cdot c", "MULTIPLY(DIVIDE(SYMBOL:a,SYMBOL:b),SYMBOL:c)"},
            {"a/\\frac{b}{c}", "DIVIDE(SYMBOL:a,DIVIDE(SYMBOL:b,SYMBOL:c))"},
            {"2(x+1)", "MULTIPLY(NUMBER:2,ADD(SYMBOL:x,NUMBER:1))"},
            {"(a+b)c", "MULTIPLY(ADD(SYMBOL:a,SYMBOL:b),SYMBOL:c)"},
            {"\\left\\lfloor\\frac{-a}{b}\\right\\rfloor", "FLOOR(DIVIDE(NEGATIVE(SYMBOL:a),SYMBOL:b))"},
            {"\\lfloor x+1\\rfloor", "FLOOR(ADD(SYMBOL:x,NUMBER:1))"},
            {"\\operatorname{rem}(a,b)", "REMAINDER(SYMBOL:a,SYMBOL:b)"},
            {"\\operatorname{rem}\\left(a,b\\right)", "REMAINDER(SYMBOL:a,SYMBOL:b)"},
            {"a\\,\\cdot\\!b", "MULTIPLY(SYMBOL:a,SYMBOL:b)"},
            {"\\left(a+b\\right)/c", "DIVIDE(ADD(SYMBOL:a,SYMBOL:b),SYMBOL:c)"}
        };
        for (String[] c : cases) Assertions.assertEquals(c[1], latexTreeShape(LaTeXParser.parse(c[0])), c[0]);
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0413() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "symbolic LaTeX parser: TeX scripts, signs and juxtaposition";
        TestCommonTools.consolePrintTestApiStart(413, testDescr);
        String[][] cases = {
            {"x^12", "MULTIPLY(POWER(SYMBOL:x,NUMBER:1),NUMBER:2)"},
            {"x^{12}", "POWER(SYMBOL:x,NUMBER:12)"},
            {"x^{y^{z}}", "POWER(SYMBOL:x,POWER(SYMBOL:y,SYMBOL:z))"},
            {"(x^y)^z", "POWER(POWER(SYMBOL:x,SYMBOL:y),SYMBOL:z)"},
            {"-x^2", "NEGATIVE(POWER(SYMBOL:x,NUMBER:2))"},
            {"(-x)^2", "POWER(NEGATIVE(SYMBOL:x),NUMBER:2)"},
            {"x!^2", "POWER(FACTORIAL(SYMBOL:x),NUMBER:2)"},
            {"x^2!", "FACTORIAL(POWER(SYMBOL:x,NUMBER:2))"},
            {"x^{2!}", "POWER(SYMBOL:x,FACTORIAL(NUMBER:2))"},
            {"xy", "MULTIPLY(SYMBOL:x,SYMBOL:y)"},
            {"\\mathit{xy}", "SYMBOL:xy"},
            {"1e3", "MULTIPLY(MULTIPLY(NUMBER:1,SYMBOL:e),NUMBER:3)"},
            {"1\\times10^{-3}", "MULTIPLY(NUMBER:1,POWER(NUMBER:10,NEGATIVE(NUMBER:3)))"},
            {"+x\\%", "POSITIVE(PERCENT(SYMBOL:x))"}
        };
        for (String[] c : cases) Assertions.assertEquals(c[1], latexTreeShape(LaTeXParser.parse(c[0])), c[0]);
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0414() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "symbolic LaTeX parser: names, exact source ranges and immutable nodes";
        TestCommonTools.consolePrintTestApiStart(414, testDescr);
        String source = "  ( \\mathit{x\\_1} + .250 )  ";
        LaTeXParser.Node root = LaTeXParser.parse(source);
        Assertions.assertEquals(LaTeXParser.Kind.ADD, root.getKind());
        Assertions.assertEquals(2, root.getStartOffset());
        Assertions.assertEquals(source.length() - 2, root.getEndOffset());
        Assertions.assertEquals(source.substring(2, source.length() - 2), root.getSourceText());
        LaTeXParser.Node name = root.getChildren().get(0);
        Assertions.assertEquals("x_1", name.getText());
        Assertions.assertEquals(source.indexOf("\\mathit"), name.getStartOffset());
        Assertions.assertEquals("\\mathit{x\\_1}", name.getSourceText());
        Assertions.assertEquals(".250", root.getChildren().get(1).getText());
        Assertions.assertEquals("km", LaTeXParser.parse("\\mathrm{km}").getText());
        Assertions.assertEquals("α", LaTeXParser.parse("α").getText());
        Assertions.assertThrows(IllegalArgumentException.class, () -> LaTeXParser.parse("\uD835\uDC65"));
        Assertions.assertThrows(UnsupportedOperationException.class, () -> root.getChildren().clear());
        Assertions.assertThrows(UnsupportedOperationException.class, () -> name.getChildren().add(root));
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0415() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "symbolic LaTeX parser: strict subset, unsafe macros and located failures";
        TestCommonTools.consolePrintTestApiStart(415, testDescr);
        String[] invalid = {"", "  ", "a+", "()", "\\frac{x}", "\\frac{}{y}",
            "\\operatorname{rem}(a,b,c)", "x^{2}^{3}", "x^", "x^-1", "a_b", "\\sin x",
            "\\sqrt{x}", "\\input{secret}", "\\write18{cmd}", "\\def\\x{x}", "a%b", "$x$",
            "\\cdotx", "\\fracx{x}{y}", "\\mathit{x_1}", "\\mathit{}", "f(x)", "2f(x)", "-f(x)", "f^{2}(x)",
            "a\\left[b\\right]", "\\left(a)", "(a\\right)", "1 2", "x!!", "\uD800"};
        for (String source : invalid) Assertions.assertThrows(IllegalArgumentException.class, () -> LaTeXParser.parse(source), source);
        Assertions.assertThrows(IllegalArgumentException.class, () -> LaTeXParser.parse(null));
        Assertions.assertTrue(Assertions.assertThrows(IllegalArgumentException.class, () -> LaTeXParser.parse("a+")).getMessage().contains("offset 2"));
        Assertions.assertTrue(Assertions.assertThrows(IllegalArgumentException.class, () -> LaTeXParser.parse("a+}")).getMessage().contains("offset 2"));
        Assertions.assertTrue(Assertions.assertThrows(IllegalArgumentException.class, () -> LaTeXParser.parse("\\frac{x}")).getMessage().contains("offset 8"));
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0416() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "symbolic LaTeX parser: bounded recursive syntax and large flat structures";
        TestCommonTools.consolePrintTestApiStart(416, testDescr);
        StringBuilder flat = new StringBuilder("x");
        for (int i = 1; i < 50000; i++) flat.append("+x");
        LaTeXParser.Node root = LaTeXParser.parse(flat.toString());
        Assertions.assertEquals(LaTeXParser.Kind.ADD, root.getKind());
        Assertions.assertEquals(flat.length(), root.getEndOffset());
        java.util.ArrayDeque<LaTeXParser.Node> pending = new java.util.ArrayDeque<>();
        pending.push(root); int count = 0;
        while (!pending.isEmpty()) { LaTeXParser.Node node = pending.pop(); count++; for (LaTeXParser.Node child : node.getChildren()) pending.push(child); }
        Assertions.assertEquals(99999, count);
        flat.append("+x");
        Assertions.assertThrows(IllegalArgumentException.class, () -> LaTeXParser.parse(flat.toString()));
        StringBuilder deep = new StringBuilder("x");
        for (int i = 0; i < 300; i++) { deep.insert(0, '('); deep.append(')'); }
        Assertions.assertThrows(IllegalArgumentException.class, () -> LaTeXParser.parse(deep.toString()));
        StringBuilder signs = new StringBuilder(); for (int i = 0; i < 300; i++) signs.append('-'); signs.append('x');
        Assertions.assertThrows(IllegalArgumentException.class, () -> LaTeXParser.parse(signs.toString()));
        char[] huge = new char[1000001]; java.util.Arrays.fill(huge, ' ');
        Assertions.assertThrows(IllegalArgumentException.class, () -> LaTeXParser.parse(new String(huge)));
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0417() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "symbolic LaTeX parser: preserves literals and unbound symbols without calculating";
        TestCommonTools.consolePrintTestApiStart(417, testDescr);
        LaTeXParser.Node unbound = LaTeXParser.parse("\\mathit{unboundName}^{99999999999999999999999999999}");
        Assertions.assertEquals("unboundName", unbound.getChildren().get(0).getText());
        Assertions.assertEquals("99999999999999999999999999999", unbound.getChildren().get(1).getText());
        Assertions.assertEquals("0002.300", LaTeXParser.parse("0002.300").getText());
        Assertions.assertEquals(LaTeXParser.Kind.DIVIDE, LaTeXParser.parse("\\frac{1}{0}").getKind());
        Assertions.assertEquals("DIVIDE(NUMBER:0,NUMBER:0)", latexTreeShape(LaTeXParser.parse("0/0")));
        LaTeXParser.Node first = LaTeXParser.parse("x+1"), second = LaTeXParser.parse("y+2");
        Assertions.assertEquals("ADD(SYMBOL:x,NUMBER:1)", latexTreeShape(first));
        Assertions.assertEquals("ADD(SYMBOL:y,NUMBER:2)", latexTreeShape(second));
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0418() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "symbolic LaTeX parser: independent parallel parses";
        TestCommonTools.consolePrintTestApiStart(418, testDescr);
        ExecutorService pool = Executors.newFixedThreadPool(4);
        try {
            List<Callable<String>> calls = new ArrayList<>();
            for (int i = 0; i < 32; i++) calls.add(() -> latexTreeShape(LaTeXParser.parse("\\frac{x+1}{y}^{2}")));
            for (Future<String> value : pool.invokeAll(calls)) Assertions.assertEquals("POWER(DIVIDE(ADD(SYMBOL:x,NUMBER:1),SYMBOL:y),NUMBER:2)", value.get());
        } finally { pool.shutdown(); }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0419() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "experimental LaTeX parser: explicit symbol typography survives grouping";
        TestCommonTools.consolePrintTestApiStart(419, testDescr);
        String[][] cases = {
            {"e", "e", "DEFAULT"}, {"\\mathrm{e}", "e", "UPRIGHT"}, {"\\mathit{e}", "e", "ITALIC"},
            {"\\mathrm e", "e", "UPRIGHT"}, {"\\mathit e", "e", "ITALIC"},
            {"\\mathrm{km}", "km", "UPRIGHT"}, {"\\mathit{km}", "km", "ITALIC"},
            {"(\\mathrm e)", "e", "UPRIGHT"}, {"{\\mathit{e}}", "e", "ITALIC"},
            {"\\left(\\mathrm{km}\\right)", "km", "UPRIGHT"},
            {"\\mathrm α", "α", "UPRIGHT"}, {"\\mathit{\\_}", "_", "ITALIC"}
        };
        for (String[] c : cases) {
            LaTeXParser.Node node = LaTeXParser.parse(c[0]);
            Assertions.assertEquals(LaTeXParser.Kind.SYMBOL, node.getKind(), c[0]);
            Assertions.assertEquals(c[1], node.getText(), c[0]);
            Assertions.assertEquals(c[2], node.getSymbolStyle().name(), c[0]);
            Assertions.assertEquals(c[0], node.getSourceText(), c[0]);
        }
        LaTeXParser.Node power = LaTeXParser.parse("\\mathrm e^{2}");
        Assertions.assertEquals(LaTeXParser.Kind.POWER, power.getKind());
        Assertions.assertEquals(LaTeXParser.SymbolStyle.DEFAULT, power.getSymbolStyle());
        Assertions.assertEquals(LaTeXParser.SymbolStyle.UPRIGHT, power.getChildren().get(0).getSymbolStyle());
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0420() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "experimental LaTeX parser: exhaustive closed BMP alphabet matches parser metadata";
        TestCommonTools.consolePrintTestApiStart(420, testDescr);
        java.util.regex.Pattern reference = java.util.regex.Pattern.compile("[A-Za-z]|" + ParserSymbol.UNICODE_NAME_REG_EXP);
        int symbols = 0, unicode = 0, numbers = 0;
        for (int code = 0; code <= 0xffff; code++) {
            String input = String.valueOf((char)code);
            if (reference.matcher(input).matches()) {
                LaTeXParser.Node node = LaTeXParser.parse(input);
                Assertions.assertEquals(LaTeXParser.Kind.SYMBOL, node.getKind(), "Character " + code);
                Assertions.assertEquals(input, node.getText());
                Assertions.assertEquals(1, node.getEndOffset());
                Assertions.assertEquals(LaTeXParser.SymbolStyle.DEFAULT, node.getSymbolStyle());
                symbols++; if (code > 127) unicode++;
            } else if (code >= '0' && code <= '9') {
                Assertions.assertEquals(LaTeXParser.Kind.NUMBER, LaTeXParser.parse(input).getKind()); numbers++;
            } else Assertions.assertThrows(IllegalArgumentException.class, () -> LaTeXParser.parse(input), "Character " + code);
        }
        Assertions.assertEquals(112, symbols);
        Assertions.assertEquals(60, unicode);
        Assertions.assertEquals(10, numbers);
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0421() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "experimental LaTeX parser: quoted names and font command token boundaries";
        TestCommonTools.consolePrintTestApiStart(421, testDescr);
        String[] names = {"x", "speed", "ABC123", "x_1", "_", "_123", "α", "∑", "ⅇ"};
        for (String name : names) {
            Assertions.assertTrue(name.matches(ParserSymbol.nameOnlyTokenRegExp), name);
            String input = "\\mathit{" + name.replace("_", "\\_") + "}";
            LaTeXParser.Node node = LaTeXParser.parse(input);
            Assertions.assertEquals(name, node.getText());
            Assertions.assertEquals(LaTeXParser.SymbolStyle.ITALIC, node.getSymbolStyle());
        }
        LaTeXParser.Node product = LaTeXParser.parse("\\mathrm km");
        Assertions.assertEquals(LaTeXParser.Kind.MULTIPLY, product.getKind());
        Assertions.assertEquals("k", product.getChildren().get(0).getText());
        Assertions.assertEquals(LaTeXParser.SymbolStyle.UPRIGHT, product.getChildren().get(0).getSymbolStyle());
        Assertions.assertEquals("m", product.getChildren().get(1).getText());
        Assertions.assertEquals(LaTeXParser.SymbolStyle.DEFAULT, product.getChildren().get(1).getSymbolStyle());
        String[] invalid = {"\\mathrm", "\\mathit", "\\mathrmex", "\\mathrm 3", "\\mathit{x٣}",
            "\\mathit{ł}", "\\mathrm{中}", "\\mathit{ℵ}", "\\mathit{αx}", "\\mathit{xα}",
            "\\mathit{αβ}", "\\mathrm{1x}", "\\mathrm{a_b}", "\\mathit{\\input{x}}", "\\mathrm\\quad e", "\\mathrm\\,e", "\\mathit\\quad\\_"};
        for (String input : invalid) Assertions.assertThrows(IllegalArgumentException.class, () -> LaTeXParser.parse(input), input);
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0422() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "experimental LaTeX parser: portable ASCII whitespace and invalid Unicode offsets";
        TestCommonTools.consolePrintTestApiStart(422, testDescr);
        for (char c : new char[]{' ', '\t', '\n', '\r', '\f', '\u000b'}) {
            LaTeXParser.Node node = LaTeXParser.parse(c + "x" + c + "+" + c + "1" + c);
            Assertions.assertEquals(LaTeXParser.Kind.ADD, node.getKind());
        }
        for (String input : new String[]{"x\u00a0+1", "x\u2003+1", "x\u3000+1", "x+\uD835\uDC65", "x+\uDC65", "x+中"}) {
            IllegalArgumentException error = Assertions.assertThrows(IllegalArgumentException.class, () -> LaTeXParser.parse(input));
            int expectedOffset = input.charAt(1) == '+' ? 2 : 1;
            Assertions.assertTrue(error.getMessage().contains("offset " + expectedOffset), error.getMessage());
        }
        Assertions.assertEquals(LaTeXParser.Kind.ADD, LaTeXParser.parse("x\\quad+\\qquad 1").getKind());
        for (String input : new String[]{"x^\\quad2", "x^\\,2", "\\frac\\quad{x}{y}",
                "\\frac{x}\\quad{y}", "\\operatorname\\quad{rem}(x,y)"})
            Assertions.assertThrows(IllegalArgumentException.class, () -> LaTeXParser.parse(input), input);
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    /* Cancellation helpers live in the existing API suite. Each domain owns real resources. */
    private static final class CancelDomain implements AutoCloseable {
        final int id = mXparser.acquireCancellationTokenId();
        public void close() { mXparser.releaseCancellationTokenId(id); }
    }

    private static final class CancelGateState {
        final java.util.concurrent.CountDownLatch entered = new java.util.concurrent.CountDownLatch(1);
        final java.util.concurrent.CountDownLatch proceed = new java.util.concurrent.CountDownLatch(1);
        final java.util.concurrent.atomic.AtomicBoolean armed = new java.util.concurrent.atomic.AtomicBoolean();
        final java.util.concurrent.atomic.AtomicInteger calls = new java.util.concurrent.atomic.AtomicInteger();
        Runnable action;
        int skipCalls;
        void visit() {
            calls.incrementAndGet();
            if (armed.get() && skipCalls > 0) { skipCalls--; return; }
            if (!armed.compareAndSet(true, false)) return;
            entered.countDown();
            if (action != null) { action.run(); return; }
            try {
                if (!proceed.await(15, java.util.concurrent.TimeUnit.SECONDS))
                    throw new AssertionError("Cancellation callback release timed out");
            } catch (InterruptedException e) { Thread.currentThread().interrupt(); throw new AssertionError(e); }
        }
    }

    private static final class CancelGate implements FunctionExtension {
        final CancelGateState state;
        double value;
        CancelGate(CancelGateState state) { this.state = state; }
        public int getParametersNumber() { return 1; }
        public String getParameterName(int index) { return "x"; }
        public void setParameterValue(int index, double value) { this.value = value; }
        public double calculate() { state.visit(); return value; }
        public FunctionExtension clone() { return new CancelGate(state); }
    }

    private static void cancelAwait(java.util.concurrent.CountDownLatch latch) throws Exception {
        Assertions.assertTrue(latch.await(15, java.util.concurrent.TimeUnit.SECONDS), "Worker never reached callback");
    }

    private static void cancelShutdown(ExecutorService pool) throws Exception {
        pool.shutdown();
        Assertions.assertTrue(pool.awaitTermination(15, java.util.concurrent.TimeUnit.SECONDS), "Worker did not finish");
    }

    private static double cancelDuring(Callable<Double> calculation, CancelGateState state, int id) throws Exception {
        ExecutorService pool = Executors.newSingleThreadExecutor();
        state.armed.set(true);
        Future<Double> result = pool.submit(calculation);
        try {
            cancelAwait(state.entered);
            mXparser.cancelCalculation(id);
            state.proceed.countDown();
            return result.get(15, java.util.concurrent.TimeUnit.SECONDS);
        } finally {
            state.proceed.countDown();
            cancelShutdown(pool);
        }
    }

    private static double[] cancelPair(int first, int second, boolean global) throws Exception {
        CancelGateState a = new CancelGateState(), b = new CancelGateState();
        Expression ea = new Expression("sum(i,1,100,gate(i))", new Function("gate", new CancelGate(a)));
        Expression eb = new Expression("sum(i,1,100,gate(i))", new Function("gate", new CancelGate(b)));
        ExecutorService pool = Executors.newFixedThreadPool(2);
        a.armed.set(true); b.armed.set(true);
        Future<Double> fa = pool.submit(() -> first < 0 ? ea.calculate() : ea.calculateWithCancel(first));
        Future<Double> fb = pool.submit(() -> second < 0 ? eb.calculate() : eb.calculateWithCancel(second));
        try {
            cancelAwait(a.entered); cancelAwait(b.entered);
            if (global) mXparser.cancelCurrentCalculation();
            else mXparser.cancelCalculation(first < 0 ? second : first);
            a.proceed.countDown(); b.proceed.countDown();
            return new double[]{fa.get(15, java.util.concurrent.TimeUnit.SECONDS), fb.get(15, java.util.concurrent.TimeUnit.SECONDS)};
        } finally {
            a.proceed.countDown(); b.proceed.countDown();
            cancelShutdown(pool);
            if (global) mXparser.resetCancelCurrentCalculationFlag();
        }
    }

    private static int cancelFrame(Expression expression) throws Exception {
        java.lang.reflect.Field field = Expression.class.getDeclaredField("activeCancelId");
        field.setAccessible(true);
        return field.getInt(expression);
    }

    private static void cancelNaN(double value) { Assertions.assertTrue(Double.isNaN(value)); }

    @Test
    public void testApi0423() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: legacy signatures, null, varargs and ID0";
        TestCommonTools.consolePrintTestApiStart(423, testDescr);
        Expression e = new Expression("2+2");
        CalcStepsRegister csr = new CalcStepsRegister();
        Assertions.assertEquals(4, e.calculate());
        Assertions.assertEquals(4, e.calculate((CalcStepsRegister)null));
        Assertions.assertEquals(4, e.calculate(csr));
        Assertions.assertFalse(csr.calcStepRecords.isEmpty());
        Assertions.assertEquals(4, e.calculateWithCancel(0));
        Assertions.assertEquals(4, e.calculateWithCancel(csr, 0));
        Argument a = new Argument("a=2+2");
        Assertions.assertEquals(a.getArgumentValue(), a.getArgumentValueWithCancel((CalcStepsRegister)null, 0));
        Function f = new Function("f(x)=x*x");
        Assertions.assertEquals(4, f.calculate(2));
        Assertions.assertEquals(4, f.calculateWithCancel(new double[]{2}, 0));
        Assertions.assertEquals(4, f.calculateWithCancel(new Argument[]{new Argument("x",2)}, 0));
        cancelNaN(f.calculate((double[])null));
        cancelNaN(f.calculateWithCancel((double[])null, 0));
        java.util.function.DoubleSupplier oldReference = e::calculate;
        Assertions.assertEquals(4, oldReference.getAsDouble());
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0424() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: all 142 public calculation entries validate ID before work";
        TestCommonTools.consolePrintTestApiStart(424, testDescr);
        Class<?>[] classes = {Expression.class, Argument.class, Function.class, RecursiveArgument.class,
            BooleanAlgebra.class, Calculus.class, MathFunctions.class, NumberTheory.class,
            ProbabilityDistributions.class, SpecialFunctions.class, Statistics.class};
        int count = 0;
        for (Class<?> type : classes) for (java.lang.reflect.Method method : type.getDeclaredMethods()) {
            if (!java.lang.reflect.Modifier.isPublic(method.getModifiers()) || !method.getName().endsWith("WithCancel")) continue;
            count++;
            Object receiver = type == Expression.class ? new Expression("2+2") : type == Argument.class ? new Argument("a",4)
                : type == Function.class ? new Function("f(x)=x*x") : type == RecursiveArgument.class ? new RecursiveArgument("r(n)=n") : null;
            Class<?>[] parameters = method.getParameterTypes();
            Object[] values = new Object[parameters.length];
            for (int i=0; i<values.length; i++) values[i] = parameters[i] == int.class ? (Object)0
                : parameters[i] == long.class ? (Object)0L : parameters[i] == double.class ? (Object)0.0
                : parameters[i] == boolean.class ? (Object)false : null;
            for (int invalid : new int[]{-1,32768,Integer.MIN_VALUE,Integer.MAX_VALUE}) {
                values[values.length-1] = invalid;
                java.lang.reflect.InvocationTargetException failure = Assertions.assertThrows(java.lang.reflect.InvocationTargetException.class,
                    () -> method.invoke(receiver, values), method.toString());
                Assertions.assertTrue(failure.getCause() instanceof IllegalArgumentException, method.toString());
            }
        }
        Assertions.assertEquals(142, count);
        // Invalid IDs must be rejected before evaluating user callbacks or dependent parameters.
        CancelGateState callback = new CancelGateState();
        Function gate = new Function("gate", new CancelGate(callback));
        Expression expression = new Expression("gate(1)", gate);
        Argument dependent = new Argument("a=gate(1)", gate);
        Function function = new Function("f(x)=gate(x)", gate);
        RecursiveArgument recursive = new RecursiveArgument("r(n)=gate(n)", gate);
        for (int invalid : new int[]{-1, 32768, Integer.MIN_VALUE, Integer.MAX_VALUE}) {
            Assertions.assertThrows(IllegalArgumentException.class, () -> expression.calculateWithCancel(invalid));
            Assertions.assertThrows(IllegalArgumentException.class, () -> expression.calculateWithCancel(new CalcStepsRegister(), invalid));
            Assertions.assertThrows(IllegalArgumentException.class, () -> dependent.getArgumentValueWithCancel(invalid));
            Assertions.assertThrows(IllegalArgumentException.class, () -> dependent.getArgumentValueWithCancel(new CalcStepsRegister(), invalid));
            Assertions.assertThrows(IllegalArgumentException.class, () -> function.calculateWithCancel(invalid));
            Assertions.assertThrows(IllegalArgumentException.class, () -> function.calculateWithCancel(new CalcStepsRegister(), invalid));
            Assertions.assertThrows(IllegalArgumentException.class, () -> function.calculateWithCancel(new double[]{1}, invalid));
            Assertions.assertThrows(IllegalArgumentException.class, () -> function.calculateWithCancel(new Argument[]{dependent}, invalid));
            Assertions.assertThrows(IllegalArgumentException.class, () -> gate.calculateWithCancel(new double[]{1}, invalid));
            Assertions.assertThrows(IllegalArgumentException.class, () -> recursive.getArgumentValueWithCancel(1.0, invalid));
            Assertions.assertEquals(0, callback.calls.get(), "Invalid ID executed a user callback");
        }
        Assertions.assertEquals(1, expression.calculateWithCancel(0));
        Assertions.assertTrue(callback.calls.get() > 0, "Positive control must execute the same callback");

        for (int invalid : new int[]{-1,32768,Integer.MIN_VALUE,Integer.MAX_VALUE}) {
            Assertions.assertThrows(IllegalArgumentException.class, () -> mXparser.cancelCalculation(invalid));
            Assertions.assertThrows(IllegalArgumentException.class, () -> mXparser.resetCalculationCancellation(invalid));
            Assertions.assertThrows(IllegalArgumentException.class, () -> mXparser.isCalculationCancelled(invalid));
            Assertions.assertThrows(IllegalArgumentException.class, () -> mXparser.reserveCancellationTokenId(invalid));
            Assertions.assertThrows(IllegalArgumentException.class, () -> mXparser.releaseCancellationTokenId(invalid));
        }
        Assertions.assertThrows(IllegalArgumentException.class, () -> mXparser.reserveCancellationTokenId(0));
        Assertions.assertThrows(IllegalArgumentException.class, () -> mXparser.releaseCancellationTokenId(0));
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0425() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: global OR domain, sticky state and default options";
        TestCommonTools.consolePrintTestApiStart(425, testDescr);
        try (CancelDomain a = new CancelDomain(); CancelDomain b = new CancelDomain()) {
            Assertions.assertFalse(mXparser.isCalculationCancelled(a.id));
            mXparser.cancelCalculation(a.id);
            Assertions.assertTrue(mXparser.isCalculationCancelled(a.id));
            Assertions.assertFalse(mXparser.isCalculationCancelled(b.id));
            Assertions.assertFalse(mXparser.isCurrentCalculationCancelled());
            mXparser.cancelCurrentCalculation();
            Assertions.assertTrue(mXparser.isCalculationCancelled(b.id));
            for (int invalid : new int[]{-1, 32768, Integer.MIN_VALUE, Integer.MAX_VALUE})
                Assertions.assertThrows(IllegalArgumentException.class, () -> mXparser.isCalculationCancelled(invalid));
            mXparser.setDefaultOptions();
            Assertions.assertFalse(mXparser.isCalculationCancelled(b.id));
            Assertions.assertTrue(mXparser.isCalculationCancelled(a.id));
            Assertions.assertFalse(mXparser.reserveCancellationTokenId(a.id));
            cancelNaN(new Expression("sum(i,1,10,i)").calculateWithCancel(a.id));
            Assertions.assertTrue(mXparser.isCalculationCancelled(a.id));
            mXparser.resetCalculationCancellation(a.id);
            Assertions.assertFalse(mXparser.isCalculationCancelled(a.id));
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0426() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: cross-thread publication and adjacent atomic bits";
        TestCommonTools.consolePrintTestApiStart(426, testDescr);
        int[] ids = {1,2,3,4,31,32,63,64,32767};
        ExecutorService pool = Executors.newFixedThreadPool(ids.length);
        for (int id:ids) Assertions.assertTrue(mXparser.reserveCancellationTokenId(id));
        try {
            List<Future<?>> work = new ArrayList<>();
            java.util.concurrent.CountDownLatch start = new java.util.concurrent.CountDownLatch(1);
            for (int id:ids) work.add(pool.submit(() -> { cancelAwait(start); mXparser.cancelCalculation(id); return null; }));
            start.countDown();
            for (Future<?> f:work) f.get(15,java.util.concurrent.TimeUnit.SECONDS);
            for (int id:ids) Assertions.assertTrue(mXparser.isCalculationCancelled(id));
            work.clear();
            for (int id:ids) work.add(pool.submit(() -> mXparser.resetCalculationCancellation(id)));
            for (Future<?> f:work) f.get(15,java.util.concurrent.TimeUnit.SECONDS);
            for (int id:ids) Assertions.assertFalse(mXparser.isCalculationCancelled(id));
            java.util.concurrent.CountDownLatch listening = new java.util.concurrent.CountDownLatch(1);
            Future<Boolean> consumer = pool.submit(() -> {
                listening.countDown();
                long deadline = System.nanoTime() + java.util.concurrent.TimeUnit.SECONDS.toNanos(10);
                while (!mXparser.isCalculationCancelled(31)) if (System.nanoTime() > deadline) return false;
                return true;
            });
            cancelAwait(listening);
            mXparser.cancelCalculation(31); // No following barrier publishes this write to the consumer.
            Assertions.assertTrue(consumer.get(15,java.util.concurrent.TimeUnit.SECONDS));
            // Global publication uses the original volatile flag, through either API.
            java.lang.reflect.Field signalField = mXparser.class.getDeclaredField("cancelCurrentCalculationFlag");
            Assertions.assertTrue(java.lang.reflect.Modifier.isVolatile(signalField.getModifiers()));
            for (boolean legacy : new boolean[]{true, false}) {
                java.util.concurrent.CountDownLatch globalListening = new java.util.concurrent.CountDownLatch(1);
                Future<Boolean> globalConsumer = pool.submit(() -> {
                    globalListening.countDown();
                    long deadline = System.nanoTime() + java.util.concurrent.TimeUnit.SECONDS.toNanos(10);
                    while (!mXparser.isCurrentCalculationCancelled())
                        if (System.nanoTime() > deadline) return false;
                    return mXparser.isCalculationCancelled(0) && mXparser.isCalculationCancelled(32);
                });
                cancelAwait(globalListening);
                if (legacy) mXparser.cancelCurrentCalculation();
                else mXparser.cancelCalculation(0);
                Assertions.assertTrue(globalConsumer.get(15, java.util.concurrent.TimeUnit.SECONDS));
                if (legacy) mXparser.resetCalculationCancellation(0);
                else mXparser.resetCancelCurrentCalculationFlag();
                Assertions.assertFalse(mXparser.isCurrentCalculationCancelled());
                Assertions.assertFalse(mXparser.isCalculationCancelled(0));
                Assertions.assertFalse(mXparser.isCalculationCancelled(32));
                Assertions.assertTrue(mXparser.isCalculationCancelled(31));
            }

        } finally {
            cancelShutdown(pool);
            for (int id:ids) mXparser.releaseCancellationTokenId(id);
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0427() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: reserve/acquire clear only successfully claimed signals";
        TestCommonTools.consolePrintTestApiStart(427, testDescr);
        int id = 31;
        mXparser.cancelCalculation(id);
        Assertions.assertTrue(mXparser.reserveCancellationTokenId(id));
        try {
            Assertions.assertFalse(mXparser.isCalculationCancelled(id));
            mXparser.cancelCalculation(id);
            Assertions.assertFalse(mXparser.reserveCancellationTokenId(id));
            Assertions.assertTrue(mXparser.isCalculationCancelled(id));
        } finally { mXparser.releaseCancellationTokenId(id); }
        for (int i=1;i<=32767;i++) mXparser.cancelCalculation(i);
        try (CancelDomain acquired = new CancelDomain()) {
            Assertions.assertFalse(mXparser.isCalculationCancelled(acquired.id));
            Assertions.assertTrue(mXparser.isCalculationCancelled(acquired.id == 1 ? 2 : 1));
        } finally { for (int i=1;i<=32767;i++) mXparser.resetCalculationCancellation(i); }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0428() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: exhaustion, reuse and simultaneous unique acquire";
        TestCommonTools.consolePrintTestApiStart(428, testDescr);
        Set<Integer> reserved = new HashSet<>();
        try {
            for (int i=1;i<=32767;i++) Assertions.assertTrue(reserved.add(mXparser.acquireCancellationTokenId()));
            Assertions.assertThrows(IllegalStateException.class, mXparser::acquireCancellationTokenId);
            mXparser.releaseCancellationTokenId(32); reserved.remove(32);
            Assertions.assertEquals(32,mXparser.acquireCancellationTokenId()); reserved.add(32);
        } finally { for (int id:reserved) mXparser.releaseCancellationTokenId(id); }
        ExecutorService pool=Executors.newFixedThreadPool(8);
        java.util.concurrent.CountDownLatch start=new java.util.concurrent.CountDownLatch(1);
        List<Future<Integer>> futures=new ArrayList<>(); reserved.clear();
        try {
            for(int i=0;i<8;i++) futures.add(pool.submit(() -> { cancelAwait(start); return mXparser.acquireCancellationTokenId(); }));
            start.countDown();
            for(Future<Integer> f:futures) Assertions.assertTrue(reserved.add(f.get(15,java.util.concurrent.TimeUnit.SECONDS)));
        } finally { start.countDown(); cancelShutdown(pool); for(int id:reserved)mXparser.releaseCancellationTokenId(id); }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0429() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: release order, neighbours and unreserved rejection";
        TestCommonTools.consolePrintTestApiStart(429, testDescr);
        Assertions.assertTrue(mXparser.reserveCancellationTokenId(31));
        Assertions.assertTrue(mXparser.reserveCancellationTokenId(30));
        try {
            mXparser.cancelCalculation(31); mXparser.cancelCalculation(30);
            mXparser.releaseCancellationTokenId(31);
            Assertions.assertTrue(mXparser.reserveCancellationTokenId(31));
            Assertions.assertFalse(mXparser.isCalculationCancelled(31));
            Assertions.assertTrue(mXparser.isCalculationCancelled(30));
        } finally { mXparser.releaseCancellationTokenId(31); mXparser.releaseCancellationTokenId(30); }
        mXparser.cancelCalculation(31);
        Assertions.assertThrows(IllegalStateException.class, () -> mXparser.releaseCancellationTokenId(31));
        Assertions.assertTrue(mXparser.isCalculationCancelled(31));
        mXparser.resetCalculationCancellation(31);
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0430() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: two workers with independent domains";
        TestCommonTools.consolePrintTestApiStart(430, testDescr);
        try(CancelDomain a=new CancelDomain();CancelDomain b=new CancelDomain()) {
            double[] values=cancelPair(a.id,b.id,false);
            cancelNaN(values[0]);Assertions.assertEquals(5050,values[1]);
            Assertions.assertFalse(mXparser.isCurrentCalculationCancelled());
            Assertions.assertFalse(mXparser.isCalculationCancelled(b.id));
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0431() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: a separate controller globally cancels both workers";
        TestCommonTools.consolePrintTestApiStart(431, testDescr);
        try(CancelDomain a=new CancelDomain();CancelDomain b=new CancelDomain()) {
            double[] values=cancelPair(a.id,b.id,true);cancelNaN(values[0]);cancelNaN(values[1]);
            Assertions.assertFalse(mXparser.isCalculationCancelled(a.id));
            Assertions.assertFalse(mXparser.isCalculationCancelled(b.id));
            Assertions.assertEquals(55,new Expression("sum(i,1,10,i)").calculateWithCancel(a.id));
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0432() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: legacy and token calculations side by side";
        TestCommonTools.consolePrintTestApiStart(432, testDescr);
        try(CancelDomain a=new CancelDomain()) {
            double[] values=cancelPair(-1,a.id,false);Assertions.assertEquals(5050,values[0]);cancelNaN(values[1]);
            mXparser.resetCalculationCancellation(a.id);
            values=cancelPair(-1,a.id,true);cancelNaN(values[0]);cancelNaN(values[1]);
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0433() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: deliberate shared ID group and explicit reset";
        TestCommonTools.consolePrintTestApiStart(433, testDescr);
        try(CancelDomain a=new CancelDomain()) {
            double[] values=cancelPair(a.id,a.id,false);cancelNaN(values[0]);cancelNaN(values[1]);
            Assertions.assertTrue(mXparser.isCalculationCancelled(a.id));mXparser.resetCalculationCancellation(a.id);
            Assertions.assertEquals(5050,new Expression("sum(i,1,100,i)").calculateWithCancel(a.id));
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0434() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: pre-cancel first reduction and reset";
        TestCommonTools.consolePrintTestApiStart(434, testDescr);
        try(CancelDomain a=new CancelDomain()) {
            mXparser.cancelCalculation(a.id);cancelNaN(new Expression("sum(i,1,10,i)").calculateWithCancel(a.id));
            mXparser.resetCalculationCancellation(a.id);Assertions.assertEquals(55,new Expression("sum(i,1,10,i)").calculateWithCancel(a.id));
            mXparser.cancelCurrentCalculation();cancelNaN(new Expression("sum(i,1,10,i)").calculate());
            mXparser.resetCancelCurrentCalculationFlag();
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0435() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: cached literal, free and recursive base fast returns";
        TestCommonTools.consolePrintTestApiStart(435, testDescr);
        try(CancelDomain a=new CancelDomain()) {
            Expression e=new Expression("7");e.calculateWithCancel(a.id);e.calculateWithCancel(a.id);
            RecursiveArgument r=new RecursiveArgument("r(n)=n");r.addBaseCase(2,7);
            mXparser.cancelCalculation(a.id);
            Assertions.assertEquals(7,e.calculateWithCancel(a.id));
            Assertions.assertEquals(7,new Argument("a",7).getArgumentValueWithCancel(a.id));
            Assertions.assertEquals(7,r.getArgumentValueWithCancel(2.0,a.id));
            Assertions.assertTrue(mXparser.isCalculationCancelled(a.id));
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0436() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: replay propagates existing negative evaluator result";
        TestCommonTools.consolePrintTestApiStart(436, testDescr);
        try(CancelDomain a=new CancelDomain()) {
            for(int id:new int[]{a.id,0}) {
                CancelGateState s=new CancelGateState();s.action=() -> mXparser.cancelCalculation(id);
                Expression e=new Expression("gate(1)+2",new Function("gate",new CancelGate(s)));
                Assertions.assertEquals(3,e.calculateWithCancel(id));
                s.armed.set(true);cancelNaN(e.calculateWithCancel(id));
                mXparser.resetCalculationCancellation(id);Assertions.assertEquals(3,e.calculateWithCancel(id));
            }
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0437() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: active frame restored after result, cancellation and exception";
        TestCommonTools.consolePrintTestApiStart(437, testDescr);
        try(CancelDomain a=new CancelDomain();CancelDomain b=new CancelDomain()) {
            CancelGateState s=new CancelGateState();Expression e=new Expression("gate(1)+2",new Function("gate",new CancelGate(s)));
            Assertions.assertEquals(3,e.calculateWithCancel(a.id));Assertions.assertEquals(0,cancelFrame(e));
            s.action=() -> mXparser.cancelCalculation(a.id);s.armed.set(true);cancelNaN(e.calculateWithCancel(a.id));
            Assertions.assertEquals(0,cancelFrame(e));
            s.action=() -> {throw new IllegalStateException("test callback");};s.armed.set(true);
            cancelNaN(e.calculateWithCancel(b.id));Assertions.assertEquals(0,cancelFrame(e));
            Assertions.assertEquals(3,e.calculateWithCancel(b.id));
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0438() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: nested independent expression retains its own ID on the same worker";
        TestCommonTools.consolePrintTestApiStart(438, testDescr);
        try(CancelDomain a=new CancelDomain();CancelDomain b=new CancelDomain()) {
            CancelGateState s=new CancelGateState();Expression inner=new Expression("sum(i,1,10,i)");
            s.action=() -> {mXparser.cancelCalculation(a.id);Assertions.assertEquals(55,inner.calculateWithCancel(b.id));};
            s.armed.set(true);Expression outer=new Expression("gate(1)+2",new Function("gate",new CancelGate(s)));
            cancelNaN(outer.calculateWithCancel(a.id));Assertions.assertEquals(0,cancelFrame(inner));Assertions.assertEquals(0,cancelFrame(outer));
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0439() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: active ID excluded from clones and trusted serialization";
        TestCommonTools.consolePrintTestApiStart(439, testDescr);
        try(CancelDomain a=new CancelDomain();CancelDomain b=new CancelDomain()) {
            Expression e=new Expression("2+2");java.lang.reflect.Field field=Expression.class.getDeclaredField("activeCancelId");field.setAccessible(true);field.setInt(e,a.id);
            Assertions.assertTrue(java.lang.reflect.Modifier.isTransient(field.getModifiers()));
            java.lang.reflect.Method clone=Expression.class.getDeclaredMethod("clone");clone.setAccessible(true);
            Expression shallow=(Expression)clone.invoke(e), independent=e.cloneForThreadSafe();
            Assertions.assertEquals(0,cancelFrame(shallow));Assertions.assertEquals(0,cancelFrame(independent));
            Assertions.assertEquals(4,independent.calculateWithCancel(b.id));
            SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
            try {
                Expression restored=SerializationUtils.deserializeFromBytes(SerializationUtils.serializeToBytes(e));
                Assertions.assertNotNull(restored);Assertions.assertEquals(0,cancelFrame(restored));Assertions.assertEquals(4,restored.calculateWithCancel(b.id));
            } finally {SerializationUtils.disableBinarySerialization();field.setInt(e,0);}
            CancelGateState s=new CancelGateState();CancelGate original=new CancelGate(s);CancelGate copied=(CancelGate)original.clone();
            Assertions.assertSame(original.state,copied.state);s.action=() -> {};s.armed.set(true);original.calculate();copied.calculate();
            Assertions.assertEquals(0,s.entered.getCount());Assertions.assertFalse(s.armed.get());
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0440() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: dependent Argument and runtime Function propagation with trace";
        TestCommonTools.consolePrintTestApiStart(440, testDescr);
        try(CancelDomain a=new CancelDomain()) {
            CancelGateState s=new CancelGateState();Function gate=new Function("gate",new CancelGate(s));
            Argument x=new Argument("x=sum(i,1,100,gate(i))",gate);Function f=new Function("f(t)=x+t");f.addDefinitions(x);
            Assertions.assertEquals(5050,x.getArgumentValueWithCancel(a.id));Assertions.assertEquals(5051,f.calculateWithCancel(new double[]{1},a.id));
            cancelNaN(cancelDuring(() -> x.getArgumentValueWithCancel(new CalcStepsRegister(),a.id),s,a.id));
            mXparser.resetCalculationCancellation(a.id);
            CancelGateState t=new CancelGateState();Argument y=new Argument("y=sum(i,1,100,gate(i))",new Function("gate",new CancelGate(t)));
            Function g=new Function("g(t)=y+t");g.addDefinitions(y);g.setArgumentValue(0,1);
            cancelNaN(cancelDuring(() -> g.calculateWithCancel(new CalcStepsRegister(),a.id),t,a.id));
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0441() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: all typed Function entries and dependent argument arrays";
        TestCommonTools.consolePrintTestApiStart(441, testDescr);
        try(CancelDomain a=new CancelDomain()) {
            for(int variant=0;variant<4;variant++) {
                CancelGateState s=new CancelGateState();Function f=new Function("f(x)=sum(i,1,x,gate(i))",new Function("gate",new CancelGate(s)));f.setArgumentValue(0,100);
                final int v=variant;
                Callable<Double> call=() -> v==0?f.calculateWithCancel(new double[]{100},a.id):v==1?f.calculateWithCancel(new Argument[]{new Argument("x",100)},a.id):v==2?f.calculateWithCancel(new CalcStepsRegister(),a.id):f.calculateWithCancel(a.id);
                Assertions.assertEquals(5050,call.call());cancelNaN(cancelDuring(call,s,a.id));mXparser.resetCalculationCancellation(a.id);
            }
            CancelGateState s=new CancelGateState();Argument dependent=new Argument("x=sum(i,1,100,gate(i))",new Function("gate",new CancelGate(s)));
            Function f=new Function("f(x)=x");cancelNaN(cancelDuring(() -> f.calculateWithCancel(new Argument[]{dependent},a.id),s,a.id));
            cancelNaN(f.calculateWithCancel((double[])null,a.id));cancelNaN(f.calculateWithCancel(new double[0],a.id));
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0442() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: recursive Argument and Function including cloned callback rendezvous";
        TestCommonTools.consolePrintTestApiStart(442, testDescr);
        try(CancelDomain a=new CancelDomain()) {
            CancelGateState s=new CancelGateState();Function gate=new Function("gate",new CancelGate(s));
            RecursiveArgument r=new RecursiveArgument("r(n)=r(n-1)+gate(n)",gate);r.addBaseCase(0,0);
            Assertions.assertEquals(55,r.getArgumentValueWithCancel(10.0,a.id));
            r=new RecursiveArgument("r(n)=r(n-1)+gate(n)",gate);r.addBaseCase(0,0);final RecursiveArgument cold=r;
            cancelNaN(cancelDuring(() -> cold.getArgumentValueWithCancel(10.0,a.id),s,a.id));mXparser.resetCalculationCancellation(a.id);
            CancelGateState t=new CancelGateState();Function recursive=new Function("f(n)=if(n<=0,0,f(n-1)+gate(n))",new Function("gate",new CancelGate(t)));
            Assertions.assertEquals(55,recursive.calculateWithCancel(new double[]{10},a.id));
            cancelNaN(cancelDuring(() -> recursive.calculateWithCancel(new double[]{10},a.id),t,a.id));
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0443() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: IF/IFF preserve lazy inactive branches";
        TestCommonTools.consolePrintTestApiStart(443, testDescr);
        try(CancelDomain a=new CancelDomain()) {
            for(String text:new String[]{"if(1,sum(i,1,10,gate(i)),other(99))","iff(1,sum(i,1,10,gate(i)),1,other(99))"}) {
                CancelGateState s=new CancelGateState(),other=new CancelGateState();
                Expression e=new Expression(text,new Function("gate",new CancelGate(s)),new Function("other",new CancelGate(other)));
                Assertions.assertEquals(55,e.calculateWithCancel(a.id));Assertions.assertEquals(0,other.calls.get());
                cancelNaN(cancelDuring(() -> e.calculateWithCancel(a.id),s,a.id));Assertions.assertEquals(0,other.calls.get());mXparser.resetCalculationCancellation(a.id);
            }
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0444() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: iteration, sample variance and range parameter expressions";
        TestCommonTools.consolePrintTestApiStart(444, testDescr);
        try(CancelDomain a=new CancelDomain()) {
            String[] operators={"sum","prod","avg","vari","stdi"};double[] expected={15,120,3,2.5,Math.sqrt(2.5)};
            for(int i=0;i<operators.length;i++) {
                CancelGateState s=new CancelGateState();Expression e=new Expression(operators[i]+"(i,1,5,gate(i))",new Function("gate",new CancelGate(s)));
                Assertions.assertEquals(expected[i],e.calculateWithCancel(a.id),1e-12);
                double cancelledValue=cancelDuring(() -> e.calculateWithCancel(a.id),s,a.id);
                Assertions.assertTrue(Double.isNaN(cancelledValue),operators[i]+" returned "+cancelledValue);
                mXparser.resetCalculationCancellation(a.id);
            }
            for(String range:new String[]{"sum(i,gate(1),10,i)","sum(i,1,gate(10),i)","sum(i,1,10,i,gate(1))"}) {
                CancelGateState s=new CancelGateState();Expression e=new Expression(range,new Function("gate",new CancelGate(s)));
                cancelNaN(cancelDuring(() -> e.calculateWithCancel(a.id),s,a.id));mXparser.resetCalculationCancellation(a.id);
            }
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0445() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: calculus helpers and all expression-valued calculus parameters";
        TestCommonTools.consolePrintTestApiStart(445, testDescr);
        try(CancelDomain a=new CancelDomain()) {
            for(int variant=0;variant<4;variant++) {
                CancelGateState s=new CancelGateState();Argument x=new Argument("x",0.5);
                Expression f=new Expression(variant==2?"gate(x)-0.5":variant==3?"gate(x)^2":"gate(x)",x,new Function("gate",new CancelGate(s)));
                final int v=variant;
                Callable<Double> call=() -> v==0?Calculus.derivativeWithCancel(f,x,0.5,Calculus.GENERAL_DERIVATIVE,1e-8,20,a.id):v==1?Calculus.integralTrapezoidWithCancel(f,x,0,1,1e-8,20,a.id):v==2?Calculus.solveBrentWithCancel(f,x,0,1,1e-8,20,a.id):Calculus.derivativeNthWithCancel(f,2,x,0.5,Calculus.RIGHT_DERIVATIVE,1e-8,20,a.id);
                Assertions.assertEquals(new double[]{1,0.5,0.5,2}[variant],call.call(),1e-5);
                if (variant == 2) s.skipCalls = 2; // Reach Brent's iteration, past its endpoint/early-return paths.
                cancelNaN(cancelDuring(call,s,a.id));mXparser.resetCalculationCancellation(a.id);
            }
            for(String text:new String[]{"der(x,x,gate(0.5))","der(x,x,0.5,gate(0.00000001),20)","der(x,x,0.5,0.00000001,gate(20))","dern(x^2,gate(2),x)","int(x,x,gate(0),1)","solve(x-0.5,x,0,gate(1))","diff(x,x,gate(1))"}) {
                CancelGateState s=new CancelGateState();Expression e=new Expression(text,new Argument("x",0.5),new Function("gate",new CancelGate(s)));
                Assertions.assertTrue(e.checkSyntax(),e.getErrorMessage());
                double cancelledValue=cancelDuring(() -> e.calculateWithCancel(a.id),s,a.id);
                if (text.startsWith("solve(")) {
                    // A cancelled bound can leave Brent with NaN endpoint values, skip its
                    // controlled loop and return b. Preserve this existing global behaviour.
                    Assertions.assertEquals(1,cancelledValue);
                    Assertions.assertTrue(mXparser.isCalculationCancelled(a.id));
                    CancelGateState legacyState=new CancelGateState();
                    Expression legacy=new Expression(text,new Argument("x",0.5),new Function("gate",new CancelGate(legacyState)));
                    try { Assertions.assertEquals(cancelledValue,cancelDuring(legacy::calculate,legacyState,0)); }
                    finally { mXparser.resetCancelCurrentCalculationFlag(); }
                } else Assertions.assertTrue(Double.isNaN(cancelledValue),text+" returned "+cancelledValue);
                mXparser.resetCalculationCancellation(a.id);
            }
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0446() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: foreign expression syntax frame and base conversion";
        TestCommonTools.consolePrintTestApiStart(446, testDescr);
        try(CancelDomain a=new CancelDomain()) {
            java.lang.reflect.Method syntax=Expression.class.getDeclaredMethod("checkSyntaxWithCancel",String.class,boolean.class,int.class);syntax.setAccessible(true);
            Expression foreign=new Expression("b2.101");Assertions.assertTrue((Boolean)syntax.invoke(foreign,"",false,a.id));Assertions.assertEquals(0,cancelFrame(foreign));
            Argument arg=new Argument("a=b2.101");Function fun=new Function("f(x)=x+b2.101");RecursiveArgument recursive=new RecursiveArgument("r(n)=n+b2.101");
            Expression e=new Expression("a+f(1)+r(1)",arg,fun,recursive);Assertions.assertEquals(17,e.calculateWithCancel(a.id));
            mXparser.cancelCalculation(a.id);Expression pending=new Expression("a+f(1)+r(1)",new Argument("a=b2.101"),new Function("f(x)=x+b2.101"),new RecursiveArgument("r(n)=n+b2.101"));
            cancelNaN(pending.calculateWithCancel(a.id));Assertions.assertEquals(0,cancelFrame(pending));
            mXparser.resetCalculationCancellation(a.id);Assertions.assertTrue(new Expression("b2.101").checkSyntax());
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0447() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: getFunctionValues forwards ID without adding count-loop polls";
        TestCommonTools.consolePrintTestApiStart(447, testDescr);
        try(CancelDomain a=new CancelDomain()) {
            Argument x=new Argument("x");Expression f=new Expression("gate(x)+1",x,new Function("gate",new CancelGate(new CancelGateState())));
            Assertions.assertArrayEquals(new double[]{1,2,3},MathFunctions.getFunctionValuesWithCancel(f,x,0,2,1,a.id));
            Assertions.assertArrayEquals(new double[]{3,2,1},MathFunctions.getFunctionValuesWithCancel(f,x,2,0,-1,a.id));
            Assertions.assertArrayEquals(new double[]{2},MathFunctions.getFunctionValuesWithCancel(f,x,1,1,1,a.id));
            Assertions.assertNull(MathFunctions.getFunctionValuesWithCancel(f,x,0,2,0,a.id));
            mXparser.cancelCalculation(a.id);double[] samples=MathFunctions.getFunctionValuesWithCancel(f,x,0,2,1,a.id);
            Assertions.assertEquals(3,samples.length);for(double sample:samples)cancelNaN(sample);
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0448() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: NumberTheory rounding modes, sorting, bases and typed factor sentinels";
        TestCommonTools.consolePrintTestApiStart(448, testDescr);
        try(CancelDomain a=new CancelDomain()) {
            for(boolean canonical:new boolean[]{true,false}) {
                if(canonical)mXparser.enableCanonicalRounding();else mXparser.disableCanonicalRounding();
                Assertions.assertEquals(6,NumberTheory.sumWithCancel(new double[]{1,2,3},a.id));
                mXparser.cancelCalculation(a.id);cancelNaN(NumberTheory.sumWithCancel(new double[]{1,2,3},a.id));mXparser.resetCalculationCancellation(a.id);
            }
            Assertions.assertArrayEquals(new long[]{2,2,3},NumberTheory.primeFactorsWithCancel(12L,a.id));
            Assertions.assertArrayEquals(new double[]{2,2,3},NumberTheory.primeFactorsWithCancel(12.0,a.id));
            double[] sorted={3,1,2};Assertions.assertArrayEquals(new int[]{1,2,0},NumberTheory.sortAscWithCancel(sorted,a.id));Assertions.assertArrayEquals(new double[]{1,2,3},sorted);
            Assertions.assertEquals(5,NumberTheory.convOthBase2DecimalWithCancel(2.0,new double[]{1,0,1},a.id));
            mXparser.cancelCalculation(a.id);Assertions.assertEquals(0,NumberTheory.primeFactorsWithCancel(12L,a.id).length);Assertions.assertEquals(0,NumberTheory.primeFactorsWithCancel(12.0,a.id).length);
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0449() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: mathematical families, exact integral sentinels and lcm exception";
        TestCommonTools.consolePrintTestApiStart(449, testDescr);
        try(CancelDomain a=new CancelDomain()) {
            Assertions.assertEquals(3628800,MathFunctions.factorialWithCancel(10,a.id));
            Assertions.assertEquals(MathFunctions.binomCoeff(30,15),MathFunctions.binomCoeffWithCancel(30,15L,a.id));
            Assertions.assertEquals(MathFunctions.harmonicNumber(10),MathFunctions.ordinaryHarmonicNumberWithCancel(10,a.id));
            Assertions.assertEquals(MathFunctions.harmonicNumber(2.0,10),MathFunctions.generalizedHarmonicNumberWithCancel(2.0,10,a.id));
            Assertions.assertEquals(MathFunctions.eulerNumber(10,4),MathFunctions.eulerNumberWithCancel(10,4,a.id));
            Assertions.assertEquals(MathFunctions.Stirling1Number(10,4),MathFunctions.Stirling1NumberWithCancel(10,4,a.id));
            Assertions.assertEquals(MathFunctions.Stirling2Number(10,4),MathFunctions.Stirling2NumberWithCancel(10,4,a.id));
            Assertions.assertEquals(6765,MathFunctions.fibonacciNumberWithCancel(20,a.id));Assertions.assertEquals(15127,MathFunctions.lucasNumberWithCancel(20,a.id));
            Assertions.assertEquals(1,BooleanAlgebra.andVariadicWithCancel(new double[]{1,1},a.id));Assertions.assertEquals(2.5,Statistics.varWithCancel(new double[]{1,2,3,4,5},a.id));
            Assertions.assertEquals(SpecialFunctions.exponentialIntegralEi(2),SpecialFunctions.exponentialIntegralEiWithCancel(2,a.id));
            Assertions.assertEquals(6,NumberTheory.gcdWithCancel(12L,18L,a.id));Assertions.assertEquals(6,NumberTheory.gcdWithCancel(new long[]{12,18,24},a.id));
            Assertions.assertEquals(72,NumberTheory.lcmWithCancel(new long[]{12,18,24},a.id));Assertions.assertEquals(4,NumberTheory.primeCountWithCancel(10L,a.id));
            Assertions.assertEquals(7,NumberTheory.numberOfDigitsWithCancel(123L,2L,a.id));Assertions.assertEquals(2,NumberTheory.digitAtPositionWithCancel(123L,2,10,a.id));
            for(int id:new int[]{a.id,0}) {
                mXparser.cancelCalculation(id);
                Assertions.assertEquals(0L,NumberTheory.gcdWithCancel(12L,18L,id));Assertions.assertEquals(0L,NumberTheory.gcdWithCancel(new long[]{12,18,24},id));
                Assertions.assertEquals(0L,NumberTheory.lcmWithCancel(new long[]{12,18,24},id));Assertions.assertEquals(0L,NumberTheory.primeCountWithCancel(10L,id));
                Assertions.assertEquals(0L,NumberTheory.numberOfDigitsWithCancel(123L,2L,id));Assertions.assertEquals(0,NumberTheory.digitAtPositionWithCancel(123L,2,10,id));
                Assertions.assertThrows(ArithmeticException.class,() -> NumberTheory.lcmWithCancel(12L,18L,id));
                if(id==0)Assertions.assertThrows(ArithmeticException.class,() -> NumberTheory.lcm(12L,18L));
                cancelNaN(MathFunctions.factorialWithCancel(10,id));cancelNaN(MathFunctions.eulerNumberWithCancel(10,4,id));cancelNaN(MathFunctions.Stirling1NumberWithCancel(10,4,id));cancelNaN(MathFunctions.Stirling2NumberWithCancel(10,4,id));
                cancelNaN(MathFunctions.fibonacciNumberWithCancel(20,id));cancelNaN(MathFunctions.lucasNumberWithCancel(20,id));cancelNaN(MathFunctions.ordinaryHarmonicNumberWithCancel(10,id));cancelNaN(MathFunctions.generalizedHarmonicNumberWithCancel(2.0,10,id));
                cancelNaN(BooleanAlgebra.andVariadicWithCancel(new double[]{1,1},id));cancelNaN(Statistics.varWithCancel(new double[]{1,2,3},id));cancelNaN(SpecialFunctions.exponentialIntegralEiWithCancel(2,id));
                cancelNaN(new Expression("lcm(12,18)").calculateWithCancel(id));mXparser.resetCalculationCancellation(id);
            }
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0450() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: rejection sampling retains RNG identity and draw order";
        TestCommonTools.consolePrintTestApiStart(450, testDescr);
        try(CancelDomain a=new CancelDomain()) {
            java.util.concurrent.atomic.AtomicInteger calls=new java.util.concurrent.atomic.AtomicInteger();
            Random random=new Random(){public double nextDouble(){if(calls.incrementAndGet()==2)mXparser.cancelCalculation(a.id);return 0;}};
            cancelNaN(ProbabilityDistributions.rndNormalWithCancel(0,1,random,a.id));Assertions.assertEquals(2,calls.get());
            Assertions.assertEquals(3,ProbabilityDistributions.rndNormalWithCancel(3,0,random,a.id));Assertions.assertEquals(2,calls.get());
            mXparser.resetCalculationCancellation(a.id);
            Assertions.assertEquals(ProbabilityDistributions.rndNormal(0,1,new Random(123)),ProbabilityDistributions.rndNormalWithCancel(0,1,new Random(123),a.id));
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0451() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: syntax errors, corrected definitions and frame restoration";
        TestCommonTools.consolePrintTestApiStart(451, testDescr);
        mXparser.disableAttemptToFixExpStrMode(); // Keep the intended malformed input malformed in both APIs.
        try(CancelDomain a=new CancelDomain()) {
            Expression legacy=new Expression("1+"),token=new Expression("1+");cancelNaN(legacy.calculate());cancelNaN(token.calculateWithCancel(a.id));
            Assertions.assertEquals(legacy.getErrorMessage(),token.getErrorMessage());Assertions.assertEquals(0,cancelFrame(token));
            Argument bad=new Argument("a=1+");Expression e=new Expression("a",bad);cancelNaN(e.calculateWithCancel(a.id));
            bad.setArgumentExpressionString("2+2");Assertions.assertEquals(4,e.calculateWithCancel(a.id));
            token.setExpressionString("2+2");Assertions.assertTrue(token.checkSyntax());Assertions.assertEquals(4,token.calculateWithCancel(a.id));
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0452() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: exact nine legacy dispatch boundaries and positive private cores";
        TestCommonTools.consolePrintTestApiStart(452, testDescr);
        Expression e=new Expression("2+2") {public double calculate(){return 101;}public double calculate(CalcStepsRegister csr){return 102;}};
        Argument a=new Argument("a=2+2") {public double getArgumentValue(){return 201;}public double getArgumentValue(CalcStepsRegister csr){return 202;}};
        Function f=new Function("f(x)=x*x") {public double calculate(){return 301;}public double calculate(CalcStepsRegister csr){return 302;}public double calculate(double... values){return 303;}public double calculate(Argument... values){return 304;}};
        f.setArgumentValue(0,2);
        RecursiveArgument r=new RecursiveArgument("r(n)=n+100") {public double getArgumentValue(double index){return 401;}};
        double[] actual={e.calculateWithCancel(0),e.calculateWithCancel((CalcStepsRegister)null,0),a.getArgumentValueWithCancel(0),a.getArgumentValueWithCancel((CalcStepsRegister)null,0),f.calculateWithCancel(0),f.calculateWithCancel((CalcStepsRegister)null,0),f.calculateWithCancel(new double[]{2},0),f.calculateWithCancel(new Argument[]{new Argument("x",2)},0),r.getArgumentValueWithCancel(2.0,0)};
        Assertions.assertArrayEquals(new double[]{101,102,201,202,301,302,303,304,401},actual);
        try(CancelDomain id=new CancelDomain()) {
            Assertions.assertEquals(4,e.calculateWithCancel(id.id));Assertions.assertEquals(4,e.calculateWithCancel((CalcStepsRegister)null,id.id));
            Assertions.assertEquals(4,a.getArgumentValueWithCancel(id.id));Assertions.assertEquals(4,a.getArgumentValueWithCancel((CalcStepsRegister)null,id.id));
            Assertions.assertEquals(4,f.calculateWithCancel(id.id));Assertions.assertEquals(4,f.calculateWithCancel((CalcStepsRegister)null,id.id));
            Assertions.assertEquals(4,f.calculateWithCancel(new double[]{2},id.id));Assertions.assertEquals(4,f.calculateWithCancel(new Argument[]{new Argument("x",2)},id.id));
            Assertions.assertEquals(102,r.getArgumentValueWithCancel(2.0,id.id));
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0453() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: explicit mathematical names and inherited no-index RecursiveArgument getter";
        TestCommonTools.consolePrintTestApiStart(453, testDescr);
        try(CancelDomain a=new CancelDomain()) {
            Assertions.assertEquals(MathFunctions.harmonicNumber(2.0,3),MathFunctions.generalizedHarmonicNumberWithCancel(2.0,3,a.id));
            Assertions.assertEquals(MathFunctions.harmonicNumber(2),MathFunctions.ordinaryHarmonicNumberWithCancel(2,a.id));
            Assertions.assertEquals(6,NumberTheory.sum(1,2,3));Assertions.assertEquals(6,NumberTheory.sumWithCancel(new double[]{1,2,3},a.id));
            Assertions.assertEquals(5,NumberTheory.convOthBase2DecimalWithCancel("101",2,a.id));
            Assertions.assertEquals(NumberTheory.convDecimal2OthBase(5,2),NumberTheory.formatNumberInBaseWithCancel(5,2,a.id));
            Assertions.assertEquals(NumberTheory.digitAtPosition(123.0,2),NumberTheory.decimalDigitAtPositionWithCancel(123.0,2,a.id));
            Argument n=new Argument("n",2);RecursiveArgument r=new RecursiveArgument("r","n+100",n);r.addBaseCase(2,999);
            Assertions.assertEquals(102,r.getArgumentValueWithCancel(a.id));Assertions.assertEquals(999,r.getArgumentValueWithCancel(2.0,a.id));
            n.setArgumentValue(5);Assertions.assertEquals(105,r.getArgumentValueWithCancel(a.id));Assertions.assertEquals(105,r.getArgumentValueWithCancel(5.0,a.id));
            n.setArgumentValue(8);Assertions.assertEquals(108,r.getArgumentValueWithCancel(a.id));Assertions.assertEquals(105,r.getArgumentValueWithCancel(5.0,a.id));
            Assertions.assertEquals(108,r.getArgumentValueWithCancel((CalcStepsRegister)null,a.id));
            Assertions.assertEquals(Argument.class,RecursiveArgument.class.getMethod("getArgumentValueWithCancel",int.class).getDeclaringClass());
            Assertions.assertEquals(Argument.class,RecursiveArgument.class.getMethod("getArgumentValueWithCancel",CalcStepsRegister.class,int.class).getDeclaringClass());
            Assertions.assertEquals(RecursiveArgument.class,RecursiveArgument.class.getMethod("getArgumentValueWithCancel",double.class,int.class).getDeclaringClass());
        }
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0454() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "cancellation: repeated pool ownership, cancellation, join and reuse";
        TestCommonTools.consolePrintTestApiStart(454, testDescr);
        for(int round=0;round<8;round++) {
            try(CancelDomain a=new CancelDomain();CancelDomain b=new CancelDomain()) {
                double[] values=cancelPair(a.id,b.id,false);cancelNaN(values[0]);Assertions.assertEquals(5050,values[1]);
                mXparser.resetCalculationCancellation(a.id);Assertions.assertEquals(55,new Expression("sum(i,1,10,i)").calculateWithCancel(a.id));
            }
        }
        int reused=mXparser.acquireCancellationTokenId();mXparser.releaseCancellationTokenId(reused);
        Assertions.assertTrue(mXparser.reserveCancellationTokenId(reused));mXparser.releaseCancellationTokenId(reused);
        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }


    /** Maintainer's functional adaptation check; intentionally unnumbered. */
    @Test
    public void testSyntaxCheckerAdaptation() throws Exception {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        mXparser.consolePrintln("Syntax checker adaptation: Java end-of-input diagnostics");

        // J-01 changes the diagnostic label, not the EOF token or parsing rules.
        org.mariuszgromada.math.mxparser.syntaxchecker.SyntaxChecker valid =
                new org.mariuszgromada.math.mxparser.syntaxchecker.SyntaxChecker(
                        new java.io.StringReader("1+2"));
        valid.checkSyntax();
        Assertions.assertEquals(0, valid.getNextToken().kind);

        org.mariuszgromada.math.mxparser.syntaxchecker.SyntaxChecker incomplete =
                new org.mariuszgromada.math.mxparser.syntaxchecker.SyntaxChecker(
                        new java.io.StringReader("1+"));
        org.mariuszgromada.math.mxparser.syntaxchecker.ParseException error =
                Assertions.assertThrows(org.mariuszgromada.math.mxparser.syntaxchecker.ParseException.class,
                        incomplete::checkSyntax);
        Assertions.assertTrue(error.getMessage().contains("<EOL>"), error.getMessage());
        Assertions.assertFalse(error.getMessage().contains("<EOF>"), error.getMessage());

        org.mariuszgromada.math.mxparser.syntaxchecker.SyntaxChecker empty =
                new org.mariuszgromada.math.mxparser.syntaxchecker.SyntaxChecker(
                        new java.io.StringReader(""));
        Assertions.assertEquals(0, empty.getNextToken().kind);

        // Native parser failures must remain consumable by mXparser's public API.
        Expression unexpectedClosingBracket = new Expression("1)");
        Assertions.assertFalse(unexpectedClosingBracket.checkLexSyntax());
        Assertions.assertFalse(unexpectedClosingBracket.getErrorMessage().isEmpty());
        Assertions.assertFalse(unexpectedClosingBracket.getErrorMessage().contains("<EOF>"));

        testResult = true;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0455() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "NaN-coalescing and atan2 metadata in all eight languages";
        TestCommonTools.consolePrintTestApiStart(455, testDescr);
        StringResources[] languages = {StringResources.languageEnglish(), StringResources.languageChinese(),
                StringResources.languageFrench(), StringResources.languageGerman(), StringResources.languageItalian(),
                StringResources.languagePolish(), StringResources.languagePortuguese(), StringResources.languageSpanish()};
        boolean ok = true;
        for (StringResources language : languages) {
            StringModel.setStringResources(language);
            int found = 0;
            for (KeyWord kw : mXparser.getKeyWords()) {
                if (kw.wordString.equals("??")) {
                    found++; ok &= kw.wordId == Operator.NAN_COALESCE_ID && kw.wordTypeId == Operator.TYPE_ID
                            && kw.syntax.equals("a ?? b") && kw.since.equals("6.2") && kw.description.equals(language.OPERATOR_NAN_COALESCE + " - " + language.OPERATOR);
                }
                if (kw.wordString.equals("atan2")) {
                    found++; ok &= kw.wordId == Function2Arg.ATAN2_ID && kw.wordTypeId == Function2Arg.TYPE_ID
                            && kw.syntax.equals("atan2(y, x)") && kw.since.equals("6.2") && kw.description.startsWith(language.FUNCTION_2_ARG_ATAN2);
                }
            }
            ok &= found == 2 && !language.OPERATOR_NAN_COALESCE.isEmpty() && !language.FUNCTION_2_ARG_ATAN2.isEmpty();
            ok &= mXparser.getHelpAsCsv().contains(language.OPERATOR_NAN_COALESCE)
                    && mXparser.getHelpAsHtmlTable().contains(language.FUNCTION_2_ARG_ATAN2)
                    && mXparser.getHelpAsJson().contains("atan2") && mXparser.getHelpAsMarkdownTable().contains("??");
        }
        StringModel.setDefaultStringResources();
        testResult = ok;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0456() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "atan2 API IEEE special values, extreme magnitudes and angular modes";
        TestCommonTools.consolePrintTestApiStart(456, testDescr);
        double[] values = {0.0, -0.0, 1, -1, Double.POSITIVE_INFINITY, Double.NEGATIVE_INFINITY, Double.NaN,
                Double.MIN_VALUE, -Double.MIN_VALUE, Double.MAX_VALUE, -Double.MAX_VALUE};
        boolean ok = true;
        for (double y : values) for (double x : values) {
            double expected = Math.atan2(y, x);
            double actual = MathFunctions.atan2(y, x);
            ok &= Double.isNaN(expected) ? Double.isNaN(actual)
                    : Double.doubleToRawLongBits(expected) == Double.doubleToRawLongBits(actual);
        }
        mXparser.setDegreesMode();
        ok &= Double.doubleToRawLongBits(MathFunctions.atan2(-0.0, 1)) == Double.doubleToRawLongBits(-0.0)
                && MathFunctions.atan2(1, -1) == 135 && MathFunctions.atan2(-1, -1) == -135;
        mXparser.setRadiansMode();
        testResult = ok;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0457() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "New keywords preserve LaTeX export and operand grouping";
        TestCommonTools.consolePrintTestApiStart(457, testDescr);
        testResult = new Expression("atan2(y,x)").getExpressionAsLaTeX().equals("\\operatorname{atan2}(y,x)")
                && new Expression("a??b+c").getExpressionAsLaTeX().equals("\\operatorname{first}_{\\ne\\mathrm{NaN}}(a,b+c)");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0458() {
        TestCommonTools.testApiSettingsInit();
        boolean testResult = false;
        String testDescr = "Token classification and returned copy independence";
        TestCommonTools.consolePrintTestApiStart(458, testDescr);
        Expression e = new Expression("missing339+[unit339]+fun339(missing339)");
        List<Token> first = e.getCopyOfInitialTokens();
        int count = first.size();
        int arguments = 0;
        int units = 0;
        int functions = 0;
        for (Token token : first) {
            if (token.tokenStr.equals("missing339") && token.looksLike.equals("argument")) arguments++;
            if (token.tokenStr.equals("[unit339]") && token.looksLike.equals("unit/const")) units++;
            if (token.tokenStr.equals("fun339") && token.looksLike.equals("function")) functions++;
        }
        Token firstToken = first.get(0);
        firstToken.tokenStr = "changed339";
        firstToken.looksLike = "changed339";
        first.clear();
        List<Token> second = e.getCopyOfInitialTokens();
        testResult = arguments == 2 && units == 1 && functions == 1 && first.isEmpty()
                && second.size() == count && second.get(0) != firstToken
                && second.get(0).tokenStr.equals("missing339") && second.get(0).looksLike.equals("argument");
        boolean unicodeArgument = false;
        boolean errorToken = false;
        for (Token token : new Expression("α+?").getCopyOfInitialTokens()) {
            if (token.tokenStr.equals("α") && token.looksLike.equals("argument")) unicodeArgument = true;
            if (token.tokenStr.equals("?") && token.looksLike.equals("error")) errorToken = true;
        }
        boolean knownTokens = true;
        for (Token token : new Expression("2+3").getCopyOfInitialTokens())
            knownTokens &= token.tokenTypeId != Token.NOT_MATCHED && token.looksLike.isEmpty();
        testResult &= unicodeArgument && errorToken && knownTokens;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0475() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON expression round trip and exact exported operator binding";
        TestCommonTools.consolePrintTestApiStart(475, testDescr);
        String[][] examples = {
                {"x+2*3", "[\"Add\",\"x\",[\"Multiply\",2,3]]"},
                {"2^3!", "[\"Factorial\",[\"Power\",2,3]]"},
                {"2^(3!)", "[\"Power\",2,[\"Factorial\",3]]"},
                {"2^3!+2^-x", "[\"Add\",[\"Power\",2,[\"Factorial\",3]],[\"Power\",2,[\"Negate\",\"x\"]]]"},
                {"2^-x^2", "[\"Power\",2,[\"Negate\",[\"Power\",\"x\",2]]]"},
                {"-2^2", "[\"Power\",-2,2]"},
                {"-x^2", "[\"Negate\",[\"Power\",\"x\",2]]"},
                {"(-x)^2", "[\"Power\",[\"Negate\",\"x\"],2]"},
                {"-2_1_3^2", "[\"Negate\",[\"Power\",[\"Rational\",7,3],2]]"},
                {"h.ff", "255"},
                {"2x", "[\"Multiply\",2,\"x\"]"}
        };
        boolean testResult = true;
        for (String[] example : examples) {
            Argument originalX = new Argument("x", 1);
            Expression original = new Expression(example[0], originalX);
            double expected = original.calculate();
            String exported = original.getExpressionAsMathJSON();
            Expression restored = MathJSON.importExpression(exported, new Argument("x", 1)).getValue();
            double received = restored.calculate();
            testResult &= example[1].equals(exported) && Double.isFinite(expected);
            if (example[0].equals("-2_1_3^2")) {
                // A fraction is one token before export and an evaluated division after import.
                double mathematical = -49.0 / 9.0;
                testResult &= Math.abs(expected - mathematical) <= 2e-14
                        && Math.abs(received - mathematical) <= 2e-14;
                mXparser.disableUlpRounding();
                mXparser.disableCanonicalRounding();
                mXparser.disableAlmostIntRounding();
                try {
                    testResult &= original.calculate() == restored.calculate();
                } finally {
                    mXparser.enableUlpRounding();
                    mXparser.enableCanonicalRounding();
                    mXparser.enableAlmostIntRounding();
                }
            } else testResult &= expected == received;
            mXparser.consolePrintln(example[0] + " -> " + exported + " -> " + received);
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0476() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON imports fixed reference results without external evaluation";
        TestCommonTools.consolePrintTestApiStart(476, testDescr);
        String[] inputs = {
            "[\"Add\",2,3,4]", "[\"Subtract\",7,2]", "[\"Multiply\",2,3,4]", "[\"Divide\",1,2]",
            "[\"Rational\",2,3]", "[\"Square\",4]", "[\"Negate\",2]", "[\"Abs\",-2]",
            "[\"Sqrt\",4]", "[\"Ln\",1]", "[\"Log\",8,2]", "[\"Root\",27,3]",
            "[\"Floor\",2.8]", "[\"Ceil\",2.2]", "{\"fn\":[\"Power\",2,[\"Factorial\",3]],\"comment\":\"ignored\"}",
            "[\"If\",[\"LessEqual\",2,2],4,9]", "[\"If\",\"False\",4,9]",
            "[\"Sum\",[\"Power\",\"i\",2],[\"Limits\",\"i\",1,3]]",
            "[\"Sum\",[\"Power\",\"i\",2],[\"Element\",\"i\",[\"Range\",1,3]]]",
            "[\"Product\",\"i\",[\"Limits\",\"i\",1,3]]", "\"Pi\"", "\"ExponentialE\""
        };
        double[] expected = {9, 5, 24, 0.5, 2.0 / 3, 16, -2, 2, 2, 0, 3, 3, 2, 3, 64,
                4, 9, 14, 14, 6, Math.PI, Math.E};
        boolean testResult = true;
        for (int i = 0; i < inputs.length; i++) {
            double received = MathJSON.importExpression(inputs[i]).getValue().calculate();
            double tolerance = i == 4 ? 1e-14 : 0;
            testResult &= Double.isFinite(received) && Math.abs(expected[i] - received) <= tolerance;
            mXparser.consolePrintln(inputs[i] + " -> " + received);
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0477() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON declarations and a Block with direct recursion";
        TestCommonTools.consolePrintTestApiStart(477, testDescr);
        String block = "[\"Block\",[\"Declare\",\"x\",{\"dict\":{\"value\":5}}],"
                + "[\"Declare\",\"k\",[\"Dictionary\",[\"KeyValuePair\",\"value\",2],[\"KeyValuePair\",\"constant\",\"True\"]]],"
                + "[\"DefineFunction\",\"fact\",[\"Function\",[\"If\",[\"LessEqual\",\"n\",1],1,"
                + "[\"Multiply\",\"n\",[\"fact\",[\"Subtract\",\"n\",1]]]],\"n\"]],[\"Add\",\"k\",[\"fact\",\"x\"]]]";
        Expression imported = MathJSON.importExpression(block).getValue();
        double importedResult = imported.calculate();
        String exported = MathJSON.exportProgram(imported);
        Expression restored = MathJSON.importExpression(exported).getValue();
        Function recursion = imported.getFunction("fact");
        PrimitiveElement declared = MathJSON.importDefinition(MathJSON.exportDefinition(imported.getConstant("k"))).getValue();
        PrimitiveElement function = MathJSON.importDefinition(MathJSON.exportDefinition(recursion)).getValue();
        boolean testResult = importedResult == 122 && restored.calculate() == importedResult
                && declared instanceof Constant && ((Constant) declared).getConstantValue() == 2
                && function instanceof Function && ((Function) function).calculate(5) == 120
                && recursion.getFunction(0) == recursion;
        String ordered = "[\"Block\",[\"DefineFunction\",\"orderedF\",[\"Function\",[\"Subtract\",\"z\",\"a\"],\"z\",\"a\"]],[\"orderedF\",8,3]]";
        MathJSON.Result<Expression> orderedModel = MathJSON.importExpression(ordered);
        testResult &= orderedModel.isSuccess() && orderedModel.getValue().calculate() == 5
                && ordered.equals(MathJSON.exportProgram(orderedModel.getValue()));
        MathJSON.Result<PrimitiveElement> unorderedAttributes = MathJSON.importDefinition(
                "[\"Declare\",\"valueX\",{\"dict\":{\"badZ\":0,\"badA\":0,\"value\":2}}]");
        testResult &= mathJsonError(unorderedAttributes, "INVALID_SHAPE")
                && "/2/dict/badZ".equals(unorderedAttributes.getError().getPath());
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0478() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON keeps caller bindings live and honours local and lazy evaluation";
        TestCommonTools.consolePrintTestApiStart(478, testDescr);
        Argument x = new Argument("x", 0);
        Expression guarded = MathJSON.importExpression(
                "[\"If\",[\"Equal\",\"x\",0],7,[\"Divide\",1,\"x\"]]", x).getValue();
        boolean testResult = guarded.getArgument("x") == x && guarded.calculate() == 7;
        x.setArgumentValue(4);
        testResult &= guarded.calculate() == 0.25;
        Expression open = MathJSON.importExpression("\"openName\"").getValue();
        testResult &= open.getArgumentsNumber() == 0;
        open.addArguments(new Argument("openName", 3));
        testResult &= open.calculate() == 3;
        Expression sum = new Expression("sum(i,1,2,sum(j,1,2,i+j))");
        Expression restored = MathJSON.importExpression(sum.getExpressionAsMathJSON()).getValue();
        testResult &= sum.calculate() == 12 && restored.calculate() == 12;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0479() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON native double conversion and optional projections";
        TestCommonTools.consolePrintTestApiStart(479, testDescr);
        boolean testResult = MathJSON.importExpression("{\"num\":\"9007199254740992\"}").getValue().calculate() == 9007199254740992d;
        PrimitiveElement negativeZero = MathJSON.importDefinition(
                "[\"Declare\",\"z\",{\"dict\":{\"value\":{\"num\":\"-0\"}}}]").getValue();
        testResult &= Double.doubleToRawLongBits(((Argument) negativeZero).getArgumentValue()) == Long.MIN_VALUE;
        Expression subnormal = MathJSON.importExpression("{\"num\":\"5e-324\"}").getValue();
        testResult &= Double.doubleToRawLongBits(subnormal.getCopyOfInitialTokens().get(0).tokenValue) == 1;
        String[] roundedInputs = {"9007199254740993", "{\"num\":\"9007199254740995\"}", "-9007199254740993"};
        double[] roundedValues = {9007199254740992d, 9007199254740996d, -9007199254740992d};
        for (int i = 0; i < roundedInputs.length; i++) {
            MathJSON.Result<Expression> rounded = MathJSON.importExpression(roundedInputs[i]);
            testResult &= rounded.isSuccess() && rounded.getDiagnostics().isEmpty()
                    && rounded.getValue().calculate() == roundedValues[i];
        }
        MathJSON.Result<PrimitiveElement> roundedDefinition = MathJSON.importDefinition(
                "[\"Declare\",\"largeValue\",{\"dict\":{\"value\":9007199254740993}}]");
        testResult &= roundedDefinition.isSuccess()
                && ((Argument) roundedDefinition.getValue()).getArgumentValue() == roundedValues[0];
        String[] roundedSources = {"9007199254740993", "9007199254740995", "h.20000000000001"};
        double[] expectedExports = {9007199254740992d, 9007199254740996d, 9007199254740992d};
        for (int i = 0; i < roundedSources.length; i++) {
            Expression original = new Expression(roundedSources[i]);
            MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(original);
            testResult &= exported.isSuccess() && original.calculate() == expectedExports[i];
            if (exported.isSuccess()) {
                MathJSON.Result<Expression> restored = MathJSON.importExpression(exported.getValue());
                testResult &= restored.isSuccess() && restored.getValue().calculate() == expectedExports[i];
            }
        }
        String[] inputs = {"{\"num\":\"0.(3)\"}", "{\"num\":\"0.1(6)e1\"}", "\"-1.(6)\"", "{\"num\":\"0.(9)\"}"};
        double[] expected = {1.0 / 3, 5.0 / 3, -5.0 / 3, 1};
        for (int i = 0; i < inputs.length; i++) {
            MathJSON.Result<Expression> result = MathJSON.importExpression(inputs[i]);
            testResult &= result.isSuccess() && Math.abs(result.getValue().calculate() - expected[i]) <= 1e-14
                    && result.getDiagnostics().isEmpty();
        }
        MathJSON.Result<Expression> quantity = MathJSON.importExpressionWithOptions("[\"Quantity\",2,{\"str\":\"km\"}]",
                MathJSON.ImportOptions.defaults().withKilometresAsScalar(true));
        testResult &= quantity.isSuccess() && quantity.getValue().calculate() == 2000
                && quantity.getDiagnostics().size() == 1 && mathJsonWarning(quantity, 0, "UNIT_PROJECTED_TO_SCALAR", "");
        MathJSON.Result<PrimitiveElement> periodicDeclaration = MathJSON.importDefinition(
                "[\"Declare\",\"x\",{\"dict\":{\"value\":{\"num\":\"0.(3)\"}}}]");
        testResult &= periodicDeclaration.isSuccess() && periodicDeclaration.getDiagnostics().isEmpty()
                && ((Argument) periodicDeclaration.getValue()).getArgumentValue() == 1.0 / 3;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0480() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON rejects unsupported forms and points to the original input";
        TestCommonTools.consolePrintTestApiStart(480, testDescr);
        String[][] cases = {
                {"[\"Rational\",1,0]", "UNSUPPORTED_NUMBER", "/2"},
                {"1e400", "UNSUPPORTED_NUMBER", ""},
                {"[\"List\",0]", "UNSUPPORTED_NODE", ""},
                {"[\"Add\",1,]", "INVALID_JSON", "/2"},
                {"{\"num\":\"2\",\"num\":\"3\"}", "INVALID_JSON", "/num"},
                {"{\"sym\":\"\\uD800\"}", "INVALID_JSON", "/sym"},
                {"[\"Add\",[\"List\",1,0],2]", "UNSUPPORTED_NODE", "/1"}
        };
        boolean testResult = true;
        for (String[] example : cases) {
            MathJSON.Result<?> rejected = MathJSON.importExpression(example[0]);
            MathJSON.Diagnostic error = rejected.getError();
            String status = error == null ? "success" : error.getCode() + " at " + error.getPath();
            mXparser.consolePrintln(example[0] + " -> " + status);
            testResult &= mathJsonError(rejected, example[1]) && example[2].equals(error.getPath());
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0481() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON rejects stateful or non-exchangeable source without evaluating it";
        TestCommonTools.consolePrintTestApiStart(481, testDescr);
        String overflow = "1797693134862315808" + new String(new char[290]).replace('\0', '0') + ".5";
        String oversizedName = new String(new char[300]).replace('\0', 'z');
        String[][] cases = {
                {"1_0", "UNSUPPORTED_NUMBER"},
                {"x??1", "UNSUPPORTED_NODE"},
                {oversizedName, "RESOURCE_LIMIT"}, {"[" + oversizedName + "]", "RESOURCE_LIMIT"},
                {"sum(i,1,3,sum(i,1,2,i)+i)", "UNSUPPORTED_BINDING"},
                {"sum(i,1,3,i,2)", "UNSUPPORTED_DOMAIN"}
        };
        boolean testResult = true;
        for (String[] example : cases) {
            Expression expression = new Expression(example[0], new Argument("x", 1));
            testResult &= mathJsonError(MathJSON.exportExpressionWithDiagnostics(expression), example[1]);
        }
        for (String literal : new String[]{"1e400", overflow, "-" + overflow}) {
            Expression original = new Expression(literal);
            double nativeValue = original.getCopyOfInitialTokens().get(0).tokenValue;
            MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(original);
            if (Double.isNaN(nativeValue) || Double.isInfinite(nativeValue)) {
                testResult &= mathJsonError(exported, "UNSUPPORTED_NUMBER");
            } else {
                MathJSON.Result<Expression> restored = MathJSON.importExpression(exported.getValue());
                testResult &= exported.isSuccess() && restored.isSuccess()
                        && restored.getValue().calculate() == nativeValue;
            }
        }
        Expression underflow = new Expression("1e-400");
        testResult &= underflow.calculate() == 0 && "0".equals(MathJSON.exportExpression(underflow));
        String nearMaximum = "17976931348623157" + new String(new char[292]).replace('\0', '0') + ".5";
        MathJSON.Result<String> maximum = MathJSON.exportExpressionWithDiagnostics(new Expression(nearMaximum));
        MathJSON.Result<Expression> restoredMaximum = MathJSON.importExpression(maximum.getValue());
        testResult &= maximum.isSuccess() && restoredMaximum.isSuccess()
                && restoredMaximum.getValue().calculate() == Double.MAX_VALUE;
        String maximumName = oversizedName.substring(0, 256);
        MathJSON.Result<Expression> withMaximumName =
                MathJSON.importExpression("\"" + maximumName + "\"", new Argument(maximumName, 7));
        testResult &= withMaximumName.isSuccess() && withMaximumName.getValue().calculate() == 7;
        Argument shared = new Argument("shared", 3);
        Function f = new Function("modelF", "shared", new PrimitiveElement[]{shared});
        f.setParametersNumber(1);
        Expression expression = new Expression("modelF(4)+shared", f, shared);
        testResult &= mathJsonError(MathJSON.exportProgramWithDiagnostics(expression), "UNSUPPORTED_PROGRAM")
                && shared.getArgumentValue() == 3;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0482() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON preserves negative atoms in conditionals, limits and function calls";
        TestCommonTools.consolePrintTestApiStart(482, testDescr);
        Expression conditional = MathJSON.importExpression(
                "[\"If\",[\"Less\",\"x\",0],-1,1]", new Argument("x", -3)).getValue();
        Expression sum = MathJSON.importExpression("[\"Sum\",\"i\",[\"Limits\",\"i\",-2,2]]").getValue();
        Function function = new Function("f", "a+b", "a", "b");
        Expression call = MathJSON.importExpression("[\"f\",1,-2]", function).getValue();
        boolean testResult = conditional.calculate() == -1 && sum.calculate() == 0 && call.calculate() == -1;
        testResult &= conditional.getExpressionAsMathJSON().contains(",-1,");
        testResult &= sum.getExpressionAsMathJSON().contains("\"i\",-2,2");
        testResult &= "[\"f\",1,-2]".equals(call.getExpressionAsMathJSON());
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0483() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON names, lexical scope and changed mXparser vocabulary";
        TestCommonTools.consolePrintTestApiStart(483, testDescr);
        boolean testResult = MathJSON.importExpression("[\"Add\",{\"sym\":\"λ\"},2]", new Argument("λ", 3)).getValue().calculate() == 5;
        MathJSON.Result<Expression> greek = MathJSON.importExpression("[\"Add\",\"`\\u2126`\",{\"sym\":\"\\u1FBE\"}]",
                new Argument("\u03A9", 2), new Argument("\u03B9", 3));
        testResult &= greek.isSuccess() && greek.getValue().calculate() == 5
                && "[\"Add\",\"\u03A9\",\"\u03B9\"]".equals(MathJSON.exportExpression(greek.getValue()));
        MathJSON.Result<Expression> kelvin = MathJSON.importExpression("[\"Add\",{\"sym\":\"\\u212AA\"},{\"sym\":\"\\u039A\"}]",
                new Argument("KA", 3), new Argument("\u039A", 7));
        testResult &= kelvin.isSuccess() && kelvin.getValue().calculate() == 10
                && "[\"Add\",\"KA\",\"\u039A\"]".equals(MathJSON.exportExpression(kelvin.getValue()));
        StringBuilder longName = new StringBuilder();
        for (int i = 0; i < 255; i++) longName.append('a');
        testResult &= mathJsonError(
                MathJSON.importExpression("{\"sym\":\"" + longName + "e\\u0301\"}"), "RESOURCE_LIMIT");
        String[][] cases = {
                {"{\"fn\":1}", "INVALID_SHAPE"},
                {"{\"fn\":[[\"Add\",1,2],3]}", "INVALID_SHAPE"},
                {"{\"sym\":\"bad)name\"}", "INVALID_NAME"},
                {"{\"sym\":\"cafe\\u0301\"}", "INVALID_NAME"},
                {"[\"DefineFunction\",\"f\",[\"Function\",1,\"Ω\",\"\\u2126\"]]", "NAME_COLLISION"}
        };
        for (String[] example : cases) {
            MathJSON.Result<?> result = example[0].startsWith("[\"Declare\"")
                    || example[0].startsWith("[\"DefineFunction\"")
                    ? MathJSON.importDefinition(example[0]) : MathJSON.importExpression(example[0]);
            testResult &= mathJsonError(result, example[1]);
        }
        MathJSON.Result<Expression> local = MathJSON.importExpression("[\"Sum\",\"i\",[\"Limits\",\"i\",1,3]]", new Argument("i", 5));
        testResult &= local.isSuccess() && local.getValue().calculate() == 6 && local.getValue().getArgument("i") == null;
        mXparser.modifyBuiltinToken(Function1Arg.SQRT_STR, "testSqrt");
        try {
            MathJSON.Result<Expression> renamed = MathJSON.importExpression("[\"Sqrt\",4]");
            testResult &= renamed.isSuccess() && renamed.getValue().calculate() == 2;
            MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(new Expression("testSqrt(4)"));
            testResult &= exported.isSuccess() && "[\"Sqrt\",4]".equals(exported.getValue());
        } finally {
            mXparser.unmodifyBuiltinTokens(Function1Arg.SQRT_STR);
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0484() throws ReflectiveOperationException {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON failed import is atomic and rejects disallowed recursion and shared parameters";
        TestCommonTools.consolePrintTestApiStart(484, testDescr);
        Argument x = new Argument("x", 5);
        java.lang.reflect.Field argumentBody = Argument.class.getDeclaredField("argumentExpression");
        argumentBody.setAccessible(true);
        java.lang.reflect.Field related = Expression.class.getDeclaredField("relatedExpressionsList");
        related.setAccessible(true);
        java.util.List<?> observers = (java.util.List<?>) related.get(argumentBody.get(x));
        int initialObservers = observers.size();
        String invalid = "[\"Block\",[\"DefineFunction\",\"f\",[\"Function\",[\"Add\",\"x\",\"a\"],\"a\"]],[\"Rational\",1,0]]";
        boolean testResult = mathJsonError(MathJSON.importExpression(invalid, x), "UNSUPPORTED_NUMBER")
                && observers.size() == initialObservers && x.getArgumentValue() == 5;
        Function g = new Function("g", "x*2", "x");
        for (String source : new String[]{"x+g(3)", "g(3)+x"}) {
            MathJSON.Result<String> exported = MathJSON.exportProgramWithDiagnostics(new Expression(source, x, g));
            MathJSON.Result<Expression> restored = MathJSON.importExpression(exported.getValue());
            testResult &= exported.isSuccess() && restored.isSuccess() && restored.getValue().calculate() == 11;
        }
        Argument shared = new Argument("shared", 3);
        Function f = new Function("f", "shared", new PrimitiveElement[]{shared});
        f.setParametersNumber(1);
        for (String source : new String[]{"shared+f(4)", "f(4)+shared"}) {
            MathJSON.Result<?> rejected = MathJSON.exportProgramWithDiagnostics(new Expression(source, shared, f));
            MathJSON.Diagnostic error = rejected.getError();
            testResult &= mathJsonError(rejected, "UNSUPPORTED_PROGRAM") && error.getPath().isEmpty() && error.getOffset() == -1;
        }
        MathJSON.Result<Expression> referenced = MathJSON.importExpression("[\"Add\",[\"f\",4],\"shared\"]", f, shared);
        testResult &= referenced.isSuccess() && referenced.getValue().getFunction("f") == f
                && referenced.getValue().getArgument("shared") == shared && shared.getArgumentValue() == 3;
        Function left = new Function("leftF", "rightF(a)", "a");
        Function right = new Function("rightF", "leftF(b)", "b");
        left.addFunctions(right);
        right.addFunctions(left);
        testResult &= mathJsonError(MathJSON.exportProgramWithDiagnostics(new Expression("leftF(2)", left)), "UNSUPPORTED_PROGRAM");
        int beforeSuccess = observers.size();
        Expression success = MathJSON.importExpression("[\"Add\",\"x\",1]", x).getValue();
        testResult &= success.calculate() == 6 && observers.size() == beforeSuccess + 1;
        x.setArgumentName("renamedX");
        testResult &= !success.checkSyntax();
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0485() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON declaration round trips, native rounding and diagnostic locations";
        TestCommonTools.consolePrintTestApiStart(485, testDescr);
        long[] bits = {0L, Long.MIN_VALUE, 1L, 0x0010000000000000L, 0x43f0000000000000L};
        boolean testResult = true;
        for (long bitsIn : bits) {
            String exported = MathJSON.exportDefinition(new Argument("valuex", Double.longBitsToDouble(bitsIn)));
            Argument restored = (Argument) MathJSON.importDefinition(exported).getValue();
            testResult &= Double.doubleToRawLongBits(restored.getArgumentValue()) == bitsIn;
            if (bitsIn == Long.MIN_VALUE) testResult &= exported.contains("{\"num\":\"-0\"}");
            if (bitsIn == 0x43f0000000000000L) testResult &= exported.contains("{\"num\":");
        }
        String[] midpoints = {"1.00000000000000011102230246251565404236316680908203125",
                "1.00000000000000033306690738754696212708950042724609375"};
        for (int i = 0; i < midpoints.length; i++) {
            Argument result = (Argument) MathJSON.importDefinition("[\"Declare\",\"valuex\",[\"Dictionary\","
                    + "[\"Tuple\",{\"str\":\"value\"},{\"num\":\"" + midpoints[i] + "\"}]]]").getValue();
            double nativeValue = new Expression(midpoints[i]).getCopyOfInitialTokens().get(0).tokenValue;
            testResult &= result.getArgumentValue() == nativeValue;
        }
        testResult &= "10".equals(MathJSON.exportExpression(new Expression("b2.1010")));
        testResult &= "15".equals(MathJSON.exportExpression(new Expression("o.17")));
        testResult &= "3".equals(MathJSON.exportExpression(new Expression("b1.111")));
        MathJSON.ImportOptions options = MathJSON.ImportOptions.defaults().withKilometresAsScalar(true);
        MathJSON.Result<Expression> projected = MathJSON.importExpressionWithOptions(
                "[\"Quantity\",9007199254740993,{\"str\":\"km\"}]", options);
        java.util.List<MathJSON.Diagnostic> diagnostics = projected.getDiagnostics();
        testResult &= projected.isSuccess() && diagnostics.size() == 1 && diagnostics.get(0).getPath().isEmpty()
                && "UNIT_PROJECTED_TO_SCALAR".equals(diagnostics.get(0).getCode());
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0486() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON resource bounds and structural rejection";
        TestCommonTools.consolePrintTestApiStart(486, testDescr);
        StringBuilder deep = new StringBuilder();
        for (int i = 0; i < 255; i++) deep.append("[\"Negate\",");
        deep.append('1');
        for (int i = 0; i < 255; i++) deep.append(']');
        boolean testResult = MathJSON.importExpression(deep.toString()).getValue().calculate() == -1;
        StringBuilder many = new StringBuilder("{\"num\":\"0\",\"comment\":[0");
        for (int i = 0; i < 250000; i++) many.append(",0");
        many.append("]}");
        char[] digits = new char[1025];
        java.util.Arrays.fill(digits, '1');
        char[] name = new char[257];
        java.util.Arrays.fill(name, 'x');
        String[][] cases = {
                {"[\"Negate\"," + deep + "]", "RESOURCE_LIMIT"},
                {many.toString(), "RESOURCE_LIMIT"},
                {"{\"num\":\"" + new String(digits) + "\"}", "RESOURCE_LIMIT"},
                {"\"" + new String(name) + "\"", "RESOURCE_LIMIT"},
                {"{\"num\":\"1e9999999999999999999999\"}", "UNSUPPORTED_NUMBER"},
                {"\"PositiveInfinity\"", "UNSUPPORTED_NUMBER"},
                {"\"NegativeInfinity\"", "UNSUPPORTED_NUMBER"},
                {"[\"Rational\",[\"Add\",1,2],3]", "UNSUPPORTED_NUMBER"}
        };
        for (String[] example : cases) {
            testResult &= mathJsonError(MathJSON.importExpression(example[0]), example[1]);
        }
        testResult &= mathJsonError(MathJSON.importDefinition("[\"Add\",1e400,1]"), "INVALID_ROOT");
        testResult &= mathJsonError(MathJSON.importExpression("{\"num\":\"1(3)\"}"), "UNSUPPORTED_NUMBER");
        String[][] unsupported = {
                {"iff(1=1,2)", "UNSUPPORTED_NODE"}
        };
        for (String[] example : unsupported) {
            testResult &= mathJsonError(MathJSON.exportExpressionWithDiagnostics(new Expression(example[0])), example[1]);
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0487() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON contextual powers in two log calls passed to a user function";
        TestCommonTools.consolePrintTestApiStart(487, testDescr);
        Argument originalX = new Argument("x", 1);
        Argument importedX = new Argument("x", 1);
        Function originalFold = new Function("foldV6", "a+2*b", "a", "b");
        Function importedFold = new Function("foldV6", "a+2*b", "a", "b");
        Expression original = new Expression("foldV6(log(2^3!,2^-x),log(2^-x,2^3!))", originalX, originalFold);
        String expectedTree = "[\"foldV6\",[\"Log\",[\"Power\",2,[\"Negate\",\"x\"]],[\"Power\",2,[\"Factorial\",3]]],"
                + "[\"Log\",[\"Factorial\",[\"Power\",2,3]],[\"Power\",2,[\"Negate\",\"x\"]]]]";
        String exported = MathJSON.exportExpression(original);
        Expression imported = MathJSON.importExpression(exported, importedX, importedFold).getValue();
        boolean testResult = expectedTree.equals(exported);
        for (int x : new int[]{1, 3}) {
            originalX.setArgumentValue(x);
            importedX.setArgumentValue(x);
            // The first log has base 64 and the second has base 2^-x.
            double expected = -x / 6.0 - 2 * Math.log(40320) / (x * Math.log(2));
            double before = original.calculate();
            double after = imported.calculate();
            testResult &= Math.abs(before - expected) <= 1e-12 && Math.abs(after - before) <= 1e-12;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0488() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON Block combines a constant root degree, recursion, sum and product";
        TestCommonTools.consolePrintTestApiStart(488, testDescr);
        String block = "[\"Block\","
                + "[\"Declare\",\"grade\",[\"Dictionary\",[\"KeyValuePair\",\"value\",2],[\"KeyValuePair\",\"constant\",\"True\"]]],"
                + "[\"DefineFunction\",\"rootWrap\",[\"Function\",[\"Root\",\"t\",\"grade\"],\"t\"]],"
                + "[\"DefineFunction\",\"series\",[\"Function\",[\"If\",[\"LessEqual\",\"n\",0],0,"
                + "[\"Add\",[\"rootWrap\",[\"Power\",\"n\",2]],[\"series\",[\"Subtract\",\"n\",1]]]],\"n\"]],"
                + "[\"Add\",[\"Sum\",[\"series\",\"j\"],[\"Limits\",\"j\",1,3]],"
                + "[\"Product\",[\"Power\",\"k\",2],[\"Limits\",\"k\",1,2]]]]";
        Expression original = MathJSON.importExpression(block).getValue();
        double before = original.calculate();
        String exported = MathJSON.exportProgram(original);
        Expression restored = MathJSON.importExpression(exported).getValue();
        // The triangular numbers 1, 3, 6 and the product 1 * 4 give 14.
        boolean testResult = before == 14 && restored.calculate() == before && block.equals(exported)
                && restored.getFunction("series").calculate(3) == 6;
        // With first roots the partial sums become 1, 5, 14, while the product stays 4.
        restored.getConstant("grade").setConstantValue(1);
        testResult &= restored.calculate() == 24 && original.calculate() == 14;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0489() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON object-form If combines explicit projections, diagnostics and lazy evaluation";
        TestCommonTools.consolePrintTestApiStart(489, testDescr);
        String json = "{\"fn\":[\"If\",[\"Equal\",{\"sym\":\"probeX\"},0],"
                + "[\"Add\",[\"Quantity\",{\"num\":\"0.(3)\"},{\"str\":\"km\"}],"
                + "[\"Subtract\",{\"num\":\"9007199254740993\"},{\"num\":\"9007199254740992\"}],[\"Rational\",-2,3]],"
                + "[\"Divide\",1,{\"sym\":\"probeX\"}]],\"comment\":\"offline MathJSON fixture\"}";
        Argument probeX = new Argument("probeX", 0);
        MathJSON.ImportOptions options = MathJSON.ImportOptions.defaults().withKilometresAsScalar(true);
        MathJSON.Result<Expression> imported = MathJSON.importExpressionWithOptions(json, options, probeX);
        Expression expression = imported.getValue();
        // The integer subtraction becomes zero, leaving 1000/3 - 2/3.
        boolean testResult = Math.abs(expression.calculate() - 998.0 / 3) <= 1e-12;
        String path = "/fn/2/1";
        testResult &= imported.getDiagnostics().size() == 1 && mathJsonWarning(imported, 0, "UNIT_PROJECTED_TO_SCALAR", path)
                && imported.getDiagnostics().get(0).getOffset() == json.indexOf("[\"Quantity\"");
        String projected = MathJSON.exportExpression(expression);
        Argument restoredX = new Argument("probeX", 0);
        Expression restored = MathJSON.importExpression(projected, restoredX).getValue();
        testResult &= Math.abs(restored.calculate() - 998.0 / 3) <= 1e-12;
        probeX.setArgumentValue(4);
        restoredX.setArgumentValue(4);
        testResult &= expression.calculate() == 0.25 && restored.calculate() == 0.25;
        MathJSON.Result<?> rejected = MathJSON.importExpression(json, probeX);
        MathJSON.Diagnostic error = rejected.getError();
        testResult &= mathJsonError(rejected, "UNSUPPORTED_NODE") && path.equals(error.getPath());
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0490() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON renamed built-in inside a user function used with a conditional and powers";
        TestCommonTools.consolePrintTestApiStart(490, testDescr);
        String source = "if(1<2,kernel(3)+2^(3!),0)";
        String expectedFormula = "[\"If\",[\"Less\",1,2],[\"Add\",[\"kernel\",3],[\"Power\",2,[\"Factorial\",3]]],0]";
        boolean testResult = true;
        mXparser.modifyBuiltinToken(Function1Arg.SQRT_STR, "shiftedSqrt");
        try {
            Function kernel = new Function("kernel", "shiftedSqrt(t^2)+1", "t");
            Expression original = new Expression(source, kernel);
            String formula = MathJSON.exportExpression(original);
            testResult &= original.calculate() == 68 && expectedFormula.equals(formula)
                    && MathJSON.importExpression(formula, kernel).getValue().calculate() == 68;
            MathJSON.Result<String> renamedProgram = MathJSON.exportProgramWithDiagnostics(original);
            testResult &= renamedProgram.isSuccess() && MathJSON.importExpression(renamedProgram.getValue()).getValue().calculate() == 68;
            MathJSON.Result<Expression> renamedImport = MathJSON.importExpression("[\"If\",\"False\",[\"Sqrt\",9],4]");
            testResult &= renamedImport.isSuccess() && renamedImport.getValue().calculate() == 4;
        } finally {
            mXparser.unmodifyBuiltinTokens(Function1Arg.SQRT_STR);
        }
        Expression restoredVocabulary = new Expression(source, new Function("kernel", "sqrt(t^2)+1", "t"));
        String block = MathJSON.exportProgram(restoredVocabulary);
        String expectedBlock = "[\"Block\",[\"DefineFunction\",\"kernel\","
                + "[\"Function\",[\"Add\",[\"Sqrt\",[\"Power\",\"t\",2]],1],\"t\"]]," + expectedFormula + "]";
        testResult &= expectedBlock.equals(block) && MathJSON.importExpression(block).getValue().calculate() == 68;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0491() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON validates the inactive branch of a Block function with a constant sum limit";
        TestCommonTools.consolePrintTestApiStart(491, testDescr);
        String valid = "[\"Block\",[\"Declare\",\"steps\",[\"Dictionary\",[\"KeyValuePair\",\"value\",3],"
                + "[\"KeyValuePair\",\"constant\",\"True\"]]],"
                + "[\"DefineFunction\",\"selected\",[\"Function\",[\"If\",[\"GreaterEqual\",\"argT\",0],"
                + "[\"Sum\",[\"Power\",\"i\",2],[\"Limits\",\"i\",1,\"steps\"]],[\"Divide\",1,[\"Rational\",5,5]]],\"argT\"]],"
                + "[\"selected\",3]]";
        Expression imported = MathJSON.importExpression(valid).getValue();
        boolean testResult = imported.calculate() == 14 && imported.getFunction("selected").calculate(-1) == 1;
        String zeroDivisor = valid.replace("[\"Rational\",5,5]", "[\"Rational\",0,5]");
        MathJSON.Result<Expression> conditional = MathJSON.importExpression(zeroDivisor);
        testResult &= conditional.isSuccess() && conditional.getValue().calculate() == 14
                && Double.isNaN(conditional.getValue().getFunction("selected").calculate(-1));
        String invalid = valid.replace("[\"Rational\",5,5]", "[\"Rational\",5,0]");
        MathJSON.Result<?> rejected = MathJSON.importExpression(invalid);
        MathJSON.Diagnostic error = rejected.getError();
        testResult &= mathJsonError(rejected, "UNSUPPORTED_NUMBER") && "/2/2/1/3/2/2".equals(error.getPath())
                && error.getOffset() == invalid.indexOf("[\"Rational\",5,0]") + "[\"Rational\",5,".length();
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testApi0492() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON export returns a standard Error node or a typed diagnostic";
        TestCommonTools.consolePrintTestApiStart(492, testDescr);
        Expression unsupported = new Expression("x??1", new Argument("x", 2));
        String expected = "[\"Error\",[\"ErrorCode\",{\"str\":\"mxparser:UNSUPPORTED_NODE\"},"
                + "{\"str\":\"Unsupported MathJSON construct\"},{\"str\":\"\"},-1]]";
        String formula = MathJSON.exportExpression(unsupported);
        MathJSON.Result<String> result = MathJSON.exportExpressionWithDiagnostics(unsupported);
        boolean testResult = expected.equals(formula) && expected.equals(unsupported.getExpressionAsMathJSON())
                && expected.equals(MathJSON.exportProgram(unsupported))
                && mathJsonError(result, "UNSUPPORTED_NODE")
                && "Unsupported MathJSON construct".equals(result.getError().getMessage());
        String invalidDefinition = "[\"Error\",[\"ErrorCode\",{\"str\":\"mxparser:INVALID_ARGUMENT\"},"
                + "{\"str\":\"Invalid MathJSON conversion argument\"},{\"str\":\"\"},-1]]";
        testResult &= invalidDefinition.equals(MathJSON.exportDefinition(null))
                && mathJsonError(MathJSON.exportDefinitionWithDiagnostics(null), "INVALID_ARGUMENT")
                && mathJsonError(MathJSON.importExpression(formula), "INPUT_ERROR");
        Expression supported = new Expression("2+3");
        MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(supported);
        MathJSON.Result<String> program = MathJSON.exportProgramWithDiagnostics(supported);
        Constant constant = new Constant("exampleValue", 5);
        MathJSON.Result<String> declaration = MathJSON.exportDefinitionWithDiagnostics(constant);
        testResult &= exported.isSuccess() && exported.getError() == null && exported.getDiagnostics().isEmpty()
                && "[\"Add\",2,3]".equals(exported.getValue())
                && program.isSuccess() && MathJSON.exportProgram(supported).equals(program.getValue())
                && declaration.isSuccess() && MathJSON.exportDefinition(constant).equals(declaration.getValue());
        String lexicalError = MathJSON.exportExpression(new Expression("1+\""));
        testResult &= lexicalError.startsWith("[\"Error\",[\"ErrorCode\",{\"str\":\"mxparser:INVALID_MXPARSER_SOURCE\"}")
                && lexicalError.contains("\\\"") && lexicalError.contains("\\n")
                && mathJsonError(MathJSON.importExpression(lexicalError), "INPUT_ERROR");
        char[] longName = new char[1200];
        java.util.Arrays.fill(longName, 'z');
        Expression unknown = new Expression(new String(longName) + "(1)");
        MathJSON.Result<String> unknownResult = MathJSON.exportExpressionWithDiagnostics(unknown);
        String shortened = MathJSON.exportExpression(unknown);
        testResult &= mathJsonError(unknownResult, "RESOURCE_LIMIT")
                && mathJsonError(MathJSON.importExpression(shortened), "INPUT_ERROR");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0493() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON import returns failures, warnings and usable results without exceptions";
        TestCommonTools.consolePrintTestApiStart(493, testDescr);
        String invalid = "[\"Add\",[\"Quantity\",2,{\"str\":\"km\"}],[\"Rational\",1,0]]";
        MathJSON.ImportOptions options = MathJSON.ImportOptions.defaults().withKilometresAsScalar(true);
        MathJSON.Result<Expression> failed = MathJSON.importExpressionWithOptions(invalid, options);
        boolean testResult = mathJsonError(failed, "UNSUPPORTED_NUMBER")
                && "/2/2".equals(failed.getError().getPath())
                && failed.getError().getOffset() == invalid.lastIndexOf('0');
        String remote = " {\"fn\":[\"Error\",{\"str\":\"external-error\"}]}";
        MathJSON.Result<PrimitiveElement> remoteFailure = MathJSON.importDefinition(remote);
        testResult &= mathJsonError(remoteFailure, "INPUT_ERROR") && remoteFailure.getError().getPath().isEmpty()
                && remoteFailure.getError().getOffset() == 1;
        testResult &= mathJsonError(MathJSON.importExpression(null), "INVALID_ARGUMENT")
                && mathJsonError(MathJSON.importExpressionWithOptions("1", null), "INVALID_ARGUMENT")
                && mathJsonError(MathJSON.importDefinition("1", (PrimitiveElement[]) null), "INVALID_ARGUMENT");
        MathJSON.Result<Expression> clean = MathJSON.importExpression("[\"Add\",2,3]");
        MathJSON.Result<Expression> projected = MathJSON.importExpressionWithOptions(
                "[\"Quantity\",2,{\"str\":\"km\"}]", options);
        MathJSON.Result<PrimitiveElement> definition = MathJSON.importDefinition(
                "[\"Declare\",\"exampleValue\",{\"dict\":{\"value\":5}}]");
        testResult &= clean.isSuccess() && clean.getError() == null && clean.getValue().calculate() == 5
                && projected.isSuccess() && projected.getError() == null && projected.getValue().calculate() == 2000
                && projected.getDiagnostics().size() == 1
                && "UNIT_PROJECTED_TO_SCALAR".equals(projected.getDiagnostics().get(0).getCode())
                && definition.isSuccess() && definition.getError() == null
                && definition.getValue() instanceof Argument && ((Argument) definition.getValue()).getArgumentValue() == 5;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0494() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON errors and warnings use the active mXparser StringResources";
        TestCommonTools.consolePrintTestApiStart(494, testDescr);
        String[] languages = {"en", "pl", "de", "fr", "es", "it", "pt", "zh"};
        String[] messages = {
                "Unsupported MathJSON construct", "Nieobsługiwana konstrukcja MathJSON",
                "Nicht unterstützte MathJSON-Konstruktion", "Construction MathJSON non prise en charge",
                "Construcción MathJSON no admitida", "Costrutto MathJSON non supportato",
                "Construção MathJSON não suportada", "不支持的 MathJSON 结构"
        };
        String[] warningMessages = {
                "Quantity converted to metres", "Przeliczono wielkość na metry",
                "Größe in Meter umgerechnet", "Quantité convertie en mètres",
                "Magnitud convertida a metros", "Quantità convertita in metri",
                "Grandeza convertida em metros", "量值已换算为米"
        };
        String foreign = "[\"Add\",1,[\"List\",0]]";
        String quantity = "[\"Quantity\",2,{\"str\":\"km\"}]";
        Expression unsupported = new Expression("x??1", new Argument("x", 2));
        Expression supported = new Expression("2+3");
        MathJSON.ImportOptions options = MathJSON.ImportOptions.defaults().withKilometresAsScalar(true);
        StringResources saved = StringModel.getStringResources();
        boolean testResult = true;
        try {
            for (int i = 0; i < languages.length; i++) {
                mXparser.changeLanguageTo(languages[i]);
                MathJSON.Result<Expression> imported = MathJSON.importExpression(foreign);
                MathJSON.Diagnostic importError = imported.getError();
                testResult &= mathJsonError(imported, "UNSUPPORTED_NODE") && messages[i].equals(importError.getMessage())
                        && "/2".equals(importError.getPath()) && importError.getOffset() == foreign.indexOf("[\"List\"");
                MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(unsupported);
                MathJSON.Diagnostic exportError = exported.getError();
                String errorJson = "[\"Error\",[\"ErrorCode\",{\"str\":\"mxparser:UNSUPPORTED_NODE\"},"
                        + "{\"str\":\"" + messages[i] + "\"},{\"str\":\"\"},-1]]";
                testResult &= mathJsonError(exported, "UNSUPPORTED_NODE") && messages[i].equals(exportError.getMessage())
                        && exportError.getPath().isEmpty() && exportError.getOffset() == -1
                        && errorJson.equals(MathJSON.exportExpression(unsupported))
                        && "[\"Add\",2,3]".equals(MathJSON.exportExpression(supported));
                MathJSON.Result<Expression> projected = MathJSON.importExpressionWithOptions(quantity, options);
                testResult &= projected.isSuccess() && projected.getDiagnostics().size() == 1;
                if (projected.getDiagnostics().size() == 1) {
                    MathJSON.Diagnostic warning = projected.getDiagnostics().get(0);
                    testResult &= "UNIT_PROJECTED_TO_SCALAR".equals(warning.getCode())
                            && warningMessages[i].equals(warning.getMessage())
                            && warning.getPath().isEmpty() && warning.getOffset() == 0;
                }
            }
            StringResources custom = StringResources.languagePolish();
            custom.MATHJSON_UNRESOLVED_REFERENCE = "Brak funkcji „{0}” ({0}).";
            StringModel.setStringResources(custom);
            MathJSON.Result<Expression> missing = MathJSON.importExpression("[\"sampleFunction\",1]");
            testResult &= missing.isSuccess() && missing.getDiagnostics().size() == 1
                    && "UNRESOLVED_FUNCTION".equals(missing.getDiagnostics().get(0).getCode())
                    && "Brak funkcji „sampleFunction” (sampleFunction).".equals(missing.getDiagnostics().get(0).getMessage());
            MathJSON.Result<Expression> rational = MathJSON.importExpression("[\"Rational\",1,0]");
            testResult &= mathJsonError(rational, "UNSUPPORTED_NUMBER")
                    && "Nieobsługiwana liczba przy konwersji MathJSON".equals(rational.getError().getMessage());
            custom.MATHJSON_UNSUPPORTED_NUMBER = null;
            custom.MATHJSON_UNSUPPORTED_CONSTRUCT = null;
            custom.MATHJSON_UNIT_PROJECTED_TO_SCALAR = null;
            MathJSON.Result<Expression> noErrorText = MathJSON.importExpression("[\"Rational\",1,0]");
            MathJSON.Result<Expression> noWarningText = MathJSON.importExpressionWithOptions(quantity, options);
            testResult &= mathJsonError(noErrorText, "UNSUPPORTED_NUMBER") && noErrorText.getError().getMessage().isEmpty()
                    && "/2".equals(noErrorText.getError().getPath()) && noErrorText.getError().getOffset() == 14
                    && "[\"Error\",[\"ErrorCode\",{\"str\":\"mxparser:UNSUPPORTED_NODE\"},{\"str\":\"\"},{\"str\":\"\"},-1]]"
                    .equals(MathJSON.exportExpression(unsupported))
                    && noWarningText.isSuccess() && noWarningText.getDiagnostics().size() == 1
                    && "UNIT_PROJECTED_TO_SCALAR".equals(noWarningText.getDiagnostics().get(0).getCode())
                    && noWarningText.getDiagnostics().get(0).getMessage().isEmpty();
        } finally {
            StringModel.setStringResources(saved);
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0495() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON leaves ordinary operation domains to mXparser on import and export";
        TestCommonTools.consolePrintTestApiStart(495, testDescr);
        String[][] cases = {
                {"19!", "[\"Factorial\",19]"},
                {"root(3,-8)", "[\"Root\",[\"Negate\",8],3]"},
                {"1/0", "[\"Divide\",1,0]"},
                {"sqrt(-1)", "[\"Sqrt\",-1]"},
                {"ln(0)", "[\"Ln\",0]"},
                {"log(1,8)", "[\"Log\",8,1]"},
                {"0^0", "[\"Power\",0,0]"},
                {"if(1.25<1.5,7,8)", "[\"If\",[\"Less\",{\"num\":\"1.25\"},{\"num\":\"1.5\"}],7,8]"},
                {"if(1=1,7,1/0)", "[\"If\",[\"Equal\",1,1],7,[\"Divide\",1,0]]"}
        };
        double[] expected = {121645100408832000.0, -2, Double.NaN, Double.NaN, Double.NEGATIVE_INFINITY,
                Double.NaN, 1, 7, 7};
        boolean testResult = true;
        for (int i = 0; i < cases.length; i++) {
            Expression original = new Expression(cases[i][0]);
            MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(original);
            MathJSON.Result<Expression> imported = MathJSON.importExpression(cases[i][1]);
            testResult &= exported.isSuccess() && cases[i][1].equals(exported.getValue())
                    && imported.isSuccess();
            if (imported.isSuccess()) {
                double originalValue = original.calculate();
                double importedValue = imported.getValue().calculate();
                testResult &= Double.isNaN(expected[i])
                        ? Double.isNaN(originalValue) && Double.isNaN(importedValue)
                        : originalValue == expected[i] && importedValue == expected[i];
            }
        }
        String powerJson = "[\"Power\",\"x\",\"y\"]";
        Argument x = new Argument("x", 2);
        Argument y = new Argument("y", 3);
        Expression original = new Expression("x^y", x, y);
        MathJSON.Result<Expression> power = MathJSON.importExpression(powerJson, x, y);
        testResult &= powerJson.equals(MathJSON.exportExpression(original)) && power.isSuccess();
        if (power.isSuccess()) {
            testResult &= original.calculate() == 8 && power.getValue().calculate() == 8;
            y.setArgumentValue(-3);
            testResult &= original.calculate() == 0.125 && power.getValue().calculate() == 0.125;
        }
        MathJSON.Result<Expression> negativeRoot = MathJSON.importExpression("[\"Root\",-8,3]");
        testResult &= negativeRoot.isSuccess() && negativeRoot.getValue().calculate() == -2;
        MathJSON.Result<Expression> rationalBase = MathJSON.importExpression("[\"Power\",[\"Rational\",0,1],0]");
        testResult &= rationalBase.isSuccess() && rationalBase.getValue().calculate() == 1;
        MathJSON.Result<Expression> longSum = MathJSON.importExpression("[\"Sum\",\"i\",[\"Limits\",\"i\",1,1001]]");
        testResult &= longSum.isSuccess() && longSum.getValue().calculate() == 501501;
        testResult &= MathJSON.exportExpressionWithDiagnostics(new Expression("sum(i,1,1001,i)")).isSuccess();
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0496() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON delegates Sum and Product bounds to mXparser";
        TestCommonTools.consolePrintTestApiStart(496, testDescr);
        Argument n = new Argument("n", 5);
        String[][] examples = {
                {"sum(i,1,n,i)", "[\"Sum\",\"i\",[\"Limits\",\"i\",1,\"n\"]]"},
                {"prod(i,1,n,i)", "[\"Product\",\"i\",[\"Limits\",\"i\",1,\"n\"]]"},
                {"sum(i,3,1,i)", "[\"Sum\",\"i\",[\"Limits\",\"i\",3,1]]"},
                {"sum(i,1,2.5,i)", "[\"Sum\",\"i\",[\"Limits\",\"i\",1,2.5]]"},
                {"sum(i,1,2,sum(j,1,i,j))", "[\"Sum\",[\"Sum\",\"j\",[\"Limits\",\"j\",1,\"i\"]],[\"Limits\",\"i\",1,2]]"}
        };
        double[] expected = {15, 120, 6, 3, 4};
        boolean testResult = true;
        for (int i = 0; i < examples.length; i++) {
            Expression original = new Expression(examples[i][0], n);
            MathJSON.Result<Expression> imported = MathJSON.importExpression(examples[i][1], n);
            MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(original);
            testResult &= original.calculate() == expected[i] && imported.isSuccess()
                    && imported.getValue().calculate() == expected[i] && exported.isSuccess();
            if (exported.isSuccess()) {
                MathJSON.Result<Expression> restored = MathJSON.importExpression(exported.getValue(), n);
                testResult &= restored.isSuccess() && restored.getValue().calculate() == expected[i];
            }
        }
        MathJSON.Result<Expression> dynamic = MathJSON.importExpression(examples[0][1], n);
        n.setArgumentValue(6);
        testResult &= dynamic.isSuccess() && dynamic.getValue().calculate() == 21;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0497() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON validates supplied definitions on reference";
        TestCommonTools.consolePrintTestApiStart(497, testDescr);
        Argument x = new Argument("x", 10);
        Argument dependent = new Argument("valueY", "x+2", x);
        Argument duplicate1 = new Argument("valueZ", 1);
        Argument duplicate2 = new Argument("valueZ", 2);
        RecoveringArgumentSource host = new RecoveringArgumentSource();
        host.failureKind = 1;
        Argument extended = new Argument("hostValue", host);
        MathJSON.Result<Expression> ignored = MathJSON.importExpression("[\"Add\",\"x\",2]",
                dependent, duplicate1, duplicate2, extended, x, null, new Expression("7"));
        boolean testResult = ignored.isSuccess() && ignored.getValue().calculate() == 12;
        MathJSON.Result<Expression> linkedDependent = MathJSON.importExpression("\"valueY\"", dependent);
        testResult &= linkedDependent.isSuccess() && linkedDependent.getValue().getArgument("valueY") == dependent
                && linkedDependent.getValue().calculate() == 12;
        MathJSON.Result<Expression> linkedHost = MathJSON.importExpression("\"hostValue\"", extended);
        testResult &= linkedHost.isSuccess() && linkedHost.getValue().getArgument("hostValue") == extended
                && linkedHost.getDiagnostics().size() == 1 && host.failureKind == 1;
        MathJSON.Result<Expression> duplicate = MathJSON.importExpression("[\"Add\",1,\"valueZ\"]", duplicate1, duplicate2);
        testResult &= mathJsonError(duplicate, "NAME_COLLISION") && "/2".equals(duplicate.getError().getPath());
        MathJSON.Result<Expression> repeated = MathJSON.importExpression("\"x\"", x, x);
        testResult &= repeated.isSuccess() && repeated.getValue().calculate() == 10;
        Argument subclass = new Argument("hostSubclass", 1) {};
        MathJSON.Result<Expression> ignoredSubclass = MathJSON.importExpression("1", subclass);
        testResult &= ignoredSubclass.isSuccess() && ignoredSubclass.getValue().calculate() == 1
                && "1".equals(MathJSON.exportExpression(new Expression("1", subclass)));
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0498() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON unary associative operations and large integral Rational atoms";
        TestCommonTools.consolePrintTestApiStart(498, testDescr);
        Argument x = new Argument("x", 7);
        MathJSON.Result<Expression> unary = MathJSON.importExpression("[\"Multiply\",[\"Add\",\"x\"]]", x);
        boolean testResult = unary.isSuccess() && unary.getValue().calculate() == 7
                && "\"x\"".equals(MathJSON.exportExpression(unary.getValue()));
        String[] rationals = {"[\"Rational\",9007199254740992,2]",
                "[\"Rational\",{\"num\":\"1.8014398509481984e16\"},-2]"};
        double[] expected = {4503599627370496.0, -9007199254740992.0};
        for (int i = 0; i < rationals.length; i++) {
            MathJSON.Result<Expression> rational = MathJSON.importExpression(rationals[i]);
            testResult &= rational.isSuccess() && rational.getValue().calculate() == expected[i];
        }
        testResult &= mathJsonError(MathJSON.importExpression("[\"Add\"]"), "INVALID_ARITY");
        testResult &= mathJsonError(MathJSON.importExpression("[\"Multiply\"]"), "INVALID_ARITY");
        testResult &= mathJsonError(MathJSON.importExpression("[\"Rational\",1.5,2]"), "UNSUPPORTED_NUMBER");
        testResult &= mathJsonError(MathJSON.importExpression("[\"Rational\",2,0]"), "UNSUPPORTED_NUMBER");
        Expression fraction = new Expression("9007199254740992_2");
        MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(fraction);
        testResult &= exported.isSuccess() && exported.getValue().startsWith("[\"Rational\",");
        if (exported.isSuccess()) {
            MathJSON.Result<Expression> restored = MathJSON.importExpression(exported.getValue());
            testResult &= restored.isSuccess() && restored.getValue().calculate() == expected[0];
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0499() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON shares messages while retaining diagnostic codes and positions";
        TestCommonTools.consolePrintTestApiStart(499, testDescr);
        MathJSON.Result<Expression> first = MathJSON.importExpression("1 true");
        MathJSON.Result<Expression> second = MathJSON.importExpression("[1,]");
        boolean testResult = mathJsonError(first, "INVALID_JSON") && mathJsonError(second, "INVALID_JSON")
                && "Invalid JSON syntax".equals(first.getError().getMessage())
                && first.getError().getMessage().equals(second.getError().getMessage())
                && first.getError().getPath().isEmpty() && first.getError().getOffset() == 2
                && "/1".equals(second.getError().getPath()) && second.getError().getOffset() == 3;
        MathJSON.Result<Expression> shape = MathJSON.importExpression("[\"Add\",1,true]");
        MathJSON.Result<PrimitiveElement> root = MathJSON.importDefinition("1");
        testResult &= mathJsonError(shape, "INVALID_SHAPE") && mathJsonError(root, "INVALID_ROOT")
                && "Invalid MathJSON structure".equals(shape.getError().getMessage())
                && shape.getError().getMessage().equals(root.getError().getMessage())
                && "/2".equals(shape.getError().getPath()) && shape.getError().getOffset() == 9
                && root.getError().getPath().isEmpty() && root.getError().getOffset() == 0;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0500() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON direct recursion follows the mXparser recursion limit";
        TestCommonTools.consolePrintTestApiStart(500, testDescr);
        String[] definitions = {"walk(n)=if(n<=0,1,n*walk(n-1))", "walk(n)=walk(n)",
                "walk(n)=1+walk(n-1)", "walk(n)=if(n<=0,walk(n+1),walk(n-1))", "walk(n)=if(walk(n)>0,1,0)",
                "walk(n)=sum(i,1,1,walk(n))", "walk(n)=sum(i,1,walk(n),i)", "walk(n)=prod(i,1,1,walk(n))",
                "walk(n)=if(n<=0,0,sum(i,1,1,walk(n)))"};
        String[] bodies = {"[\"If\",[\"LessEqual\",\"n\",0],1,[\"Multiply\",\"n\",[\"walk\",[\"Subtract\",\"n\",1]]]]",
                "[\"walk\",\"n\"]", "[\"Add\",1,[\"walk\",[\"Subtract\",\"n\",1]]]",
                "[\"If\",[\"LessEqual\",\"n\",0],[\"walk\",[\"Add\",\"n\",1]],[\"walk\",[\"Subtract\",\"n\",1]]]",
                "[\"If\",[\"Greater\",[\"walk\",\"n\"],0],1,0]",
                "[\"Sum\",[\"walk\",\"n\"],[\"Limits\",\"i\",1,1]]", "[\"Sum\",\"i\",[\"Limits\",\"i\",1,[\"walk\",\"n\"]]]",
                "[\"Product\",[\"walk\",\"n\"],[\"Limits\",\"i\",1,1]]",
                "[\"If\",[\"LessEqual\",\"n\",0],0,[\"Sum\",[\"walk\",\"n\"],[\"Limits\",\"i\",1,1]]]"};
        boolean testResult = true;
        int saved = mXparser.getMaxAllowedRecursionDepth();
        try {
            mXparser.setMaxAllowedRecursionDepth(48);
            for (int i = 0; i < definitions.length; i++) {
                Expression original = new Expression("walk(4)", new Function(definitions[i]));
                String wire = "[\"Block\",[\"DefineFunction\",\"walk\",[\"Function\"," + bodies[i] + ",\"n\"]],[\"walk\",4]]";
                MathJSON.Result<Expression> imported = MathJSON.importExpression(wire);
                MathJSON.Result<String> exported = MathJSON.exportProgramWithDiagnostics(original);
                if (i >= 4) {
                    testResult &= original.checkSyntax() && mathJsonError(imported, "UNSUPPORTED_PROGRAM")
                            && mathJsonError(exported, "UNSUPPORTED_PROGRAM");
                    if (i == 4 && imported.getError() != null)
                        testResult &= "/1/2/1/1/1".equals(imported.getError().getPath());
                    continue;
                }
                testResult &= original.checkSyntax() && imported.isSuccess() && exported.isSuccess();
                if (!imported.isSuccess() || !exported.isSuccess()) continue;
                MathJSON.Result<Expression> restored = MathJSON.importExpression(exported.getValue());
                testResult &= restored.isSuccess();
                if (!restored.isSuccess()) continue;
                for (Expression expression : new Expression[]{original, imported.getValue(), restored.getValue()}) {
                    Function function = expression.getFunction("walk");
                    testResult &= function != null && function.getFunction("walk") == function;
                    double first = expression.calculate(), second = expression.calculate();
                    testResult &= i == 0 ? first == 24 && second == 24 : Double.isNaN(first) && Double.isNaN(second);
                }
            }
        } finally {
            mXparser.setMaxAllowedRecursionDepth(saved);
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0501() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON export ignores unused extensions without invoking callbacks";
        TestCommonTools.consolePrintTestApiStart(501, testDescr);
        RecoveringArgumentSource argumentSource = new RecoveringArgumentSource();
        Argument extra = new Argument("unusedArg", argumentSource);
        LaTeXFunctionExtension functionSource = new LaTeXFunctionExtension();
        Function extraFunction = new Function("unusedFn", functionSource);
        Argument x = new Argument("x", 2);
        Function inc = new Function("inc(t)=t+1");
        Expression plain = new Expression("inc(x)", x, inc);
        Expression augmented = new Expression("inc(x)", extra, extraFunction, x, inc);
        Function outer = new Function("outer(t)=t+1");
        outer.addDefinitions(extra, extraFunction);
        Expression usesArgument = new Expression("unusedArg+1", extra);
        Expression usesFunction = new Expression("unusedFn(1)", extraFunction);
        int metadataBefore = functionSource.metadata;
        argumentSource.failureKind = 1;
        MathJSON.Result<String> formula = MathJSON.exportExpressionWithDiagnostics(augmented);
        MathJSON.Result<String> program = MathJSON.exportProgramWithDiagnostics(augmented);
        boolean testResult = formula.isSuccess() && "[\"inc\",\"x\"]".equals(formula.getValue())
                && program.isSuccess() && MathJSON.exportProgram(plain).equals(program.getValue());
        MathJSON.Result<String> definition = MathJSON.exportDefinitionWithDiagnostics(outer);
        testResult &= definition.isSuccess()
                && MathJSON.exportDefinition(new Function("outer(t)=t+1")).equals(definition.getValue());
        MathJSON.Result<String> referencedArgument = MathJSON.exportExpressionWithDiagnostics(usesArgument);
        MathJSON.Result<String> referencedFunction = MathJSON.exportExpressionWithDiagnostics(usesFunction);
        testResult &= referencedArgument.isSuccess() && "[\"Add\",\"unusedArg\",1]".equals(referencedArgument.getValue())
                && referencedArgument.getDiagnostics().size() == 1;
        testResult &= referencedFunction.isSuccess() && "[\"unusedFn\",1]".equals(referencedFunction.getValue())
                && referencedFunction.getDiagnostics().size() == 1;
        testResult &= mathJsonError(MathJSON.exportProgramWithDiagnostics(usesArgument), "UNSUPPORTED_PROGRAM");
        testResult &= mathJsonError(MathJSON.exportProgramWithDiagnostics(usesFunction), "UNSUPPORTED_PROGRAM");
        testResult &= argumentSource.failureKind == 1 && functionSource.metadata == metadataBefore
                && functionSource.calculations == 0 && functionSource.assignments == 0;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0502() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON rounds decimal underflow to zero";
        TestCommonTools.consolePrintTestApiStart(502, testDescr);
        String[] examples = {"1e-400", "-1e-400", "{\"num\":\"1E-400\"}", "{\"num\":\"-1E-400\"}",
                "[\"Rational\",-1e-400,2]"};
        boolean testResult = true;
        for (String example : examples) {
            MathJSON.Result<Expression> imported = MathJSON.importExpression(example);
            testResult &= imported.isSuccess() && imported.getDiagnostics().isEmpty()
                    && Double.doubleToRawLongBits(imported.getValue().calculate()) == 0;
        }
        MathJSON.Result<PrimitiveElement> positive = MathJSON.importDefinition("[\"Declare\",\"valueX\",{\"dict\":{\"value\":1e-400}}]");
        MathJSON.Result<PrimitiveElement> negative = MathJSON.importDefinition("[\"Declare\",\"valueX\",{\"dict\":{\"value\":-1e-400}}]");
        testResult &= positive.isSuccess() && Double.doubleToRawLongBits(((Argument) positive.getValue()).getArgumentValue()) == 0;
        testResult &= negative.isSuccess() && Double.doubleToRawLongBits(((Argument) negative.getValue()).getArgumentValue()) == Long.MIN_VALUE;
        testResult &= mathJsonError(MathJSON.importExpression("[\"Rational\",1,1e-400]"), "UNSUPPORTED_NUMBER")
                && mathJsonError(MathJSON.importExpression("-1e400"), "UNSUPPORTED_NUMBER");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0503() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON exchanges shared functions, conditional bodies and angle units";
        TestCommonTools.consolePrintTestApiStart(503, testDescr);
        String[][] cases = {
                {"sin(pi/2)", "[\"Sin\",[\"Divide\",\"Pi\",2]]"}, {"cos(0)", "[\"Cos\",0]"},
                {"tg(pi/4)", "[\"Tan\",[\"Divide\",\"Pi\",4]]"}, {"exp(1)", "[\"Exp\",1]"},
                {"Gamma(5)", "[\"Gamma\",5]"}, {"min(8,3,4)", "[\"Min\",8,3,4]"}, {"max(8,3,4)", "[\"Max\",8,3,4]"},
                {"1+if(1<2,3,1/0)", "[\"Add\",1,[\"If\",[\"Less\",1,2],3,[\"Divide\",1,0]]]"},
                {"min(cos(0),2)", "[\"Min\",[\"Cos\",0],2]"},
                {"if(if(1<2,3,4)>2,1,0)", "[\"If\",[\"Greater\",[\"If\",[\"Less\",1,2],3,4],2],1,0]"},
                {"sum(i,1,3,if(i<3,1,0))", "[\"Sum\",[\"If\",[\"Less\",\"i\",3],1,0],[\"Limits\",\"i\",1,3]]"}
        };
        double[] expected = {1, 1, 1, Math.E, 24, 3, 8, 4, 1, 1, 2};
        boolean testResult = true;
        for (int i = 0; i < cases.length; i++) {
            Expression original = new Expression(cases[i][0]);
            MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(original);
            MathJSON.Result<Expression> imported = MathJSON.importExpression(cases[i][1]);
            testResult &= Math.abs(original.calculate() - expected[i]) <= 1e-14;
            testResult &= exported.isSuccess() && exported.getDiagnostics().isEmpty() && cases[i][1].equals(exported.getValue());
            testResult &= imported.isSuccess() && imported.getDiagnostics().isEmpty()
                    && Math.abs(imported.getValue().calculate() - expected[i]) <= 1e-14;
        }
        mXparser.setDegreesMode();
        try {
            MathJSON.Result<String> degrees = MathJSON.exportExpressionWithDiagnostics(new Expression("sin(30)"));
            testResult &= degrees.isSuccess() && degrees.getDiagnostics().isEmpty()
                    && "[\"Sin\",[\"Degrees\",30]]".equals(degrees.getValue());
            MathJSON.Result<Expression> imported = MathJSON.importExpression("[\"Sin\",[\"Divide\",\"Pi\",2]]");
            testResult &= imported.isSuccess() && Math.abs(imported.getValue().calculate() - 1) <= 1e-14;
            MathJSON.Result<Expression> restored = MathJSON.importExpression(degrees.getValue());
            testResult &= restored.isSuccess() && Math.abs(restored.getValue().calculate() - 0.5) <= 1e-14;
            MathJSON.Result<Expression> cos = MathJSON.importExpression("[\"Cos\",[\"Degrees\",60]]");
            MathJSON.Result<Expression> tan = MathJSON.importExpression("[\"Tan\",[\"Degrees\",45]]");
            testResult &= cos.isSuccess() && Math.abs(cos.getValue().calculate() - 0.5) <= 1e-14
                    && tan.isSuccess() && Math.abs(tan.getValue().calculate() - 1) <= 1e-14;
            MathJSON.Result<String> nested = MathJSON.exportExpressionWithDiagnostics(new Expression("sin(rad(30))"));
            testResult &= nested.isSuccess() && "[\"Sin\",[\"Degrees\",[\"Degrees\",30]]]".equals(nested.getValue());
        } finally {
            mXparser.setRadiansMode();
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0504() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON open formulas can be completed without reimport";
        TestCommonTools.consolePrintTestApiStart(504, testDescr);
        String json = "[\"Add\",[\"score\",2],\"offset\"]";
        MathJSON.Result<Expression> imported = MathJSON.importExpression(json);
        boolean testResult = imported.isSuccess() && mathJsonWarning(imported, 0, "UNRESOLVED_FUNCTION", "/1")
                && mathJsonWarning(imported, 1, "UNRESOLVED_SYMBOL", "/2") && imported.getDiagnostics().size() == 2;
        if (imported.isSuccess()) {
            Expression expression = imported.getValue();
            testResult &= !expression.checkSyntax()
                    && java.util.Arrays.equals(new String[]{"score"}, expression.getMissingUserDefinedFunctions())
                    && java.util.Arrays.equals(new String[]{"offset"}, expression.getMissingUserDefinedArguments());
            MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(expression);
            testResult &= exported.isSuccess() && json.equals(exported.getValue()) && exported.getDiagnostics().size() == 2;
            expression.addDefinitions(new Function("score(t)=t^2"), new Constant("offset", 1));
            testResult &= expression.checkSyntax() && expression.calculate() == 5;
        }
        MathJSON.Result<Expression> variadic = MathJSON.importExpression("[\"Add\",[\"score\",2],[\"score\",2,3]]");
        testResult &= variadic.isSuccess() && variadic.getDiagnostics().size() == 1;
        if (variadic.isSuccess()) {
            variadic.getValue().addDefinitions(new Function("score(...)= [npar]"));
            testResult &= variadic.getValue().checkSyntax() && variadic.getValue().calculate() == 3;
        }
        String[] nested = {"[\"score\",[\"offset\",2]]", "[\"Sin\",[\"score\",2]]",
                "[\"If\",\"True\",[\"score\",2],0]", "[\"Sum\",[\"score\",\"j\"],[\"Limits\",\"j\",1,2]]"};
        double[] expected = {81, Math.sin(4), 4, 5};
        for (int i = 0; i < nested.length; i++) {
            MathJSON.Result<Expression> result = MathJSON.importExpression(nested[i]);
            testResult &= result.isSuccess();
            if (result.isSuccess()) {
                result.getValue().addDefinitions(new Function("score(t)=t^2"), new Function("offset(t)=t+7"));
                testResult &= result.getValue().checkSyntax() && Math.abs(result.getValue().calculate() - expected[i]) <= 1e-14;
            }
        }
        testResult &= mathJsonError(MathJSON.importExpression("[\"Block\",[\"score\",2]]"), "UNRESOLVED_FUNCTION");
        testResult &= mathJsonError(MathJSON.importExpression("[\"List\",1,2]"), "UNSUPPORTED_NODE");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0505() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON links host arguments and functions without calling them during conversion";
        TestCommonTools.consolePrintTestApiStart(505, testDescr);
        RecoveringArgumentSource argumentSource = new RecoveringArgumentSource();
        Argument extra = new Argument("hostValue", argumentSource);
        LaTeXFunctionExtension functionSource = new LaTeXFunctionExtension();
        Function function = new Function("hostFn", functionSource);
        int metadata = functionSource.metadata;
        argumentSource.failureKind = 1;
        String json = "[\"Add\",\"hostValue\",[\"hostFn\",1]]";
        MathJSON.Result<Expression> imported = MathJSON.importExpression(json, extra, function);
        boolean testResult = imported.isSuccess() && mathJsonWarning(imported, 0, "EXTERNAL_DEFINITION", "/1")
                && mathJsonWarning(imported, 1, "EXTERNAL_DEFINITION", "/2");
        if (imported.isSuccess()) {
            Expression expression = imported.getValue();
            testResult &= expression.getArgument("hostValue") == extra && expression.getFunction("hostFn") == function;
            MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(expression);
            testResult &= exported.isSuccess() && json.equals(exported.getValue()) && exported.getDiagnostics().size() == 2;
            testResult &= argumentSource.failureKind == 1 && functionSource.metadata == metadata
                    && functionSource.calculations == 0 && functionSource.assignments == 0;
            argumentSource.failureKind = 0;
            testResult &= expression.calculate() == 44 && functionSource.calculations == 1;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0506() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON preserves standard and overridden builtin bindings";
        TestCommonTools.consolePrintTestApiStart(506, testDescr);
        Argument tan = new Argument("Tan", 2);
        MathJSON.Result<Expression> scalar = MathJSON.importExpression("[\"Add\",\"Tan\",1]", tan);
        boolean testResult = scalar.isSuccess() && scalar.getValue().calculate() == 3;
        Function custom = new Function("Tan(t)=t+1");
        String declaration = MathJSON.exportDefinition(custom);
        MathJSON.Result<PrimitiveElement> definition = MathJSON.importDefinition(declaration);
        testResult &= definition.isSuccess() && ((Function) definition.getValue()).calculate(2) == 3;
        testResult &= mathJsonError(MathJSON.importExpression("[\"Sum\",\"Pi\",[\"Limits\",\"Pi\",1,3]]"), "NAME_COLLISION");
        testResult &= mathJsonError(MathJSON.importDefinition("[\"DefineFunction\",\"turn\",[\"Function\",\"Pi\",\"Pi\"]]"), "NAME_COLLISION");
        Argument i = new Argument("i", 2);
        MathJSON.Result<String> symbol = MathJSON.exportExpressionWithDiagnostics(new Expression("i+1", i));
        testResult &= symbol.isSuccess() && "[\"Add\",[\"MxParserSymbol\",\"i\"],1]".equals(symbol.getValue())
                && mathJsonWarning(symbol, 1, "MXPARSER_EXTENSION", "");
        MathJSON.Result<Expression> restoredSymbol = MathJSON.importExpression(symbol.getValue(), i);
        testResult &= restoredSymbol.isSuccess() && restoredSymbol.getValue().calculate() == 3;
        String recursive = "[\"Block\",[\"DefineFunction\",\"Sum\",[\"Function\",\"t\",\"t\"]],"
                + "[\"DefineFunction\",\"walk\",[\"Function\",[\"If\",[\"Less\",\"n\",1],0,"
                + "[\"MxParserCall\",\"Sum\",[\"walk\",[\"Subtract\",\"n\",1]]]],\"n\"]],[\"walk\",3]]";
        MathJSON.Result<Expression> recursion = MathJSON.importExpression(recursive);
        testResult &= recursion.isSuccess() && recursion.getValue().calculate() == 0;
        mXparser.setToOverrideBuiltinTokens();
        try {
            Function sin = new Function("sin(t)=t+1");
            Expression overridden = new Expression("sin(0)", sin);
            MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(overridden);
            testResult &= overridden.calculate() == 1 && exported.isSuccess()
                    && "[\"MxParserCall\",\"sin\",0]".equals(exported.getValue())
                    && mathJsonWarning(exported, 1, "MXPARSER_EXTENSION", "");
            MathJSON.Result<Expression> restored = MathJSON.importExpression(exported.getValue(), sin);
            testResult &= restored.isSuccess() && restored.getValue().calculate() == 1;
            String mixed = "[\"Add\",[\"Sin\",0],[\"MxParserCall\",\"sin\",0]]";
            testResult &= mathJsonError(MathJSON.importExpression(mixed, sin), "BUILTIN_UNAVAILABLE");
            mXparser.modifyBuiltinToken(Function1Arg.SIN_STR, "sine");
            MathJSON.Result<Expression> renamed = MathJSON.importExpression(mixed, sin);
            testResult &= renamed.isSuccess() && renamed.getValue().calculate() == 1;
            MathJSON.Result<String> standard = MathJSON.exportExpressionWithDiagnostics(new Expression("sine(0)"));
            testResult &= standard.isSuccess() && standard.getDiagnostics().isEmpty() && "[\"Sin\",0]".equals(standard.getValue());
        } finally {
            mXparser.unmodifyBuiltinTokens(Function1Arg.SIN_STR);
            mXparser.setNotToOverrideBuiltinTokens();
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0507() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON carries explicit mXparser operators with a portability warning";
        TestCommonTools.consolePrintTestApiStart(507, testDescr);
        Expression original = new Expression("2^^3+1");
        MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(original);
        boolean testResult = exported.isSuccess() && "[\"Add\",[\"MxParserTetration\",2,3],1]".equals(exported.getValue())
                && exported.getDiagnostics().size() == 1 && mathJsonWarning(exported, 0, "MXPARSER_EXTENSION", "");
        MathJSON.Result<Expression> imported = MathJSON.importExpression(exported.getValue());
        testResult &= original.calculate() == 17 && imported.isSuccess() && imported.getValue().calculate() == 17;
        testResult &= mathJsonError(MathJSON.importExpression("[\"MxParserTetration\",2]"), "INVALID_ARITY");
        String[] chains = {"2^^2^^2", "2^^3!", "2^-3^^2", "2^^-1*3"};
        double[] expected = {65536, 20922789888000.0, 0.9746546091224311, Double.NaN};
        for (int i = 0; i < chains.length; i++) {
            Expression chain = new Expression(chains[i]);
            MathJSON.Result<String> encoded = MathJSON.exportExpressionWithDiagnostics(chain);
            MathJSON.Result<Expression> decoded = MathJSON.importExpression(encoded.getValue());
            if (encoded.isSuccess() && decoded.isSuccess()) {
                double value = decoded.getValue().calculate();
                testResult &= Double.isNaN(expected[i]) ? Double.isNaN(value) && Double.isNaN(chain.calculate())
                        : Math.abs(value - expected[i]) <= 1e-14 && Math.abs(chain.calculate() - expected[i]) <= 1e-14;
            } else testResult = false;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0508() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON exports a single function with external references";
        TestCommonTools.consolePrintTestApiStart(508, testDescr);
        Function g = new Function("g(t)=t??1");
        Function f = new Function("f(t)=g(t)+g(t)");
        f.addDefinitions(g, new Function("unused(t)=t??3"));
        String wire = "[\"DefineFunction\",\"f\",[\"Function\",[\"Add\",[\"g\",\"t\"],[\"g\",\"t\"]],\"t\"]]";
        MathJSON.Result<String> exported = MathJSON.exportDefinitionWithDiagnostics(f);
        boolean testResult = f.calculate(2) == 4 && exported.isSuccess() && wire.equals(exported.getValue())
                && exported.getDiagnostics().size() == 1 && mathJsonWarning(exported, 0, "EXTERNAL_DEFINITION", "");
        MathJSON.Result<PrimitiveElement> imported = MathJSON.importDefinition(exported.getValue(), g);
        testResult &= imported.isSuccess() && ((Function) imported.getValue()).getFunction("g") == g
                && ((Function) imported.getValue()).calculate(2) == 4;
        MathJSON.Result<PrimitiveElement> open = MathJSON.importDefinition(wire);
        testResult &= open.isSuccess() && open.getDiagnostics().size() == 1
                && mathJsonWarning(open, 0, "UNRESOLVED_FUNCTION", "/2/1/1");
        testResult &= mathJsonError(MathJSON.exportDefinitionWithDiagnostics(new Function("missing(t)=g(t)")), "UNRESOLVED_FUNCTION");
        Function wrongArity = new Function("wrong(t)=g(t,t)");
        wrongArity.addDefinitions(g);
        testResult &= mathJsonError(MathJSON.exportDefinitionWithDiagnostics(wrongArity), "INVALID_ARITY");
        testResult &= mathJsonError(MathJSON.exportDefinitionWithDiagnostics(g), "UNSUPPORTED_NODE");
        testResult &= mathJsonError(MathJSON.exportProgramWithDiagnostics(new Expression("f(2)", f)), "UNSUPPORTED_NODE");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0509() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON normalizes formula zeros and preserves declaration signs";
        TestCommonTools.consolePrintTestApiStart(509, testDescr);
        String[] examples = {"-0", "-0.0", "{\"num\":\"-0e-400\"}", "[\"Multiply\",2,-0]", "[\"Rational\",-0,2]"};
        boolean testResult = true;
        for (String example : examples) {
            MathJSON.Result<Expression> imported = MathJSON.importExpression(example);
            testResult &= imported.isSuccess() && imported.getDiagnostics().isEmpty()
                    && Double.doubleToRawLongBits(imported.getValue().calculate()) == 0;
        }
        Expression original = new Expression("2*(-0.0)");
        MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(original);
        MathJSON.Result<Expression> restored = MathJSON.importExpression(exported.getValue());
        testResult &= exported.isSuccess() && "[\"Multiply\",2,0]".equals(exported.getValue())
                && restored.isSuccess() && original.calculate() == restored.getValue().calculate();
        Expression signedPower = new Expression("(-0.0)^(-1)");
        String normalizedPower = MathJSON.exportExpression(signedPower);
        MathJSON.Result<Expression> restoredPower = MathJSON.importExpression(normalizedPower);
        testResult &= Double.isInfinite(signedPower.calculate())
                && "[\"Power\",0,-1]".equals(normalizedPower)
                && restoredPower.isSuccess() && restoredPower.getValue().calculate() == Double.POSITIVE_INFINITY;
        testResult &= mathJsonError(MathJSON.importExpression("[\"Rational\",1,-0]"), "UNSUPPORTED_NUMBER");
        Argument signed = new Argument("z", -0.0);
        String declaration = "[\"Declare\",\"z\",[\"Dictionary\",[\"KeyValuePair\",\"value\",{\"num\":\"-0\"}]]]";
        testResult &= declaration.equals(MathJSON.exportDefinition(signed));
        MathJSON.Result<PrimitiveElement> imported = MathJSON.importDefinition(declaration);
        testResult &= imported.isSuccess()
                && Double.doubleToRawLongBits(((Argument) imported.getValue()).getArgumentValue()) == Long.MIN_VALUE;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0510() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON qualified user names stay distinct from numeric atoms";
        TestCommonTools.consolePrintTestApiStart(510, testDescr);
        Argument symbol = new Argument("NaN", 7);
        MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(new Expression("NaN+1", symbol));
        boolean testResult = exported.isSuccess()
                && "[\"Add\",[\"MxParserSymbol\",{\"sym\":\"NaN\"}],1]".equals(exported.getValue())
                && mathJsonWarning(exported, 1, "MXPARSER_EXTENSION", "");
        String[] references = {exported.getValue(), "[\"Add\",[\"MxParserSymbol\",\"NaN\"],1]"};
        for (String reference : references) {
            MathJSON.Result<Expression> imported = MathJSON.importExpression(reference, symbol);
            testResult &= imported.isSuccess() && imported.getValue().getArgument("NaN") == symbol
                    && imported.getValue().calculate() == 8;
        }
        MathJSON.Result<String> program = MathJSON.exportProgramWithDiagnostics(new Expression("NaN+1", symbol));
        MathJSON.Result<Expression> restoredProgram = MathJSON.importExpression(program.getValue());
        testResult &= program.isSuccess() && program.getValue().contains("[\"Declare\",{\"sym\":\"NaN\"},")
                && restoredProgram.isSuccess() && restoredProgram.getValue().calculate() == 8;
        Function function = new Function("Infinity(t)=t+1");
        String call = "[\"MxParserCall\",{\"sym\":\"Infinity\"},2]";
        MathJSON.Result<String> qualified = MathJSON.exportExpressionWithDiagnostics(new Expression("Infinity(2)", function));
        testResult &= qualified.isSuccess() && call.equals(qualified.getValue())
                && mathJsonWarning(qualified, 1, "MXPARSER_EXTENSION", "");
        for (String reference : new String[]{call, "[\"MxParserCall\",\"Infinity\",2]"}) {
            MathJSON.Result<Expression> imported = MathJSON.importExpression(reference, function);
            testResult &= imported.isSuccess() && imported.getValue().getFunction("Infinity") == function
                    && imported.getValue().calculate() == 3;
        }
        Function wrapper = new Function("MxParserSymbol(t)=t+1");
        testResult &= "[\"MxParserCall\",\"MxParserSymbol\",2]".equals(
                MathJSON.exportExpression(new Expression("MxParserSymbol(2)", wrapper)));
        testResult &= mathJsonError(MathJSON.importExpression("[\"MxParserSymbol\",{\"num\":\"NaN\"}]", symbol), "INVALID_SHAPE")
                && mathJsonError(MathJSON.importExpression("{\"num\":\"NaN\"}"), "UNSUPPORTED_NUMBER");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0511() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON keeps function parameters local";
        TestCommonTools.consolePrintTestApiStart(511, testDescr);
        Argument x = new Argument("x", 99);
        Function f = new Function("f(x)=x+1");
        String declaration = "[\"DefineFunction\",\"f\",[\"Function\",[\"Add\",\"x\",1],\"x\"]]";
        String scalar = "[\"Declare\",\"x\",[\"Dictionary\",[\"KeyValuePair\",\"value\",99]]]";
        String body = "[\"Add\",\"x\",[\"f\",2]]";
        Expression original = new Expression("x+f(2)", x, f);
        String exported = MathJSON.exportProgram(original);
        boolean testResult = original.calculate() == 102 && x.getArgumentValue() == 99
                && ("[\"Block\"," + scalar + "," + declaration + "," + body + "]").equals(exported);
        String[] blocks = {exported, "[\"Block\"," + declaration + "," + scalar + "," + body + "]"};
        for (String block : blocks) {
            MathJSON.Result<Expression> imported = MathJSON.importExpression(block);
            testResult &= imported.isSuccess() && imported.getValue().calculate() == 102
                    && imported.getValue().getArgument("x").getArgumentValue() == 99;
        }
        MathJSON.Result<PrimitiveElement> imported = MathJSON.importDefinition(declaration, x);
        testResult &= imported.isSuccess() && ((Function) imported.getValue()).calculate(2) == 3
                && x.getArgumentValue() == 99;
        testResult &= mathJsonError(MathJSON.importDefinition("[\"DefineFunction\",\"f\",[\"Function\",\"x\",\"x\",\"x\"]]"), "NAME_COLLISION");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0512() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON preserves comparisons in scalar and predicate positions";
        TestCommonTools.consolePrintTestApiStart(512, testDescr);
        String[] sources = {"1<2", "1+(1<2)", "3<2<1", "if(1<2,3,4)", "5>3=3", "if(3<2<1,5,6)"};
        String[] wires = {"[\"Boole\",[\"Less\",1,2]]", "[\"Add\",1,[\"Boole\",[\"Less\",1,2]]]",
                "[\"Boole\",[\"Less\",[\"Boole\",[\"Less\",3,2]],1]]", "[\"If\",[\"Less\",1,2],3,4]",
                "[\"Boole\",[\"Greater\",5,[\"Boole\",[\"Equal\",3,3]]]]", "[\"If\",[\"Less\",[\"Boole\",[\"Less\",3,2]],1],5,6]"};
        double[] expected = {1, 2, 1, 3, 1, 5};
        boolean testResult = true;
        for (int i = 0; i < sources.length; i++) {
            Expression original = new Expression(sources[i]);
            String exported = MathJSON.exportExpression(original);
            MathJSON.Result<Expression> imported = MathJSON.importExpression(exported);
            testResult &= original.calculate() == expected[i] && wires[i].equals(exported)
                    && imported.isSuccess() && imported.getValue().calculate() == expected[i];
        }
        MathJSON.Result<Expression> bare = MathJSON.importExpression("[\"Less\",2,1]");
        String[] literals = {"True", "False"};
        for (int i = 0; i < literals.length; i++) {
            String bareLiteral = "\"" + literals[i] + "\"";
            String scalarWire = "[\"Boole\"," + bareLiteral + "]";
            MathJSON.Result<Expression> scalar = MathJSON.importExpression(scalarWire);
            MathJSON.Result<Expression> literal = MathJSON.importExpression(bareLiteral);
            testResult &= scalar.isSuccess() && scalar.getValue().calculate() == 1 - i
                    && scalarWire.equals(MathJSON.exportExpression(scalar.getValue()))
                    && literal.isSuccess() && literal.getValue().calculate() == 1 - i;
        }
        MathJSON.Result<Expression> embedded = MathJSON.importExpression("[\"Add\",1,[\"Less\",1,2]]");
        testResult &= bare.isSuccess() && bare.getValue().calculate() == 0
                && embedded.isSuccess() && embedded.getValue().calculate() == 2
                && mathJsonError(MathJSON.importExpression("[\"Less\",1,2,3]"), "INVALID_ARITY")
                && mathJsonError(MathJSON.importExpression("[\"Boole\"]"), "INVALID_ARITY")
                && mathJsonError(MathJSON.importExpression("[\"Boole\",\"True\",\"False\"]"), "INVALID_ARITY")
                && mathJsonError(MathJSON.importExpression("[\"Boole\",2]"), "UNSUPPORTED_DOMAIN");
        Function host = new Function("Boole(t)=t+1");
        String qualified = MathJSON.exportExpression(new Expression("Boole(2)", host));
        MathJSON.Result<Expression> restoredHost = MathJSON.importExpression(qualified, host);
        MathJSON.Result<Expression> standard = MathJSON.importExpression("[\"Boole\",\"True\"]", host);
        testResult &= "[\"MxParserCall\",\"Boole\",2]".equals(qualified)
                && restoredHost.isSuccess() && restoredHost.getValue().calculate() == 3
                && standard.isSuccess() && standard.getValue().calculate() == 1;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0513() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON exports a parenthesized unit step";
        TestCommonTools.consolePrintTestApiStart(513, testDescr);
        String[] sources = {"sum(i,1,3,i,(1))", "prod(i,1,3,i,((1)))"};
        String[] wires = {"[\"Sum\",\"i\",[\"Limits\",\"i\",1,3]]", "[\"Product\",\"i\",[\"Limits\",\"i\",1,3]]"};
        boolean testResult = true;
        for (int i = 0; i < sources.length; i++) {
            Expression original = new Expression(sources[i]);
            String exported = MathJSON.exportExpression(original);
            MathJSON.Result<Expression> imported = MathJSON.importExpression(exported);
            testResult &= original.calculate() == 6 && wires[i].equals(exported)
                    && imported.isSuccess() && imported.getValue().calculate() == 6;
        }
        testResult &= mathJsonError(MathJSON.exportExpressionWithDiagnostics(new Expression("sum(i,1,3,i,(2-1))")), "UNSUPPORTED_DOMAIN");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0514() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON checks iterator names against installed definitions";
        TestCommonTools.consolePrintTestApiStart(514, testDescr);
        Argument i = new Argument("i", 7);
        String sum = "[\"Sum\",\"i\",[\"Limits\",\"i\",1,3]]";
        String tupleSum = "[\"Sum\",\"i\",[\"Tuple\",\"i\",1,3]]";
        String tupleProduct = "[\"Product\",\"i\",[\"Tuple\",\"i\",1,3]]";
        boolean testResult = true;
        for (String wire : new String[]{sum, tupleSum, tupleProduct}) {
            MathJSON.Result<Expression> result = MathJSON.importExpression(wire, i);
            testResult &= result.isSuccess() && result.getValue().calculate() == 6
                    && result.getValue().getArgument("i") == null && i.getArgumentValue() == 7;
        }
        MathJSON.Result<Expression> collision = MathJSON.importExpression("[\"Add\",\"i\"," + tupleSum + "]", i);
        testResult &= mathJsonError(collision, "NAME_COLLISION") && "/2/2/1".equals(collision.getError().getPath());
        testResult &= mathJsonError(MathJSON.importExpression("[\"Block\",[\"Declare\",\"i\",{\"dict\":{\"value\":7}}]," + sum + "]"), "NAME_COLLISION");
        String function = "[\"DefineFunction\",\"localSum\",[\"Function\",[\"Multiply\",\"n\"," + tupleSum + "],\"n\"]]";
        MathJSON.Result<PrimitiveElement> result = MathJSON.importDefinition(function, i);
        testResult &= result.isSuccess() && ((Function) result.getValue()).calculate(2) == 12;
        testResult &= mathJsonError(MathJSON.importDefinition("[\"DefineFunction\",\"i\",[\"Function\"," + sum + ",\"n\"]]"), "NAME_COLLISION")
                && mathJsonError(MathJSON.importExpression("[\"Sum\",\"i\",[\"Tuple\",\"i\",1]]"), "INVALID_ARITY");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0515() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON reads explicit Boolean declaration attributes";
        TestCommonTools.consolePrintTestApiStart(515, testDescr);
        String prefix = "[\"Declare\",\"x\",";
        String[] arguments = {"{\"dict\":{\"value\":7,\"constant\":false}}", "{\"dict\":{\"value\":7,\"constant\":\"False\"}}",
                "[\"Dictionary\",[\"Tuple\",\"constant\",\"False\"],[\"Tuple\",\"value\",7]]"};
        boolean testResult = true;
        for (String attributes : arguments) {
            MathJSON.Result<PrimitiveElement> result = MathJSON.importDefinition(prefix + attributes + "]");
            testResult &= result.isSuccess() && result.getValue() instanceof Argument
                    && ((Argument) result.getValue()).getArgumentValue() == 7 && result.getDiagnostics().isEmpty();
        }
        MathJSON.Result<PrimitiveElement> constant = MathJSON.importDefinition(prefix + "{\"dict\":{\"value\":7,\"constant\":true}}]");
        testResult &= constant.isSuccess() && constant.getValue() instanceof Constant
                && ((Constant) constant.getValue()).getConstantValue() == 7;
        testResult &= mathJsonError(MathJSON.importDefinition(prefix + "{\"dict\":{\"value\":7,\"constant\":0}}]"), "INVALID_SHAPE")
                && mathJsonError(MathJSON.importDefinition(prefix + "[\"Dictionary\",[\"Tuple\",\"value\",7],[\"Tuple\",\"constant\",\"False\"],[\"Tuple\",\"constant\",\"True\"]]]"), "INVALID_SHAPE")
                && mathJsonError(MathJSON.importExpression("[\"If\",true,3,4]"), "INVALID_SHAPE");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0516() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON exports numeric literal conditions with native rounding";
        TestCommonTools.consolePrintTestApiStart(516, testDescr);
        String[] sources = {"if(2,3,4)", "if(0,3,4)", "if(-(2),3,4)", "if(1e-15,3,4)"};
        String[] wires = {"[\"If\",\"True\",3,4]", "[\"If\",\"False\",3,4]", "[\"If\",\"True\",3,4]", "[\"If\",\"False\",3,4]"};
        double[] expected = {3, 4, 3, 4};
        boolean testResult = true;
        for (int j = 0; j < sources.length; j++) {
            Expression source = new Expression(sources[j]);
            String exported = MathJSON.exportExpression(source);
            MathJSON.Result<Expression> restored = MathJSON.importExpression(exported);
            testResult &= source.calculate() == expected[j] && wires[j].equals(exported)
                    && restored.isSuccess() && restored.getValue().calculate() == expected[j];
        }
        mXparser.disableAlmostIntRounding();
        mXparser.disableCanonicalRounding();
        Expression small = new Expression("if(1e-15,3,4)");
        testResult &= small.calculate() == 3 && wires[0].equals(MathJSON.exportExpression(small));
        mXparser.enableAlmostIntRounding();
        mXparser.enableCanonicalRounding();
        Function negate = new Function("Negate(t)=t+1");
        testResult &= mathJsonError(MathJSON.importExpression("[\"If\",2,3,4]"), "UNSUPPORTED_DOMAIN")
                && mathJsonError(MathJSON.exportExpressionWithDiagnostics(new Expression("if(Negate(2),3,4)", negate)), "UNSUPPORTED_DOMAIN");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0517() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON checks definition types only when used";
        TestCommonTools.consolePrintTestApiStart(517, testDescr);
        Argument custom = new Argument("x", 7) {};
        Expression source = new Expression("1+2", custom);
        MathJSON.Result<Expression> imported = MathJSON.importExpression("[\"Add\",1,2]", custom);
        boolean testResult = source.calculate() == 3 && "[\"Add\",1,2]".equals(MathJSON.exportExpression(source))
                && imported.isSuccess() && imported.getValue().calculate() == 3
                && imported.getValue().getArgument("x") == null && imported.getDiagnostics().isEmpty();
        testResult &= mathJsonError(MathJSON.exportDefinitionWithDiagnostics(custom), "UNSUPPORTED_PROGRAM");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0518() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON imports standalone functions with unresolved references";
        TestCommonTools.consolePrintTestApiStart(518, testDescr);
        Function source = new Function("f", "x+y+g(x)", "x");
        Argument y = new Argument("y", 4);
        Function g = new Function("g(t)=2*t");
        source.addArguments(y);
        source.addFunctions(g);
        String wire = MathJSON.exportDefinition(source);
        MathJSON.Result<PrimitiveElement> imported = MathJSON.importDefinition(wire);
        boolean testResult = source.calculate(3) == 13 && imported.isSuccess()
                && imported.getDiagnostics().size() == 2
                && mathJsonWarning(imported, 0, "UNRESOLVED_SYMBOL", "/2/1/2")
                && mathJsonWarning(imported, 1, "UNRESOLVED_FUNCTION", "/2/1/3");
        if (imported.isSuccess()) {
            Function restored = (Function) imported.getValue();
            testResult &= !restored.checkSyntax();
            restored.addArguments(y);
            restored.addFunctions(g);
            testResult &= restored.checkSyntax() && restored.calculate(3) == 13;
        }
        MathJSON.Result<PrimitiveElement> complete = MathJSON.importDefinition(wire, y, g);
        testResult &= complete.isSuccess() && complete.getDiagnostics().isEmpty()
                && ((Function) complete.getValue()).calculate(3) == 13
                && mathJsonError(MathJSON.importExpression("[\"Block\"," + wire + ",[\"f\",3]]"), "UNRESOLVED_SYMBOL");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0519() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON wide flat arithmetic preserves native infix order";
        TestCommonTools.consolePrintTestApiStart(519, testDescr);
        mXparser.disableCanonicalRounding();
        mXparser.disableAlmostIntRounding();
        mXparser.disableUlpRounding();
        StringBuilder add = new StringBuilder("[\"Add\",1e16,1,-1e16");
        StringBuilder multiply = new StringBuilder("[\"Multiply\",1e-200,1e-200,1e200");
        StringBuilder nativeAdd = new StringBuilder("1e16+1+(-1e16)");
        StringBuilder nativeMultiply = new StringBuilder("1e-200*1e-200*1e200");
        String tooDeep = "1";
        for (int i = 0; i < 300; i++) {
            add.append(",1");
            multiply.append(",1");
            nativeAdd.append("+1");
            nativeMultiply.append("*1");
            tooDeep = "[\"Abs\"," + tooDeep + "]";
        }
        String[] wires = {"[\"Abs\"," + add.append("]") + "]", multiply.append("]").toString()};
        String[] sources = {"abs(" + nativeAdd + ")", nativeMultiply.toString()};
        double[] expected = {300, 0};
        boolean testResult = true;
        for (int j = 0; j < wires.length; j++) {
            MathJSON.Result<Expression> imported = MathJSON.importExpression(wires[j]);
            testResult &= new Expression(sources[j]).calculate() == expected[j]
                    && imported.isSuccess() && imported.getValue().calculate() == expected[j];
            if (imported.isSuccess()) {
                MathJSON.Result<Expression> restored = MathJSON.importExpression(MathJSON.exportExpression(imported.getValue()));
                testResult &= restored.isSuccess() && restored.getValue().calculate() == expected[j];
            }
        }
        MathJSON.Result<Expression> grouped = MathJSON.importExpression("[\"Add\",1e16,[\"Add\",-1e16,1]]");
        testResult &= grouped.isSuccess() && grouped.getValue().calculate() == 0
                && mathJsonError(MathJSON.importExpression(tooDeep), "RESOURCE_LIMIT");
        mXparser.enableCanonicalRounding();
        mXparser.enableAlmostIntRounding();
        mXparser.enableUlpRounding();
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }


    @Test
    public void testApi0520() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON reads active builtin names from mXparser";
        TestCommonTools.consolePrintTestApiStart(520, testDescr);
        String cosineWire = "[\"Cos\",0]";
        String shiftedDeclaration = "[\"Declare\",\"shifted\",{\"dict\":{\"value\":2}}]";
        boolean testResult = true;
        mXparser.modifyBuiltinToken(Function1Arg.COS_STR, "shifted");
        mXparser.modifyBuiltinToken("shifted", "fresh");
        try {
            int activeNames = 0;
            for (String name : new String[]{"shifted", "fresh"}) {
                Expression nativeCall = new Expression(name + "(0)");
                String declaration = "[\"Declare\",\"" + name + "\",{\"dict\":{\"value\":2}}]";
                if (nativeCall.checkSyntax()) {
                    activeNames++;
                    testResult &= nativeCall.calculate() == 1 && mathJsonError(MathJSON.importDefinition(declaration), "NAME_COLLISION");
                } else {
                    Argument argument = new Argument(name, 2);
                    Expression source = new Expression(name + "+1", argument);
                    String wire = "[\"Add\",\"" + name + "\",1]";
                    MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(source);
                    MathJSON.Result<Expression> imported = MathJSON.importExpression(wire, argument);
                    MathJSON.Result<PrimitiveElement> definition = MathJSON.importDefinition(declaration);
                    testResult &= source.calculate() == 3 && exported.isSuccess() && wire.equals(exported.getValue())
                            && imported.isSuccess() && imported.getValue().calculate() == 3
                            && definition.isSuccess() && ((Argument) definition.getValue()).getArgumentValue() == 2;
                }
            }
            MathJSON.Result<Expression> cosine = MathJSON.importExpression(cosineWire);
            testResult &= activeNames == 1 && cosine.isSuccess() && cosine.getValue().calculate() == 1;
        } finally {
            mXparser.unmodifyBuiltinTokens(Function1Arg.COS_STR, "shifted");
        }
        mXparser.removeBuiltinTokens(Function1Arg.COS_STR);
        mXparser.modifyBuiltinToken(Function1Arg.COS_STR, "shifted");
        try {
            MathJSON.Result<Expression> cosine = MathJSON.importExpression(cosineWire);
            testResult &= new Expression("shifted(0)").calculate() == 1 && cosine.isSuccess() && cosine.getValue().calculate() == 1
                    && mathJsonError(MathJSON.importDefinition(shiftedDeclaration), "NAME_COLLISION");
        } finally {
            mXparser.unmodifyBuiltinTokens(Function1Arg.COS_STR);
            mXparser.unremoveBuiltinTokens(Function1Arg.COS_STR);
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0521() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON imports renamed builtin constants in brackets";
        TestCommonTools.consolePrintTestApiStart(521, testDescr);
        boolean testResult;
        mXparser.modifyBuiltinToken(ConstantValue.TRUE_STR, "[testTrue]");
        mXparser.modifyBuiltinToken(ConstantValue.FALSE_STR, "[testFalse]");
        try {
            String[] sources = {"if([testTrue],3,4)", "if([testFalse],3,4)"};
            String[] wires = {"[\"If\",\"True\",3,4]", "[\"If\",\"False\",3,4]"};
            double[] expected = {3, 4};
            testResult = true;
            for (int i = 0; i < sources.length; i++) {
                Expression source = new Expression(sources[i]);
                MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(source);
                MathJSON.Result<Expression> imported = MathJSON.importExpression(exported.getValue());
                testResult &= source.calculate() == expected[i] && exported.isSuccess() && wires[i].equals(exported.getValue())
                        && imported.isSuccess() && imported.getValue().calculate() == expected[i];
            }
        } finally {
            mXparser.unmodifyBuiltinTokens(ConstantValue.TRUE_STR, ConstantValue.FALSE_STR);
        }
        mXparser.removeBuiltinTokens(ConstantValue.TRUE_STR);
        try {
            testResult &= mathJsonError(MathJSON.importExpression("[\"If\",\"True\",3,4]"), "BUILTIN_UNAVAILABLE");
        } finally {
            mXparser.unremoveBuiltinTokens(ConstantValue.TRUE_STR);
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }


    @Test
    public void testApi0522() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON budgets long decimal atoms by processed text length";
        TestCommonTools.consolePrintTestApiStart(522, testDescr);
        StringBuilder digits = new StringBuilder("1.");
        for (int i = 0; i < 1022; i++) digits.append('0');
        String decimal = digits.toString();
        String atom = "{\"num\":\"" + decimal + "\"}";
        StringBuilder wire = new StringBuilder("[\"Add\"");
        for (int i = 0; i < 800; i++) wire.append(',').append(atom);
        MathJSON.Result<Expression> imported = MathJSON.importExpression(wire.append(']').toString());
        MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(new Expression(decimal));
        boolean testResult = imported.isSuccess() && imported.getValue().calculate() == 800
                && exported.isSuccess() && "1".equals(exported.getValue())
                && mathJsonError(MathJSON.importExpression("{\"num\":\"" + decimal + "0\"}"), "RESOURCE_LIMIT");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    private static final class MathJsonReferenceArgument extends Argument {
        MathJsonReferenceArgument(String name, double value) { super(name, value); }
        @Override public boolean equals(Object other) { return other instanceof MathJsonReferenceArgument; }
        @Override public int hashCode() { return 1; }
    }

    @Test
    public void testApi0523() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON formula references preserve supplied subclass instances";
        TestCommonTools.consolePrintTestApiStart(523, testDescr);
        Argument x = new MathJsonReferenceArgument("argX", 2);
        Constant k = new Constant("constK", 3) {};
        Function f = new Function("funF(t)=t+1") {};
        Expression source = new Expression("argX+constK*funF(2)", x, k, f);
        String wire = "[\"Add\",\"argX\",[\"Multiply\",\"constK\",[\"funF\",2]]]";
        MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(source);
        MathJSON.Result<Expression> imported = MathJSON.importExpression(wire, x, k, f);
        boolean testResult = source.calculate() == 11 && exported.isSuccess() && wire.equals(exported.getValue())
                && exported.getDiagnostics().size() == 3 && imported.isSuccess() && imported.getDiagnostics().size() == 3;
        for (int i = 0; i < 3 && testResult; i++)
            testResult &= "EXTERNAL_DEFINITION".equals(exported.getDiagnostics().get(i).getCode())
                    && "EXTERNAL_DEFINITION".equals(imported.getDiagnostics().get(i).getCode());
        if (imported.isSuccess()) {
            Expression restored = imported.getValue();
            testResult &= restored.getArgument("argX") == x && restored.getConstant("constK") == k
                    && restored.getFunction("funF") == f && restored.calculate() == 11;
            x.setArgumentValue(7);
            k.setConstantValue(4);
            testResult &= restored.calculate() == 19 && source.calculate() == 19;
        }
        Argument other = new MathJsonReferenceArgument("otherX", 5);
        String pairWire = "[\"Add\",\"argX\",\"otherX\"]";
        MathJSON.Result<String> pairExport = MathJSON.exportExpressionWithDiagnostics(new Expression("argX+otherX", x, other));
        MathJSON.Result<Expression> pairImport = MathJSON.importExpression(pairWire, x, other);
        testResult &= x.equals(other) && pairExport.isSuccess() && pairWire.equals(pairExport.getValue())
                && pairExport.getDiagnostics().size() == 2 && pairImport.isSuccess()
                && pairImport.getValue().getArgument("argX") == x && pairImport.getValue().getArgument("otherX") == other
                && pairImport.getDiagnostics().size() == 2 && pairImport.getValue().calculate() == 12;
        MathJSON.Result<Expression> unresolved = MathJSON.importExpression(wire);
        testResult &= unresolved.isSuccess() && unresolved.getDiagnostics().size() == 3
                && !unresolved.getValue().checkSyntax();
        testResult &= mathJsonError(MathJSON.importExpression("[\"funF\",1,2]", f), "INVALID_ARITY");
        testResult &= mathJsonError(MathJSON.exportDefinitionWithDiagnostics(x), "UNSUPPORTED_PROGRAM")
                && mathJsonError(MathJSON.exportDefinitionWithDiagnostics(k), "UNSUPPORTED_PROGRAM")
                && mathJsonError(MathJSON.exportDefinitionWithDiagnostics(f), "UNSUPPORTED_PROGRAM")
                && mathJsonError(MathJSON.exportProgramWithDiagnostics(source), "UNSUPPORTED_PROGRAM")
                && mathJsonError(MathJSON.importExpression("[\"Block\"," + wire + "]", x, k, f), "UNSUPPORTED_PROGRAM");
        String definition = "[\"DefineFunction\",\"funG\",[\"Function\",[\"Add\",\"t\",\"argX\"],\"t\"]]";
        Function declarationSource = new Function("funG(t)=t+argX");
        declarationSource.addDefinitions(x);
        testResult &= declarationSource.calculate(2) == 9
                && mathJsonError(MathJSON.importDefinition(definition, x), "UNSUPPORTED_PROGRAM")
                && mathJsonError(MathJSON.exportDefinitionWithDiagnostics(declarationSource), "UNSUPPORTED_PROGRAM");
        RecursiveArgument recursive = new RecursiveArgument("recR(n)=n");
        testResult &= mathJsonError(MathJSON.importExpression("\"recR\"", recursive), "UNSUPPORTED_PROGRAM");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0524() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON reports input and function arity errors at their validation stage";
        TestCommonTools.consolePrintTestApiStart(524, testDescr);
        Function f = new Function("curveF(t)=2*t");
        String wire = "[\"curveF\",2]";
        Expression source = new Expression("curveF(2)", f);
        MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(source);
        MathJSON.Result<Expression> imported = MathJSON.importExpression(wire, f);
        boolean testResult = source.calculate() == 4 && exported.isSuccess() && wire.equals(exported.getValue())
                && mathJsonWarning(exported, 0, "EXTERNAL_DEFINITION", "")
                && imported.isSuccess() && imported.getValue().getFunction("curveF") == f
                && imported.getValue().calculate() == 4;
        testResult &= mathJsonError(MathJSON.exportExpressionWithDiagnostics(new Expression("curveF(2,3)", f)), "INVALID_ARITY")
                && mathJsonError(MathJSON.importExpression("[\"curveF\",2,3]", f), "INVALID_ARITY")
                && mathJsonError(MathJSON.exportDefinitionWithDiagnostics(new Function("outerF(t)=curveF(t,3)", f)), "INVALID_ARITY")
                && mathJsonError(MathJSON.exportExpressionWithDiagnostics(new Expression("sin(2,3)")), "INVALID_ARITY");
        testResult &= mathJsonError(MathJSON.importExpression("[", f), "INVALID_JSON")
                && mathJsonError(MathJSON.importDefinition("[", f), "INVALID_JSON")
                && mathJsonError(MathJSON.importExpression("[\"Error\"]", f), "INPUT_ERROR")
                && mathJsonError(MathJSON.importDefinition("[\"Error\"]", f), "INPUT_ERROR");
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0525() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON rejects an invalid root before processing definitions";
        TestCommonTools.consolePrintTestApiStart(525, testDescr);
        Argument x = new Argument("x", 2);
        String declaration = "[\"Declare\",\"x\",{\"dict\":{\"value\":3}}]";
        boolean testResult = mathJsonError(MathJSON.importExpression(declaration, x), "INVALID_ROOT")
                && mathJsonError(MathJSON.importDefinition("[\"Add\",\"x\",1]", x), "INVALID_ROOT")
                && mathJsonError(MathJSON.importDefinition("[\"Block\",1]", x), "INVALID_ROOT")
                && mathJsonError(MathJSON.importExpression("[\"Block\"]", x), "INVALID_ROOT")
                && mathJsonError(MathJSON.importExpression("[\"Block\",[\"Block\",1]]", x), "INVALID_ROOT")
                && mathJsonError(MathJSON.importExpression("[\"Block\"," + declaration + "," + declaration + "]", x), "INVALID_ROOT")
                && x.getArgumentValue() == 2;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0526() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON exchanges names that start with an underscore";
        TestCommonTools.consolePrintTestApiStart(526, testDescr);
        Argument offset = new Argument("_offset", 2);
        boolean testResult = true;
        for (String name : new String[]{"_scale", "_mxp0"}) {
            Function scale = new Function(name + "(_v)=2*_v");
            String wire = "[\"Add\",\"_offset\",[\"" + name + "\",3]]";
            Expression source = new Expression("_offset+" + name + "(3)", offset, scale);
            MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(source);
            MathJSON.Result<Expression> imported = MathJSON.importExpression(wire, offset, scale);
            MathJSON.Result<Expression> block = MathJSON.importExpression("[\"Block\"," + wire + "]", offset, scale);
            MathJSON.Result<Expression> program = MathJSON.importExpression(MathJSON.exportProgram(source));
            String declaration = "[\"DefineFunction\",\"outerF\",[\"Function\",[\"" + name + "\",\"t\"],\"t\"]]";
            MathJSON.Result<PrimitiveElement> definition = MathJSON.importDefinition(declaration, scale);
            testResult &= source.calculate() == 8 && exported.isSuccess() && wire.equals(exported.getValue())
                    && imported.isSuccess() && imported.getValue().getArgument("_offset") == offset
                    && imported.getValue().getFunction(name) == scale && imported.getValue().calculate() == 8
                    && block.isSuccess() && block.getValue().calculate() == 8
                    && program.isSuccess() && program.getValue().calculate() == 8
                    && definition.isSuccess() && ((Function) definition.getValue()).calculate(3) == 6;
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0527() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON retains flat arithmetic and explicit grouping";
        TestCommonTools.consolePrintTestApiStart(527, testDescr);
        String[] wires = {"[\"Add\",1,2,3]", "[\"Multiply\",2,3,4]",
                "[\"Add\",[\"Add\",1,2],3]", "[\"Multiply\",2,[\"Multiply\",3,4]]"};
        double[] expected = {6, 24, 6, 24};
        boolean testResult = true;
        for (int i = 0; i < wires.length; i++) {
            MathJSON.Result<Expression> imported = MathJSON.importExpression(wires[i]);
            testResult &= imported.isSuccess() && imported.getValue().calculate() == expected[i]
                    && wires[i].equals(MathJSON.exportExpression(imported.getValue()));
        }
        Argument x = new Argument("x", 3);
        Function f = new Function("f", "x", x);
        Function g = new Function("g", "x", x);
        f.setParametersNumber(1);
        g.setParametersNumber(1);
        Expression source = new Expression("(x)+(f(4))+((x)+(g(9)))", x, f, g);
        String wire = "[\"Add\",\"x\",[\"f\",4],[\"Add\",\"x\",[\"g\",9]]]";
        MathJSON.Result<String> exported = MathJSON.exportExpressionWithDiagnostics(source);
        testResult &= exported.isSuccess() && wire.equals(exported.getValue())
                && source.calculate() == 19 && x.getArgumentValue() == 4;
        x.setArgumentValue(3);
        MathJSON.Result<Expression> restored = MathJSON.importExpression(exported.getValue(), x, f, g);
        testResult &= restored.isSuccess() && restored.getValue().calculate() == 19 && x.getArgumentValue() == 4;
        x.setArgumentValue(3);
        String grouped = "[\"Add\",[\"Add\",\"x\",[\"f\",4]],[\"Add\",\"x\",[\"g\",9]]]";
        MathJSON.Result<Expression> importedGroup = MathJSON.importExpression(grouped, x, f, g);
        testResult &= importedGroup.isSuccess() && importedGroup.getValue().calculate() == 19
                && x.getArgumentValue() == 9 && grouped.equals(MathJSON.exportExpression(importedGroup.getValue()));
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0528() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON emits simple operands without changing operator grouping";
        TestCommonTools.consolePrintTestApiStart(528, testDescr);
        String[] wires = {"[\"Multiply\",2,[\"Add\",1,[\"Sin\",[\"Divide\",\"Pi\",2]]]]",
                "[\"Subtract\",8,[\"Subtract\",4,1]]", "[\"Power\",-2,2]",
                "[\"Add\",2,[\"Multiply\",3,4]]", "[\"Divide\",[\"Negate\",\"Pi\"],\"Pi\"]",
                "[\"Power\",2,[\"Factorial\",3]]"};
        String[] sources = {"2*(1+sin(pi/2))", "8-(4-1)", "(-2)^2", "2+(3*4)", "(-(pi))/pi", "2^((3)!)"};
        double[] values = {4, 5, 4, 14, -1, 64};
        boolean testResult = true;
        for (int i = 0; i < wires.length; i++) {
            MathJSON.Result<Expression> imported = MathJSON.importExpression(wires[i]);
            testResult &= imported.isSuccess() && sources[i].equals(imported.getValue().getExpressionString())
                    && imported.getValue().calculate() == values[i];
        }
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    @Test
    public void testApi0529() {
        TestCommonTools.testApiSettingsInit();
        String testDescr = "MathJSON preserves evaluation order for functions sharing a parameter";
        TestCommonTools.consolePrintTestApiStart(529, testDescr);
        Argument x = new Argument("x", 3);
        Argument y = new Argument("y", 0);
        Function g = new Function("g", "x", x);
        Function h = new Function("h", "x+0*y", y, x);
        g.setParametersNumber(1);
        h.setParametersNumber(1);
        String wire = "[\"Add\",[\"Abs\",[\"h\",0]],[\"Max\",[\"Add\",[\"g\",9],0]]]";
        MathJSON.Result<Expression> imported = MathJSON.importExpression(wire, x, g, h);
        boolean testResult = imported.isSuccess()
                && "(abs(h(0)))+(max((g(9))+(0)))".equals(imported.getValue().getExpressionString())
                && imported.getValue().calculate() == 18 && x.getArgumentValue() == 9;
        TestCommonTools.consolePrintTestApiEnd(testResult);
        Assertions.assertTrue(testResult);
    }

    private static boolean mathJsonWarning(MathJSON.Result<?> result, int index, String code, String path) {
        return index < result.getDiagnostics().size() && code.equals(result.getDiagnostics().get(index).getCode())
                && path.equals(result.getDiagnostics().get(index).getPath());
    }

    private static boolean mathJsonError(MathJSON.Result<?> result, String code) {
        return !result.isSuccess() && result.getValue() == null && result.getDiagnostics().isEmpty()
                && result.getError() != null && code.equals(result.getError().getCode());
    }
}
