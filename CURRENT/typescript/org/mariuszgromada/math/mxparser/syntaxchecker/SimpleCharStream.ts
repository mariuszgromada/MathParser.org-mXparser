import { java } from 'j4ts/j4ts';

/**
 * Constructor.
 * @param {java.io.InputStream} dstream
 * @param {string} encoding
 * @param {number} startline
 * @param {number} startcolumn
 * @param {number} buffersize
 * @class
 */
export class SimpleCharStream {
    /**
     * Whether parser is static.
     */
    public static staticFlag: boolean = false;

    bufsize: number;

    available: number;

    tokenBegin: number;

    /**
     * Position in buffer.
     */
    public bufpos: number;

    bufline: number[];

    bufcolumn: number[];

    column: number;

    line: number;

    prevCharIsCR: boolean;

    prevCharIsLF: boolean;

    inputStream: java.io.Reader;

    buffer: string[];

    maxNextCharInd: number;

    inBuf: number;

    tabSize: number;

    trackLineColumn: boolean;

    public setTabSize(i: number) {
        this.tabSize = i;
    }

    public getTabSize(): number {
        return this.tabSize;
    }

    ExpandBuff(wrapAround: boolean) {
        const newbuffer: string[] = (s => { let a=[]; while(s-->0) a.push(null); return a; })(this.bufsize + 2048);
        const newbufline: number[] = (s => { let a=[]; while(s-->0) a.push(0); return a; })(this.bufsize + 2048);
        const newbufcolumn: number[] = (s => { let a=[]; while(s-->0) a.push(0); return a; })(this.bufsize + 2048);
        try {
            if (wrapAround){
                java.lang.System.arraycopy(this.buffer, this.tokenBegin, newbuffer, 0, this.bufsize - this.tokenBegin);
                java.lang.System.arraycopy(this.buffer, 0, newbuffer, this.bufsize - this.tokenBegin, this.bufpos);
                this.buffer = newbuffer;
                java.lang.System.arraycopy(this.bufline, this.tokenBegin, newbufline, 0, this.bufsize - this.tokenBegin);
                java.lang.System.arraycopy(this.bufline, 0, newbufline, this.bufsize - this.tokenBegin, this.bufpos);
                this.bufline = newbufline;
                java.lang.System.arraycopy(this.bufcolumn, this.tokenBegin, newbufcolumn, 0, this.bufsize - this.tokenBegin);
                java.lang.System.arraycopy(this.bufcolumn, 0, newbufcolumn, this.bufsize - this.tokenBegin, this.bufpos);
                this.bufcolumn = newbufcolumn;
                this.maxNextCharInd = (this.bufpos += (this.bufsize - this.tokenBegin));
            } else {
                java.lang.System.arraycopy(this.buffer, this.tokenBegin, newbuffer, 0, this.bufsize - this.tokenBegin);
                this.buffer = newbuffer;
                java.lang.System.arraycopy(this.bufline, this.tokenBegin, newbufline, 0, this.bufsize - this.tokenBegin);
                this.bufline = newbufline;
                java.lang.System.arraycopy(this.bufcolumn, this.tokenBegin, newbufcolumn, 0, this.bufsize - this.tokenBegin);
                this.bufcolumn = newbufcolumn;
                this.maxNextCharInd = (this.bufpos -= this.tokenBegin);
            }
        } catch(t) {
            throw new Error(t.message);
        }
        this.bufsize += 2048;
        this.available = this.bufsize;
        this.tokenBegin = 0;
    }

    FillBuff() {
        if (this.maxNextCharInd === this.available){
            if (this.available === this.bufsize){
                if (this.tokenBegin > 2048){
                    this.bufpos = this.maxNextCharInd = 0;
                    this.available = this.tokenBegin;
                } else if (this.tokenBegin < 0)this.bufpos = this.maxNextCharInd = 0; else this.ExpandBuff(false);
            } else if (this.available > this.tokenBegin)this.available = this.bufsize; else if ((this.tokenBegin - this.available) < 2048)this.ExpandBuff(true); else this.available = this.tokenBegin;
        }
        let i: number;
        try {
            if ((i = this.inputStream.read(this.buffer, this.maxNextCharInd, this.available - this.maxNextCharInd)) === -1){
                this.inputStream.close();
                throw new java.io.IOException();
            } else this.maxNextCharInd += i;
            return;
        } catch(e) {
            --this.bufpos;
            this.backup(0);
            if (this.tokenBegin === -1)this.tokenBegin = this.bufpos;
            throw e;
        }
    }

    /**
     * Start.
     * @return {string}
     */
    public BeginToken(): string {
        this.tokenBegin = -1;
        const c: string = this.readChar();
        this.tokenBegin = this.bufpos;
        return c;
    }

