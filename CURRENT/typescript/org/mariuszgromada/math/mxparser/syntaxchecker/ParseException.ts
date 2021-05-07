import { Token } from './Token';
import { java } from 'j4ts/j4ts';

/**
 * This constructor is used by the method "generateParseException"
 * in the generated parser.  Calling this constructor generates
 * a new object of this type with the fields "currentToken",
 * "expectedTokenSequences", and "tokenImage" set.
 * @param {Token} currentTokenVal
 * @param {int[][]} expectedTokenSequencesVal
 * @param {java.lang.String[]} tokenImageVal
 * @class
 * @extends Exception
 */
export class ParseException extends Error {
    /**
     * The version identifier for this Serializable class.
     * Increment only if the <i>serialized</i> form of the
     * class changes.
     */
    static serialVersionUID: number = 1;

    public constructor(currentTokenVal?: any, expectedTokenSequencesVal?: any, tokenImageVal?: any) {
        if (((currentTokenVal != null && currentTokenVal instanceof <any>Token) || currentTokenVal === null) && ((expectedTokenSequencesVal != null && expectedTokenSequencesVal instanceof <any>Array && (expectedTokenSequencesVal.length == 0 || expectedTokenSequencesVal[0] == null ||expectedTokenSequencesVal[0] instanceof Array)) || expectedTokenSequencesVal === null) && ((tokenImageVal != null && tokenImageVal instanceof <any>Array && (tokenImageVal.length == 0 || tokenImageVal[0] == null ||(typeof tokenImageVal[0] === 'string'))) || tokenImageVal === null)) {
            let __args = arguments;
            super(ParseException.initialise(currentTokenVal, expectedTokenSequencesVal, tokenImageVal)); this.message=ParseException.initialise(currentTokenVal, expectedTokenSequencesVal, tokenImageVal);
            if (this.currentToken === undefined) { this.currentToken = null; } 
            if (this.expectedTokenSequences === undefined) { this.expectedTokenSequences = null; } 
            if (this.tokenImage === undefined) { this.tokenImage = null; } 
            this.eol = java.lang.System.getProperty("line.separator", "\n");
            this.currentToken = currentTokenVal;
            this.expectedTokenSequences = expectedTokenSequencesVal;
            this.tokenImage = tokenImageVal;
        } else if (((typeof currentTokenVal === 'string') || currentTokenVal === null) && expectedTokenSequencesVal === undefined && tokenImageVal === undefined) {
            let __args = arguments;
            let message: any = __args[0];
            super(message); this.message=message;
            if (this.currentToken === undefined) { this.currentToken = null; } 
            if (this.expectedTokenSequences === undefined) { this.expectedTokenSequences = null; } 
            if (this.tokenImage === undefined) { this.tokenImage = null; } 
            this.eol = java.lang.System.getProperty("line.separator", "\n");
        } else if (currentTokenVal === undefined && expectedTokenSequencesVal === undefined && tokenImageVal === undefined) {
            let __args = arguments;
            super();
            if (this.currentToken === undefined) { this.currentToken = null; } 
            if (this.expectedTokenSequences === undefined) { this.expectedTokenSequences = null; } 
            if (this.tokenImage === undefined) { this.tokenImage = null; } 
            this.eol = java.lang.System.getProperty("line.separator", "\n");
        } else throw new Error('invalid overload');
    }

    /**
     * This is the last token that has been consumed successfully.  If
     * this object has been created due to a parse error, the token
     * followng this token will (therefore) be the first error token.
     */
    public currentToken: Token;

    /**
     * Each entry in this array is an array of integers.  Each array
     * of integers represents a sequence of tokens (by their ordinal
     * values) that is expected at this point of the parse.
     */
    public expectedTokenSequences: number[][];

    /**
     * This is a reference to the "tokenImage" array of the generated
     * parser within which the parse error occurred.  This array is
     * defined in the generated ...Constants interface.
     */
    public tokenImage: string[];

    /**
     * It uses "currentToken" and "expectedTokenSequences" to generate a parse
     * error message and returns it.  If this object has been created
     * due to a parse error, and you do not catch it (it gets thrown
     * from the parser) the correct error message
     * gets displayed.
     * @param {Token} currentToken
     * @param {int[][]} expectedTokenSequences
     * @param {java.lang.String[]} tokenImage
     * @return {string}
     * @private
     */
    /*private*/ static initialise(currentToken: Token, expectedTokenSequences: number[][], tokenImage: string[]): string {
        const eol: string = java.lang.System.getProperty("line.separator", "\n");
        const expected: java.lang.StringBuffer = new java.lang.StringBuffer();
        let maxSize: number = 0;
        for(let i: number = 0; i < expectedTokenSequences.length; i++) {{
            if (maxSize < expectedTokenSequences[i].length){
                maxSize = expectedTokenSequences[i].length;
            }
            for(let j: number = 0; j < expectedTokenSequences[i].length; j++) {{
                expected.append(tokenImage[expectedTokenSequences[i][j]]).append(' ');
            };}
            if (expectedTokenSequences[i][expectedTokenSequences[i].length - 1] !== 0){
                expected.append("...");
            }
            expected.append(eol).append("    ");
        };}
        let retval: string = "Encountered \"";
        let tok: Token = currentToken.next;
        for(let i: number = 0; i < maxSize; i++) {{
            if (i !== 0)retval += " ";
            if (tok.kind === 0){
                retval += tokenImage[0];
                break;
            }
            retval += " " + tokenImage[tok.kind];
            retval += " \"";
            retval += ParseException.add_escapes(tok.image);
            retval += " \"";
            tok = tok.next;
        };}
        retval += "\" at line " + currentToken.next.beginLine + ", column " + currentToken.next.beginColumn;
        retval += "." + eol;
        if (expectedTokenSequences.length === 1){
            retval += "Was expecting:" + eol + "    ";
        } else {
            retval += "Was expecting one of:" + eol + "    ";
        }
        retval += expected.toString();
        return retval;
    }

    /**
     * The end of line string for this machine.
     */
    eol: string;

    /**
     * Used to convert raw characters to their escaped version
     * when these raw version cannot be used as part of an ASCII
     * string literal.
     * @param {string} str
     * @return {string}
     */
    static add_escapes(str: string): string {
        const retval: java.lang.StringBuffer = new java.lang.StringBuffer();
        let ch: string;
        for(let i: number = 0; i < str.length; i++) {{
            switch((str.charAt(i)).charCodeAt(0)) {
            case 0:
                continue;
            case 8 /* '\b' */:
                retval.append("\\b");
                continue;
            case 9 /* '\t' */:
                retval.append("\\t");
                continue;
            case 10 /* '\n' */:
                retval.append("\\n");
                continue;
            case 12 /* '\f' */:
                retval.append("\\f");
                continue;
            case 13 /* '\r' */:
                retval.append("\\r");
                continue;
            case 34 /* '\"' */:
                retval.append("\\\"");
                continue;
            case 39 /* '\'' */:
                retval.append("\\\'");
                continue;
            case 92 /* '\\' */:
                retval.append("\\\\");
                continue;
            default:
                if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))((ch = str.charAt(i))) < 32 || (c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(ch) > 126){
                    const s: string = "0000" + /* toString */(''+(ch));
                    retval.append("\\u" + s.substring(s.length - 4, s.length));
                } else {
                    retval.append(ch);
                }
                continue;
            }
        };}
        return retval.toString();
    }
}
ParseException["__class"] = "org.mariuszgromada.math.mxparser.syntaxchecker.ParseException";
ParseException["__interfaces"] = ["java.io.Serializable"];