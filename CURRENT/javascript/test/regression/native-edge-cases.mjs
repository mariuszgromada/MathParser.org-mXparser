/*
 * @(#)native-edge-cases.mjs        6.2.0    2026-11-04
 *
 * MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2024-05-19
 * The most up-to-date license is available at the below link:
 * - https://mathparser.org/mxparser-license
 *
 * AUTHOR: Copyright 2010 - 2026 Mariusz Gromada - All rights reserved
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

import {textContains, textStartsWith, textEndsWith, textReplace, textLower, textTrim} from './text-assertions.mjs';
import {testNativePointerPreconditions} from './native-pointer-preconditions.mjs';
import {testCancellation} from './cancellation.mjs';
// BEGIN generated original Unicode roundtrips
const nativeUnicodeCases={
testUnicode0000(mx,keep,check){const input=new Uint8Array([]);const middle=mx.UTF8toUTF16(input);const output=mx.UTF16toUTF8(middle);check(input.length===output.length&&input.every((byte,index)=>byte===output[index]));},
testUnicode0001(mx,keep,check){const input="";const middle=mx.UTF16toUTF8(input);const output=mx.UTF8toUTF16(middle);check(input===output);},
testUnicode0002(mx,keep,check){const input=new Uint8Array([113, 119, 101, 114, 116, 121, 117, 105, 111, 112, 97, 115, 100, 102, 103, 104, 106, 107, 108, 122, 120, 99, 118, 98, 110, 109]);const middle=mx.UTF8toUTF16(input);const output=mx.UTF16toUTF8(middle);check(input.length===output.length&&input.every((byte,index)=>byte===output[index]));},
testUnicode0003(mx,keep,check){const input="qwertyuiopasdfghjklzxcvbnm";const middle=mx.UTF16toUTF8(input);const output=mx.UTF8toUTF16(middle);check(input===output);},
testUnicode0004(mx,keep,check){const input=new Uint8Array([81, 87, 69, 82, 84, 89, 85, 73, 79, 80, 65, 83, 68, 70, 71, 72, 74, 75, 76, 90, 88, 67, 86, 66, 78, 77]);const middle=mx.UTF8toUTF16(input);const output=mx.UTF16toUTF8(middle);check(input.length===output.length&&input.every((byte,index)=>byte===output[index]));},
testUnicode0005(mx,keep,check){const input="QWERTYUIOPASDFGHJKLZXCVBNM";const middle=mx.UTF16toUTF8(input);const output=mx.UTF8toUTF16(middle);check(input===output);},
testUnicode0006(mx,keep,check){const input=new Uint8Array([48, 49, 50, 51, 52, 53, 54, 55, 56, 57]);const middle=mx.UTF8toUTF16(input);const output=mx.UTF16toUTF8(middle);check(input.length===output.length&&input.every((byte,index)=>byte===output[index]));},
testUnicode0007(mx,keep,check){const input="0123456789";const middle=mx.UTF16toUTF8(input);const output=mx.UTF8toUTF16(middle);check(input===output);},
testUnicode0008(mx,keep,check){const input=new Uint8Array([126, 96, 33, 64, 35, 36, 37, 94, 38, 42, 40, 41, 45, 95, 61, 43, 123, 125, 91, 93, 124, 92, 34, 39, 58, 59, 63, 47, 60, 62, 44, 46]);const middle=mx.UTF8toUTF16(input);const output=mx.UTF16toUTF8(middle);check(input.length===output.length&&input.every((byte,index)=>byte===output[index]));},
testUnicode0009(mx,keep,check){const input="~`!@#$%^&*()-_=+{}[]|\\\"':;?/<>,.";const middle=mx.UTF16toUTF8(input);const output=mx.UTF8toUTF16(middle);check(input===output);},
testUnicode0010(mx,keep,check){const input=new Uint8Array([206, 177, 206, 178, 206, 179, 206, 180, 206, 181, 206, 182, 206, 183, 206, 184, 206, 185, 206, 186, 206, 187, 206, 188, 206, 189, 206, 190, 206, 191, 207, 128, 207, 129, 207, 130, 207, 131, 207, 132, 207, 133, 207, 134, 207, 135, 207, 136, 207, 137, 206, 145, 206, 146, 206, 147, 206, 148, 206, 149, 206, 150, 206, 151, 206, 152, 206, 153, 206, 154, 206, 155, 206, 156, 206, 157, 206, 158, 206, 159, 206, 160, 206, 161, 206, 163, 206, 164, 206, 165, 206, 166, 206, 167, 206, 168, 206, 169, 226, 136, 145, 226, 136, 143, 226, 132, 191, 226, 136, 134, 226, 136, 135, 226, 136, 171, 226, 132, 188, 226, 132, 135, 226, 133, 135, 226, 132, 175, 226, 136, 156, 226, 136, 155, 226, 136, 154, 226, 136, 130, 226, 138, 187, 226, 138, 189, 226, 138, 188, 226, 135, 148, 226, 135, 141, 226, 135, 143, 226, 135, 144, 226, 135, 146, 194, 172, 226, 136, 167, 226, 136, 168, 226, 139, 157, 226, 137, 165, 226, 139, 156, 226, 137, 164, 226, 137, 160, 195, 183, 226, 136, 153, 226, 168, 137, 195, 151]);const middle=mx.UTF8toUTF16(input);const output=mx.UTF16toUTF8(middle);check(input.length===output.length&&input.every((byte,index)=>byte===output[index]));},
testUnicode0011(mx,keep,check){const input="αβγδεζηθικλμνξοπρςστυφχψωΑΒΓΔΕΖΗΘΙΚΛΜΝΞΟΠΡΣΤΥΦΧΨΩ∑∏ℿ∆∇∫ℼℇⅇℯ∜∛√∂⊻⊽⊼⇔⇍⇏⇐⇒¬∧∨⋝≥⋜≤≠÷∙⨉×";const middle=mx.UTF16toUTF8(input);const output=mx.UTF8toUTF16(middle);check(input===output);},
testUnicode0012(mx,keep,check){const input=new Uint8Array([196, 132, 196, 134, 196, 152, 197, 129, 197, 131, 195, 147, 197, 154, 197, 185, 197, 187, 196, 133, 196, 135, 196, 153, 197, 130, 197, 132, 195, 179, 197, 155, 197, 186, 197, 188]);const middle=mx.UTF8toUTF16(input);const output=mx.UTF16toUTF8(middle);check(input.length===output.length&&input.every((byte,index)=>byte===output[index]));},
testUnicode0013(mx,keep,check){const input="ĄĆĘŁŃÓŚŹŻąćęłńóśźż";const middle=mx.UTF16toUTF8(input);const output=mx.UTF8toUTF16(middle);check(input===output);},
testUnicode0014(mx,keep,check){const input=new Uint8Array([195, 132, 195, 150, 195, 156, 225, 186, 158, 195, 164, 195, 182, 195, 188, 195, 159]);const middle=mx.UTF8toUTF16(input);const output=mx.UTF16toUTF8(middle);check(input.length===output.length&&input.every((byte,index)=>byte===output[index]));},
testUnicode0015(mx,keep,check){const input="ÄÖÜẞäöüß";const middle=mx.UTF16toUTF8(input);const output=mx.UTF8toUTF16(middle);check(input===output);},
testUnicode0016(mx,keep,check){const input=new Uint8Array([195, 129, 195, 130, 195, 131, 195, 135, 195, 137, 195, 138, 195, 141, 195, 147, 195, 148, 195, 149, 195, 154, 195, 161, 195, 162, 195, 163, 195, 167, 195, 169, 195, 170, 195, 173, 195, 179, 195, 180, 195, 181, 195, 186]);const middle=mx.UTF8toUTF16(input);const output=mx.UTF16toUTF8(middle);check(input.length===output.length&&input.every((byte,index)=>byte===output[index]));},
testUnicode0017(mx,keep,check){const input="ÁÂÃÇÉÊÍÓÔÕÚáâãçéêíóôõú";const middle=mx.UTF16toUTF8(input);const output=mx.UTF8toUTF16(middle);check(input===output);},
testUnicode0018(mx,keep,check){const input=new Uint8Array([195, 129, 195, 137, 195, 141, 195, 147, 195, 154, 195, 145, 195, 161, 195, 169, 195, 173, 195, 179, 195, 186, 195, 177]);const middle=mx.UTF8toUTF16(input);const output=mx.UTF16toUTF8(middle);check(input.length===output.length&&input.every((byte,index)=>byte===output[index]));},
testUnicode0019(mx,keep,check){const input="ÁÉÍÓÚÑáéíóúñ";const middle=mx.UTF16toUTF8(input);const output=mx.UTF8toUTF16(middle);check(input===output);},
testUnicode0020(mx,keep,check){const input=new Uint8Array([195, 128, 195, 136, 195, 137, 195, 140, 195, 146, 195, 153, 195, 160, 195, 168, 195, 169, 195, 172, 195, 178, 195, 185]);const middle=mx.UTF8toUTF16(input);const output=mx.UTF16toUTF8(middle);check(input.length===output.length&&input.every((byte,index)=>byte===output[index]));},
testUnicode0021(mx,keep,check){const input="ÀÈÉÌÒÙàèéìòù";const middle=mx.UTF16toUTF8(input);const output=mx.UTF8toUTF16(middle);check(input===output);},
testUnicode0022(mx,keep,check){const input=new Uint8Array([195, 128, 195, 130, 195, 134, 195, 135, 195, 136, 195, 137, 195, 138, 195, 139, 195, 142, 195, 143, 195, 148, 197, 146, 195, 153, 195, 155, 195, 156, 197, 184, 195, 160, 195, 162, 195, 166, 195, 167, 195, 168, 195, 169, 195, 170, 195, 171, 195, 174, 195, 175, 195, 180, 197, 147, 195, 185, 195, 187, 195, 188, 195, 191]);const middle=mx.UTF8toUTF16(input);const output=mx.UTF16toUTF8(middle);check(input.length===output.length&&input.every((byte,index)=>byte===output[index]));},
testUnicode0023(mx,keep,check){const input="ÀÂÆÇÈÉÊËÎÏÔŒÙÛÜŸàâæçèéêëîïôœùûüÿ";const middle=mx.UTF16toUTF8(input);const output=mx.UTF8toUTF16(middle);check(input===output);},
testUnicode0024(mx,keep,check){const input=new Uint8Array([226, 138, 149, 226, 138, 151, 226, 138, 150, 226, 138, 153, 226, 138, 152, 226, 138, 154, 226, 138, 155, 226, 136, 147, 194, 177, 226, 136, 151, 226, 136, 149, 226, 138, 179, 226, 138, 178, 226, 136, 169, 226, 136, 170, 226, 138, 134, 226, 138, 135, 226, 138, 130, 226, 138, 131, 226, 136, 133, 226, 136, 136, 226, 136, 137, 226, 136, 139, 226, 136, 140, 226, 136, 128, 226, 136, 131, 226, 136, 132, 226, 138, 150, 226, 138, 168, 226, 138, 173, 226, 136, 135, 226, 136, 130, 226, 136, 157, 226, 136, 158, 226, 136, 181, 226, 136, 180, 226, 138, 162, 226, 138, 163, 226, 138, 164, 226, 138, 165, 226, 136, 170, 226, 136, 169, 226, 136, 167, 226, 136, 168, 226, 136, 142, 226, 138, 130, 226, 138, 131, 226, 138, 134, 226, 138, 135, 226, 136, 160, 226, 136, 159, 226, 136, 161, 226, 136, 162, 226, 136, 165, 226, 136, 166, 226, 136, 169, 226, 136, 170, 226, 138, 130, 226, 138, 131, 226, 138, 134, 226, 138, 135, 226, 138, 157, 226, 138, 158, 226, 138, 159, 226, 138, 160, 226, 138, 161, 226, 138, 162, 226, 138, 163, 226, 138, 164, 226, 138, 165, 226, 138, 167, 226, 138, 168, 226, 138, 169, 226, 138, 170, 226, 136, 151]);const middle=mx.UTF8toUTF16(input);const output=mx.UTF16toUTF8(middle);check(input.length===output.length&&input.every((byte,index)=>byte===output[index]));},
testUnicode0025(mx,keep,check){const input="⊕⊗⊖⊙⊘⊚⊛∓±∗∕⊳⊲∩∪⊆⊇⊂⊃∅∈∉∋∌∀∃∄⊖⊨⊭∇∂∝∞∵∴⊢⊣⊤⊥∪∩∧∨∎⊂⊃⊆⊇∠∟∡∢∥∦∩∪⊂⊃⊆⊇⊝⊞⊟⊠⊡⊢⊣⊤⊥⊧⊨⊩⊪∗";const middle=mx.UTF16toUTF8(input);const output=mx.UTF8toUTF16(middle);check(input===output);},
};
// END generated original Unicode roundtrips
// Complete manual translations of the original Bell/GHSA regression bodies.
// Assertions, tolerances, construction order and settings restoration remain.
function tokenCount(expression){
  const tokens=expression.getCopyOfInitialTokens();
  try{return tokens.length;}finally{for(const token of tokens)token?.delete();}
}
export const nativeEdgeCases={
  testNativePointerPreconditions,
  testApi0233(mx,keep,check,require,context){
    const result=testCancellation(mx,keep,context.observeStdout);
    context.recordAdaptation(result);
    check(result.predicates.every(Boolean));
  },
  ...nativeUnicodeCases,
  testApi0238(mx,keep,check){
    // Test signatures only; the runner isolates this case in its own process.
    mx.License.iConfirmNonCommercialUse('INFIMA1');
    const useType1=mx.License.checkIfUseTypeConfirmed(),msg1=mx.License.getUseTypeConfirmationMessage(),err1=mx.License.getErrorMessage();
    mx.License.iConfirmCommercialUse('INFIMA2');
    const useType2=mx.License.checkIfUseTypeConfirmed(),msg2=mx.License.getUseTypeConfirmationMessage(),err2=mx.License.getErrorMessage();
    mx.License.iConfirmNonCommercialUse('INFIMA3');
    const useType3=mx.License.checkIfUseTypeConfirmed(),msg3=mx.License.getUseTypeConfirmationMessage(),err3=mx.License.getErrorMessage();
    mx.License.iConfirmCommercialUse('INFI');
    const useType4=mx.License.checkIfUseTypeConfirmed(),msg4=mx.License.getUseTypeConfirmationMessage(),err4=mx.License.getErrorMessage();
    keep(mx.StringModel.getStringResources());
    const contains=(a,b)=>textContains(a,b),warning='WARNING',nonCommercial='confirmed the non-commercial';
    check(useType1&&useType2&&useType3&&useType4
      &&contains(msg1,'INFIMA1')&&contains(msg2,'INFIMA1')&&contains(msg3,'INFIMA1')&&contains(msg4,'INFIMA1')
      &&err1.length===0&&contains(err2,warning)&&contains(err3,warning)&&contains(err4,warning)
      &&contains(msg1,nonCommercial)&&contains(msg2,nonCommercial)&&contains(msg3,nonCommercial)&&contains(msg4,nonCommercial));
  },
  testBellNumberInputBounds(mx,keep,check){
    const bellNumbers=[1,1,2,5,15,52,203,877,4140,21147,115975];
    for(let n=0;n<11;n++){
      check(mx.MathFunctions.bellNumber(n)===bellNumbers[n]);
      check(mx.MathFunctions.bellNumber(Number(n))===bellNumbers[n]);
    }
    const oversized=[-1,(-2147483648),46341,65536,1305134913,2147483647];
    for(const n of oversized)check(Number.isNaN(mx.MathFunctions.bellNumber(n)));
    const invalid=[NaN,Number.NEGATIVE_INFINITY,Number.POSITIVE_INFINITY,
      -Number.MAX_VALUE,Number.MAX_VALUE,-4294967296.0,4294967296.0,
      999999.0*9999999.0,(-2147483648),2147483647];
    for(const n of invalid)check(Number.isNaN(mx.MathFunctions.bellNumber(n)));
    check(Number.isNaN(keep(new mx.Expression('Bell(2^32)')).calculate()));
  },
  testSyn0418(mx,keep,check,require){
    try{
      const zeros='0'.repeat(40000);
      const literals=[zeros+'1','0.'+zeros+'1','1e-'+zeros+'2',zeros+'1pi',zeros+'1e'];
      const values=[1,0,0.01,mx.MathConstants.PI,mx.MathConstants.E];
      for(let i=0;i<5;i++){
        const expression=keep(new mx.Expression(literals[i]));
        check(expression.checkSyntax());check(Math.abs(expression.calculate()-values[i])<=1e-14);
        check(tokenCount(expression)===(i<3?1:3));
      }
      mx.mXparser.disableAttemptToFixExpStrMode();
      const invalid=keep(new mx.Expression(zeros+'1e+'));
      require(invalid.getExpressionString()!=='');
      check(!invalid.checkSyntax());check(Number.isNaN(invalid.calculate()));check(tokenCount(invalid)===4);
    }finally{mx.mXparser.setDefaultOptions();}
  },
  testSyn0419(mx,keep,check){
    try{
      const expressions=['00012','.5','1-2','-1+2','(-2)+3','1e-2+3','1e','1e+','1e-','1e++2','1.2.3','1_2','2_1_2','1_2pi','b.101'];
      const values=[12,.5,-1,1,1,3.01,mx.MathConstants.E,mx.MathConstants.E,mx.MathConstants.E,100,.36,.5,2.5,mx.MathConstants.PI/2,5];
      for(let i=0;i<15;i++){
        const expression=keep(new mx.Expression(expressions[i]));
        check(expression.checkSyntax());check(Math.abs(expression.calculate()-values[i])<=1e-13);
      }
      for(const str of ['1.','1.e2','1..2','pi12','1e2e3']){
        const expression=keep(new mx.Expression(str));check(!expression.checkSyntax());check(Number.isNaN(expression.calculate()));
      }
      const adjacent=keep(new mx.Expression('12pi'));adjacent.disableImpliedMultiplicationMode();
      check(!adjacent.checkSyntax());check(tokenCount(adjacent)===1);
    }finally{mx.mXparser.setDefaultOptions();}
  }
};

// Exact nine original assertions from testFunctionNamedListConstructor.
export function namedListNativeCase(mx,keep,check,require){
  const names=keep(mx.new_List('StringPtr'));names.add('x');names.add('y');
  const name='ff',body='x+y',f=keep(new mx.Function(name,body,names));
  require(f.checkSyntax());
  check(f.getParametersNumber()===2);
  const self=keep(f.getFunction('ff'));check(self!==null&&self.isAliasOf(f));
  check(f.calculate(1,2)===3);
  const clone=keep(f.cloneForThreadSafe());check(clone.calculate(2,3)===5);
  for(const args of [[name,body,null],[null,body,names],[name,null,names],['1!',body,names]]){
    const invalid=new mx.Function(...args);try{check(!invalid.checkSyntax());}finally{invalid.delete();}
  }
}

Object.assign(nativeEdgeCases,{testFunctionNamedListConstructor:namedListNativeCase});

// Original testApi0171: successful binary roundtrip of user-created mutual graphs.
function serializedMutualGraphCase(mx,keep,check){
  const a=keep(new mx.Constant('a = 0.0001'));
  const s=keep(new mx.Function('s(x) = if( abs(x) < a, x, 2*s(x/2)*c(x/2) )',a));
  const c=keep(new mx.Function('c(x) = if( abs(x) < a, 1, c(x/2)^2-s(x/2)^2 )',a));
  a.delete();s.addDefinitions(c);c.addDefinitions(s);
  const e1=keep(new mx.Expression('sin(5)-s(5)',s)),e2=keep(new mx.Expression('cos(5)-c(5)',c));
  let es1=null,es2=null;
  function disconnect(expression,name,other){
    if(expression===null)return;
    const root=expression.getFunction(name);if(root===null)return;
    let mate=null;
    try{mate=root.getFunction(other);if(mate!==null){root.removeFunctions(mate);mate.removeFunctions(root);}}
    finally{mate?.delete();root.delete();}
  }
  try{
    const v1=e1.calculate(),v2=e2.calculate(),syn1=e1.getSyntaxStatus(),syn2=e2.getSyntaxStatus();
    c.delete();s.delete();mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
    const data1=mx.SerializationUtils.serializeToBytes(e1),data2=mx.SerializationUtils.serializeToBytes(e2);
    es1=mx.SerializationUtils.deserializeFromBytes(data1,mx.Expression);if(es1!==null)keep(es1);
    es2=mx.SerializationUtils.deserializeFromBytes(data2,mx.Expression);if(es2!==null)keep(es2);
    mx.SerializationUtils.disableBinarySerialization();
    let result=false;
    if(es1!==null&&es2!==null){
      const syns1=es1.getSyntaxStatus(),syns2=es2.getSyntaxStatus(),vs1=es1.calculate(),vs2=es2.calculate();
      if(syn1===syns1&&syn2===syns2)
        if(e1.getExpressionString()===es1.getExpressionString()&&e2.getExpressionString()===es2.getExpressionString()&&v1===vs1&&v2===vs2)result=true;
    }
    check(result);
  }finally{
    mx.SerializationUtils.disableBinarySerialization();
    // Teardown only the genuine mutual owning cycles established in this test.
    disconnect(e1,'s','c');disconnect(es1,'s','c');disconnect(es2,'c','s');
  }
}
Object.assign(nativeEdgeCases,{testApi0171:serializedMutualGraphCase});

// Original getTempDir/canonical bookkeeping maps to the verified SDK /tmp.
// The original W1 log confirms /tmp/mxp_ser_test.ser; no host paths are mounted.
const filesystemNativeCases={
 testApi0172(mx,keep,check){
  const x=keep(new mx.Argument('x = 5')),f=keep(new mx.Function('f(x,y) = x + 2*y'));
  const e=keep(new mx.Expression('f(2,3)*x',f,x)),v=e.calculate(),path='/tmp/mxp_ser_test.ser';let created=false;
  mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
  try{
   const serializationDone=mx.SerializationUtils.serializeToFile(e,path);created=serializationDone;
   const es=mx.SerializationUtils.deserializeFromFile(path,mx.Expression);
   if(es!==null)keep(es);
   if(created){mx.FS.unlink(path);created=false;}
   let result=false;if(es!==null){const vs=es.calculate();if(e.getExpressionString()===es.getExpressionString()&&v===vs)result=true;}
   check(result);
  }finally{mx.SerializationUtils.disableBinarySerialization();if(created)mx.FS.unlink(path);}
 },
 testApi0175(mx,keep,check){
  const x=keep(new mx.Argument('x = 5'));mx.SerializationUtils.disableBinarySerialization();
  const serializationDone=mx.SerializationUtils.serializeToFile(x,'/tmp/mxp_ser_test.ser');
  check(!serializationDone&&!mx.SerializationUtils.checkLastOperationWasSuccessful());
 },
 testApi0178(mx,keep,check){
  const x=keep(new mx.Argument('x = 5')),path='/tmp/mxp_ser_test.ser';let created=false;
  try{
   mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
   const serializationDone=mx.SerializationUtils.serializeToFile(x,path);created=serializationDone;
   mx.SerializationUtils.disableBinarySerialization();
   const xs=mx.SerializationUtils.deserializeFromFile(path,mx.Argument);if(xs!==null)keep(xs);
   check(serializationDone&&xs===null&&!mx.SerializationUtils.checkLastOperationWasSuccessful());
  }finally{mx.SerializationUtils.disableBinarySerialization();if(created)mx.FS.unlink(path);}
 },
 testApi0241(mx,keep,check){
  const x=keep(new mx.Argument('x'));mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
  try{
   const nullExecuted=mx.SerializationUtils.serializeToFile(x,null),nullMsg=mx.SerializationUtils.getLastOperationMessage(),nullStatus=mx.SerializationUtils.checkLastOperationWasSuccessful();
   const emptyExecuted=mx.SerializationUtils.serializeToFile(x,''),emptyMsg=mx.SerializationUtils.getLastOperationMessage(),emptyStatus=mx.SerializationUtils.checkLastOperationWasSuccessful();
   const objectExecuted=mx.SerializationUtils.serializeToFile(null,'/tmp'),objectMsg=mx.SerializationUtils.getLastOperationMessage(),objectStatus=mx.SerializationUtils.checkLastOperationWasSuccessful();
   const wrongExecuted=mx.SerializationUtils.serializeToFile(x,'X:/XYZ'),wrongMsg=mx.SerializationUtils.getLastOperationMessage(),wrongStatus=mx.SerializationUtils.checkLastOperationWasSuccessful();
   mx.SerializationUtils.disableBinarySerialization();const r=keep(mx.StringModel.getStringResources());
   check(!nullExecuted&&!nullStatus&&textContains(nullMsg,r.NULL_FILE_PATH_PROVIDED)
    &&!emptyExecuted&&!emptyStatus&&textContains(emptyMsg,r.FILE_PATH_ZERO_LENGTH_PROVIDED)
    &&!objectExecuted&&!objectStatus&&textContains(objectMsg,r.NULL_OBJECT_PROVIDED)
    &&!wrongExecuted&&!wrongStatus&&textContains(wrongMsg,r.EXCEPTION));
  }finally{mx.SerializationUtils.disableBinarySerialization();}
 },
 testApi0244(mx,keep,check){
  mx.SerializationUtils.enableBinarySerializationIamAwareOfSecurityRisks();
  try{
   const nullExecuted=mx.SerializationUtils.deserializeFromFile(null,mx.Argument),nullMsg=mx.SerializationUtils.getLastOperationMessage(),nullStatus=mx.SerializationUtils.checkLastOperationWasSuccessful();if(nullExecuted!==null)keep(nullExecuted);
   const emptyExecuted=mx.SerializationUtils.deserializeFromFile('',mx.Argument),emptyMsg=mx.SerializationUtils.getLastOperationMessage(),emptyStatus=mx.SerializationUtils.checkLastOperationWasSuccessful();if(emptyExecuted!==null)keep(emptyExecuted);
   const directoryExecuted=mx.SerializationUtils.deserializeFromFile('/tmp',mx.Argument),directoryMsg=mx.SerializationUtils.getLastOperationMessage(),directoryStatus=mx.SerializationUtils.checkLastOperationWasSuccessful();if(directoryExecuted!==null)keep(directoryExecuted);
   const wrongExecuted=mx.SerializationUtils.deserializeFromFile('X:/XYZ',mx.Argument),wrongMsg=mx.SerializationUtils.getLastOperationMessage(),wrongStatus=mx.SerializationUtils.checkLastOperationWasSuccessful();if(wrongExecuted!==null)keep(wrongExecuted);
   mx.SerializationUtils.disableBinarySerialization();const r=keep(mx.StringModel.getStringResources());
   check(nullExecuted===null&&!nullStatus&&textContains(nullMsg,r.NULL_FILE_PATH_PROVIDED)
    &&emptyExecuted===null&&!emptyStatus&&textContains(emptyMsg,r.FILE_PATH_ZERO_LENGTH_PROVIDED)
    &&directoryExecuted===null&&!directoryStatus&&textContains(directoryMsg,r.FILE_PATH_IS_NOT_A_FILE)
    &&wrongExecuted===null&&!wrongStatus&&textContains(wrongMsg,r.FILE_PATH_NOT_EXISTS));
  }finally{mx.SerializationUtils.disableBinarySerialization();}
 }
};
Object.assign(nativeEdgeCases,filesystemNativeCases);

// Original testApi0230 is explicitly a console/API smoke scenario, ending CHECK(true).
// Actual public/native calls and nonzero native console output remain traceable.
function consoleNativeSmokeCase(mx,keep,check){
 const m=mx.mXparser;m.consolePrintln('test');m.consolePrintln();m.consolePrint('test');
 m.consolePrintHelp();m.consolePrintLicense();m.consolePrintSettings();m.consolePrintSettings('aaa');
 m.consolePrintln(['a','b']);m.consolePrintln(null);
 m.consolePrintHelp('sin');
 const x=keep(new mx.Argument('x = 2')),c=keep(new mx.Constant('c  = 3')),f=keep(new mx.Function('f(x,y,z)=x*y*z'));
 const r=keep(new mx.RecursiveArgument('r(n) = n*r(n-1)'));r.addBaseCase(1,1);
 const e=keep(new mx.Expression('2+2 + x + c + f(1,2,3) + r(5)',x,c,f,r));
 function printTokens(method){const tokens=e.getCopyOfInitialTokens();try{m[method](tokens);}finally{for(const token of tokens)token?.delete();}}
 printTokens('consolePrintTokens');printTokens('consolePrintln');e.consolePrintCopyOfInitialTokens();
 const resources=mx.StringModel.getStringResources();try{resources.print();resources.printInitSrc();}finally{resources.delete();}
 mx.StringModel.print();mx.StringModel.printDescriptions();mx.License.consolePrintLicense();
 m.resetConsoleOutput();m.setConsolePrefix('aaa');m.setDefaultConsolePrefix();m.setConsoleOutputPrefix('aaa');m.setDefaultConsoleOutputPrefix();
 const steps=keep(new mx.CalcStepsRegister());e.setVerboseMode();e.calculate(steps);e.setSilentMode();steps.consolePrint();
 check(true);
}
Object.assign(nativeEdgeCases,{testApi0230:consoleNativeSmokeCase});

function polishResourceDescriptions(mx,keep,check,require){
 const polish=mx.StringResources.languagePolish();
 require(polish!==null);
 keep(polish);
 for(const [field,expected] of [["DESCRIPTION","Opis"],["DESCRIPTION_SHORT","opis"],["CONSTANT_VALUE_VENUS_RADIUS_MEAN","Średni promień Wenus"],["CONSTANT_VALUE_VENUS_MASS","Masa Wenus"],["FUNCTION_1_ARG_SIN","Trygonometryczny sinus"],["FUNCTION_1_ARG_COS","Trygonometryczny cosinus"],["FUNCTION_1_ARG_TAN","Trygonometryczny tangens"],["FUNCTION_1_ARG_CTAN","Trygonometryczny cotangens"],["FUNCTION_1_ARG_SEC","Trygonometryczny secans"],["FUNCTION_1_ARG_COSEC","Trygonometryczny cosecans"],["FUNCTION_1_ARG_ASIN","Odwrotny trygonometryczny sinus"],["FUNCTION_1_ARG_ACOS","Odwrotny trygonometryczny cosinus"],["FUNCTION_1_ARG_ATAN","Odwrotny trygonometryczny tangens"],["FUNCTION_1_ARG_ACTAN","Odwrotny trygonometryczny cotangens"],["FUNCTION_1_ARG_SINH","Hiperboliczny sinus"],["FUNCTION_1_ARG_COSH","Hiperboliczny cosinus"],["FUNCTION_1_ARG_TANH","Hiperboliczny tangens"],["FUNCTION_1_ARG_COTH","Hiperboliczny cotangens"],["FUNCTION_1_ARG_SECH","Hiperboliczny secans"],["FUNCTION_1_ARG_CSCH","Hiperboliczny cosecans"],["FUNCTION_1_ARG_ARSINH","Odwrotny hiperboliczny sinus"],["FUNCTION_1_ARG_ARCOSH","Odwrotny hiperboliczny cosinus"],["FUNCTION_1_ARG_ARTANH","Odwrotny hiperboliczny tangens"],["FUNCTION_1_ARG_ARCOTH","Odwrotny hiperboliczny cotangens"],["FUNCTION_1_ARG_ARSECH","Odwrotny hiperboliczny secans"],["FUNCTION_1_ARG_ARCSCH","Odwrotny hiperboliczny cosecans"],["FUNCTION_1_ARG_ARCSEC","Odwrotny trygonometryczny secans"],["FUNCTION_1_ARG_ARCCSC","Odwrotny trygonometryczny cosecans"],["PARSER_SYMBOL_LEFT_PARENTHESES","Lewy nawias"],["PARSER_SYMBOL_RIGHT_PARENTHESES","Prawy nawias"]]){
  require(polish[field]!==null);
  check(polish[field]===expected);
 }
}
Object.assign(nativeEdgeCases,{testPolishResourceDescriptions:polishResourceDescriptions});
