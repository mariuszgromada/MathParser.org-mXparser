import { BinaryRelations } from './mathcollection/BinaryRelations';
import { NumberTheory } from './mathcollection/NumberTheory';
import { PrimesCache } from './mathcollection/PrimesCache';
import { ProbabilityDistributions } from './mathcollection/ProbabilityDistributions';
import { BinaryRelation } from './parsertokens/BinaryRelation';
import { BitwiseOperator } from './parsertokens/BitwiseOperator';
import { BooleanOperator } from './parsertokens/BooleanOperator';
import { CalculusOperator } from './parsertokens/CalculusOperator';
import { ConstantValue } from './parsertokens/ConstantValue';
import { Function1Arg } from './parsertokens/Function1Arg';
import { Function2Arg } from './parsertokens/Function2Arg';
import { Function3Arg } from './parsertokens/Function3Arg';
import { FunctionVariadic } from './parsertokens/FunctionVariadic';
import { KeyWord } from './parsertokens/KeyWord';
import { Operator } from './parsertokens/Operator';
import { ParserSymbol } from './parsertokens/ParserSymbol';
import { RandomVariable } from './parsertokens/RandomVariable';
import type { Token } from './parsertokens/Token';
import { Unit } from './parsertokens/Unit';
import { Expression } from './Expression';
import { Constant } from './Constant';
import { FunctionConstants } from './FunctionConstants';
import { RecursiveArgument } from './RecursiveArgument';
import type { Argument } from './Argument';
import { ArgumentConstants } from './ArgumentConstants';
import { mXparserConstants } from './mXparserConstants';
import { TokenModification } from './Miscellaneous';
import { java } from 'j4ts/j4ts';
import { javaemul } from 'j4ts/j4ts';

/**
 * mXparser class provides usefull methods when parsing, calculating or
 * parameters transforming.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.4.2
 * 
 * @see RecursiveArgument
 * @see Expression
 * @see Function
 * @see Constant
 * @class
 */
export class mXparser {
    /**
     * Empty expression for general help purposes.
     */
    static mXparserExp: Expression; public static mXparserExp_$LI$(): Expression { if (mXparser.mXparserExp == null) { mXparser.mXparserExp = new Expression(); } return mXparser.mXparserExp; }

    /**
     * Prime numbers cache
     */
    public static primesCache: PrimesCache = null;

    public static initPrimesCache$() {
        mXparser.primesCache = new PrimesCache();
    }

    public static initPrimesCache$int(mximumNumberInCache: number) {
        mXparser.primesCache = new PrimesCache(mximumNumberInCache);
    }

    public static initPrimesCache$org_mariuszgromada_math_mxparser_mathcollection_PrimesCache(primesCache: PrimesCache) {
        mXparser.primesCache = primesCache;
    }

    /**
     * Initialization of prime numbers cache.
     * @param {PrimesCache} primesCache The primes cache object
     * @see PrimesCache
     */
    public static initPrimesCache(primesCache?: any) {
        if (((primesCache != null && primesCache instanceof <any>PrimesCache) || primesCache === null)) {
            return <any>mXparser.initPrimesCache$org_mariuszgromada_math_mxparser_mathcollection_PrimesCache(primesCache);
        } else if (((typeof primesCache === 'number') || primesCache === null)) {
            return <any>mXparser.initPrimesCache$int(primesCache);
        } else if (primesCache === undefined) {
            return <any>mXparser.initPrimesCache$();
        } else throw new Error('invalid overload');
    }

    /**
     * Returns true in case when primes cache initialization was successful,
     * otherwise returns false.
     * 
     * @return {boolean} Returns true in case when primes cache initialization was successful,
     * otherwise returns false.
     */
    public static isInitPrimesCacheSuccessful(): boolean {
        if (mXparser.primesCache == null) return false;
        {
            return mXparser.primesCache.isInitSuccessful();
        };
    }

    /**
     * Sets {@link mXparser#primesCache} to null
     */
    public static setNoPrimesCache() {
        mXparser.primesCache = null;
    }

    /**
     * Returns maximum integer number in primes cache
     * @return {number} If primes cache was initialized then maximum number in
     * primes cache, otherwise {@link mXparser#PRIMES_CACHE_NOT_INITIALIZED}
     */
    public static getMaxNumInPrimesCache(): number {
        if (mXparser.primesCache != null) {
            {
                return mXparser.primesCache.getMaxNumInCache();
            };
        } else return mXparserConstants.PRIMES_CACHE_NOT_INITIALIZED;
    }

    /**
     * Gets maximum threads number
     * 
     * @return {number} Threads number.
     */
    public static getThreadsNumber(): number {
        return mXparserConstants.THREADS_NUMBER_$LI$();
    }

    /**
     * Sets default threads number
     */
    public static setDefaultThreadsNumber() {
        mXparserConstants.THREADS_NUMBER = 1;
    }

    /**
     * Sets threads number
     * 
     * @param {number} threadsNumber  Thread number.
     */
    public static setThreadsNumber(threadsNumber: number) {
        if (threadsNumber > 0) mXparserConstants.THREADS_NUMBER = threadsNumber;
    }

    /**
     * Calculates function f(x0) (given as expression) assigning Argument x = x0;
     * 
     * 
     * @param      {Expression} f                   the expression
     * @param      {Argument} x                   the argument
     * @param      {number} x0                  the argument value
     * 
     * @return     {number} f.calculate()
     * 
     * @see        Expression
     */
    public static getFunctionValue(f: Expression, x: Argument, x0: number): number {
        x.setArgumentValue(x0);
        return f.calculate();
    }

