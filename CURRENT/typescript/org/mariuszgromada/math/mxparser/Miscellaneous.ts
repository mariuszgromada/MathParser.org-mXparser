import { ConstantValue } from './parsertokens/ConstantValue';
import { KeyWord } from './parsertokens/KeyWord';
import { Token } from './parsertokens/Token';
import { java } from 'j4ts/j4ts';
import { javaemul } from 'j4ts/j4ts';
import { mXparserConstants } from './mXparserConstants';
import { Argument } from './Argument';
import { Expression } from './Expression';
import { ExpressionConstants } from './ExpressionConstants';

/**
 * Package level class for handling function parameters.
 * @class
 */
export class FunctionParameter {
    tokens: java.util.List<Token>;

    paramStr: string;

    fromIndex: number;

    toIndex: number;

    constructor(tokens: java.util.List<Token>, paramStr: string, fromIndex: number, toIndex: number) {
        if (this.tokens === undefined) { this.tokens = null; }
        if (this.paramStr === undefined) { this.paramStr = null; }
        if (this.fromIndex === undefined) { this.fromIndex = 0; }
        if (this.toIndex === undefined) { this.toIndex = 0; }
        this.tokens = tokens;
        this.paramStr = paramStr;
        this.fromIndex = fromIndex;
        this.toIndex = toIndex;
    }
}
FunctionParameter["__class"] = "org.mariuszgromada.math.mxparser.FunctionParameter";


/**
 * Package level class for generating iterative operator parameters
 * @class
 */
export class IterativeOperatorParameters {
    indexParam: FunctionParameter;

    fromParam: FunctionParameter;

    toParam: FunctionParameter;

    funParam: FunctionParameter;

    deltaParam: FunctionParameter;

    fromExp: Expression;

    toExp: Expression;

    funExp: Expression;

    deltaExp: Expression;

    from: number;

    to: number;

    delta: number;

    withDelta: boolean;

    constructor(functionParameters: java.util.List<FunctionParameter>) {
        if (this.indexParam === undefined) { this.indexParam = null; }
        if (this.fromParam === undefined) { this.fromParam = null; }
        if (this.toParam === undefined) { this.toParam = null; }
        if (this.funParam === undefined) { this.funParam = null; }
        if (this.deltaParam === undefined) { this.deltaParam = null; }
        if (this.fromExp === undefined) { this.fromExp = null; }
        if (this.toExp === undefined) { this.toExp = null; }
        if (this.funExp === undefined) { this.funExp = null; }
        if (this.deltaExp === undefined) { this.deltaExp = null; }
        if (this.from === undefined) { this.from = 0; }
        if (this.to === undefined) { this.to = 0; }
        if (this.delta === undefined) { this.delta = 0; }
        if (this.withDelta === undefined) { this.withDelta = false; }
        this.indexParam = functionParameters.get(0);
        this.fromParam = functionParameters.get(1);
        this.toParam = functionParameters.get(2);
        this.funParam = functionParameters.get(3);
        this.deltaParam = null;
        this.withDelta = false;
        if (functionParameters.size() === 5){
            this.deltaParam = functionParameters.get(4);
            this.withDelta = true;
        }
    }
}
IterativeOperatorParameters["__class"] = "org.mariuszgromada.math.mxparser.IterativeOperatorParameters";


/**
 * Handling argument parameters
 * @class
 */
export class ArgumentParameter {
    argument: Argument;

    initialValue: number;

    initialType: number;

    presence: number;

    index: number;

    constructor() {
        if (this.argument === undefined) { this.argument = null; }
        if (this.initialValue === undefined) { this.initialValue = 0; }
        if (this.initialType === undefined) { this.initialType = 0; }
        if (this.presence === undefined) { this.presence = 0; }
        if (this.index === undefined) { this.index = 0; }
        this.argument = null;
        this.initialValue = javaemul.internal.DoubleHelper.NaN;
        this.initialType = ConstantValue.NaN;
        this.presence = ExpressionConstants.NOT_FOUND_$LI$();
    }
}
ArgumentParameter["__class"] = "org.mariuszgromada.math.mxparser.ArgumentParameter";


/**
 * Internal token class
 * which is used with stack while
 * evaluation of tokens levels
 * @class
 */
export class TokenStackElement {
    tokenIndex: number;

    tokenId: number;

    tokenTypeId: number;

    tokenLevel: number;

    precedingFunction: boolean;

    constructor() {
        if (this.tokenIndex === undefined) { this.tokenIndex = 0; }
        if (this.tokenId === undefined) { this.tokenId = 0; }
        if (this.tokenTypeId === undefined) { this.tokenTypeId = 0; }
        if (this.tokenLevel === undefined) { this.tokenLevel = 0; }
        if (this.precedingFunction === undefined) { this.precedingFunction = false; }
    }
}
TokenStackElement["__class"] = "org.mariuszgromada.math.mxparser.TokenStackElement";


export class SyntaxStackElement {
    tokenStr: string;

