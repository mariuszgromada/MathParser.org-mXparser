import { java } from 'j4ts/j4ts';

/**
 * Full Constructor.
 * @param {boolean} EOFSeen
 * @param {number} lexState
 * @param {number} errorLine
 * @param {number} errorColumn
 * @param {string} errorAfter
 * @param {string} curChar
 * @param {number} reason
 * @class
 * @extends Error
 */
export class TokenMgrError extends Error {
    /**
     * The version identifier for this Serializable class.
     * Increment only if the <i>serialized</i> form of the
     * class changes.
     */
    static serialVersionUID: number = 1;

    /**
     * Lexical error occurred.
     */
    static LEXICAL_ERROR: number = 0;

    /**
     * An attempt was made to create a second instance of a static token manager.
     */
    static STATIC_LEXER_ERROR: number = 1;

    /**
     * Tried to change to an invalid lexical state.
     */
    static INVALID_LEXICAL_STATE: number = 2;

    /**
     * Detected (and bailed out of) an infinite loop in the token manager.
     */
    static LOOP_DETECTED: number = 3;

    /**
     * Indicates the reason why the exception is thrown. It will have
     * one of the above 4 values.
     */
    errorCode: number;

    /**
     * Replaces unprintable characters by their escaped (or unicode escaped)
     * equivalents in the given string
     * @param {string} str
     * @return {string}
     */
    static addEscapes(str: string): string {
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

    /**
     * Returns a detailed message for the Error when it is thrown by the
     * token manager to indicate a lexical error.
     * Parameters :
     * EOFSeen     : indicates if EOF caused the lexical error
     * curLexState : lexical state in which this error occurred
     * errorLine   : line number when the error occurred
     * errorColumn : column number when the error occurred
     * errorAfter  : prefix that was seen before this error occurred
     * curchar     : the offending character
     * Note: You can customize the lexical error message by modifying this method.
     * @param {boolean} EOFSeen
     * @param {number} lexState
     * @param {number} errorLine
     * @param {number} errorColumn
     * @param {string} errorAfter
     * @param {string} curChar
     * @return {string}
     */
    static LexicalError(EOFSeen: boolean, lexState: number, errorLine: number, errorColumn: number, errorAfter: string, curChar: string): string {
        return ("Lexical error at line " + errorLine + ", column " + errorColumn + ".  Encountered: " + (EOFSeen ? "<EOF> " : ("\"" + TokenMgrError.addEscapes(/* valueOf */String(curChar).toString()) + "\"") + " (" + (curChar).charCodeAt(0) + "), ") + "after : \"" + TokenMgrError.addEscapes(errorAfter) + "\"");
    }

    /**
     * You can also modify the body of this method to customize your error messages.
     * For example, cases like LOOP_DETECTED and INVALID_LEXICAL_STATE are not
     * of end-users concern, so you can return something like :
     * 
     * "Internal Error : Please file a bug report .... "
     * 
     * from this method for such cases in the release version of your parser.
     * @return {string}
     */
    public getMessage(): string {
        return this.message;
    }

    public constructor(EOFSeen?: any, lexState?: any, errorLine?: any, errorColumn?: any, errorAfter?: any, curChar?: any, reason?: any) {
        if (((typeof EOFSeen === 'boolean') || EOFSeen === null) && ((typeof lexState === 'number') || lexState === null) && ((typeof errorLine === 'number') || errorLine === null) && ((typeof errorColumn === 'number') || errorColumn === null) && ((typeof errorAfter === 'string') || errorAfter === null) && ((typeof curChar === 'string') || curChar === null) && ((typeof reason === 'number') || reason === null)) {
            let __args = arguments;
            {
                let __args = arguments;
                let message: any = TokenMgrError.LexicalError(EOFSeen, lexState, errorLine, errorColumn, errorAfter, curChar);
                super(message); this.message=message;
                if (this.errorCode === undefined) { this.errorCode = 0; } 
                this.errorCode = reason;
            }
            if (this.errorCode === undefined) { this.errorCode = 0; } 
        } else if (((typeof EOFSeen === 'string') || EOFSeen === null) && ((typeof lexState === 'number') || lexState === null) && errorLine === undefined && errorColumn === undefined && errorAfter === undefined && curChar === undefined && reason === undefined) {
            let __args = arguments;
            let message: any = __args[0];
            let reason: any = __args[1];
            super(message); this.message=message;
            if (this.errorCode === undefined) { this.errorCode = 0; } 
            this.errorCode = reason;
        } else if (EOFSeen === undefined && lexState === undefined && errorLine === undefined && errorColumn === undefined && errorAfter === undefined && curChar === undefined && reason === undefined) {
            let __args = arguments;
            super();
            if (this.errorCode === undefined) { this.errorCode = 0; } 
        } else throw new Error('invalid overload');
    }
}
TokenMgrError["__class"] = "org.mariuszgromada.math.mxparser.syntaxchecker.TokenMgrError";
TokenMgrError["__interfaces"] = ["java.io.Serializable"];