    /**
     * Returns array of double values of the function f(i)
     * calculated on the range: i = from to i = to by step = delta
     * 
     * @param {Expression} f            Function expression
     * @param {Argument} index        Index argument
     * @param {number} from         'from' value
     * @param {number} to           'to' value
     * @param {number} delta        'delta' step definition
     * @return             {double[]} Array of function values
     */
    public static getFunctionValues(f: Expression, index: Argument, from: number, to: number, delta: number): number[] {
        if ((/* isNaN */isNaN(delta)) || (/* isNaN */isNaN(from)) || (/* isNaN */isNaN(to)) || (delta === 0)) return null;
        let n: number = 0;
        let values: number[];
        if ((to >= from) && (delta > 0)) {
            for (let i: number = from; i < to; i += delta) { n++; }
            n++;
            values = (s => { let a = []; while (s-- > 0) a.push(0); return a; })(n);
            let j: number = 0;
            for (let i: number = from; i < to; i += delta) {
                {
                    values[j] = mXparser.getFunctionValue(f, index, i);
                    j++;
                };
            }
            values[j] = mXparser.getFunctionValue(f, index, to);
        } else if ((to <= from) && (delta < 0)) {
            for (let i: number = from; i > to; i += delta) { n++; }
            n++;
            values = (s => { let a = []; while (s-- > 0) a.push(0); return a; })(n);
            let j: number = 0;
            for (let i: number = from; i > to; i += delta) {
                {
                    values[j] = mXparser.getFunctionValue(f, index, i);
                    j++;
                };
            }
            values[j] = mXparser.getFunctionValue(f, index, to);
        } else if (from === to) {
            n = 1;
            values = (s => { let a = []; while (s-- > 0) a.push(0); return a; })(n);
            values[0] = mXparser.getFunctionValue(f, index, from);
        } else values = null;
        return values;
    }

    /**
     * Modifies random generator used by the ProbabilityDistributions class.
     * 
     * @param {Random} randomGenerator      Random generator.
     * @see ProbabilityDistributions
     * @see ProbabilityDistributions#randomGenerator
     */
    public static setRandomGenerator(randomGenerator: java.util.Random) {
        if (randomGenerator != null) ProbabilityDistributions.randomGenerator = randomGenerator;
    }

    /**
     * Sets comparison mode to EXACT.
     * @see BinaryRelations
     */
    public static setExactComparison() {
        BinaryRelations.setExactComparison();
    }

    /**
     * Sets comparison mode to EPSILON.
     * @see BinaryRelations
     */
    public static setEpsilonComparison() {
        BinaryRelations.setEpsilonComparison();
    }

    /**
     * Sets epsilon value.
     * @param {number} epsilon   Epsilon value (grater than 0).
     * 
     * @see #setEpsilonComparison()
     * @see BinaryRelations
     */
    public static setEpsilon(epsilon: number) {
        BinaryRelations.setEpsilon(epsilon);
    }

    /**
     * Sets default epsilon value.
     * 
     * @see #setEpsilonComparison()
     * @see BinaryRelations#DEFAULT_COMPARISON_EPSILON
     * @see BinaryRelations
     */
    public static setDefaultEpsilon() {
        BinaryRelations.setDefaultEpsilon();
    }

    /**
     * Returns current epsilon value.
     * @return  {number} Returns current epsilon value.
     * 
     * @see #setEpsilonComparison()
     * @see BinaryRelations
     */
    public static getEpsilon(): number {
        return BinaryRelations.getEpsilon();
    }

    /**
     * Checks if epsilon comparison mode is active;
     * @return  {boolean} True if epsilon mode is active, otherwise returns false.
     * @see #setEpsilonComparison()
     * @see #setExactComparison()
     * @see BinaryRelations
     */
    public static checkIfEpsilonMode(): boolean {
        return BinaryRelations.checkIfEpsilonMode();
    }

    /**
     * Checks if exact comparison mode is active;
     * @return  {boolean} True if exact mode is active, otherwise returns false.
     * @see #setEpsilonComparison()
     * @see #setExactComparison()
     * @see BinaryRelations
     */
    public static checkIfExactMode(): boolean {
        return BinaryRelations.checkIfExactMode();
    }

    /**
     * Enables ULP rounding.
     * Double floating-point precision arithmetic causes
     * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different than 0.3,
     * additionally doubles are having a lot of advantages
     * providing flexible number representation regardless of
     * number size. mXparser is fully based on double numbers
     * and that is why is providing intelligent ULP rounding
     * to minimize misleading results. By default this option is
     * enabled resulting in automatic rounding only in some cases.
     * Using this mode 0.1 + 0.1 + 0.1 = 0.3
     */
    public static enableUlpRounding() {
        mXparserConstants.ulpRounding = true;
    }

    /**
     * Disables ULP rounding.
     * Double floating-point precision arithmetic causes
     * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different than 0.3,
     * additionally doubles are having a lot of advantages
     * providing flexible number representation regardless of
     * number size. mXparser is fully based on double numbers
     * and that is why is providing intelligent ULP rounding
     * to minimize misleading results. By default this option is
     * enabled resulting in automatic rounding only in some cases.
     * Disabling this mode 0.1 + 0.1 + 0.1 will be slightly different than 0.3.
     */
    public static disableUlpRounding() {
        mXparserConstants.ulpRounding = false;
    }

