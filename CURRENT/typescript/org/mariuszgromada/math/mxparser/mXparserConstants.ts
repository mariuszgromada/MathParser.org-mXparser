import { java } from 'j4ts/j4ts';
import { TokenModification } from './Miscellaneous';

/**
 * mXparserConstants provides constant values used in mXparser frameworks. This helps
 * reduce cyclic dependencies in JavaScript code.
 * 
 * @author <b>Thilo Schaber</b>
 * 
 * @version        1.0.0
 * @class
 */
export class mXparserConstants {

    /**
     * List of built-in tokens to modify
     */
    static tokensToModify: java.util.List<TokenModification>; public static tokensToModify_$LI$(): java.util.List<TokenModification> { if (mXparserConstants.tokensToModify == null) { mXparserConstants.tokensToModify = <any>(new java.util.ArrayList<TokenModification>()); } return mXparserConstants.tokensToModify; }

    /**
    * mXparser version
    */
    public static VERSION: string = "4.4.2";

    public static VERSION_CODE_NAME: string = "Gemoni";

    public static VERSION_NAME: string; public static VERSION_NAME_$LI$(): string { if (mXparserConstants.VERSION_NAME == null) { mXparserConstants.VERSION_NAME = mXparserConstants.VERSION + " " + mXparserConstants.VERSION_CODE_NAME; } return mXparserConstants.VERSION_NAME; }

    public static NAMEv10: string = "1.0";

    public static NAMEv20: string = "2.0";

    public static NAMEv23: string = "2.3";

    public static NAMEv24: string = "2.4";

    public static NAMEv30: string = "3.0";

    public static NAMEv40: string = "4.0";

    public static NAMEv41: string = "4.1";

    public static NAMEv42: string = "4.2";

    public static NAMEv43: string = "4.3";

    public static NAMEv44: string = "4.4";

    /**
     * License info.
     */
    public static LICENSE: string; public static LICENSE_$LI$(): string { if (mXparserConstants.LICENSE == null) { mXparserConstants.LICENSE = "                      mXparser - version " + mXparserConstants.VERSION + "\n         A flexible mathematical eXpressions parser for JAVA.\n\nYou may use this software under the condition of Simplified BSD License:\n\nCopyright 2010-2018 MARIUSZ GROMADA. All rights reserved.\n\nRedistribution and use in source and binary forms, with or without modification, are\npermitted provided that the following conditions are met:\n\n   1. Redistributions of source code must retain the above copyright notice, this list of\n      conditions and the following disclaimer.\n\n   2. Redistributions in binary form must reproduce the above copyright notice, this list\n      of conditions and the following disclaimer in the documentation and/or other materials\n      provided with the distribution.\n\nTHIS SOFTWARE IS PROVIDED BY MARIUSZ GROMADA ``AS IS\'\' AND ANY EXPRESS OR IMPLIED\nWARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND\nFITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL MARIUSZ GROMADA OR\nCONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR\nCONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR\nSERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON\nANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING\nNEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF\nADVISED OF THE POSSIBILITY OF SUCH DAMAGE.\n\nThe views and conclusions contained in the software and documentation are those of the\nauthors and should not be interpreted as representing official policies, either expressed\nor implied, of MARIUSZ GROMADA.\n\nIf you have any questions/bugs feel free to contact:\n\n    Mariusz Gromada\n    mariuszgromada.org@gmail.com\n    http://mathspace.plt/\n    http://mathparser.org/\n    http://github.com/mariuszgromada/MathParser.org-mXparser\n    http://mariuszgromada.github.io/MathParser.org-mXparser/\n    http://mxparser.sourceforge.net/\n    http://bitbucket.org/mariuszgromada/mxparser/\n    http://mxparser.codeplex.com/\n    http://janetsudoku.mariuszgromada.org/\n"; } return mXparserConstants.LICENSE; }

    /**
     * Framework used to compile mXparser
     */
    public static BUIT_FOR: string = "JDK 8";

    /**
     * FOUND / NOT_FOUND
     * used for matching purposes
     */
    public static NOT_FOUND: number = -1;

    public static FOUND: number = 0;

    /**
     * Console output string  for below methods
     * 
     * @see mXparser.#consolePrintln(Object)
     * @see mXparser.#consolePrint(Object)
     */
    public static CONSOLE_OUTPUT: string = "";

    public static CONSOLE_PREFIX: string; public static CONSOLE_PREFIX_$LI$(): string { if (mXparserConstants.CONSOLE_PREFIX == null) { mXparserConstants.CONSOLE_PREFIX = "[mXparser-v." + mXparserConstants.VERSION + " bin " + mXparserConstants.BUIT_FOR + "] "; } return mXparserConstants.CONSOLE_PREFIX; }

