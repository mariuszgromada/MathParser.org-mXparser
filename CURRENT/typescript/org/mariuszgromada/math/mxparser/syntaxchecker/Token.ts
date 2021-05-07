import { java } from 'j4ts/j4ts';

/**
 * Constructs a new token for the specified Image and Kind.
 * @param {number} kind
 * @param {string} image
 * @class
 */
export class Token implements java.io.Serializable {
    /**
     * The version identifier for this Serializable class.
     * Increment only if the <i>serialized</i> form of the
     * class changes.
     */
    static serialVersionUID: number = 1;

    /**
     * An integer that describes the kind of this token.  This numbering
     * system is determined by JavaCCParser, and a table of these numbers is
     * stored in the file ...Constants.java.
     */
    public kind: number;

    /**
     * The line number of the first character of this Token.
     */
    public beginLine: number;

    /**
     * The column number of the first character of this Token.
     */
    public beginColumn: number;

    /**
     * The line number of the last character of this Token.
     */
    public endLine: number;

    /**
     * The column number of the last character of this Token.
     */
    public endColumn: number;

    /**
     * The string image of the token.
     */
    public image: string;

    /**
     * A reference to the next regular (non-special) token from the input
     * stream.  If this is the last token from the input stream, or if the
     * token manager has not read tokens beyond this one, this field is
     * set to null.  This is true only if this token is also a regular
     * token.  Otherwise, see below for a description of the contents of
     * this field.
     */
    public next: Token;

    /**
     * This field is used to access special tokens that occur prior to this
     * token, but after the immediately preceding regular (non-special) token.
     * If there are no such special tokens, this field is set to null.
     * When there are more than one such special token, this field refers
     * to the last of these special tokens, which in turn refers to the next
     * previous special token through its specialToken field, and so on
     * until the first special token (whose specialToken field is null).
     * The next fields of special tokens refer to other special tokens that
     * immediately follow it (without an intervening regular token).  If there
     * is no such token, this field is null.
     */
    public specialToken: Token;

    /**
     * An optional attribute value of the Token.
     * Tokens which are not used as syntactic sugar will often contain
     * meaningful values that will be used later on by the compiler or
     * interpreter. This attribute value is often different from the image.
     * Any subclass of Token that actually wants to return a non-null value can
     * override this method as appropriate.
     * @return {*}
     */
    public getValue(): any {
        return null;
    }

    public constructor(kind?: any, image?: any) {
        if (((typeof kind === 'number') || kind === null) && ((typeof image === 'string') || image === null)) {
            let __args = arguments;
            if (this.kind === undefined) { this.kind = 0; } 
            if (this.beginLine === undefined) { this.beginLine = 0; } 
            if (this.beginColumn === undefined) { this.beginColumn = 0; } 
            if (this.endLine === undefined) { this.endLine = 0; } 
            if (this.endColumn === undefined) { this.endColumn = 0; } 
            if (this.image === undefined) { this.image = null; } 
            if (this.next === undefined) { this.next = null; } 
            if (this.specialToken === undefined) { this.specialToken = null; } 
            this.kind = kind;
            this.image = image;
        } else if (((typeof kind === 'number') || kind === null) && image === undefined) {
            let __args = arguments;
            {
                let __args = arguments;
                let image: any = null;
                if (this.kind === undefined) { this.kind = 0; } 
                if (this.beginLine === undefined) { this.beginLine = 0; } 
                if (this.beginColumn === undefined) { this.beginColumn = 0; } 
                if (this.endLine === undefined) { this.endLine = 0; } 
                if (this.endColumn === undefined) { this.endColumn = 0; } 
                if (this.image === undefined) { this.image = null; } 
                if (this.next === undefined) { this.next = null; } 
                if (this.specialToken === undefined) { this.specialToken = null; } 
                this.kind = kind;
                this.image = image;
            }
            if (this.kind === undefined) { this.kind = 0; } 
            if (this.beginLine === undefined) { this.beginLine = 0; } 
            if (this.beginColumn === undefined) { this.beginColumn = 0; } 
            if (this.endLine === undefined) { this.endLine = 0; } 
            if (this.endColumn === undefined) { this.endColumn = 0; } 
            if (this.image === undefined) { this.image = null; } 
            if (this.next === undefined) { this.next = null; } 
            if (this.specialToken === undefined) { this.specialToken = null; } 
        } else if (kind === undefined && image === undefined) {
            let __args = arguments;
            if (this.kind === undefined) { this.kind = 0; } 
            if (this.beginLine === undefined) { this.beginLine = 0; } 
            if (this.beginColumn === undefined) { this.beginColumn = 0; } 
            if (this.endLine === undefined) { this.endLine = 0; } 
            if (this.endColumn === undefined) { this.endColumn = 0; } 
            if (this.image === undefined) { this.image = null; } 
            if (this.next === undefined) { this.next = null; } 
            if (this.specialToken === undefined) { this.specialToken = null; } 
        } else throw new Error('invalid overload');
    }

    /**
     * Returns the image.
     * @return {string}
     */
    public toString(): string {
        return this.image;
    }

    public static newToken(ofKind: number, image: string = null): Token {
        switch((ofKind)) {
        default:
            return new Token(ofKind, image);
        }
    }
}
Token["__class"] = "org.mariuszgromada.math.mxparser.syntaxchecker.Token";
Token["__interfaces"] = ["java.io.Serializable"];