    /**
     * Enables / disables ULP rounding.
     * Double floating-point precision arithmetic causes
     * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different than 0.3,
     * additionally doubles are having a lot of advantages
     * providing flexible number representation regardless of
     * number size. mXparser is fully based on double numbers
     * and that is why is providing intelligent ULP rounding
     * to minimize misleading results. By default this option is
     * enabled resulting in automatic rounding only in some cases.
     * Disabling this mode 0.1 + 0.1 + 0.1 will be slightly different than 0.3.
     * 
     * @param {boolean} ulpRoundingState    True to enable, false to disable
     */
    public static setUlpRounding(ulpRoundingState: boolean) {
        mXparserConstants.ulpRounding = ulpRoundingState;
    }

    /**
     * Double floating-point precision arithmetic causes
     * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different than 0.3,
     * additionally doubles are having a lot of advantages
     * providing flexible number representation regardless of
     * number size. mXparser is fully based on double numbers
     * and that is why is providing intelligent ULP rounding
     * to minimize misleading results. By default this option is
     * enabled resulting in automatic rounding only in some cases.
     * Using this mode 0.1 + 0.1 + 0.1 = 0.3
     * 
     * @return {boolean} True if ULP rounding is enabled, otherwise false.
     */
    public static checkIfUlpRounding(): boolean {
        return mXparserConstants.ulpRounding;
    }

    /**
     * Enables canonical rounding.
     * Double floating-point precision arithmetic causes
     * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different than 0.3,
     * additionally doubles are having a lot of advantages
     * providing flexible number representation regardless of
     * number size. mXparser is fully based on double numbers
     * and that is why is providing intelligent canonical rounding
     * to minimize misleading results. By default this option is
     * enabled resulting in automatic rounding only in some cases.
     * Using this mode 2.5 - 2.2 = 0.3
     */
    public static enableCanonicalRounding() {
        mXparserConstants.canonicalRounding = true;
    }

    /**
     * Disables canonical rounding.
     * Double floating-point precision arithmetic causes
     * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different than 0.3,
     * additionally doubles are having a lot of advantages
     * providing flexible number representation regardless of
     * number size. mXparser is fully based on double numbers
     * and that is why is providing intelligent canonical rounding
     * to minimize misleading results. By default this option is
     * enabled resulting in automatic rounding only in some cases.
     * Using this mode 2.5 - 2.2 = 0.3
     */
    public static disableCanonicalRounding() {
        mXparserConstants.canonicalRounding = false;
    }

    /**
     * Enables / disables canonical rounding.
     * Double floating-point precision arithmetic causes
     * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different than 0.3,
     * additionally doubles are having a lot of advantages
     * providing flexible number representation regardless of
     * number size. mXparser is fully based on double numbers
     * and that is why is providing intelligent ULP rounding
     * to minimize misleading results. By default this option is
     * enabled resulting in automatic rounding only in some cases.
     * Disabling this mode 0.1 + 0.1 + 0.1 will be slightly different than 0.3.
     * 
     * @param {boolean} canonicalRoundingState    True to enable, false to disable
     */
    public static setCanonicalRounding(canonicalRoundingState: boolean) {
        mXparserConstants.canonicalRounding = canonicalRoundingState;
    }

    /**
     * Enables almost integer rounding option causing
     * rounding final calculation result to precise integer
     * if and only if result is very close to integer.
     * Very close condition depends on epsilon.
     * 
     * @see mXparser#setEpsilon(double)
     * @see mXparser#getEpsilon()
     * @see Expression#calculate()
     */
    public static enableAlmostIntRounding() {
        mXparserConstants.almostIntRounding = true;
    }

    /**
     * Disables almost integer rounding option causing
     * rounding final calculation result to precise integer
     * if and only if result is very close to integer.
     * Very close condition depends on epsilon.
     * 
     * @see mXparser#setEpsilon(double)
     * @see mXparser#getEpsilon()
     * @see Expression#calculate()
     */
    public static disableAlmostIntRounding() {
        mXparserConstants.almostIntRounding = false;
    }

    /**
     * Enables / disables almost integer rounding option causing
     * rounding final calculation result to precise integer
     * if and only if result is very close to integer.
     * Very close condition depends on epsilon.
     * 
     * @param {boolean} almostIntRoundingState    True to enable, false to disable
     */
    public static setAlmostIntRounding(almostIntRoundingState: boolean) {
        mXparserConstants.almostIntRounding = almostIntRoundingState;
    }

    /**
     * Returns state of almost integer rounding option causing
     * rounding final calculation result to precise integer
     * if and only if result is very close to integer.
     * Very close condition depends on epsilon.
     * 
     * @return {boolean} true if option enabled, false otherwise
     * 
     * @see mXparser#setEpsilon(double)
     * @see mXparser#getEpsilon()
     * @see Expression#calculate()
     */
    public static checkIfAlmostIntRounding(): boolean {
        return mXparserConstants.almostIntRounding;
    }

    /**
     * Internal limit to avoid infinite loops while calculating
     * expression defined in the way shown by below examples.
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
     * 
     * Currently does not affect properly defined recursive mode.
     * 
     * @param {number} maxAllowedRecursionDepth  Maximum number of allowed recursion calls
     */
    public static setMaxAllowedRecursionDepth(maxAllowedRecursionDepth: number) {
        mXparserConstants.MAX_RECURSION_CALLS = maxAllowedRecursionDepth;
    }

    /**
     * Internal limit to avoid infinite loops while calculating
     * expression defined in the way shown by below examples.
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
     * 
     * Currently does not affect properly defined recursive mode.
     * 
     * @return {number} Max allowed recursion calls
     */
    public static getMaxAllowedRecursionDepth(): number {
        return mXparserConstants.MAX_RECURSION_CALLS_$LI$();
    }