    public static CONSOLE_OUTPUT_PREFIX: string; public static CONSOLE_OUTPUT_PREFIX_$LI$(): string { if (mXparserConstants.CONSOLE_OUTPUT_PREFIX == null) { mXparserConstants.CONSOLE_OUTPUT_PREFIX = mXparserConstants.CONSOLE_PREFIX_$LI$(); } return mXparserConstants.CONSOLE_OUTPUT_PREFIX; }

    public static CONSOLE_ROW_NUMBER: number = 1;

    public static PRIMES_CACHE_NOT_INITIALIZED: number = -1;

    /**
     * Threads number settings
     */
    public static THREADS_NUMBER: number; public static THREADS_NUMBER_$LI$(): number { if (mXparserConstants.THREADS_NUMBER == null) { mXparserConstants.THREADS_NUMBER = 1; } return mXparserConstants.THREADS_NUMBER; }


    /**
     * Double floating-point precision arithmetic causes
     * 
     * mXparser provides intelligent ULP rounding to avoid some
     * type of this errors.
     */
    public static ulpRounding: boolean = false;

    /**
     * Double floating-point precision arithmetic causes
     * rounding problems, i.e. 0.1 + 0.1 + 0.1 is different than 0.3
     * 
     * mXparser provides intelligent canonical rounding to avoid majority
     * of this errors.
     */
    public static canonicalRounding: boolean = true;

    /**
     * Indicator marking whether to round final result
     * to precise integer when result is very close
     * to integer, solves problems like
     * sin(pi) = 0
     */
    public static almostIntRounding: boolean = true;

    public static DEFAULT_MAX_RECURSION_CALLS: number = 200;

    /**
     * Internal limit for counter to avoid infinite loops while calculating
     * expression defined in the way shown by below examples
     * 
     * Argument x = new Argument("x = 2*y");
     * Argument y = new Argument("y = 2*x");
     * x.addDefinitions(y);
     * y.addDefinitions(x);
     * 
     * Function f = new Function("f(x) = 2*g(x)");
     * Function g = new Function("g(x) = 2*f(x)");
     * f.addDefinitions(g);
     * g.addDefinitions(f);
     */
    public static MAX_RECURSION_CALLS: number; public static MAX_RECURSION_CALLS_$LI$(): number { if (mXparserConstants.MAX_RECURSION_CALLS == null) { mXparserConstants.MAX_RECURSION_CALLS = mXparserConstants.DEFAULT_MAX_RECURSION_CALLS; } return mXparserConstants.MAX_RECURSION_CALLS; }

    /**
     * List of built-in tokens to remove.
     */
    public static tokensToRemove: java.util.List<string>; public static tokensToRemove_$LI$(): java.util.List<string> { if (mXparserConstants.tokensToRemove == null) { mXparserConstants.tokensToRemove = <any>(new java.util.ArrayList<string>()); } return mXparserConstants.tokensToRemove; }


    /**
     * Indicator whether mXparser operates in radians / degrees mode
     * true - degrees mode
     * false - radians mode
     * 
     * Default false (radians mode)
     */
    public static degreesMode: boolean = false;

    /**
     * Indicator whether user defined tokens should override
     * built-in tokens.
     */
    public static overrideBuiltinTokens: boolean = false;

    /**
     * Options changeset
     */
    public static optionsChangesetNumber: number = 0;

    /**
     * Indicator whether to call cancel current calculation
     */
    public static cancelCurrentCalculationFlag: boolean = false;

    /**
     * Converts List of double to double[]
     * 
     * @param      {*} numbers             the numbers list
     * 
     * @return     {double[]} numbers array
     */
    public static arrayList2double(numbers: java.util.List<number>): number[] {
        if (numbers == null) return null;
        const size: number = numbers.size();
        const newNumbers: number[] = (s => { let a = []; while (s-- > 0) a.push(0); return a; })(size);
        for (let i: number = 0; i < size; i++) { newNumbers[i] = /* doubleValue */numbers.get(i); }
        return newNumbers;
    }

    /**
     * Check whether a flag to cancel current calculation process is set.
     * 
     * {@link #cancelCurrentCalculation()}
     * {@link #resetCancelCurrentCalculationFlag()}
     * 
     * @return {boolean} true in case cancel calculation flag is active,
     * otherwise false
     */
    public static isCurrentCalculationCancelled(): boolean {
        return mXparserConstants.cancelCurrentCalculationFlag;
    }

    /**
     * Function used to introduce some compatibility
     * between JAVA and C# while regexp matching.
     * 
     * @param {string} str         String
     * @param {string} pattern     Pattern (regexp)
     * 
     * @return            {boolean} True if pattern matches entirely, False otherwise
     */
    public static regexMatch(str: string, pattern: string): boolean {
        return java.util.regex.Pattern.matches(pattern, str);
    }

