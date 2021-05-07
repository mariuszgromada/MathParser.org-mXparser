import { java } from 'j4ts/j4ts';
import { Token } from './Token';
import { SimpleCharStream } from './SimpleCharStream';
import { SyntaxCheckerTokenManager } from './SyntaxCheckerTokenManager';
import { ParseException } from './ParseException';
import { SyntaxCheckerConstants } from './SyntaxCheckerConstants';

/**
 * Constructor with InputStream and supplied encoding
 * @param {InputStream} stream
 * @param {string} encoding
 * @class
 */
 export class SyntaxChecker implements SyntaxCheckerConstants {
    static __static_initialized: boolean = false;
    static __static_initialize() { if (!SyntaxChecker.__static_initialized) { SyntaxChecker.__static_initialized = true; SyntaxChecker.__static_initializer_0(); } }

    public checkSyntax() {
        this.start();
    }

    public start() {
        switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
        case 46 /* LEFT_PAR */:
        case 48 /* PLUS */:
        case 49 /* MINUS */:
        case 60 /* UNIT */:
        case 68 /* NOT */:
        case 69 /* BITNOT */:
        case 82 /* DECIMAL */:
        case 83 /* BASE1 */:
        case 84 /* BASE2 */:
        case 85 /* BASE3 */:
        case 86 /* BASE4 */:
        case 87 /* BASE5 */:
        case 88 /* BASE6 */:
        case 89 /* BASE7 */:
        case 90 /* BASE8 */:
        case 91 /* BASE9 */:
        case 92 /* BASE10 */:
        case 93 /* BASE11 */:
        case 94 /* BASE12 */:
        case 95 /* BASE13 */:
        case 96 /* BASE14 */:
        case 97 /* BASE15 */:
        case 98 /* BASE16 */:
        case 99 /* BASE17 */:
        case 100 /* BASE18 */:
        case 101 /* BASE19 */:
        case 102 /* BASE20 */:
        case 103 /* BASE21 */:
        case 104 /* BASE22 */:
        case 105 /* BASE23 */:
        case 106 /* BASE24 */:
        case 107 /* BASE25 */:
        case 108 /* BASE26 */:
        case 109 /* BASE27 */:
        case 110 /* BASE28 */:
        case 111 /* BASE29 */:
        case 112 /* BASE30 */:
        case 113 /* BASE31 */:
        case 114 /* BASE32 */:
        case 115 /* BASE33 */:
        case 116 /* BASE34 */:
        case 117 /* BASE35 */:
        case 118 /* BASE36 */:
        case 119 /* BINARY */:
        case 120 /* OCTAL */:
        case 121 /* HEXADECIMAL */:
        case 122 /* FRACTION */:
        case 123 /* IDENTIFIER */:
        case 124 /* FUNCTION */:
        case 125:
            {
                this.expression();
                this.jj_consume_token(0);
                break;
            };
        case 0:
            {
                this.jj_consume_token(0);
                break;
            };
        default:
            this.jj_la1[0] = this.jj_gen;
            this.jj_consume_token(-1);
            throw new ParseException();
        }
    }

    public expression() {
        this.binaryExpression();
    }

    public binaryExpression() {
        this.unaryRigthExpression();
        label_1: while((true)) {{
            switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
            case 48 /* PLUS */:
            case 49 /* MINUS */:
            case 50 /* MULTIPLY */:
            case 51 /* DIV */:
            case 52 /* POWER */:
            case 53 /* TETRATION */:
            case 54 /* MODULO */:
            case 59 /* EQ */:
            case 61 /* NEQ */:
            case 62 /* LT */:
            case 63 /* LEQ */:
            case 64 /* GT */:
            case 65 /* GEQ */:
            case 66 /* OR */:
            case 67 /* AND */:
            case 70 /* IMP */:
            case 71 /* CIMP */:
            case 72 /* NIMP */:
            case 73 /* CNIMP */:
            case 74 /* NAND */:
            case 75 /* EQV */:
            case 76 /* NOR */:
            case 77 /* BITWISE */:
            case 78 /* XOR */:
                {
                    break;
                };
            default:
                this.jj_la1[1] = this.jj_gen;
                break label_1;
            }
            switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
            case 48 /* PLUS */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.PLUS);
                    this.unaryRigthExpression();
                    break;
                };
            case 49 /* MINUS */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.MINUS);
                    this.unaryRigthExpression();
                    break;
                };
            case 50 /* MULTIPLY */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.MULTIPLY);
                    this.unaryRigthExpression();
                    break;
                };
            case 51 /* DIV */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.DIV);
                    this.unaryRigthExpression();
                    break;
                };
            case 54 /* MODULO */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.MODULO);
                    this.unaryRigthExpression();
                    break;
                };
            case 52 /* POWER */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.POWER);
                    this.unaryRigthExpression();
                    break;
                };
            case 53 /* TETRATION */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.TETRATION);
                    this.unaryRigthExpression();
                    break;
                };
            case 59 /* EQ */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.EQ);
                    this.unaryRigthExpression();
                    break;
                };
            case 61 /* NEQ */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.NEQ);
                    this.unaryRigthExpression();
                    break;
                };
            case 64 /* GT */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.GT);
                    this.unaryRigthExpression();
                    break;
                };
            case 65 /* GEQ */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.GEQ);
                    this.unaryRigthExpression();
                    break;
                };
            case 62 /* LT */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.LT);
                    this.unaryRigthExpression();
                    break;
                };
            case 63 /* LEQ */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.LEQ);
                    this.unaryRigthExpression();
                    break;
                };
            case 66 /* OR */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.OR);
                    this.unaryRigthExpression();
                    break;
                };
            case 67 /* AND */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.AND);
                    this.unaryRigthExpression();
                    break;
                };
            case 76 /* NOR */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.NOR);
                    this.unaryRigthExpression();
                    break;
                };
            case 74 /* NAND */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.NAND);
                    this.unaryRigthExpression();
                    break;
                };
            case 78 /* XOR */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.XOR);
                    this.unaryRigthExpression();
                    break;
                };
            case 70 /* IMP */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.IMP);
                    this.unaryRigthExpression();
                    break;
                };
            case 71 /* CIMP */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.CIMP);
                    this.unaryRigthExpression();
                    break;
                };
            case 72 /* NIMP */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.NIMP);
                    this.unaryRigthExpression();
                    break;
                };
            case 73 /* CNIMP */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.CNIMP);
                    this.unaryRigthExpression();
                    break;
                };
            case 75 /* EQV */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.EQV);
                    this.unaryRigthExpression();
                    break;
                };
            case 77 /* BITWISE */:
                {
                    this.jj_consume_token(SyntaxCheckerConstants.BITWISE);
                    this.unaryRigthExpression();
                    break;
                };
            default:
                this.jj_la1[2] = this.jj_gen;
                this.jj_consume_token(-1);
                throw new ParseException();
            }
        }};
    }

    public unaryRigthExpression() {
        this.unaryLeftExpression();
        switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
        case 55 /* FACTORIAL */:
        case 56 /* PERCENTAGE */:
            {
                switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
                case 55 /* FACTORIAL */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.FACTORIAL);
                        break;
                    };
                case 56 /* PERCENTAGE */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.PERCENTAGE);
                        break;
                    };
                default:
                    this.jj_la1[3] = this.jj_gen;
                    this.jj_consume_token(-1);
                    throw new ParseException();
                }
                break;
            };
        default:
            this.jj_la1[4] = this.jj_gen;
            ;
        }
    }

    public unaryLeftExpression() {
        switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
        case 68 /* NOT */:
        case 69 /* BITNOT */:
            {
                switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
                case 68 /* NOT */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.NOT);
                        break;
                    };
                case 69 /* BITNOT */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BITNOT);
                        break;
                    };
                default:
                    this.jj_la1[5] = this.jj_gen;
                    this.jj_consume_token(-1);
                    throw new ParseException();
                }
                break;
            };
        default:
            this.jj_la1[6] = this.jj_gen;
            ;
        }
        this.itemExpression();
    }

    public itemExpression() {
        switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
        case 48 /* PLUS */:
        case 49 /* MINUS */:
            {
                switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
                case 48 /* PLUS */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.PLUS);
                        break;
                    };
                case 49 /* MINUS */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.MINUS);
                        break;
                    };
                default:
                    this.jj_la1[7] = this.jj_gen;
                    this.jj_consume_token(-1);
                    throw new ParseException();
                }
                break;
            };
        default:
            this.jj_la1[8] = this.jj_gen;
            ;
        }
        switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
        case 82 /* DECIMAL */:
        case 83 /* BASE1 */:
        case 84 /* BASE2 */:
        case 85 /* BASE3 */:
        case 86 /* BASE4 */:
        case 87 /* BASE5 */:
        case 88 /* BASE6 */:
        case 89 /* BASE7 */:
        case 90 /* BASE8 */:
        case 91 /* BASE9 */:
        case 92 /* BASE10 */:
        case 93 /* BASE11 */:
        case 94 /* BASE12 */:
        case 95 /* BASE13 */:
        case 96 /* BASE14 */:
        case 97 /* BASE15 */:
        case 98 /* BASE16 */:
        case 99 /* BASE17 */:
        case 100 /* BASE18 */:
        case 101 /* BASE19 */:
        case 102 /* BASE20 */:
        case 103 /* BASE21 */:
        case 104 /* BASE22 */:
        case 105 /* BASE23 */:
        case 106 /* BASE24 */:
        case 107 /* BASE25 */:
        case 108 /* BASE26 */:
        case 109 /* BASE27 */:
        case 110 /* BASE28 */:
        case 111 /* BASE29 */:
        case 112 /* BASE30 */:
        case 113 /* BASE31 */:
        case 114 /* BASE32 */:
        case 115 /* BASE33 */:
        case 116 /* BASE34 */:
        case 117 /* BASE35 */:
        case 118 /* BASE36 */:
        case 119 /* BINARY */:
        case 120 /* OCTAL */:
        case 121 /* HEXADECIMAL */:
        case 122 /* FRACTION */:
            {
                switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
                case 82 /* DECIMAL */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.DECIMAL);
                        break;
                    };
                case 121 /* HEXADECIMAL */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.HEXADECIMAL);
                        break;
                    };
                case 120 /* OCTAL */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.OCTAL);
                        break;
                    };
                case 119 /* BINARY */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BINARY);
                        break;
                    };
                case 83 /* BASE1 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE1);
                        break;
                    };
                case 84 /* BASE2 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE2);
                        break;
                    };
                case 85 /* BASE3 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE3);
                        break;
                    };
                case 86 /* BASE4 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE4);
                        break;
                    };
                case 87 /* BASE5 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE5);
                        break;
                    };
                case 88 /* BASE6 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE6);
                        break;
                    };
                case 89 /* BASE7 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE7);
                        break;
                    };
                case 90 /* BASE8 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE8);
                        break;
                    };
                case 91 /* BASE9 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE9);
                        break;
                    };
                case 92 /* BASE10 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE10);
                        break;
                    };
                case 93 /* BASE11 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE11);
                        break;
                    };
                case 94 /* BASE12 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE12);
                        break;
                    };
                case 95 /* BASE13 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE13);
                        break;
                    };
                case 96 /* BASE14 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE14);
                        break;
                    };
                case 97 /* BASE15 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE15);
                        break;
                    };
                case 98 /* BASE16 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE16);
                        break;
                    };
                case 99 /* BASE17 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE17);
                        break;
                    };
                case 100 /* BASE18 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE18);
                        break;
                    };
                case 101 /* BASE19 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE19);
                        break;
                    };
                case 102 /* BASE20 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE20);
                        break;
                    };
                case 103 /* BASE21 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE21);
                        break;
                    };
                case 104 /* BASE22 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE22);
                        break;
                    };
                case 105 /* BASE23 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE23);
                        break;
                    };
                case 106 /* BASE24 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE24);
                        break;
                    };
                case 107 /* BASE25 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE25);
                        break;
                    };
                case 108 /* BASE26 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE26);
                        break;
                    };
                case 109 /* BASE27 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE27);
                        break;
                    };
                case 110 /* BASE28 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE28);
                        break;
                    };
                case 111 /* BASE29 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE29);
                        break;
                    };
                case 112 /* BASE30 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE30);
                        break;
                    };
                case 113 /* BASE31 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE31);
                        break;
                    };
                case 114 /* BASE32 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE32);
                        break;
                    };
                case 115 /* BASE33 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE33);
                        break;
                    };
                case 116 /* BASE34 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE34);
                        break;
                    };
                case 117 /* BASE35 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE35);
                        break;
                    };
                case 118 /* BASE36 */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.BASE36);
                        break;
                    };
                case 122 /* FRACTION */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.FRACTION);
                        break;
                    };
                default:
                    this.jj_la1[9] = this.jj_gen;
                    this.jj_consume_token(-1);
                    throw new ParseException();
                }
                break;
            };
        case 60 /* UNIT */:
        case 123 /* IDENTIFIER */:
        case 124 /* FUNCTION */:
        case 125:
            {
                switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
                case 60 /* UNIT */:
                case 123 /* IDENTIFIER */:
                case 125:
                    {
                        this.identifier();
                        break;
                    };
                case 124 /* FUNCTION */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.FUNCTION);
                        break;
                    };
                default:
                    this.jj_la1[10] = this.jj_gen;
                    this.jj_consume_token(-1);
                    throw new ParseException();
                }
                switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
                case 46 /* LEFT_PAR */:
                    {
                        this.jj_consume_token(SyntaxCheckerConstants.LEFT_PAR);
                        this.argumentList();
                        this.jj_consume_token(SyntaxCheckerConstants.RIGHT_PAR);
                        break;
                    };
                default:
                    this.jj_la1[11] = this.jj_gen;
                    ;
                }
                break;
            };
        case 46 /* LEFT_PAR */:
            {
                this.jj_consume_token(SyntaxCheckerConstants.LEFT_PAR);
                this.expression();
                this.jj_consume_token(SyntaxCheckerConstants.RIGHT_PAR);
                break;
            };
        default:
            this.jj_la1[12] = this.jj_gen;
            this.jj_consume_token(-1);
            throw new ParseException();
        }
    }

    public argumentList() {
        switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
        case 46 /* LEFT_PAR */:
        case 48 /* PLUS */:
        case 49 /* MINUS */:
        case 60 /* UNIT */:
        case 68 /* NOT */:
        case 69 /* BITNOT */:
        case 82 /* DECIMAL */:
        case 83 /* BASE1 */:
        case 84 /* BASE2 */:
        case 85 /* BASE3 */:
        case 86 /* BASE4 */:
        case 87 /* BASE5 */:
        case 88 /* BASE6 */:
        case 89 /* BASE7 */:
        case 90 /* BASE8 */:
        case 91 /* BASE9 */:
        case 92 /* BASE10 */:
        case 93 /* BASE11 */:
        case 94 /* BASE12 */:
        case 95 /* BASE13 */:
        case 96 /* BASE14 */:
        case 97 /* BASE15 */:
        case 98 /* BASE16 */:
        case 99 /* BASE17 */:
        case 100 /* BASE18 */:
        case 101 /* BASE19 */:
        case 102 /* BASE20 */:
        case 103 /* BASE21 */:
        case 104 /* BASE22 */:
        case 105 /* BASE23 */:
        case 106 /* BASE24 */:
        case 107 /* BASE25 */:
        case 108 /* BASE26 */:
        case 109 /* BASE27 */:
        case 110 /* BASE28 */:
        case 111 /* BASE29 */:
        case 112 /* BASE30 */:
        case 113 /* BASE31 */:
        case 114 /* BASE32 */:
        case 115 /* BASE33 */:
        case 116 /* BASE34 */:
        case 117 /* BASE35 */:
        case 118 /* BASE36 */:
        case 119 /* BINARY */:
        case 120 /* OCTAL */:
        case 121 /* HEXADECIMAL */:
        case 122 /* FRACTION */:
        case 123 /* IDENTIFIER */:
        case 124 /* FUNCTION */:
        case 125:
            {
                this.expression();
                label_2: while((true)) {{
                    switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
                    case 57 /* COMMA */:
                    case 58 /* SEMICOLON */:
                        {
                            break;
                        };
                    default:
                        this.jj_la1[13] = this.jj_gen;
                        break label_2;
                    }
                    switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
                    case 57 /* COMMA */:
                        {
                            this.jj_consume_token(SyntaxCheckerConstants.COMMA);
                            break;
                        };
                    case 58 /* SEMICOLON */:
                        {
                            this.jj_consume_token(SyntaxCheckerConstants.SEMICOLON);
                            break;
                        };
                    default:
                        this.jj_la1[14] = this.jj_gen;
                        this.jj_consume_token(-1);
                        throw new ParseException();
                    }
                    this.expression();
                }};
                break;
            };
        default:
            this.jj_la1[15] = this.jj_gen;
            ;
        }
    }

    public identifier() {
        switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
        case 123 /* IDENTIFIER */:
            {
                this.jj_consume_token(SyntaxCheckerConstants.IDENTIFIER);
                break;
            };
        case 60 /* UNIT */:
            {
                this.jj_consume_token(SyntaxCheckerConstants.UNIT);
                break;
            };
        case 125:
            {
                this.jj_consume_token(125);
                label_3: while((true)) {{
                    switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
                    case 79 /* CHAR */:
                        {
                            this.jj_consume_token(SyntaxCheckerConstants.CHAR);
                            break;
                        };
                    case 123 /* IDENTIFIER */:
                        {
                            this.jj_consume_token(SyntaxCheckerConstants.IDENTIFIER);
                            label_4: while((true)) {{
                                switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
                                case 46 /* LEFT_PAR */:
                                case 47 /* RIGHT_PAR */:
                                case 48 /* PLUS */:
                                case 49 /* MINUS */:
                                case 50 /* MULTIPLY */:
                                case 51 /* DIV */:
                                case 52 /* POWER */:
                                case 54 /* MODULO */:
                                case 57 /* COMMA */:
                                case 62 /* LT */:
                                case 64 /* GT */:
                                case 66 /* OR */:
                                case 67 /* AND */:
                                case 68 /* NOT */:
                                case 82 /* DECIMAL */:
                                    {
                                        break;
                                    };
                                default:
                                    this.jj_la1[16] = this.jj_gen;
                                    break label_4;
                                }
                                switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
                                case 68 /* NOT */:
                                    {
                                        this.jj_consume_token(SyntaxCheckerConstants.NOT);
                                        break;
                                    };
                                case 54 /* MODULO */:
                                    {
                                        this.jj_consume_token(SyntaxCheckerConstants.MODULO);
                                        break;
                                    };
                                case 52 /* POWER */:
                                    {
                                        this.jj_consume_token(SyntaxCheckerConstants.POWER);
                                        break;
                                    };
                                case 67 /* AND */:
                                    {
                                        this.jj_consume_token(SyntaxCheckerConstants.AND);
                                        break;
                                    };
                                case 50 /* MULTIPLY */:
                                    {
                                        this.jj_consume_token(SyntaxCheckerConstants.MULTIPLY);
                                        break;
                                    };
                                case 51 /* DIV */:
                                    {
                                        this.jj_consume_token(SyntaxCheckerConstants.DIV);
                                        break;
                                    };
                                case 46 /* LEFT_PAR */:
                                    {
                                        this.jj_consume_token(SyntaxCheckerConstants.LEFT_PAR);
                                        break;
                                    };
                                case 47 /* RIGHT_PAR */:
                                    {
                                        this.jj_consume_token(SyntaxCheckerConstants.RIGHT_PAR);
                                        break;
                                    };
                                case 49 /* MINUS */:
                                    {
                                        this.jj_consume_token(SyntaxCheckerConstants.MINUS);
                                        break;
                                    };
                                case 48 /* PLUS */:
                                    {
                                        this.jj_consume_token(SyntaxCheckerConstants.PLUS);
                                        break;
                                    };
                                case 57 /* COMMA */:
                                    {
                                        this.jj_consume_token(SyntaxCheckerConstants.COMMA);
                                        break;
                                    };
                                case 66 /* OR */:
                                    {
                                        this.jj_consume_token(SyntaxCheckerConstants.OR);
                                        break;
                                    };
                                case 64 /* GT */:
                                    {
                                        this.jj_consume_token(SyntaxCheckerConstants.GT);
                                        break;
                                    };
                                case 62 /* LT */:
                                    {
                                        this.jj_consume_token(SyntaxCheckerConstants.LT);
                                        break;
                                    };
                                case 82 /* DECIMAL */:
                                    {
                                        this.jj_consume_token(SyntaxCheckerConstants.DECIMAL);
                                        break;
                                    };
                                default:
                                    this.jj_la1[17] = this.jj_gen;
                                    this.jj_consume_token(-1);
                                    throw new ParseException();
                                }
                            }};
                            break;
                        };
                    default:
                        this.jj_la1[18] = this.jj_gen;
                        this.jj_consume_token(-1);
                        throw new ParseException();
                    }
                    switch(((this.jj_ntk === -1) ? this.jj_ntk_f() : this.jj_ntk)) {
                    case 79 /* CHAR */:
                    case 123 /* IDENTIFIER */:
                        {
                            break;
                        };
                    default:
                        this.jj_la1[19] = this.jj_gen;
                        break label_3;
                    }
                }};
                this.jj_consume_token(126);
                break;
            };
        default:
            this.jj_la1[20] = this.jj_gen;
            this.jj_consume_token(-1);
            throw new ParseException();
        }
    }

    /**
     * Generated Token Manager.
     */
    public token_source: SyntaxCheckerTokenManager;

    jj_input_stream: SimpleCharStream;

    /**
     * Current token.
     */
    public token: Token;

    /**
     * Next token.
     */
    public jj_nt: Token;

    /*private*/ jj_ntk: number;

    /*private*/ jj_gen: number;

    /*private*/ jj_la1: number[];

    static jj_la1_0: number[]; public static jj_la1_0_$LI$(): number[] { SyntaxChecker.__static_initialize();  return SyntaxChecker.jj_la1_0; }

    static jj_la1_1: number[]; public static jj_la1_1_$LI$(): number[] { SyntaxChecker.__static_initialize();  return SyntaxChecker.jj_la1_1; }

    static jj_la1_2: number[]; public static jj_la1_2_$LI$(): number[] { SyntaxChecker.__static_initialize();  return SyntaxChecker.jj_la1_2; }

    static jj_la1_3: number[]; public static jj_la1_3_$LI$(): number[] { SyntaxChecker.__static_initialize();  return SyntaxChecker.jj_la1_3; }

    static jj_la1_4: number[]; public static jj_la1_4_$LI$(): number[] { SyntaxChecker.__static_initialize();  return SyntaxChecker.jj_la1_4; }

    static  __static_initializer_0() {
        SyntaxChecker.jj_la1_init_0();
        SyntaxChecker.jj_la1_init_1();
        SyntaxChecker.jj_la1_init_2();
        SyntaxChecker.jj_la1_init_3();
        SyntaxChecker.jj_la1_init_4();
    }

    /*private*/ static jj_la1_init_0() {
        SyntaxChecker.jj_la1_0 = [1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
    }

    /*private*/ static jj_la1_init_1() {
        SyntaxChecker.jj_la1_1 = [268648448, -394330112, -394330112, 25165824, 25165824, 0, 0, 196608, 196608, 0, 268435456, 16384, 268451840, 100663296, 100663296, 268648448, 1113571328, 1113571328, 0, 0, 268435456];
    }

    /*private*/ static jj_la1_init_2() {
        SyntaxChecker.jj_la1_2 = [-262096, 32719, 32719, 0, 0, 48, 48, 0, 0, -262144, 0, 0, -262144, 0, 0, -262096, 262173, 262173, 32768, 32768, 0];
    }

    /*private*/ static jj_la1_init_3() {
        SyntaxChecker.jj_la1_3 = [1073741823, 0, 0, 0, 0, 0, 0, 0, 0, 134217727, 939524096, 0, 1073741823, 0, 0, 1073741823, 0, 0, 134217728, 134217728, 671088640];
    }

    /*private*/ static jj_la1_init_4() {
        SyntaxChecker.jj_la1_4 = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
    }

    public constructor(stream?: any, encoding?: any) {
        if (((stream != null && stream instanceof <any>java.io.InputStream) || stream === null) && ((typeof encoding === 'string') || encoding === null)) {
            let __args = arguments;
            if (this.token_source === undefined) { this.token_source = null; } 
            if (this.jj_input_stream === undefined) { this.jj_input_stream = null; } 
            if (this.token === undefined) { this.token = null; } 
            if (this.jj_nt === undefined) { this.jj_nt = null; } 
            if (this.jj_ntk === undefined) { this.jj_ntk = 0; } 
            if (this.jj_gen === undefined) { this.jj_gen = 0; } 
            if (this.jj_expentry === undefined) { this.jj_expentry = null; } 
            this.jj_la1 = (s => { let a=[]; while(s-->0) a.push(0); return a; })(21);
            this.jj_expentries = <any>(new java.util.ArrayList<number[]>());
            this.jj_kind = -1;
            try {
                this.jj_input_stream = new SimpleCharStream(stream, encoding, 1, 1);
            } catch(e) {
                throw new java.lang.RuntimeException(e);
            }
            this.token_source = new SyntaxCheckerTokenManager(this.jj_input_stream);
            this.token = new Token();
            this.jj_ntk = -1;
            this.jj_gen = 0;
            for(let i: number = 0; i < 21; i++) {this.jj_la1[i] = -1;}
        } else if (((stream != null && stream instanceof <any>java.io.InputStream) || stream === null) && encoding === undefined) {
            let __args = arguments;
            {
                let __args = arguments;
                let encoding: any = null;
                if (this.token_source === undefined) { this.token_source = null; } 
                if (this.jj_input_stream === undefined) { this.jj_input_stream = null; } 
                if (this.token === undefined) { this.token = null; } 
                if (this.jj_nt === undefined) { this.jj_nt = null; } 
                if (this.jj_ntk === undefined) { this.jj_ntk = 0; } 
                if (this.jj_gen === undefined) { this.jj_gen = 0; } 
                if (this.jj_expentry === undefined) { this.jj_expentry = null; } 
                this.jj_la1 = (s => { let a=[]; while(s-->0) a.push(0); return a; })(21);
                this.jj_expentries = <any>(new java.util.ArrayList<number[]>());
                this.jj_kind = -1;
                try {
                    this.jj_input_stream = new SimpleCharStream(stream, encoding, 1, 1);
                } catch(e) {
                    throw new java.lang.RuntimeException(e);
                }
                this.token_source = new SyntaxCheckerTokenManager(this.jj_input_stream);
                this.token = new Token();
                this.jj_ntk = -1;
                this.jj_gen = 0;
                for(let i: number = 0; i < 21; i++) {this.jj_la1[i] = -1;}
            }
            if (this.token_source === undefined) { this.token_source = null; } 
            if (this.jj_input_stream === undefined) { this.jj_input_stream = null; } 
            if (this.token === undefined) { this.token = null; } 
            if (this.jj_nt === undefined) { this.jj_nt = null; } 
            if (this.jj_ntk === undefined) { this.jj_ntk = 0; } 
            if (this.jj_gen === undefined) { this.jj_gen = 0; } 
            if (this.jj_expentry === undefined) { this.jj_expentry = null; } 
            this.jj_la1 = (s => { let a=[]; while(s-->0) a.push(0); return a; })(21);
            this.jj_expentries = <any>(new java.util.ArrayList<number[]>());
            this.jj_kind = -1;
        } else if (((stream != null && stream instanceof <any>java.io.Reader) || stream === null) && encoding === undefined) {
            let __args = arguments;
            if (this.token_source === undefined) { this.token_source = null; } 
            if (this.jj_input_stream === undefined) { this.jj_input_stream = null; } 
            if (this.token === undefined) { this.token = null; } 
            if (this.jj_nt === undefined) { this.jj_nt = null; } 
            if (this.jj_ntk === undefined) { this.jj_ntk = 0; } 
            if (this.jj_gen === undefined) { this.jj_gen = 0; } 
            if (this.jj_expentry === undefined) { this.jj_expentry = null; } 
            this.jj_la1 = (s => { let a=[]; while(s-->0) a.push(0); return a; })(21);
            this.jj_expentries = <any>(new java.util.ArrayList<number[]>());
            this.jj_kind = -1;
            this.jj_input_stream = new SimpleCharStream(stream, 1, 1);
            this.token_source = new SyntaxCheckerTokenManager(this.jj_input_stream);
            this.token = new Token();
            this.jj_ntk = -1;
            this.jj_gen = 0;
            for(let i: number = 0; i < 21; i++) {this.jj_la1[i] = -1;}
        } else if (((stream != null && stream instanceof <any>SyntaxCheckerTokenManager) || stream === null) && encoding === undefined) {
            let __args = arguments;
            let tm: any = __args[0];
            if (this.token_source === undefined) { this.token_source = null; } 
            if (this.jj_input_stream === undefined) { this.jj_input_stream = null; } 
            if (this.token === undefined) { this.token = null; } 
            if (this.jj_nt === undefined) { this.jj_nt = null; } 
            if (this.jj_ntk === undefined) { this.jj_ntk = 0; } 
            if (this.jj_gen === undefined) { this.jj_gen = 0; } 
            if (this.jj_expentry === undefined) { this.jj_expentry = null; } 
            this.jj_la1 = (s => { let a=[]; while(s-->0) a.push(0); return a; })(21);
            this.jj_expentries = <any>(new java.util.ArrayList<number[]>());
            this.jj_kind = -1;
            this.token_source = tm;
            this.token = new Token();
            this.jj_ntk = -1;
            this.jj_gen = 0;
            for(let i: number = 0; i < 21; i++) {this.jj_la1[i] = -1;}
        } else throw new Error('invalid overload');
    }

    public ReInit$java_io_InputStream(stream: java.io.InputStream) {
        this.ReInit$java_io_InputStream$java_lang_String(stream, null);
    }

    public ReInit$java_io_InputStream$java_lang_String(stream: java.io.InputStream, encoding: string) {
        try {
            this.jj_input_stream.ReInit$java_io_InputStream$java_lang_String$int$int(stream, encoding, 1, 1);
        } catch(e) {
            throw new java.lang.RuntimeException(e);
        }
        this.token_source.ReInit$org_mariuszgromada_math_mxparser_syntaxchecker_SimpleCharStream(this.jj_input_stream);
        this.token = new Token();
        this.jj_ntk = -1;
        this.jj_gen = 0;
        for(let i: number = 0; i < 21; i++) {this.jj_la1[i] = -1;}
    }

    /**
     * Reinitialise.
     * @param {InputStream} stream
     * @param {string} encoding
     */
    public ReInit(stream?: any, encoding?: any) {
        if (((stream != null && stream instanceof <any>java.io.InputStream) || stream === null) && ((typeof encoding === 'string') || encoding === null)) {
            return <any>this.ReInit$java_io_InputStream$java_lang_String(stream, encoding);
        } else if (((stream != null && stream instanceof <any>java.io.InputStream) || stream === null) && encoding === undefined) {
            return <any>this.ReInit$java_io_InputStream(stream);
        } else if (((stream != null && stream instanceof <any>java.io.Reader) || stream === null) && encoding === undefined) {
            return <any>this.ReInit$java_io_Reader(stream);
        } else if (((stream != null && stream instanceof <any>SyntaxCheckerTokenManager) || stream === null) && encoding === undefined) {
            return <any>this.ReInit$org_mariuszgromada_math_mxparser_syntaxchecker_SyntaxCheckerTokenManager(stream);
        } else throw new Error('invalid overload');
    }

    public ReInit$java_io_Reader(stream: java.io.Reader) {
        this.jj_input_stream.ReInit$java_io_Reader$int$int(stream, 1, 1);
        this.token_source.ReInit$org_mariuszgromada_math_mxparser_syntaxchecker_SimpleCharStream(this.jj_input_stream);
        this.token = new Token();
        this.jj_ntk = -1;
        this.jj_gen = 0;
        for(let i: number = 0; i < 21; i++) {this.jj_la1[i] = -1;}
    }

    public ReInit$org_mariuszgromada_math_mxparser_syntaxchecker_SyntaxCheckerTokenManager(tm: SyntaxCheckerTokenManager) {
        this.token_source = tm;
        this.token = new Token();
        this.jj_ntk = -1;
        this.jj_gen = 0;
        for(let i: number = 0; i < 21; i++) {this.jj_la1[i] = -1;}
    }

    /*private*/ jj_consume_token(kind: number): Token {
        let oldToken: Token;
        if ((oldToken = this.token).next != null)this.token = this.token.next; else this.token = this.token.next = this.token_source.getNextToken();
        this.jj_ntk = -1;
        if (this.token.kind === kind){
            this.jj_gen++;
            return this.token;
        }
        this.token = oldToken;
        this.jj_kind = kind;
        throw this.generateParseException();
    }

    /**
     * Get the next Token.
     * @return {Token}
     */
    public getNextToken(): Token {
        if (this.token.next != null)this.token = this.token.next; else this.token = this.token.next = this.token_source.getNextToken();
        this.jj_ntk = -1;
        this.jj_gen++;
        return this.token;
    }

    /**
     * Get the specific Token.
     * @param {number} index
     * @return {Token}
     */
    public getToken(index: number): Token {
        let t: Token = this.token;
        for(let i: number = 0; i < index; i++) {{
            if (t.next != null)t = t.next; else t = t.next = this.token_source.getNextToken();
        };}
        return t;
    }

    /*private*/ jj_ntk_f(): number {
        if ((this.jj_nt = this.token.next) == null)return (this.jj_ntk = (this.token.next = this.token_source.getNextToken()).kind); else return (this.jj_ntk = this.jj_nt.kind);
    }

    /*private*/ jj_expentries: java.util.List<number[]>;

    /*private*/ jj_expentry: number[];

    /*private*/ jj_kind: number;

    /**
     * Generate ParseException.
     * @return {ParseException}
     */
    public generateParseException(): ParseException {
        this.jj_expentries.clear();
        const la1tokens: boolean[] = (s => { let a=[]; while(s-->0) a.push(false); return a; })(129);
        if (this.jj_kind >= 0){
            la1tokens[this.jj_kind] = true;
            this.jj_kind = -1;
        }
        for(let i: number = 0; i < 21; i++) {{
            if (this.jj_la1[i] === this.jj_gen){
                for(let j: number = 0; j < 32; j++) {{
                    if ((SyntaxChecker.jj_la1_0_$LI$()[i] & (1 << j)) !== 0){
                        la1tokens[j] = true;
                    }
                    if ((SyntaxChecker.jj_la1_1_$LI$()[i] & (1 << j)) !== 0){
                        la1tokens[32 + j] = true;
                    }
                    if ((SyntaxChecker.jj_la1_2_$LI$()[i] & (1 << j)) !== 0){
                        la1tokens[64 + j] = true;
                    }
                    if ((SyntaxChecker.jj_la1_3_$LI$()[i] & (1 << j)) !== 0){
                        la1tokens[96 + j] = true;
                    }
                    if ((SyntaxChecker.jj_la1_4_$LI$()[i] & (1 << j)) !== 0){
                        la1tokens[128 + j] = true;
                    }
                };}
            }
        };}
        for(let i: number = 0; i < 129; i++) {{
            if (la1tokens[i]){
                this.jj_expentry = [0];
                this.jj_expentry[0] = i;
                this.jj_expentries.add(this.jj_expentry);
            }
        };}
        const exptokseq: number[][] = (s => { let a=[]; while(s-->0) a.push(null); return a; })(this.jj_expentries.size());
        for(let i: number = 0; i < this.jj_expentries.size(); i++) {{
            exptokseq[i] = this.jj_expentries.get(i);
        };}
        return new ParseException(this.token, exptokseq, SyntaxCheckerConstants.tokenImage);
    }

    /**
     * Enable tracing.
     */
    public enable_tracing() {
    }

    /**
     * Disable tracing.
     */
    public disable_tracing() {
    }
}
SyntaxChecker["__class"] = "org.mariuszgromada.math.mxparser.syntaxchecker.SyntaxChecker";
SyntaxChecker["__interfaces"] = ["org.mariuszgromada.math.mxparser.syntaxchecker.SyntaxCheckerConstants"];





SyntaxChecker.__static_initialize();