    /**
     * Set mXparser to operate in radians mode for
     * trigonometric functions
     */
    public static setRadiansMode() {
        mXparserConstants.degreesMode = false;
    }

    /**
     * Set mXparser to operate in degrees mode for
     * trigonometric functions
     */
    public static setDegreesMode() {
        mXparserConstants.degreesMode = true;
    }

    /**
     * Sets initial search size for the toFraction method
     * 
     * @param {number} n initial search size, has to be non-zero positive.
     * @see NumberTheory#toFraction(double)
     */
    public static setToFractionInitSearchSize(n: number) {
        NumberTheory.setToFractionInitSearchSize(n);
    }

    /**
     * Gets initial search size used by the toFraction method
     * 
     * @return {number} initial search size used by the toFraction method
     * @see NumberTheory#toFraction(double)
     */
    public static getToFractionInitSearchSize(): number {
        return NumberTheory.getToFractionInitSearchSize();
    }

    /**
     * Removes built-in tokens form the list of tokens recognized by the parsers.
     * Procedure affects only tokens classified to built-in functions, built-in
     * constants, built-in units, built-in random variables.
     * 
     * @param {java.lang.String[]} tokens  List of tokens to remove.
     */
    public static removeBuiltinTokens(...tokens: string[]) {
        if (tokens == null) return;
        {
            for (let index189 = 0; index189 < tokens.length; index189++) {
                let token = tokens[index189];
                if (token != null) if (token.length > 0) if (!mXparserConstants.tokensToRemove_$LI$().contains(token)) mXparserConstants.tokensToRemove_$LI$().add(token);
            }
            mXparserConstants.optionsChangesetNumber++;
        };
    }

    /**
     * Un-marks tokens previously marked to be removed.
     * @param {java.lang.String[]} tokens List of tokens to un-mark.
     */
    public static unremoveBuiltinTokens(...tokens: string[]) {
        if (tokens == null) return;
        if (tokens.length === 0) return;
        if (mXparserConstants.tokensToRemove_$LI$().size() === 0) return;
        {
            for (let index190 = 0; index190 < tokens.length; index190++) {
                let token = tokens[index190];
                if (token != null) mXparserConstants.tokensToRemove_$LI$().remove(token);
            }
            mXparserConstants.optionsChangesetNumber++;
        };
    }

    /**
     * Un-marks all tokens previously marked to be removed.
     */
    public static unremoveAllBuiltinTokens() {
        {
            mXparserConstants.tokensToRemove_$LI$().clear();
            mXparserConstants.optionsChangesetNumber++;
        };
    }

    /**
     * Returns current list of tokens marked to be removed.
     * @return {java.lang.String[]} Current list of tokens marked to be removed
     */
    public static getBuiltinTokensToRemove(): string[] {
        {
            const tokensNum: number = mXparserConstants.tokensToRemove_$LI$().size();
            const tokensToRemoveArray: string[] = (s => { let a = []; while (s-- > 0) a.push(null); return a; })(tokensNum);
            for (let i: number = 0; i < tokensNum; i++) { tokensToRemoveArray[i] = mXparserConstants.tokensToRemove_$LI$().get(i); }
            return tokensToRemoveArray;
        };
    }

    public static modifyBuiltinToken$java_lang_String$java_lang_String(currentToken: string, newToken: string) {
        if (currentToken == null) return;
        if (currentToken.length === 0) return;
        if (newToken == null) return;
        if (newToken.length === 0) return;
        {
            for (let index191 = mXparserConstants.tokensToModify_$LI$().iterator(); index191.hasNext();) {
                let tm = index191.next();
                if (tm.currentToken === currentToken) return;
            }
            const tma: TokenModification = new TokenModification();
            tma.currentToken = currentToken;
            tma.newToken = newToken;
            tma.newTokenDescription = null;
            mXparserConstants.tokensToModify_$LI$().add(tma);
            mXparserConstants.optionsChangesetNumber++;
        };
    }

    public static modifyBuiltinToken$java_lang_String$java_lang_String$java_lang_String(currentToken: string, newToken: string, newTokenDescription: string) {
        if (currentToken == null) return;
        if (currentToken.length === 0) return;
        if (newToken == null) return;
        if (newToken.length === 0) return;
        {
            for (let index192 = mXparserConstants.tokensToModify_$LI$().iterator(); index192.hasNext();) {
                let tm = index192.next();
                if (tm.currentToken === currentToken) return;
            }
            const tma: TokenModification = new TokenModification();
            tma.currentToken = currentToken;
            tma.newToken = newToken;
            tma.newTokenDescription = newTokenDescription;
            mXparserConstants.tokensToModify_$LI$().add(tma);
            mXparserConstants.optionsChangesetNumber++;
        };
    }

    /**
     * Method to change definition of built-in token - more precisely
     * using this method allows to modify token string recognized by the parser
     * (i.e. sin(x) to sinus(x)).
     * Procedure affects only tokens classified to built-in functions, built-in
     * constants, built-in units, built-in random variables.
     * @param {string} currentToken          Current token name
     * @param {string} newToken              New token name
     * @param {string} newTokenDescription   New token description (if null the previous one will be used)
     */
    public static modifyBuiltinToken(currentToken?: any, newToken?: any, newTokenDescription?: any) {
        if (((typeof currentToken === 'string') || currentToken === null) && ((typeof newToken === 'string') || newToken === null) && ((typeof newTokenDescription === 'string') || newTokenDescription === null)) {
            return <any>mXparser.modifyBuiltinToken$java_lang_String$java_lang_String$java_lang_String(currentToken, newToken, newTokenDescription);
        } else if (((typeof currentToken === 'string') || currentToken === null) && ((typeof newToken === 'string') || newToken === null) && newTokenDescription === undefined) {
            return <any>mXparser.modifyBuiltinToken$java_lang_String$java_lang_String(currentToken, newToken);
        } else throw new Error('invalid overload');
    }