    tokenLevel: number;

    constructor(tokenStr: string, tokenLevel: number) {
        if (this.tokenStr === undefined) { this.tokenStr = null; }
        if (this.tokenLevel === undefined) { this.tokenLevel = 0; }
        this.tokenStr = tokenStr;
        this.tokenLevel = tokenLevel;
    }
}
SyntaxStackElement["__class"] = "org.mariuszgromada.math.mxparser.SyntaxStackElement";


/**
 * Comparator for key word list sorting by key word string.
 * This king of sorting is used while checking the syntax
 * (duplicated key word error)
 * @class
 */
export class KwStrComparator {
    /**
     * @param {KeyWord} kw1
     * @param {KeyWord} kw2
     * @return {number}
     */
    public compare(kw1: KeyWord, kw2: KeyWord): number {
        const s1: string = kw1.wordString;
        const s2: string = kw2.wordString;
        return /* compareTo */s1.localeCompare(s2);
    }

    constructor() {
    }
}
KwStrComparator["__class"] = "org.mariuszgromada.math.mxparser.KwStrComparator";
KwStrComparator["__interfaces"] = ["java.util.Comparator"];



/**
 * Comparator for key word list sorting by
 * descending key word length
 * .
 * This king of sorting is used while tokenizing
 * (best match)
 * @class
 */
export class DescKwLenComparator {
    /**
     * @param {KeyWord} kw1
     * @param {KeyWord} kw2
     * @return {number}
     */
    public compare(kw1: KeyWord, kw2: KeyWord): number {
        const l1: number = kw1.wordString.length;
        const l2: number = kw2.wordString.length;
        return l2 - l1;
    }

    constructor() {
    }
}
DescKwLenComparator["__class"] = "org.mariuszgromada.math.mxparser.DescKwLenComparator";
DescKwLenComparator["__interfaces"] = ["java.util.Comparator"];



/**
 * Comparator for key word list sorting by
 * type of the key word
 * @class
 */
export class KwTypeComparator {
    /**
     * @param {KeyWord} kw1
     * @param {KeyWord} kw2
     * @return {number}
     */
    public compare(kw1: KeyWord, kw2: KeyWord): number {
        const t1: number = kw1.wordTypeId * 1000000 + kw1.wordId * 1000 + kw1.wordString.length;
        const t2: number = kw2.wordTypeId * 1000000 + kw2.wordId * 1000 + kw2.wordString.length;
        return t1 - t2;
    }

    constructor() {
    }
}
KwTypeComparator["__class"] = "org.mariuszgromada.math.mxparser.KwTypeComparator";
KwTypeComparator["__interfaces"] = ["java.util.Comparator"];



export class HeadEqBody {
    /*private*/ ONLY_PARSER_KEYWORDS: boolean;

    headStr: string;

    bodyStr: string;

    eqPos: number;

    headTokens: java.util.List<Token>;

    definitionError: boolean;

    constructor(definitionString: string) {
        this.ONLY_PARSER_KEYWORDS = true;
        if (this.headStr === undefined) { this.headStr = null; }
        if (this.bodyStr === undefined) { this.bodyStr = null; }
        if (this.eqPos === undefined) { this.eqPos = 0; }
        if (this.headTokens === undefined) { this.headTokens = null; }
        if (this.definitionError === undefined) { this.definitionError = false; }
        let c: string;
        this.eqPos = 0;
        let matchStatus: number = mXparserConstants.NOT_FOUND;
        this.definitionError = false;
        do {{
            c = definitionString.charAt(this.eqPos);
            if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '='.charCodeAt(0))matchStatus = mXparserConstants.FOUND; else this.eqPos++;
        }} while(((this.eqPos < definitionString.length) && (matchStatus === mXparserConstants.NOT_FOUND)));
        if ((matchStatus === mXparserConstants.FOUND) && (this.eqPos > 0) && (this.eqPos <= definitionString.length - 2)){
            this.headStr = definitionString.substring(0, this.eqPos);
            this.bodyStr = definitionString.substring(this.eqPos + 1);
            const headExpression: Expression = new Expression(this.headStr, this.ONLY_PARSER_KEYWORDS);
            this.headTokens = headExpression.getCopyOfInitialTokens();
        } else {
            this.definitionError = true;
            this.headStr = "";
            this.bodyStr = "";
            this.headTokens = null;
            this.eqPos = -1;
        }
    }
}
HeadEqBody["__class"] = "org.mariuszgromada.math.mxparser.HeadEqBody";


/**
 * Data structure used internally for token to be modified list
 * @class
 */
export class TokenModification {
    currentToken: string;

    newToken: string;

    newTokenDescription: string;

    constructor() {
        if (this.currentToken === undefined) { this.currentToken = null; }
        if (this.newToken === undefined) { this.newToken = null; }
        if (this.newTokenDescription === undefined) { this.newTokenDescription = null; }
    }
}
TokenModification["__class"] = "org.mariuszgromada.math.mxparser.TokenModification";