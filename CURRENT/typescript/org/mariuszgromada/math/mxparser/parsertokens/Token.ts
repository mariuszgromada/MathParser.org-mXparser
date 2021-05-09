import { KeyWord } from './KeyWord';
import { javaemul } from 'j4ts/j4ts';

/**
 * Default constructor
 * @class
 */
export class Token {
    /**
     * Indicator that token was not matched
     */
    public static NOT_MATCHED: number; public static NOT_MATCHED_$LI$(): number { if (Token.NOT_MATCHED == null) { Token.NOT_MATCHED = KeyWord.NO_DEFINITION_$LI$(); }  return Token.NOT_MATCHED; }

    /**
     * String token
     */
    public tokenStr: string;

    /**
     * Key word string (if matched)
     */
    public keyWord: string;

    /**
     * Token identifier
     */
    public tokenId: number;

    /**
     * Token type
     */
    public tokenTypeId: number;

    /**
     * Token level
     */
    public tokenLevel: number;

    /**
     * Token value if number
     */
    public tokenValue: number;

    /**
     * If token was not matched then
     * looksLike functionality is trying asses
     * the kind of token
     */
    public looksLike: string;

    public constructor() {
        if (this.tokenStr === undefined) { this.tokenStr = null; }
        if (this.keyWord === undefined) { this.keyWord = null; }
        if (this.tokenId === undefined) { this.tokenId = 0; }
        if (this.tokenTypeId === undefined) { this.tokenTypeId = 0; }
        if (this.tokenLevel === undefined) { this.tokenLevel = 0; }
        if (this.tokenValue === undefined) { this.tokenValue = 0; }
        if (this.looksLike === undefined) { this.looksLike = null; }
        this.tokenStr = "";
        this.keyWord = "";
        this.tokenId = Token.NOT_MATCHED_$LI$();
        this.tokenTypeId = Token.NOT_MATCHED_$LI$();
        this.tokenLevel = -1;
        this.tokenValue = javaemul.internal.DoubleHelper.NaN;
        this.looksLike = "";
    }

    /**
     * Token cloning.
     * @return {Token}
     */
    public clone(): Token {
        const token: Token = new Token();
        token.keyWord = this.keyWord;
        token.tokenStr = this.tokenStr;
        token.tokenId = this.tokenId;
        token.tokenLevel = this.tokenLevel;
        token.tokenTypeId = this.tokenTypeId;
        token.tokenValue = this.tokenValue;
        token.looksLike = this.looksLike;
        return token;
    }
}
Token["__class"] = "org.mariuszgromada.math.mxparser.parsertokens.Token";