    /**
     * Un-marks tokens previously marked to be modified.
     * @param {java.lang.String[]} currentOrNewTokens   List of tokens to be un-marked (current or modified).
     */
    public static unmodifyBuiltinTokens(...currentOrNewTokens: string[]) {
        if (currentOrNewTokens == null) return;
        if (currentOrNewTokens.length === 0) return;
        if (mXparserConstants.tokensToModify_$LI$().size() === 0) return;
        {
            const toRemove: java.util.List<TokenModification> = <any>(new java.util.ArrayList<TokenModification>());
            for (let index193 = 0; index193 < currentOrNewTokens.length; index193++) {
                let token = currentOrNewTokens[index193];
                if (token != null) if (token.length > 0) {
                    for (let index194 = mXparserConstants.tokensToModify_$LI$().iterator(); index194.hasNext();) {
                        let tm = index194.next();
                        if ((token === tm.currentToken) || (token === tm.newToken)) toRemove.add(tm);
                    }
                }
            }
            for (let index195 = toRemove.iterator(); index195.hasNext();) {
                let tm = index195.next();
                mXparserConstants.tokensToModify_$LI$().remove(tm)
            }
            mXparserConstants.optionsChangesetNumber++;
        };
    }

    /**
     * Un-marks all tokens previously marked to be modified.
     */
    public static unmodifyAllBuiltinTokens() {
        {
            mXparserConstants.tokensToModify_$LI$().clear();
            mXparserConstants.optionsChangesetNumber++;
        };
    }

    /**
     * Return details on tokens marked to be modified.
     * @return {java.lang.String[][]} String[i][0] - current token, String[i][1] - new token,
     * String[i][2] - new token description.
     */
    public static getBuiltinTokensToModify(): string[][] {
        {
            const tokensNum: number = mXparserConstants.tokensToModify_$LI$().size();
            const tokensToModifyArray: string[][] = <any>(function (dims) { let allocate = function (dims) { if (dims.length === 0) { return null; } else { let array = []; for (let i = 0; i < dims[0]; i++) { array.push(allocate(dims.slice(1))); } return array; } }; return allocate(dims); })([tokensNum, 3]);
            for (let i: number = 0; i < tokensNum; i++) {
                {
                    const tm: TokenModification = mXparserConstants.tokensToModify_$LI$().get(i);
                    tokensToModifyArray[i][0] = tm.currentToken;
                    tokensToModifyArray[i][1] = tm.newToken;
                    tokensToModifyArray[i][2] = tm.newTokenDescription;
                };
            }
            return tokensToModifyArray;
        };
    }

    /**
     * Sets mXparser to override built-in tokens
     * by user defined tokens.
     */
    public static setToOverrideBuiltinTokens() {
        mXparserConstants.overrideBuiltinTokens = true;
        mXparserConstants.optionsChangesetNumber++;
    }

    /**
     * Sets mXparser not to override built-in tokens
     * by user defined tokens.
     */
    public static setNotToOverrideBuiltinTokens() {
        mXparserConstants.overrideBuiltinTokens = false;
        mXparserConstants.optionsChangesetNumber++;
    }

    /**
     * Checks whether mXparser is set to override built-in tokens.
     * 
     * @return {boolean} True if mXparser is set to override built-in tokens by
     * user defined tokens, otherwise false.
     */
    public static checkIfsetToOverrideBuiltinTokens(): boolean {
        return mXparserConstants.overrideBuiltinTokens;
    }

    /**
     * Sets default mXparser options
     */
    public static setDefaultOptions() {
        mXparser.enableUlpRounding();
        mXparser.enableAlmostIntRounding();
        mXparser.setMaxAllowedRecursionDepth(mXparserConstants.DEFAULT_MAX_RECURSION_CALLS);
        mXparser.setNotToOverrideBuiltinTokens();
        mXparser.unmodifyAllBuiltinTokens();
        mXparser.setRadiansMode();
        mXparserConstants.resetCancelCurrentCalculationFlag();
        mXparser.setDefaultEpsilon();
        mXparser.setEpsilonComparison();
        mXparser.setToFractionInitSearchSize(NumberTheory.DEFAULT_TO_FRACTION_INIT_SEARCH_SIZE);
        mXparserConstants.optionsChangesetNumber++;
    }