    UpdateLineColumn(c: string) {
        this.column++;
        if (this.prevCharIsLF){
            this.prevCharIsLF = false;
            this.line += (this.column = 1);
        } else if (this.prevCharIsCR){
            this.prevCharIsCR = false;
            if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '\n'.charCodeAt(0)){
                this.prevCharIsLF = true;
            } else this.line += (this.column = 1);
        }
        switch((c).charCodeAt(0)) {
        case 13 /* '\r' */:
            this.prevCharIsCR = true;
            break;
        case 10 /* '\n' */:
            this.prevCharIsLF = true;
            break;
        case 9 /* '\t' */:
            this.column--;
            this.column += (this.tabSize - (this.column % this.tabSize));
            break;
        default:
            break;
        }
        this.bufline[this.bufpos] = this.line;
        this.bufcolumn[this.bufpos] = this.column;
    }

    /**
     * Read a character.
     * @return {string}
     */
    public readChar(): string {
        if (this.inBuf > 0){
            --this.inBuf;
            if (++this.bufpos === this.bufsize)this.bufpos = 0;
            return this.buffer[this.bufpos];
        }
        if (++this.bufpos >= this.maxNextCharInd)this.FillBuff();
        const c: string = this.buffer[this.bufpos];
        this.UpdateLineColumn(c);
        return c;
    }

    public getColumn(): number {
        return this.bufcolumn[this.bufpos];
    }

    public getLine(): number {
        return this.bufline[this.bufpos];
    }

    /**
     * Get token end column number.
     * @return {number}
     */
    public getEndColumn(): number {
        return this.bufcolumn[this.bufpos];
    }

    /**
     * Get token end line number.
     * @return {number}
     */
    public getEndLine(): number {
        return this.bufline[this.bufpos];
    }

    /**
     * Get token beginning column number.
     * @return {number}
     */
    public getBeginColumn(): number {
        return this.bufcolumn[this.tokenBegin];
    }

    /**
     * Get token beginning line number.
     * @return {number}
     */
    public getBeginLine(): number {
        return this.bufline[this.tokenBegin];
    }

    /**
     * Backup a number of characters.
     * @param {number} amount
     */
    public backup(amount: number) {
        this.inBuf += amount;
        if ((this.bufpos -= amount) < 0)this.bufpos += this.bufsize;
    }

    public ReInit$java_io_Reader$int$int$int(dstream: java.io.Reader, startline: number, startcolumn: number, buffersize: number) {
        this.inputStream = dstream;
        this.line = startline;
        this.column = startcolumn - 1;
        if (this.buffer == null || buffersize !== this.buffer.length){
            this.available = this.bufsize = buffersize;
            this.buffer = (s => { let a=[]; while(s-->0) a.push(null); return a; })(buffersize);
            this.bufline = (s => { let a=[]; while(s-->0) a.push(0); return a; })(buffersize);
            this.bufcolumn = (s => { let a=[]; while(s-->0) a.push(0); return a; })(buffersize);
        }
        this.prevCharIsLF = this.prevCharIsCR = false;
        this.tokenBegin = this.inBuf = this.maxNextCharInd = 0;
        this.bufpos = -1;
    }

    public ReInit$java_io_Reader$int$int(dstream: java.io.Reader, startline: number, startcolumn: number) {
        this.ReInit$java_io_Reader$int$int$int(dstream, startline, startcolumn, 4096);
    }

    public ReInit$java_io_Reader(dstream: java.io.Reader) {
        this.ReInit$java_io_Reader$int$int$int(dstream, 1, 1, 4096);
    }

    public constructor(dstream?: any, encoding?: any, startline?: any, startcolumn?: any, buffersize?: any) {
        if (((dstream != null && dstream instanceof <any>java.io.InputStream) || dstream === null) && ((typeof encoding === 'string') || encoding === null) && ((typeof startline === 'number') || startline === null) && ((typeof startcolumn === 'number') || startcolumn === null) && ((typeof buffersize === 'number') || buffersize === null)) {
            let __args = arguments;
            {
                let __args = arguments;
                let dstream: any = encoding == null ? new java.io.InputStreamReader(__args[0]) : new java.io.InputStreamReader(__args[0], encoding);
                if (this.bufsize === undefined) { this.bufsize = 0; } 
                if (this.available === undefined) { this.available = 0; } 
                if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
                if (this.bufline === undefined) { this.bufline = null; } 
                if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
                if (this.inputStream === undefined) { this.inputStream = null; } 
                if (this.buffer === undefined) { this.buffer = null; } 
                this.bufpos = -1;
                this.column = 0;
                this.line = 1;
                this.prevCharIsCR = false;
                this.prevCharIsLF = false;
                this.maxNextCharInd = 0;
                this.inBuf = 0;
                this.tabSize = 8;
                this.trackLineColumn = true;
                this.inputStream = dstream;
                this.line = startline;
                this.column = startcolumn - 1;
                this.available = this.bufsize = buffersize;
                this.buffer = (s => { let a=[]; while(s-->0) a.push(null); return a; })(buffersize);
                this.bufline = (s => { let a=[]; while(s-->0) a.push(0); return a; })(buffersize);
                this.bufcolumn = (s => { let a=[]; while(s-->0) a.push(0); return a; })(buffersize);
            }
            if (this.bufsize === undefined) { this.bufsize = 0; } 
            if (this.available === undefined) { this.available = 0; } 
            if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
            if (this.bufline === undefined) { this.bufline = null; } 
            if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
            if (this.inputStream === undefined) { this.inputStream = null; } 
            if (this.buffer === undefined) { this.buffer = null; } 
            this.bufpos = -1;
            this.column = 0;
            this.line = 1;
            this.prevCharIsCR = false;
            this.prevCharIsLF = false;
            this.maxNextCharInd = 0;
            this.inBuf = 0;
            this.tabSize = 8;
            this.trackLineColumn = true;
        } else if (((dstream != null && dstream instanceof <any>java.io.InputStream) || dstream === null) && ((typeof encoding === 'string') || encoding === null) && ((typeof startline === 'number') || startline === null) && ((typeof startcolumn === 'number') || startcolumn === null) && buffersize === undefined) {
            let __args = arguments;
            {
                let __args = arguments;
                let buffersize: any = 4096;
                {
                    let __args = arguments;
                    let dstream: any = encoding == null ? new java.io.InputStreamReader(__args[0]) : new java.io.InputStreamReader(__args[0], encoding);
                    if (this.bufsize === undefined) { this.bufsize = 0; } 
                    if (this.available === undefined) { this.available = 0; } 
                    if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
                    if (this.bufline === undefined) { this.bufline = null; } 
                    if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
                    if (this.inputStream === undefined) { this.inputStream = null; } 
                    if (this.buffer === undefined) { this.buffer = null; } 
                    this.bufpos = -1;
                    this.column = 0;
                    this.line = 1;
                    this.prevCharIsCR = false;
                    this.prevCharIsLF = false;
                    this.maxNextCharInd = 0;
                    this.inBuf = 0;
                    this.tabSize = 8;
                    this.trackLineColumn = true;
                    this.inputStream = dstream;
                    this.line = startline;
                    this.column = startcolumn - 1;
                    this.available = this.bufsize = buffersize;
                    this.buffer = (s => { let a=[]; while(s-->0) a.push(null); return a; })(buffersize);
                    this.bufline = (s => { let a=[]; while(s-->0) a.push(0); return a; })(buffersize);
                    this.bufcolumn = (s => { let a=[]; while(s-->0) a.push(0); return a; })(buffersize);
                }
                if (this.bufsize === undefined) { this.bufsize = 0; } 
                if (this.available === undefined) { this.available = 0; } 
                if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
                if (this.bufline === undefined) { this.bufline = null; } 
                if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
                if (this.inputStream === undefined) { this.inputStream = null; } 
                if (this.buffer === undefined) { this.buffer = null; } 
                this.bufpos = -1;
                this.column = 0;
                this.line = 1;
                this.prevCharIsCR = false;
                this.prevCharIsLF = false;
                this.maxNextCharInd = 0;
                this.inBuf = 0;
                this.tabSize = 8;
                this.trackLineColumn = true;
            }
            if (this.bufsize === undefined) { this.bufsize = 0; } 
            if (this.available === undefined) { this.available = 0; } 
            if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
            if (this.bufline === undefined) { this.bufline = null; } 
            if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
            if (this.inputStream === undefined) { this.inputStream = null; } 
            if (this.buffer === undefined) { this.buffer = null; } 
            this.bufpos = -1;
            this.column = 0;
            this.line = 1;
            this.prevCharIsCR = false;
            this.prevCharIsLF = false;
            this.maxNextCharInd = 0;
            this.inBuf = 0;
            this.tabSize = 8;
            this.trackLineColumn = true;
        } else if (((dstream != null && dstream instanceof <any>java.io.Reader) || dstream === null) && ((typeof encoding === 'number') || encoding === null) && ((typeof startline === 'number') || startline === null) && ((typeof startcolumn === 'number') || startcolumn === null) && buffersize === undefined) {
            let __args = arguments;
            let startline: any = __args[1];
            let startcolumn: any = __args[2];
            let buffersize: any = __args[3];
            if (this.bufsize === undefined) { this.bufsize = 0; } 
            if (this.available === undefined) { this.available = 0; } 
            if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
            if (this.bufline === undefined) { this.bufline = null; } 
            if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
            if (this.inputStream === undefined) { this.inputStream = null; } 
            if (this.buffer === undefined) { this.buffer = null; } 
            this.bufpos = -1;
            this.column = 0;
            this.line = 1;
            this.prevCharIsCR = false;
            this.prevCharIsLF = false;
            this.maxNextCharInd = 0;
            this.inBuf = 0;
            this.tabSize = 8;
            this.trackLineColumn = true;
            this.inputStream = dstream;
            this.line = startline;
            this.column = startcolumn - 1;
            this.available = this.bufsize = buffersize;
            this.buffer = (s => { let a=[]; while(s-->0) a.push(null); return a; })(buffersize);
            this.bufline = (s => { let a=[]; while(s-->0) a.push(0); return a; })(buffersize);
            this.bufcolumn = (s => { let a=[]; while(s-->0) a.push(0); return a; })(buffersize);
        } else if (((dstream != null && dstream instanceof <any>java.io.InputStream) || dstream === null) && ((typeof encoding === 'number') || encoding === null) && ((typeof startline === 'number') || startline === null) && ((typeof startcolumn === 'number') || startcolumn === null) && buffersize === undefined) {
            let __args = arguments;
            let startline: any = __args[1];
            let startcolumn: any = __args[2];
            let buffersize: any = __args[3];
            {
                let __args = arguments;
                let dstream: any = new java.io.InputStreamReader(__args[0]);
                if (this.bufsize === undefined) { this.bufsize = 0; } 
                if (this.available === undefined) { this.available = 0; } 
                if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
                if (this.bufline === undefined) { this.bufline = null; } 
                if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
                if (this.inputStream === undefined) { this.inputStream = null; } 
                if (this.buffer === undefined) { this.buffer = null; } 
                this.bufpos = -1;
                this.column = 0;
                this.line = 1;
                this.prevCharIsCR = false;
                this.prevCharIsLF = false;
                this.maxNextCharInd = 0;
                this.inBuf = 0;
                this.tabSize = 8;
                this.trackLineColumn = true;
                this.inputStream = dstream;
                this.line = startline;
                this.column = startcolumn - 1;
                this.available = this.bufsize = buffersize;
                this.buffer = (s => { let a=[]; while(s-->0) a.push(null); return a; })(buffersize);
                this.bufline = (s => { let a=[]; while(s-->0) a.push(0); return a; })(buffersize);
                this.bufcolumn = (s => { let a=[]; while(s-->0) a.push(0); return a; })(buffersize);
            }
            if (this.bufsize === undefined) { this.bufsize = 0; } 
            if (this.available === undefined) { this.available = 0; } 
            if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
            if (this.bufline === undefined) { this.bufline = null; } 
            if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
            if (this.inputStream === undefined) { this.inputStream = null; } 
            if (this.buffer === undefined) { this.buffer = null; } 
            this.bufpos = -1;
            this.column = 0;
            this.line = 1;
            this.prevCharIsCR = false;
            this.prevCharIsLF = false;
            this.maxNextCharInd = 0;
            this.inBuf = 0;
            this.tabSize = 8;
            this.trackLineColumn = true;
        } else if (((dstream != null && dstream instanceof <any>java.io.Reader) || dstream === null) && ((typeof encoding === 'number') || encoding === null) && ((typeof startline === 'number') || startline === null) && startcolumn === undefined && buffersize === undefined) {
            let __args = arguments;
            let startline: any = __args[1];
            let startcolumn: any = __args[2];
            {
                let __args = arguments;
                let buffersize: any = 4096;
                if (this.bufsize === undefined) { this.bufsize = 0; } 
                if (this.available === undefined) { this.available = 0; } 
                if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
                if (this.bufline === undefined) { this.bufline = null; } 
                if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
                if (this.inputStream === undefined) { this.inputStream = null; } 
                if (this.buffer === undefined) { this.buffer = null; } 
                this.bufpos = -1;
                this.column = 0;
                this.line = 1;
                this.prevCharIsCR = false;
                this.prevCharIsLF = false;
                this.maxNextCharInd = 0;
                this.inBuf = 0;
                this.tabSize = 8;
                this.trackLineColumn = true;
                this.inputStream = dstream;
                this.line = startline;
                this.column = startcolumn - 1;
                this.available = this.bufsize = buffersize;
                this.buffer = (s => { let a=[]; while(s-->0) a.push(null); return a; })(buffersize);
                this.bufline = (s => { let a=[]; while(s-->0) a.push(0); return a; })(buffersize);
                this.bufcolumn = (s => { let a=[]; while(s-->0) a.push(0); return a; })(buffersize);
            }
            if (this.bufsize === undefined) { this.bufsize = 0; } 
            if (this.available === undefined) { this.available = 0; } 
            if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
            if (this.bufline === undefined) { this.bufline = null; } 
            if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
            if (this.inputStream === undefined) { this.inputStream = null; } 
            if (this.buffer === undefined) { this.buffer = null; } 
            this.bufpos = -1;
            this.column = 0;
            this.line = 1;
            this.prevCharIsCR = false;
            this.prevCharIsLF = false;
            this.maxNextCharInd = 0;
            this.inBuf = 0;
            this.tabSize = 8;
            this.trackLineColumn = true;
        } else if (((dstream != null && dstream instanceof <any>java.io.InputStream) || dstream === null) && ((typeof encoding === 'number') || encoding === null) && ((typeof startline === 'number') || startline === null) && startcolumn === undefined && buffersize === undefined) {
            let __args = arguments;
            let startline: any = __args[1];
            let startcolumn: any = __args[2];
            {
                let __args = arguments;
                let buffersize: any = 4096;
                {
                    let __args = arguments;
                    let dstream: any = new java.io.InputStreamReader(__args[0]);
                    if (this.bufsize === undefined) { this.bufsize = 0; } 
                    if (this.available === undefined) { this.available = 0; } 
                    if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
                    if (this.bufline === undefined) { this.bufline = null; } 
                    if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
                    if (this.inputStream === undefined) { this.inputStream = null; } 
                    if (this.buffer === undefined) { this.buffer = null; } 
                    this.bufpos = -1;
                    this.column = 0;
                    this.line = 1;
                    this.prevCharIsCR = false;
                    this.prevCharIsLF = false;
                    this.maxNextCharInd = 0;
                    this.inBuf = 0;
                    this.tabSize = 8;
                    this.trackLineColumn = true;
                    this.inputStream = dstream;
                    this.line = startline;
                    this.column = startcolumn - 1;
                    this.available = this.bufsize = buffersize;
                    this.buffer = (s => { let a=[]; while(s-->0) a.push(null); return a; })(buffersize);
                    this.bufline = (s => { let a=[]; while(s-->0) a.push(0); return a; })(buffersize);
                    this.bufcolumn = (s => { let a=[]; while(s-->0) a.push(0); return a; })(buffersize);
                }
                if (this.bufsize === undefined) { this.bufsize = 0; } 
                if (this.available === undefined) { this.available = 0; } 
                if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
                if (this.bufline === undefined) { this.bufline = null; } 
                if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
                if (this.inputStream === undefined) { this.inputStream = null; } 
                if (this.buffer === undefined) { this.buffer = null; } 
                this.bufpos = -1;
                this.column = 0;
                this.line = 1;
                this.prevCharIsCR = false;
                this.prevCharIsLF = false;
                this.maxNextCharInd = 0;
                this.inBuf = 0;
                this.tabSize = 8;
                this.trackLineColumn = true;
            }
            if (this.bufsize === undefined) { this.bufsize = 0; } 
            if (this.available === undefined) { this.available = 0; } 
            if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
            if (this.bufline === undefined) { this.bufline = null; } 
            if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
            if (this.inputStream === undefined) { this.inputStream = null; } 
            if (this.buffer === undefined) { this.buffer = null; } 
            this.bufpos = -1;
            this.column = 0;
            this.line = 1;
            this.prevCharIsCR = false;
            this.prevCharIsLF = false;
            this.maxNextCharInd = 0;
            this.inBuf = 0;
            this.tabSize = 8;
            this.trackLineColumn = true;
        } else if (((dstream != null && dstream instanceof <any>java.io.InputStream) || dstream === null) && ((typeof encoding === 'string') || encoding === null) && startline === undefined && startcolumn === undefined && buffersize === undefined) {
            let __args = arguments;
            {
                let __args = arguments;
                let startline: any = 1;
                let startcolumn: any = 1;
                let buffersize: any = 4096;
                {
                    let __args = arguments;
                    let dstream: any = encoding == null ? new java.io.InputStreamReader(__args[0]) : new java.io.InputStreamReader(__args[0], encoding);
                    if (this.bufsize === undefined) { this.bufsize = 0; } 
                    if (this.available === undefined) { this.available = 0; } 
                    if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
                    if (this.bufline === undefined) { this.bufline = null; } 
                    if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
                    if (this.inputStream === undefined) { this.inputStream = null; } 
                    if (this.buffer === undefined) { this.buffer = null; } 
                    this.bufpos = -1;
                    this.column = 0;
                    this.line = 1;
                    this.prevCharIsCR = false;
                    this.prevCharIsLF = false;
                    this.maxNextCharInd = 0;
                    this.inBuf = 0;
                    this.tabSize = 8;
                    this.trackLineColumn = true;
                    this.inputStream = dstream;
                    this.line = startline;
                    this.column = startcolumn - 1;
                    this.available = this.bufsize = buffersize;
                    this.buffer = (s => { let a=[]; while(s-->0) a.push(null); return a; })(buffersize);
                    this.bufline = (s => { let a=[]; while(s-->0) a.push(0); return a; })(buffersize);
                    this.bufcolumn = (s => { let a=[]; while(s-->0) a.push(0); return a; })(buffersize);
                }
                if (this.bufsize === undefined) { this.bufsize = 0; } 
                if (this.available === undefined) { this.available = 0; } 
                if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
                if (this.bufline === undefined) { this.bufline = null; } 
                if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
                if (this.inputStream === undefined) { this.inputStream = null; } 
                if (this.buffer === undefined) { this.buffer = null; } 
                this.bufpos = -1;
                this.column = 0;
                this.line = 1;
                this.prevCharIsCR = false;
                this.prevCharIsLF = false;
                this.maxNextCharInd = 0;
                this.inBuf = 0;
                this.tabSize = 8;
                this.trackLineColumn = true;
            }
            if (this.bufsize === undefined) { this.bufsize = 0; } 
            if (this.available === undefined) { this.available = 0; } 
            if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
            if (this.bufline === undefined) { this.bufline = null; } 
            if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
            if (this.inputStream === undefined) { this.inputStream = null; } 
            if (this.buffer === undefined) { this.buffer = null; } 
            this.bufpos = -1;
            this.column = 0;
            this.line = 1;
            this.prevCharIsCR = false;
            this.prevCharIsLF = false;
            this.maxNextCharInd = 0;
            this.inBuf = 0;
            this.tabSize = 8;
            this.trackLineColumn = true;
        } else if (((dstream != null && dstream instanceof <any>java.io.Reader) || dstream === null) && encoding === undefined && startline === undefined && startcolumn === undefined && buffersize === undefined) {
            let __args = arguments;
            {
                let __args = arguments;
                let startline: any = 1;
                let startcolumn: any = 1;
                let buffersize: any = 4096;
                if (this.bufsize === undefined) { this.bufsize = 0; } 
                if (this.available === undefined) { this.available = 0; } 
                if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
                if (this.bufline === undefined) { this.bufline = null; } 
                if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
                if (this.inputStream === undefined) { this.inputStream = null; } 
                if (this.buffer === undefined) { this.buffer = null; } 
                this.bufpos = -1;
                this.column = 0;
                this.line = 1;
                this.prevCharIsCR = false;
                this.prevCharIsLF = false;
                this.maxNextCharInd = 0;
                this.inBuf = 0;
                this.tabSize = 8;
                this.trackLineColumn = true;
                this.inputStream = dstream;
                this.line = startline;
                this.column = startcolumn - 1;
                this.available = this.bufsize = buffersize;
                this.buffer = (s => { let a=[]; while(s-->0) a.push(null); return a; })(buffersize);
                this.bufline = (s => { let a=[]; while(s-->0) a.push(0); return a; })(buffersize);
                this.bufcolumn = (s => { let a=[]; while(s-->0) a.push(0); return a; })(buffersize);
            }
            if (this.bufsize === undefined) { this.bufsize = 0; } 
            if (this.available === undefined) { this.available = 0; } 
            if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
            if (this.bufline === undefined) { this.bufline = null; } 
            if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
            if (this.inputStream === undefined) { this.inputStream = null; } 
            if (this.buffer === undefined) { this.buffer = null; } 
            this.bufpos = -1;
            this.column = 0;
            this.line = 1;
            this.prevCharIsCR = false;
            this.prevCharIsLF = false;
            this.maxNextCharInd = 0;
            this.inBuf = 0;
            this.tabSize = 8;
            this.trackLineColumn = true;
        } else if (((dstream != null && dstream instanceof <any>java.io.InputStream) || dstream === null) && encoding === undefined && startline === undefined && startcolumn === undefined && buffersize === undefined) {
            let __args = arguments;
            {
                let __args = arguments;
                let startline: any = 1;
                let startcolumn: any = 1;
                let buffersize: any = 4096;
                {
                    let __args = arguments;
                    let dstream: any = new java.io.InputStreamReader(__args[0]);
                    if (this.bufsize === undefined) { this.bufsize = 0; } 
                    if (this.available === undefined) { this.available = 0; } 
                    if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
                    if (this.bufline === undefined) { this.bufline = null; } 
                    if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
                    if (this.inputStream === undefined) { this.inputStream = null; } 
                    if (this.buffer === undefined) { this.buffer = null; } 
                    this.bufpos = -1;
                    this.column = 0;
                    this.line = 1;
                    this.prevCharIsCR = false;
                    this.prevCharIsLF = false;
                    this.maxNextCharInd = 0;
                    this.inBuf = 0;
                    this.tabSize = 8;
                    this.trackLineColumn = true;
                    this.inputStream = dstream;
                    this.line = startline;
                    this.column = startcolumn - 1;
                    this.available = this.bufsize = buffersize;
                    this.buffer = (s => { let a=[]; while(s-->0) a.push(null); return a; })(buffersize);
                    this.bufline = (s => { let a=[]; while(s-->0) a.push(0); return a; })(buffersize);
                    this.bufcolumn = (s => { let a=[]; while(s-->0) a.push(0); return a; })(buffersize);
                }
                if (this.bufsize === undefined) { this.bufsize = 0; } 
                if (this.available === undefined) { this.available = 0; } 
                if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
                if (this.bufline === undefined) { this.bufline = null; } 
                if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
                if (this.inputStream === undefined) { this.inputStream = null; } 
                if (this.buffer === undefined) { this.buffer = null; } 
                this.bufpos = -1;
                this.column = 0;
                this.line = 1;
                this.prevCharIsCR = false;
                this.prevCharIsLF = false;
                this.maxNextCharInd = 0;
                this.inBuf = 0;
                this.tabSize = 8;
                this.trackLineColumn = true;
            }
            if (this.bufsize === undefined) { this.bufsize = 0; } 
            if (this.available === undefined) { this.available = 0; } 
            if (this.tokenBegin === undefined) { this.tokenBegin = 0; } 
            if (this.bufline === undefined) { this.bufline = null; } 
            if (this.bufcolumn === undefined) { this.bufcolumn = null; } 
            if (this.inputStream === undefined) { this.inputStream = null; } 
            if (this.buffer === undefined) { this.buffer = null; } 
            this.bufpos = -1;
            this.column = 0;
            this.line = 1;
            this.prevCharIsCR = false;
            this.prevCharIsLF = false;
            this.maxNextCharInd = 0;
            this.inBuf = 0;
            this.tabSize = 8;
            this.trackLineColumn = true;
        } else throw new Error('invalid overload');
    }

    public ReInit$java_io_InputStream$java_lang_String$int$int$int(dstream: java.io.InputStream, encoding: string, startline: number, startcolumn: number, buffersize: number) {
        this.ReInit$java_io_Reader$int$int$int(encoding == null ? new java.io.InputStreamReader(dstream) : new java.io.InputStreamReader(dstream, encoding), startline, startcolumn, buffersize);
    }

    /**
     * Reinitialise.
     * @param {java.io.InputStream} dstream
     * @param {string} encoding
     * @param {number} startline
     * @param {number} startcolumn
     * @param {number} buffersize
     */
    public ReInit(dstream?: any, encoding?: any, startline?: any, startcolumn?: any, buffersize?: any) {
        if (((dstream != null && dstream instanceof <any>java.io.InputStream) || dstream === null) && ((typeof encoding === 'string') || encoding === null) && ((typeof startline === 'number') || startline === null) && ((typeof startcolumn === 'number') || startcolumn === null) && ((typeof buffersize === 'number') || buffersize === null)) {
            return <any>this.ReInit$java_io_InputStream$java_lang_String$int$int$int(dstream, encoding, startline, startcolumn, buffersize);
        } else if (((dstream != null && dstream instanceof <any>java.io.InputStream) || dstream === null) && ((typeof encoding === 'string') || encoding === null) && ((typeof startline === 'number') || startline === null) && ((typeof startcolumn === 'number') || startcolumn === null) && buffersize === undefined) {
            return <any>this.ReInit$java_io_InputStream$java_lang_String$int$int(dstream, encoding, startline, startcolumn);
        } else if (((dstream != null && dstream instanceof <any>java.io.Reader) || dstream === null) && ((typeof encoding === 'number') || encoding === null) && ((typeof startline === 'number') || startline === null) && ((typeof startcolumn === 'number') || startcolumn === null) && buffersize === undefined) {
            return <any>this.ReInit$java_io_Reader$int$int$int(dstream, encoding, startline, startcolumn);
        } else if (((dstream != null && dstream instanceof <any>java.io.InputStream) || dstream === null) && ((typeof encoding === 'number') || encoding === null) && ((typeof startline === 'number') || startline === null) && ((typeof startcolumn === 'number') || startcolumn === null) && buffersize === undefined) {
            return <any>this.ReInit$java_io_InputStream$int$int$int(dstream, encoding, startline, startcolumn);
        } else if (((dstream != null && dstream instanceof <any>java.io.Reader) || dstream === null) && ((typeof encoding === 'number') || encoding === null) && ((typeof startline === 'number') || startline === null) && startcolumn === undefined && buffersize === undefined) {
            return <any>this.ReInit$java_io_Reader$int$int(dstream, encoding, startline);
        } else if (((dstream != null && dstream instanceof <any>java.io.InputStream) || dstream === null) && ((typeof encoding === 'number') || encoding === null) && ((typeof startline === 'number') || startline === null) && startcolumn === undefined && buffersize === undefined) {
            return <any>this.ReInit$java_io_InputStream$int$int(dstream, encoding, startline);
        } else if (((dstream != null && dstream instanceof <any>java.io.InputStream) || dstream === null) && ((typeof encoding === 'string') || encoding === null) && startline === undefined && startcolumn === undefined && buffersize === undefined) {
            return <any>this.ReInit$java_io_InputStream$java_lang_String(dstream, encoding);
        } else if (((dstream != null && dstream instanceof <any>java.io.Reader) || dstream === null) && encoding === undefined && startline === undefined && startcolumn === undefined && buffersize === undefined) {
            return <any>this.ReInit$java_io_Reader(dstream);
        } else if (((dstream != null && dstream instanceof <any>java.io.InputStream) || dstream === null) && encoding === undefined && startline === undefined && startcolumn === undefined && buffersize === undefined) {
            return <any>this.ReInit$java_io_InputStream(dstream);
        } else throw new Error('invalid overload');
    }

    public ReInit$java_io_InputStream$int$int$int(dstream: java.io.InputStream, startline: number, startcolumn: number, buffersize: number) {
        this.ReInit$java_io_Reader$int$int$int(new java.io.InputStreamReader(dstream), startline, startcolumn, buffersize);
    }

    public ReInit$java_io_InputStream$java_lang_String(dstream: java.io.InputStream, encoding: string) {
        this.ReInit$java_io_InputStream$java_lang_String$int$int$int(dstream, encoding, 1, 1, 4096);
    }

    public ReInit$java_io_InputStream(dstream: java.io.InputStream) {
        this.ReInit$java_io_InputStream$int$int$int(dstream, 1, 1, 4096);
    }

    public ReInit$java_io_InputStream$java_lang_String$int$int(dstream: java.io.InputStream, encoding: string, startline: number, startcolumn: number) {
        this.ReInit$java_io_InputStream$java_lang_String$int$int$int(dstream, encoding, startline, startcolumn, 4096);
    }

    public ReInit$java_io_InputStream$int$int(dstream: java.io.InputStream, startline: number, startcolumn: number) {
        this.ReInit$java_io_InputStream$int$int$int(dstream, startline, startcolumn, 4096);
    }

    /**
     * Get token literal value.
     * @return {string}
     */
    public GetImage(): string {
        if (this.bufpos >= this.tokenBegin)return <string>((str, index, len) => str.substring(index, index + len))((this.buffer).join(''), this.tokenBegin, this.bufpos - this.tokenBegin + 1); else return <string>((str, index, len) => str.substring(index, index + len))((this.buffer).join(''), this.tokenBegin, this.bufsize - this.tokenBegin) + <string>((str, index, len) => str.substring(index, index + len))((this.buffer).join(''), 0, this.bufpos + 1);
    }

    /**
     * Get the suffix.
     * @param {number} len
     * @return {char[]}
     */
    public GetSuffix(len: number): string[] {
        const ret: string[] = (s => { let a=[]; while(s-->0) a.push(null); return a; })(len);
        if ((this.bufpos + 1) >= len)java.lang.System.arraycopy(this.buffer, this.bufpos - len + 1, ret, 0, len); else {
            java.lang.System.arraycopy(this.buffer, this.bufsize - (len - this.bufpos - 1), ret, 0, len - this.bufpos - 1);
            java.lang.System.arraycopy(this.buffer, 0, ret, len - this.bufpos - 1, this.bufpos + 1);
        }
        return ret;
    }

    /**
     * Reset buffer when finished.
     */
    public Done() {
        this.buffer = null;
        this.bufline = null;
        this.bufcolumn = null;
    }

    /**
     * Method to adjust line and column numbers for the start of a token.
     * @param {number} newLine
     * @param {number} newCol
     */
    public adjustBeginLineColumn(newLine: number, newCol: number) {
        let start: number = this.tokenBegin;
        let len: number;
        if (this.bufpos >= this.tokenBegin){
            len = this.bufpos - this.tokenBegin + this.inBuf + 1;
        } else {
            len = this.bufsize - this.tokenBegin + this.bufpos + 1 + this.inBuf;
        }
        let i: number = 0;
        let j: number = 0;
        let k: number = 0;
        let nextColDiff: number = 0;
        let columnDiff: number = 0;
        while((i < len && this.bufline[j = start % this.bufsize] === this.bufline[k = ++start % this.bufsize])) {{
            this.bufline[j] = newLine;
            nextColDiff = columnDiff + this.bufcolumn[k] - this.bufcolumn[j];
            this.bufcolumn[j] = newCol + columnDiff;
            columnDiff = nextColDiff;
            i++;
        }};
        if (i < len){
            this.bufline[j] = newLine++;
            this.bufcolumn[j] = newCol + columnDiff;
            while((i++ < len)) {{
                if (this.bufline[j = start % this.bufsize] !== this.bufline[++start % this.bufsize])this.bufline[j] = newLine++; else this.bufline[j] = newLine;
            }};
        }
        this.line = this.bufline[j];
        this.column = this.bufcolumn[j];
    }

    getTrackLineColumn(): boolean {
        return this.trackLineColumn;
    }

    setTrackLineColumn(tlc: boolean) {
        this.trackLineColumn = tlc;
    }
}
SimpleCharStream["__class"] = "org.mariuszgromada.math.mxparser.syntaxchecker.SimpleCharStream";