    /**
     * Prints object.toString to the Console
     * 
     * @param {*} o    Object to print
     */
    public static consolePrint(o: any) {
        {
            if ((mXparserConstants.CONSOLE_ROW_NUMBER === 1) && (mXparserConstants.CONSOLE_OUTPUT === (""))) {
                console.info(mXparserConstants.CONSOLE_PREFIX_$LI$());
                mXparserConstants.CONSOLE_OUTPUT = mXparserConstants.CONSOLE_PREFIX_$LI$();
            }
            console.info(o);
            mXparserConstants.CONSOLE_OUTPUT = mXparserConstants.CONSOLE_OUTPUT + o;
        };
    }

    /**
     * Prints array of strings
     * 
     * @param {java.lang.String[]} stringArray  array of strinfs
     */
    public static consolePrintln(stringArray?: any) {
        if (((stringArray != null && stringArray instanceof <any>Array && (stringArray.length == 0 || stringArray[0] == null || (typeof stringArray[0] === 'string'))) || stringArray === null)) {
            return <any>mXparserConstants.consolePrintln$java_lang_String_A(stringArray);
        } else if (((stringArray != null) || stringArray === null)) {
            return <any>mXparserConstants.consolePrintln$java_lang_Object(stringArray);
        } else if (stringArray === undefined) {
            return <any>mXparserConstants.consolePrintln$();
        } else throw new Error('invalid overload');
    }

    public static consolePrintln$() {
        {
            if ((mXparserConstants.CONSOLE_ROW_NUMBER === 1) && (mXparserConstants.CONSOLE_OUTPUT === (""))) {
                console.info(mXparserConstants.CONSOLE_PREFIX_$LI$());
                mXparserConstants.CONSOLE_OUTPUT = mXparserConstants.CONSOLE_PREFIX_$LI$();
            }
            console.info();
            mXparserConstants.CONSOLE_ROW_NUMBER++;
            //console.info(mXparserConstants.CONSOLE_PREFIX_$LI$());
            mXparserConstants.CONSOLE_OUTPUT = mXparserConstants.CONSOLE_OUTPUT + "\n" + mXparserConstants.CONSOLE_OUTPUT_PREFIX_$LI$();
        };
    }

    public static consolePrintln$java_lang_Object(o: any) {
        {
            if ((mXparserConstants.CONSOLE_ROW_NUMBER === 1) && (mXparserConstants.CONSOLE_OUTPUT === (""))) {
                console.info(mXparserConstants.CONSOLE_PREFIX_$LI$());
                mXparserConstants.CONSOLE_OUTPUT = mXparserConstants.CONSOLE_PREFIX_$LI$();
            }
            console.info(o);
            mXparserConstants.CONSOLE_ROW_NUMBER++;
            //console.info(mXparserConstants.CONSOLE_PREFIX_$LI$());
            mXparserConstants.CONSOLE_OUTPUT = mXparserConstants.CONSOLE_OUTPUT + o + "\n" + mXparserConstants.CONSOLE_OUTPUT_PREFIX_$LI$();
        };
    }

    public static consolePrintln$java_lang_String_A(stringArray: string[]) {
        if (stringArray == null) {
            mXparserConstants.consolePrintln$java_lang_Object("null");
            return;
        }
        for (let index196 = 0; index196 < stringArray.length; index196++) {
            let s = stringArray[index196];
            mXparserConstants.consolePrintln$java_lang_Object(s)
        }
    }

    /**
     * Double floating-point precision arithmetic causes
     * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different than 0.3,
     * additionally doubles are having a lot of advantages
     * providing flexible number representation regardless of
     * number size. mXparser is fully based on double numbers
     * and that is why is providing intelligent canonical rounding
     * to minimize misleading results. By default this option is
     * enabled resulting in automatic rounding only in some cases.
     * Using this mode 2.5 - 2.2 = 0.3
     * 
     * @return {boolean} True if Canonical rounding is enabled, otherwise false.
     */
    public static checkIfCanonicalRounding(): boolean {
        return mXparserConstants.canonicalRounding;
    }

    /**
     * Checks whether mXparser operates in radians mode for
     * trigonometric functions.
     * 
     * @return {boolean} true - if radians mode, false - otherwise
     */
    public static checkIfRadiansMode(): boolean {
        return !mXparserConstants.degreesMode;
    }

    /**
     * Checks whether mXparser operates in degrees mode for
     * trigonometric functions.
     * 
     * @return {boolean} true - if degrees mode, false - otherwise
     */
    public static checkIfDegreesMode(): boolean {
        return mXparserConstants.degreesMode;
    }

    /**
     * Method give a signal to other methods to cancel current calculation. This is a flag,
     * remember to reset this flag after process is cancelled and you are going to start
     * new calculation process.
     */
     public static cancelCurrentCalculation() {
        mXparserConstants.cancelCurrentCalculationFlag = true;
    }

    /**
     * Resets a flag giving signal to the engine to cancel current calculation.
     * 
     * {@link #cancelCurrentCalculation()}
     */
    public static resetCancelCurrentCalculationFlag() {
        mXparserConstants.cancelCurrentCalculationFlag = false;
    }
}