    /**
     * Returns token type description.
     * 
     * @param {number} tokenTypeId Token type id
     * @return {string} String representing token type description.
     */
    public static getTokenTypeDescription(tokenTypeId: number): string {
        let type: string = "";
        switch ((tokenTypeId)) {
            case ParserSymbol.TYPE_ID:
                type = ParserSymbol.TYPE_DESC;
                break;
            case ParserSymbol.NUMBER_TYPE_ID:
                type = "Number";
                break;
            case Operator.TYPE_ID:
                type = Operator.TYPE_DESC;
                break;
            case BooleanOperator.TYPE_ID:
                type = BooleanOperator.TYPE_DESC;
                break;
            case BinaryRelation.TYPE_ID:
                type = BinaryRelation.TYPE_DESC;
                break;
            case Function1Arg.TYPE_ID:
                type = Function1Arg.TYPE_DESC;
                break;
            case Function2Arg.TYPE_ID:
                type = Function2Arg.TYPE_DESC;
                break;
            case Function3Arg.TYPE_ID:
                type = Function3Arg.TYPE_DESC;
                break;
            case FunctionVariadic.TYPE_ID:
                type = FunctionVariadic.TYPE_DESC;
                break;
            case CalculusOperator.TYPE_ID:
                type = CalculusOperator.TYPE_DESC;
                break;
            case RandomVariable.TYPE_ID:
                type = RandomVariable.TYPE_DESC;
                break;
            case ConstantValue.TYPE_ID:
                type = ConstantValue.TYPE_DESC;
                break;
            case ArgumentConstants.TYPE_ID:
                type = ArgumentConstants.TYPE_DESC;
                break;
            case RecursiveArgument.TYPE_ID_RECURSIVE:
                type = RecursiveArgument.TYPE_DESC_RECURSIVE;
                break;
            case FunctionConstants.TYPE_ID:
                type = FunctionConstants.TYPE_DESC;
                break;
            case Constant.TYPE_ID:
                type = Constant.TYPE_DESC;
                break;
            case Unit.TYPE_ID:
                type = Unit.TYPE_DESC;
                break;
            case BitwiseOperator.TYPE_ID:
                type = BitwiseOperator.TYPE_DESC;
                break;
        }
        return type;
    }

    public static numberToHexString$int(number: number): string {
        return javaemul.internal.IntegerHelper.toHexString(number);
    }

    /**
     * Converts integer number to hex string (plain text)
     * 
     * @param {number} number   Integer number
     * @return         {string} Hex string (i.e. FF23)
     */
    public static numberToHexString(number?: any): any {
        if (((typeof number === 'number') || number === null)) {
            return <any>mXparser.numberToHexString$int(number);
        } else if (((typeof number === 'number') || number === null)) {
            return <any>mXparser.numberToHexString$long(number);
        } else if (((typeof number === 'number') || number === null)) {
            return <any>mXparser.numberToHexString$double(number);
        } else throw new Error('invalid overload');
    }

    public static numberToHexString$long(number: number): string {
        return javaemul.internal.LongHelper.toHexString(number);
    }

    public static numberToHexString$double(number: number): string {
        return mXparser.numberToHexString$long((n => n < 0 ? Math.ceil(n) : Math.floor(n))(<number>number));
    }

    /**
     * Converts hex string into ASCII string, where each letter is
     * represented by two hex digits (byte) from the hex string.
     * 
     * @param {string} hexString   Hex string (i.e. 48656C6C6F)
     * @return         {string} ASCII string (i.e. '48656C6C6F' = 'Hello')
     */
    public static hexString2AsciiString(hexString: string): string {
        let hexByteStr: string;
        let hexByteInt: number;
        let asciiString: string = "";
        for (let i: number = 0; i < hexString.length; i += 2) {
            {
                hexByteStr = hexString.substring(i, i + 2);
                hexByteInt = javaemul.internal.IntegerHelper.parseInt(hexByteStr, 16);
                asciiString = asciiString + String.fromCharCode(hexByteInt);
            };
        }
        return asciiString;
    }

    public static numberToAsciiString$int(number: number): string {
        return mXparser.hexString2AsciiString(mXparser.numberToHexString$int(number));
    }

    /**
     * Converts number into ASCII string, where each letter is
     * represented by two hex digits (byte) from the hex representation
     * of the original number
     * 
     * @param {number} number   Integer number (i.e. 310939249775 = '48656C6C6F')
     * @return         {string} ASCII string (i.e. '48656C6C6F' = 'Hello')
     */
    public static numberToAsciiString(number?: any): any {
        if (((typeof number === 'number') || number === null)) {
            return <any>mXparser.numberToAsciiString$int(number);
        } else if (((typeof number === 'number') || number === null)) {
            return <any>mXparser.numberToAsciiString$long(number);
        } else if (((typeof number === 'number') || number === null)) {
            return <any>mXparser.numberToAsciiString$double(number);
        } else throw new Error('invalid overload');
    }

    public static numberToAsciiString$long(number: number): string {
        return mXparser.hexString2AsciiString(mXparser.numberToHexString$long(number));
    }

    public static numberToAsciiString$double(number: number): string {
        return mXparser.hexString2AsciiString(mXparser.numberToHexString$double(number));
    }

    public static convOthBase2Decimal$java_lang_String$int(numberLiteral: string, numeralSystemBase: number): number {
        return NumberTheory.convOthBase2Decimal$java_lang_String$int(numberLiteral, numeralSystemBase);
    }

    /**
     * Other base (base between 1 and 36) number literal conversion to decimal number.
     * 
     * @param {string} numberLiteral    Number literal in given numeral system with base between
     * 1 and 36. Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7,
     * 8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H,
     * 18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R,
     * 28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
     * @param {number} numeralSystemBase             Numeral system base, between 1 and 36
     * @return                 {number} Decimal number after conversion. If conversion was not
     * possible the Double.NaN is returned.
     */
    public static convOthBase2Decimal(numberLiteral?: any, numeralSystemBase?: any): any {
        if (((typeof numberLiteral === 'string') || numberLiteral === null) && ((typeof numeralSystemBase === 'number') || numeralSystemBase === null)) {
            return <any>mXparser.convOthBase2Decimal$java_lang_String$int(numberLiteral, numeralSystemBase);
        } else if (((typeof numberLiteral === 'number') || numberLiteral === null) && ((numeralSystemBase != null && numeralSystemBase instanceof <any>Array && (numeralSystemBase.length == 0 || numeralSystemBase[0] == null || (typeof numeralSystemBase[0] === 'number'))) || numeralSystemBase === null)) {
            return <any>mXparser.convOthBase2Decimal$int$int_A(numberLiteral, ...numeralSystemBase);
        } else if (((typeof numberLiteral === 'number') || numberLiteral === null) && ((numeralSystemBase != null && numeralSystemBase instanceof <any>Array && (numeralSystemBase.length == 0 || numeralSystemBase[0] == null || (typeof numeralSystemBase[0] === 'number'))) || numeralSystemBase === null)) {
            return <any>mXparser.convOthBase2Decimal$double$double_A(numberLiteral, ...numeralSystemBase);
        } else if (((typeof numberLiteral === 'string') || numberLiteral === null) && numeralSystemBase === undefined) {
            return <any>mXparser.convOthBase2Decimal$java_lang_String(numberLiteral);
        } else throw new Error('invalid overload');
    }

    public static convOthBase2Decimal$java_lang_String(numberLiteral: string): number {
        return NumberTheory.convOthBase2Decimal$java_lang_String(numberLiteral);
    }

    public static convOthBase2Decimal$int$int_A(numeralSystemBase: number, ...digits: number[]): number {
        return NumberTheory.convOthBase2Decimal$int$int_A.apply(null, [numeralSystemBase].concat(<any[]>digits));
    }

    public static convOthBase2Decimal$double$double_A(numeralSystemBase: number, ...digits: number[]): number {
        return NumberTheory.convOthBase2Decimal$double$double_A.apply(null, [numeralSystemBase].concat(<any[]>digits));
    }

    public static convDecimal2OthBase$double$int(decimalNumber: number, numeralSystemBase: number): string {
        return NumberTheory.convDecimal2OthBase$double$int(decimalNumber, numeralSystemBase);
    }

    public static convDecimal2OthBase$double$int$int(decimalNumber: number, numeralSystemBase: number, format: number): string {
        return NumberTheory.convDecimal2OthBase$double$int$int(decimalNumber, numeralSystemBase, format);
    }

    /**
     * Decimal number to other numeral system conversion with base
     * between 1 and 36.
     * 
     * @param {number} decimalNumber    Decimal number
     * @param {number} numeralSystemBase       Numeral system base between 1 and 36
     * @param {number} format     If 1 then always bxx. is used, i.e. b1. or b16.
     * If 2 then for binary b. is used, for octal o. is used,
     * for hexadecimal h. is used, otherwise bxx. is used
     * where xx is the numeral system base specification.
     * 
     * @return           {string} Number literal representing decimal number in
     * given numeral numeral system.
     * 
     * Base format: b1. b2. b. b3. b4. b5. b6. b7. b8. o. b9. b10. b11. b12.
     * b13. b14. b15. b16. h. b17. b18. b19. b20. b21. b22. b23. b24. b25. b26.
     * b27. b28. b29. b30. b31. b32. b33. b34. b35. b36.
     * 
     * Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C,
     * 13:D, 14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P,
     * 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
     * 
     * If conversion was not possible the "NaN" string is returned.
     */
    public static convDecimal2OthBase(decimalNumber?: any, numeralSystemBase?: any, format?: any): any {
        if (((typeof decimalNumber === 'number') || decimalNumber === null) && ((typeof numeralSystemBase === 'number') || numeralSystemBase === null) && ((typeof format === 'number') || format === null)) {
            return <any>mXparser.convDecimal2OthBase$double$int$int(decimalNumber, numeralSystemBase, format);
        } else if (((typeof decimalNumber === 'number') || decimalNumber === null) && ((typeof numeralSystemBase === 'number') || numeralSystemBase === null) && format === undefined) {
            return <any>mXparser.convDecimal2OthBase$double$int(decimalNumber, numeralSystemBase);
        } else throw new Error('invalid overload');
    }

    /**
     * Converts double value to its fraction representation.
     * 
     * @param {number} value Value to be converted
     * 
     * @return {double[]} Array representing fraction. Sign at index 0,
     * numerator at index 1, denominator at index 2.
     * If conversion is not possible then Double.NaN is
     * assigned to all the fields.
     */
    public static toFraction(value: number): number[] {
        return NumberTheory.toFraction(value);
    }

    /**
     * Converts double value to its mixed fraction representation.
     * 
     * @param {number} value Value to be converted
     * 
     * @return {double[]} Array representing fraction.
     * Sign at index 0, whole number at index 1,
     * numerator at index 2, denominator at index 3.
     * If conversion is not possible then Double.NaN is
     * assigned to both numerator and denominator.
     */
    public static toMixedFraction(value: number): number[] {
        return NumberTheory.toMixedFraction(value);
    }

    /**
     * Converts array representing fraction to fraction string representation.
     * 
     * @param {double[]} fraction    Array representing fraction (including mix fractions)
     * @return  {string} String representation of fraction.
     * 
     * @see NumberTheory#toFraction(double)
     * @see NumberTheory#toMixedFraction(double)
     */
    public static fractionToString(fraction: number[]): string {
        return NumberTheory.fractionToString(fraction);
    }

    /**
     * Converts number to its fraction string representation.
     * 
     * @param {number} value   Given number
     * @return  {string} String representation of fraction.
     * 
     * @see NumberTheory#toFraction(double)
     * @see NumberTheory#fractionToString(double[])
     */
    public static toFractionString(value: number): string {
        return NumberTheory.toFractionString(value);
    }

    /**
     * Converts number to its mixed fraction string representation.
     * 
     * @param {number} value   Given number
     * @return  {string} String representation of fraction.
     * 
     * @see NumberTheory#toMixedFraction(double)
     * @see NumberTheory#fractionToString(double[])
     */
    public static toMixedFractionString(value: number): string {
        return NumberTheory.toMixedFractionString(value);
    }

    /**
     * Resets console output string, console output
     * string is being built by consolePrintln(), consolePrint().
     * 
     * @see mXparser#consolePrint(Object)
     * @see mXparser#consolePrintln(Object)
     * @see mXparser#consolePrintln()
     * @see mXparser#resetConsoleOutput()
     */
    public static resetConsoleOutput() {
        {
            mXparserConstants.CONSOLE_OUTPUT = "";
            mXparserConstants.CONSOLE_ROW_NUMBER = 1;
        };
    }

    /**
     * Sets default console prefix.
     */
    public static setDefaultConsolePrefix() {
        {
            mXparserConstants.CONSOLE_PREFIX = "[mXparser-v." + mXparserConstants.VERSION + "] ";
        };
    }

    /**
     * Sets default console output string prefix.
     */
    public static setDefaultConsoleOutputPrefix() {
        {
            mXparserConstants.CONSOLE_OUTPUT_PREFIX = "[mXparser-v." + mXparserConstants.VERSION + "] ";
        };
    }

    /**
     * Sets console prefix.
     * 
     * @param {string} consolePrefix String containing console prefix definition.
     */
    public static setConsolePrefix(consolePrefix: string) {
        {
            mXparserConstants.CONSOLE_PREFIX = consolePrefix;
        };
    }

    /**
     * Sets console output string prefix.
     * 
     * @param {string} consoleOutputPrefix String containing console output prefix definition.
     */
    public static setConsoleOutputPrefix(consoleOutputPrefix: string) {
        {
            mXparserConstants.CONSOLE_OUTPUT_PREFIX = consoleOutputPrefix;
        };
    }

    /**
     * Returns console output string, console output string
     * is being built by consolePrintln(), consolePrint().
     * 
     * @return {string} Console output string
     * 
     * @see mXparser#consolePrint(Object)
     * @see mXparser#consolePrintln(Object)
     * @see mXparser#consolePrintln()
     * @see mXparser#resetConsoleOutput()
     */
    public static getConsoleOutput(): string {
        return mXparserConstants.CONSOLE_OUTPUT;
    }

    public static getHelp$(): string {
        {
            return mXparser.mXparserExp_$LI$().getHelp$();
        };
    }

    public static getHelp$java_lang_String(word: string): string {
        {
            return mXparser.mXparserExp_$LI$().getHelp$java_lang_String(word);
        };
    }

    /**
     * General mXparser expression help - in-line key word searching
     * @param   {string} word    Key word to be searched
     * @return  {string} String with all help content
     * lines containing given keyword
     */
    public static getHelp(word?: any): any {
        if (((typeof word === 'string') || word === null)) {
            return <any>mXparser.getHelp$java_lang_String(word);
        } else if (word === undefined) {
            return <any>mXparser.getHelp$();
        } else throw new Error('invalid overload');
    }

    public static consolePrintHelp$() {
        console.info(mXparser.getHelp$());
    }

    public static consolePrintHelp$java_lang_String(word: string) {
        console.info(mXparser.getHelp$java_lang_String(word));
    }

    /**
     * Prints filtered help content.
     * @param {string} word      Key word.
     */
    public static consolePrintHelp(word?: any) {
        if (((typeof word === 'string') || word === null)) {
            return <any>mXparser.consolePrintHelp$java_lang_String(word);
        } else if (word === undefined) {
            return <any>mXparser.consolePrintHelp$();
        } else throw new Error('invalid overload');
    }

    public static getKeyWords$(): java.util.List<KeyWord> {
        {
            return mXparser.mXparserExp_$LI$().getKeyWords$();
        };
    }

    public static getKeyWords$java_lang_String(query: string): java.util.List<KeyWord> {
        {
            return mXparser.mXparserExp_$LI$().getKeyWords$java_lang_String(query);
        };
    }

    /**
     * Returns list of key words known to the parser
     * 
     * @param {string} query Give any string to filter list of key words against this string.
     * User more precise syntax: str=tokenString, desc=tokenDescription,
     * syn=TokenSyntax, sin=tokenSince, wid=wordId, tid=wordTypeId
     * to narrow the result.
     * 
     * @return      {*} List of keywords known to the parser filter against query string.
     * 
     * @see KeyWord
     * @see KeyWord#wordTypeId
     * @see mXparser#getHelp(String)
     */
    public static getKeyWords(query?: any): any {
        if (((typeof query === 'string') || query === null)) {
            return <any>mXparser.getKeyWords$java_lang_String(query);
        } else if (query === undefined) {
            return <any>mXparser.getKeyWords$();
        } else throw new Error('invalid overload');
    }

    /**
     * Prints tokens to the console.
     * @param {*} tokens   Tokens list.
     * 
     * @see Expression#getCopyOfInitialTokens()
     * @see Token
     */
    public static consolePrintTokens(tokens: java.util.List<Token>) {
        Expression.showTokens(tokens);
    }


    /**
     * Gets license info
     * 
     * @return     {string} license info as string
     */
    public static getLicense(): string {
        return mXparserConstants.LICENSE_$LI$();
    }

    /**
     * Waits given number of milliseconds
     * 
     * @param {number} n Number of milliseconds
     */
    public static wait(n: number) {
        let t0: number;
        let t1: number;
        t0 = java.lang.System.currentTimeMillis();
        do {
            {
                t1 = java.lang.System.currentTimeMillis();
            }
        } while ((t1 - t0 < n));
    }
}
mXparser["__class"] = "org.mariuszgromada.math.mxparser.mXparser";