import { SimpleCharStream } from './SimpleCharStream';
import { TokenMgrError } from './TokenMgrError';
import { Token } from './Token';
import { SyntaxCheckerConstants } from './SyntaxCheckerConstants';
import { java } from 'j4ts/j4ts';

/**
 * Constructor.
 * @param {SimpleCharStream} stream
 * @param {number} lexState
 * @class
 */
 export class SyntaxCheckerTokenManager implements SyntaxCheckerConstants {
    /**
     * Debug output.
     */
    public debugStream: java.io.PrintStream;

    /**
     * Set debug output.
     * @param {PrintStream} ds
     */
    public setDebugStream(ds: java.io.PrintStream) {
        this.debugStream = ds;
    }

    /*private*/ jjStopStringLiteralDfa_0(pos: number, active0: bigint, active1: bigint): number {
        switch((pos)) {
        case 0:
            if ((active1 & BigInt(16)) !== BigInt(0))return 66;
            if ((active0 & BigInt(2251799813685248)) !== BigInt(0))return 16;
            if ((active0 & BigInt(281474976710656)) !== BigInt(0))return 248;
            if ((active0 & BigInt(562949953421312)) !== BigInt(0) || (active1 & BigInt(320)) !== BigInt(0))return 249;
            if ((active0 & BigInt("-4611686018427387904")) !== BigInt(0) || (active1 & BigInt(2688)) !== BigInt(0))return 3;
            if ((active0 & BigInt("36028797018963968")) !== BigInt(0))return 5;
            if ((active1 & BigInt("2305843009213693952")) !== BigInt(0))return 62;
            if ((active1 & BigInt(32)) !== BigInt(0)){
                this.jjmatchedKind = BigInt(79);
                return 53;
            }
            return -1;
        case 1:
            if ((active1 & BigInt(64)) !== BigInt(0)){
                this.jjmatchedKind = BigInt(127);
                this.jjmatchedPos = BigInt(1);
                return -1;
            }
            return -1;
        default:
            return -1;
        }
    }

    /*private*/ jjStartNfa_0(pos: number, active0: bigint, active1: bigint): bigint {
        return this.jjMoveNfa_0(this.jjStopStringLiteralDfa_0(pos, active0, active1), pos + 1);
    }

    /*private*/ jjStopAtPos(pos: bigint, kind: bigint): bigint {
        this.jjmatchedKind = kind;
        this.jjmatchedPos = pos;
        return pos + BigInt(1);
    }

    /*private*/ jjMoveStringLiteralDfa0_0(): bigint {
        switch((this.curChar).charCodeAt(0)) {
        case 33:
            return this.jjStartNfaWithStates_0(0, BigInt(55), 5);
        case 35:
            return this.jjStopAtPos(BigInt(0), BigInt(54));
        case 37:
            return this.jjStopAtPos(BigInt(0), BigInt(56));
        case 40:
            this.jjmatchedKind = BigInt(46);
            return this.jjMoveStringLiteralDfa1_0(BigInt(0), BigInt(16384));
        case 41:
            return this.jjStopAtPos(BigInt(0), BigInt(47));
        case 42:
            return this.jjStopAtPos(BigInt(0), BigInt(50));
        case 43:
            return this.jjStartNfaWithStates_0(0, BigInt(48), 248);
        case 44:
            return this.jjStopAtPos(BigInt(0), BigInt(57));
        case 45:
            this.jjmatchedKind = BigInt(49);
            return this.jjMoveStringLiteralDfa1_0(BigInt(0), BigInt(320));
        case 47:
            return this.jjStartNfaWithStates_0(0, BigInt(51), 16);
        case 59:
            return this.jjStopAtPos(BigInt(0), BigInt(58));
        case 60:
            this.jjmatchedKind = BigInt(62);
            return this.jjMoveStringLiteralDfa1_0(BigInt("-9223372036854775808"), BigInt(2688));
        case 62:
            this.jjmatchedKind = BigInt(64);
            return this.jjMoveStringLiteralDfa1_0(BigInt(0), BigInt(2));
        case 64:
            return this.jjMoveStringLiteralDfa1_0(BigInt(0), BigInt(32));
        case 91:
            return this.jjStartNfaWithStates_0(0, BigInt(125), 62);
        case 93:
            return this.jjStopAtPos(BigInt(0), BigInt(126));
        case 94:
            this.jjmatchedKind = BigInt(52);
            return this.jjMoveStringLiteralDfa1_0(BigInt("9007199254740992"), BigInt(0));
        case 126:
            return this.jjStartNfaWithStates_0(0, BigInt(68), 66);
        default:
            return this.jjMoveNfa_0(0, 0);
        }
    }

    /*private*/ jjMoveStringLiteralDfa1_0(active0: bigint, active1: bigint): bigint {
        try {
            this.curChar = this.input_stream.readChar();
        } catch(e) {
            this.jjStopStringLiteralDfa_0(0, active0, active1);
            return BigInt(1);
        }
        switch((this.curChar).charCodeAt(0)) {
        case 43:
            return this.jjMoveStringLiteralDfa2_0(active0, BigInt(0), active1, BigInt(16384));
        case 45:
            return this.jjMoveStringLiteralDfa2_0(active0, BigInt(0), active1, BigInt(2240));
        case 47:
            return this.jjMoveStringLiteralDfa2_0(active0, BigInt(0), active1, BigInt(768));
        case 61:
            if ((active0 & BigInt("-9223372036854775808")) !== BigInt(0))return this.jjStopAtPos(BigInt(1), BigInt(63)); else if ((active1 & BigInt(2)) !== BigInt(0))return this.jjStopAtPos(BigInt(1), BigInt(65));
            break;
        case 94:
            if ((active0 & BigInt("9007199254740992")) !== BigInt(0))return this.jjStopAtPos(BigInt(1), BigInt(53));
            break;
        case 126:
            if ((active1 & BigInt(32)) !== BigInt(0))return this.jjStopAtPos(BigInt(1), BigInt(69));
            break;
        default:
            break;
        }
        return this.jjStartNfa_0(0, active0, active1);
    }

    /*private*/ jjMoveStringLiteralDfa2_0(old0: bigint, active0: bigint, old1: bigint, active1: bigint): bigint {
        if (((active0 &= old0) | (active1 &= old1)) === BigInt(0))return this.jjStartNfa_0(0, old0, old1);
        try {
            this.curChar = this.input_stream.readChar();
        } catch(e) {
            this.jjStopStringLiteralDfa_0(1, BigInt(0), active1);
            return BigInt(2);
        }
        switch((this.curChar).charCodeAt(0)) {
        case 41:
            if ((active1 & BigInt(16384)) !== BigInt(0))return this.jjStopAtPos(BigInt(2), BigInt(78));
            break;
        case 45:
            if ((active1 & BigInt(128)) !== BigInt(0))return this.jjStopAtPos(BigInt(2), BigInt(71)); else if ((active1 & BigInt(512)) !== BigInt(0))return this.jjStopAtPos(BigInt(2), BigInt(73));
            break;
        case 62:
            if ((active1 & BigInt(64)) !== BigInt(0))return this.jjStopAtPos(BigInt(2), BigInt(70)); else if ((active1 & BigInt(256)) !== BigInt(0))return this.jjStopAtPos(BigInt(2), BigInt(72)); else if ((active1 & BigInt(2048)) !== BigInt(0))return this.jjStopAtPos(BigInt(2), BigInt(75));
            break;
        default:
            break;
        }
        return this.jjStartNfa_0(1, BigInt(0), active1);
    }

    /*private*/ jjStartNfaWithStates_0(pos: number, kind: bigint, state: number): bigint {
        this.jjmatchedKind = kind;
        this.jjmatchedPos = BigInt(pos);
        try {
            this.curChar = this.input_stream.readChar();
        } catch(e) {
            return BigInt(pos + 1);
        }
        return this.jjMoveNfa_0(state, pos + 1);
    }

    /*private*/ jjMoveNfa_0(startState: number, curPos: number): bigint {
        let startsAt: number = 0;
        this.jjnewStateCnt = 248;
        let i: number = 1;
        this.jjstateSet[0] = startState;
        let kind: bigint = BigInt(2147483647);
        for(; ; ) {{
            if (++this.jjround === BigInt(2147483647))this.ReInitRounds();
            if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) < 64){
                const l: bigint = BigInt(1) << BigInt((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar));
                do {{
                    switch((this.jjstateSet[--i])) {
                    case 66:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 47)this.jjstateSet[this.jjnewStateCnt++] = 69; else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 38)this.jjstateSet[this.jjnewStateCnt++] = 67; else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 61){
                            if (kind > BigInt(61))kind = BigInt(61);
                        }
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 38){
                            if (kind > BigInt(74))kind = BigInt(74);
                        }
                        break;
                    case 0:
                        if ((BigInt("287948901175001088") & l) !== BigInt(0)){
                            if (kind > BigInt(82))kind = BigInt(82);
                            {
                                this.jjCheckNAddStates(0, 7);
                            };
                        } else if ((BigInt("-8358469149332078592") & l) !== BigInt(0)){
                            if (kind > BigInt(79))kind = BigInt(79);
                        } else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 45){
                            this.jjCheckNAddStates(8, 11);
                        } else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 43){
                            this.jjCheckNAddStates(12, 15);
                        } else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 38)this.jjstateSet[this.jjnewStateCnt++] = 14; else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 33)this.jjstateSet[this.jjnewStateCnt++] = 5; else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 60)this.jjstateSet[this.jjnewStateCnt++] = 3; else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 61)this.jjstateSet[this.jjnewStateCnt++] = 1;
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(20);
                        } else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 47)this.jjstateSet[this.jjnewStateCnt++] = 16; else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 38){
                            if (kind > BigInt(67))kind = BigInt(67);
                        } else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 61){
                            if (kind > BigInt(59))kind = BigInt(59);
                        }
                        break;
                    case 53:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 62)this.jjstateSet[this.jjnewStateCnt++] = 58; else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 60)this.jjstateSet[this.jjnewStateCnt++] = 56; else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 38){
                            if (kind > BigInt(77))kind = BigInt(77);
                        }
                        break;
                    case 62:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 37)this.jjstateSet[this.jjnewStateCnt++] = 63;
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 37){
                            this.jjCheckNAdd(61);
                        }
                        break;
                    case 248:
                        if ((BigInt(4294977024) & l) !== BigInt(0)){
                            this.jjCheckNAddTwoStates(40, 41);
                        } else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 45){
                            if (kind > BigInt(127))kind = BigInt(127);
                        } else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 43){
                            if (kind > BigInt(127))kind = BigInt(127);
                        }
                        if ((BigInt(4294977024) & l) !== BigInt(0)){
                            this.jjCheckNAddTwoStates(38, 39);
                        }
                        break;
                    case 249:
                        if ((BigInt(4294977024) & l) !== BigInt(0)){
                            this.jjCheckNAddTwoStates(44, 39);
                        } else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 43){
                            if (kind > BigInt(127))kind = BigInt(127);
                        } else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 45){
                            if (kind > BigInt(127))kind = BigInt(127);
                        }
                        if ((BigInt(4294977024) & l) !== BigInt(0)){
                            this.jjCheckNAddTwoStates(43, 41);
                        }
                        break;
                    case 1:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 61 && kind > BigInt(59))kind = BigInt(59);
                        break;
                    case 2:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 61)this.jjstateSet[this.jjnewStateCnt++] = 1;
                        break;
                    case 3:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 62 && kind > BigInt(61))kind = BigInt(61);
                        break;
                    case 4:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 60)this.jjstateSet[this.jjnewStateCnt++] = 3;
                        break;
                    case 5:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 61 && kind > BigInt(61))kind = BigInt(61);
                        break;
                    case 6:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 33)this.jjstateSet[this.jjnewStateCnt++] = 5;
                        break;
                    case 11:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 47 && kind > BigInt(66))kind = BigInt(66);
                        break;
                    case 13:
                    case 14:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 38 && kind > BigInt(67))kind = BigInt(67);
                        break;
                    case 15:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 38)this.jjstateSet[this.jjnewStateCnt++] = 14;
                        break;
                    case 17:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 47)this.jjstateSet[this.jjnewStateCnt++] = 16;
                        break;
                    case 18:
                        if ((BigInt("-8358469149332078592") & l) !== BigInt(0) && kind > BigInt(79))kind = BigInt(79);
                        break;
                    case 19:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(20);
                        }
                        break;
                    case 20:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(82))kind = BigInt(82);
                        {
                            this.jjCheckNAddTwoStates(20, 21);
                        };
                        break;
                    case 22:
                        if ((BigInt("43980465111040") & l) !== BigInt(0)){
                            this.jjCheckNAdd(23);
                        }
                        break;
                    case 23:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(82))kind = BigInt(82);
                        {
                            this.jjCheckNAdd(23);
                        };
                        break;
                    case 25:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(26);
                        }
                        break;
                    case 26:
                        if ((BigInt("844424930131968") & l) === BigInt(0))break;
                        if (kind > BigInt(119))kind = BigInt(119);
                        {
                            this.jjCheckNAdd(26);
                        };
                        break;
                    case 28:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(29);
                        }
                        break;
                    case 29:
                        if ((BigInt("71776119061217280") & l) === BigInt(0))break;
                        if (kind > BigInt(120))kind = BigInt(120);
                        {
                            this.jjCheckNAdd(29);
                        };
                        break;
                    case 31:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(32);
                        }
                        break;
                    case 32:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(121))kind = BigInt(121);
                        {
                            this.jjCheckNAdd(32);
                        };
                        break;
                    case 34:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(123))kind = BigInt(123);
                        {
                            this.jjAddStates(16, 17);
                        };
                        break;
                    case 37:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 43){
                            this.jjCheckNAddStates(12, 15);
                        }
                        break;
                    case 38:
                        if ((BigInt(4294977024) & l) !== BigInt(0)){
                            this.jjCheckNAddTwoStates(38, 39);
                        }
                        break;
                    case 39:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 43 && kind > BigInt(127))kind = BigInt(127);
                        break;
                    case 40:
                        if ((BigInt(4294977024) & l) !== BigInt(0)){
                            this.jjCheckNAddTwoStates(40, 41);
                        }
                        break;
                    case 41:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 45 && kind > BigInt(127))kind = BigInt(127);
                        break;
                    case 42:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 45){
                            this.jjCheckNAddStates(8, 11);
                        }
                        break;
                    case 43:
                        if ((BigInt(4294977024) & l) !== BigInt(0)){
                            this.jjCheckNAddTwoStates(43, 41);
                        }
                        break;
                    case 44:
                        if ((BigInt(4294977024) & l) !== BigInt(0)){
                            this.jjCheckNAddTwoStates(44, 39);
                        }
                        break;
                    case 46:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 43 && kind > BigInt(124))kind = BigInt(124);
                        break;
                    case 49:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 45 && kind > BigInt(124))kind = BigInt(124);
                        break;
                    case 56:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 60 && kind > BigInt(77))kind = BigInt(77);
                        break;
                    case 57:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 60)this.jjstateSet[this.jjnewStateCnt++] = 56;
                        break;
                    case 58:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 62 && kind > BigInt(77))kind = BigInt(77);
                        break;
                    case 59:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 62)this.jjstateSet[this.jjnewStateCnt++] = 58;
                        break;
                    case 63:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 37){
                            this.jjCheckNAdd(61);
                        }
                        break;
                    case 64:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 37)this.jjstateSet[this.jjnewStateCnt++] = 63;
                        break;
                    case 67:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 38 && kind > BigInt(74))kind = BigInt(74);
                        break;
                    case 68:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 38)this.jjstateSet[this.jjnewStateCnt++] = 67;
                        break;
                    case 70:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 47)this.jjstateSet[this.jjnewStateCnt++] = 69;
                        break;
                    case 74:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 47 && kind > BigInt(76))kind = BigInt(76);
                        break;
                    case 77:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 49)this.jjstateSet[this.jjnewStateCnt++] = 78;
                        break;
                    case 78:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) != 46)break;
                        if (kind > BigInt(83))kind = BigInt(83);
                        {
                            this.jjCheckNAdd(79);
                        };
                        break;
                    case 79:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) != 49)break;
                        if (kind > BigInt(83))kind = BigInt(83);
                        {
                            this.jjCheckNAdd(79);
                        };
                        break;
                    case 80:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 50)this.jjstateSet[this.jjnewStateCnt++] = 81;
                        break;
                    case 81:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(82);
                        }
                        break;
                    case 82:
                        if ((BigInt("844424930131968") & l) === BigInt(0))break;
                        if (kind > BigInt(84))kind = BigInt(84);
                        {
                            this.jjCheckNAdd(82);
                        };
                        break;
                    case 83:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 51)this.jjstateSet[this.jjnewStateCnt++] = 84;
                        break;
                    case 84:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(85);
                        }
                        break;
                    case 85:
                        if ((BigInt("1970324836974592") & l) === BigInt(0))break;
                        if (kind > BigInt(85))kind = BigInt(85);
                        {
                            this.jjCheckNAdd(85);
                        };
                        break;
                    case 86:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 52)this.jjstateSet[this.jjnewStateCnt++] = 87;
                        break;
                    case 87:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(88);
                        }
                        break;
                    case 88:
                        if ((BigInt("4222124650659840") & l) === BigInt(0))break;
                        if (kind > BigInt(86))kind = BigInt(86);
                        {
                            this.jjCheckNAdd(88);
                        };
                        break;
                    case 89:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 53)this.jjstateSet[this.jjnewStateCnt++] = 90;
                        break;
                    case 90:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(91);
                        }
                        break;
                    case 91:
                        if ((BigInt("8725724278030336") & l) === BigInt(0))break;
                        if (kind > BigInt(87))kind = BigInt(87);
                        {
                            this.jjCheckNAdd(91);
                        };
                        break;
                    case 92:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 54)this.jjstateSet[this.jjnewStateCnt++] = 93;
                        break;
                    case 93:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(94);
                        }
                        break;
                    case 94:
                        if ((BigInt("17732923532771328") & l) === BigInt(0))break;
                        if (kind > BigInt(88))kind = BigInt(88);
                        {
                            this.jjCheckNAdd(94);
                        };
                        break;
                    case 95:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 55)this.jjstateSet[this.jjnewStateCnt++] = 96;
                        break;
                    case 96:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(97);
                        }
                        break;
                    case 97:
                        if ((BigInt("35747322042253312") & l) === BigInt(0))break;
                        if (kind > BigInt(89))kind = BigInt(89);
                        {
                            this.jjCheckNAdd(97);
                        };
                        break;
                    case 98:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 56)this.jjstateSet[this.jjnewStateCnt++] = 99;
                        break;
                    case 99:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(100);
                        }
                        break;
                    case 100:
                        if ((BigInt("71776119061217280") & l) === BigInt(0))break;
                        if (kind > BigInt(90))kind = BigInt(90);
                        {
                            this.jjCheckNAdd(100);
                        };
                        break;
                    case 101:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 57)this.jjstateSet[this.jjnewStateCnt++] = 102;
                        break;
                    case 102:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(103);
                        }
                        break;
                    case 103:
                        if ((BigInt("143833713099145216") & l) === BigInt(0))break;
                        if (kind > BigInt(91))kind = BigInt(91);
                        {
                            this.jjCheckNAdd(103);
                        };
                        break;
                    case 104:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 48)this.jjstateSet[this.jjnewStateCnt++] = 105;
                        break;
                    case 105:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(106);
                        }
                        break;
                    case 106:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(92))kind = BigInt(92);
                        {
                            this.jjCheckNAdd(106);
                        };
                        break;
                    case 107:
                    case 213:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 49){
                            this.jjCheckNAdd(104);
                        }
                        break;
                    case 108:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 49)this.jjstateSet[this.jjnewStateCnt++] = 109;
                        break;
                    case 109:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(110);
                        }
                        break;
                    case 110:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(93))kind = BigInt(93);
                        {
                            this.jjCheckNAdd(110);
                        };
                        break;
                    case 111:
                    case 214:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 49){
                            this.jjCheckNAdd(108);
                        }
                        break;
                    case 112:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 50)this.jjstateSet[this.jjnewStateCnt++] = 113;
                        break;
                    case 113:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(114);
                        }
                        break;
                    case 114:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(94))kind = BigInt(94);
                        {
                            this.jjCheckNAdd(114);
                        };
                        break;
                    case 115:
                    case 215:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 49){
                            this.jjCheckNAdd(112);
                        }
                        break;
                    case 116:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 51)this.jjstateSet[this.jjnewStateCnt++] = 117;
                        break;
                    case 117:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(118);
                        }
                        break;
                    case 118:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(95))kind = BigInt(95);
                        {
                            this.jjCheckNAdd(118);
                        };
                        break;
                    case 119:
                    case 216:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 49){
                            this.jjCheckNAdd(116);
                        }
                        break;
                    case 120:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 52)this.jjstateSet[this.jjnewStateCnt++] = 121;
                        break;
                    case 121:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(122);
                        }
                        break;
                    case 122:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(96))kind = BigInt(96);
                        {
                            this.jjCheckNAdd(122);
                        };
                        break;
                    case 123:
                    case 217:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 49){
                            this.jjCheckNAdd(120);
                        }
                        break;
                    case 124:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 53)this.jjstateSet[this.jjnewStateCnt++] = 125;
                        break;
                    case 125:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(126);
                        }
                        break;
                    case 126:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(97))kind = BigInt(97);
                        {
                            this.jjCheckNAdd(126);
                        };
                        break;
                    case 127:
                    case 218:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 49){
                            this.jjCheckNAdd(124);
                        }
                        break;
                    case 128:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 54)this.jjstateSet[this.jjnewStateCnt++] = 129;
                        break;
                    case 129:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(130);
                        }
                        break;
                    case 130:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(98))kind = BigInt(98);
                        {
                            this.jjCheckNAdd(130);
                        };
                        break;
                    case 131:
                    case 219:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 49){
                            this.jjCheckNAdd(128);
                        }
                        break;
                    case 132:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 55)this.jjstateSet[this.jjnewStateCnt++] = 133;
                        break;
                    case 133:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(134);
                        }
                        break;
                    case 134:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(99))kind = BigInt(99);
                        {
                            this.jjCheckNAdd(134);
                        };
                        break;
                    case 135:
                    case 220:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 49){
                            this.jjCheckNAdd(132);
                        }
                        break;
                    case 136:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 56)this.jjstateSet[this.jjnewStateCnt++] = 137;
                        break;
                    case 137:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(138);
                        }
                        break;
                    case 138:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(100))kind = BigInt(100);
                        {
                            this.jjCheckNAdd(138);
                        };
                        break;
                    case 139:
                    case 221:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 49){
                            this.jjCheckNAdd(136);
                        }
                        break;
                    case 140:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 57)this.jjstateSet[this.jjnewStateCnt++] = 141;
                        break;
                    case 141:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(142);
                        }
                        break;
                    case 142:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(101))kind = BigInt(101);
                        {
                            this.jjCheckNAdd(142);
                        };
                        break;
                    case 143:
                    case 222:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 49){
                            this.jjCheckNAdd(140);
                        }
                        break;
                    case 144:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 48)this.jjstateSet[this.jjnewStateCnt++] = 145;
                        break;
                    case 145:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(146);
                        }
                        break;
                    case 146:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(102))kind = BigInt(102);
                        {
                            this.jjCheckNAdd(146);
                        };
                        break;
                    case 147:
                    case 223:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 50){
                            this.jjCheckNAdd(144);
                        }
                        break;
                    case 148:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 49)this.jjstateSet[this.jjnewStateCnt++] = 149;
                        break;
                    case 149:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(150);
                        }
                        break;
                    case 150:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(103))kind = BigInt(103);
                        {
                            this.jjCheckNAdd(150);
                        };
                        break;
                    case 151:
                    case 224:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 50){
                            this.jjCheckNAdd(148);
                        }
                        break;
                    case 152:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 50)this.jjstateSet[this.jjnewStateCnt++] = 153;
                        break;
                    case 153:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(154);
                        }
                        break;
                    case 154:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(104))kind = BigInt(104);
                        {
                            this.jjCheckNAdd(154);
                        };
                        break;
                    case 155:
                    case 225:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 50){
                            this.jjCheckNAdd(152);
                        }
                        break;
                    case 156:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 51)this.jjstateSet[this.jjnewStateCnt++] = 157;
                        break;
                    case 157:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(158);
                        }
                        break;
                    case 158:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(105))kind = BigInt(105);
                        {
                            this.jjCheckNAdd(158);
                        };
                        break;
                    case 159:
                    case 226:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 50){
                            this.jjCheckNAdd(156);
                        }
                        break;
                    case 160:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 52)this.jjstateSet[this.jjnewStateCnt++] = 161;
                        break;
                    case 161:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(162);
                        }
                        break;
                    case 162:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(106))kind = BigInt(106);
                        {
                            this.jjCheckNAdd(162);
                        };
                        break;
                    case 163:
                    case 227:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 50){
                            this.jjCheckNAdd(160);
                        }
                        break;
                    case 164:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 53)this.jjstateSet[this.jjnewStateCnt++] = 165;
                        break;
                    case 165:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(166);
                        }
                        break;
                    case 166:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(107))kind = BigInt(107);
                        {
                            this.jjCheckNAdd(166);
                        };
                        break;
                    case 167:
                    case 228:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 50){
                            this.jjCheckNAdd(164);
                        }
                        break;
                    case 168:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 54)this.jjstateSet[this.jjnewStateCnt++] = 169;
                        break;
                    case 169:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(170);
                        }
                        break;
                    case 170:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(108))kind = BigInt(108);
                        {
                            this.jjCheckNAdd(170);
                        };
                        break;
                    case 171:
                    case 229:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 50){
                            this.jjCheckNAdd(168);
                        }
                        break;
                    case 172:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 55)this.jjstateSet[this.jjnewStateCnt++] = 173;
                        break;
                    case 173:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(174);
                        }
                        break;
                    case 174:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(109))kind = BigInt(109);
                        {
                            this.jjCheckNAdd(174);
                        };
                        break;
                    case 175:
                    case 230:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 50){
                            this.jjCheckNAdd(172);
                        }
                        break;
                    case 176:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 56)this.jjstateSet[this.jjnewStateCnt++] = 177;
                        break;
                    case 177:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(178);
                        }
                        break;
                    case 178:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(110))kind = BigInt(110);
                        {
                            this.jjCheckNAdd(178);
                        };
                        break;
                    case 179:
                    case 231:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 50){
                            this.jjCheckNAdd(176);
                        }
                        break;
                    case 180:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 57)this.jjstateSet[this.jjnewStateCnt++] = 181;
                        break;
                    case 181:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(182);
                        }
                        break;
                    case 182:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(111))kind = BigInt(111);
                        {
                            this.jjCheckNAdd(182);
                        };
                        break;
                    case 183:
                    case 232:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 50){
                            this.jjCheckNAdd(180);
                        }
                        break;
                    case 184:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 48)this.jjstateSet[this.jjnewStateCnt++] = 185;
                        break;
                    case 185:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(186);
                        }
                        break;
                    case 186:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(112))kind = BigInt(112);
                        {
                            this.jjCheckNAdd(186);
                        };
                        break;
                    case 187:
                    case 233:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 51){
                            this.jjCheckNAdd(184);
                        }
                        break;
                    case 188:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 49)this.jjstateSet[this.jjnewStateCnt++] = 189;
                        break;
                    case 189:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(190);
                        }
                        break;
                    case 190:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(113))kind = BigInt(113);
                        {
                            this.jjCheckNAdd(190);
                        };
                        break;
                    case 191:
                    case 234:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 51){
                            this.jjCheckNAdd(188);
                        }
                        break;
                    case 192:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 50)this.jjstateSet[this.jjnewStateCnt++] = 193;
                        break;
                    case 193:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(194);
                        }
                        break;
                    case 194:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(114))kind = BigInt(114);
                        {
                            this.jjCheckNAdd(194);
                        };
                        break;
                    case 195:
                    case 235:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 51){
                            this.jjCheckNAdd(192);
                        }
                        break;
                    case 196:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 51)this.jjstateSet[this.jjnewStateCnt++] = 197;
                        break;
                    case 197:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(198);
                        }
                        break;
                    case 198:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(115))kind = BigInt(115);
                        {
                            this.jjCheckNAdd(198);
                        };
                        break;
                    case 199:
                    case 236:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 51){
                            this.jjCheckNAdd(196);
                        }
                        break;
                    case 200:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 52)this.jjstateSet[this.jjnewStateCnt++] = 201;
                        break;
                    case 201:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(202);
                        }
                        break;
                    case 202:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(116))kind = BigInt(116);
                        {
                            this.jjCheckNAdd(202);
                        };
                        break;
                    case 203:
                    case 237:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 51){
                            this.jjCheckNAdd(200);
                        }
                        break;
                    case 204:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 53)this.jjstateSet[this.jjnewStateCnt++] = 205;
                        break;
                    case 205:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(206);
                        }
                        break;
                    case 206:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(117))kind = BigInt(117);
                        {
                            this.jjCheckNAdd(206);
                        };
                        break;
                    case 207:
                    case 238:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 51){
                            this.jjCheckNAdd(204);
                        }
                        break;
                    case 208:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 54)this.jjstateSet[this.jjnewStateCnt++] = 209;
                        break;
                    case 209:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 46){
                            this.jjCheckNAdd(210);
                        }
                        break;
                    case 210:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(118))kind = BigInt(118);
                        {
                            this.jjCheckNAdd(210);
                        };
                        break;
                    case 211:
                    case 239:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 51){
                            this.jjCheckNAdd(208);
                        }
                        break;
                    case 240:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(82))kind = BigInt(82);
                        {
                            this.jjCheckNAddStates(0, 7);
                        };
                        break;
                    case 241:
                        if ((BigInt("287948901175001088") & l) !== BigInt(0)){
                            this.jjCheckNAddTwoStates(241, 19);
                        }
                        break;
                    case 242:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(82))kind = BigInt(82);
                        {
                            this.jjCheckNAddTwoStates(242, 21);
                        };
                        break;
                    case 243:
                        if ((BigInt("287948901175001088") & l) !== BigInt(0)){
                            this.jjCheckNAddTwoStates(243, 244);
                        }
                        break;
                    case 245:
                        if ((BigInt("287948901175001088") & l) !== BigInt(0)){
                            this.jjCheckNAddTwoStates(245, 246);
                        }
                        break;
                    case 247:
                        if ((BigInt("287948901175001088") & l) === BigInt(0))break;
                        if (kind > BigInt(122))kind = BigInt(122);
                        this.jjstateSet[this.jjnewStateCnt++] = 247;
                        break;
                    default:
                        break;
                    }
                }} while((i !== startsAt));
            } else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) < 128){
                const charCodeAsBigInt : bigint = BigInt(this.curChar.charCodeAt(0));
                const l: bigint = BigInt(1) << BigInt(charCodeAsBigInt & BigInt(63));
                do {{
                    switch((this.jjstateSet[--i])) {
                    case 66:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 92)this.jjstateSet[this.jjnewStateCnt++] = 74; else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 124)this.jjstateSet[this.jjnewStateCnt++] = 72;
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 124){
                            if (kind > BigInt(76))kind = BigInt(76);
                        }
                        break;
                    case 0:
                        if ((BigInt("576460745995190270") & l) !== BigInt(0)){
                            if (kind > BigInt(123))kind = BigInt(123);
                            {
                                this.jjCheckNAddTwoStates(34, 36);
                            };
                        } else if ((BigInt(4563402753) & l) !== BigInt(0)){
                            if (kind > BigInt(79))kind = BigInt(79);
                        } else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 126){
                            this.jjAddStates(18, 23);
                        } else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 91){
                            this.jjAddStates(24, 25);
                        } else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 124)this.jjstateSet[this.jjnewStateCnt++] = 9;
                        if ((BigInt(1099511628032) & l) !== BigInt(0))this.jjstateSet[this.jjnewStateCnt++] = 31; else if ((BigInt(140737488388096) & l) !== BigInt(0))this.jjstateSet[this.jjnewStateCnt++] = 28; else if ((BigInt(17179869188) & l) !== BigInt(0))this.jjstateSet[this.jjnewStateCnt++] = 25; else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 64){
                            this.jjAddStates(26, 30);
                        } else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 100){
                            this.jjAddStates(31, 32);
                        } else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 92)this.jjstateSet[this.jjnewStateCnt++] = 11; else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 124){
                            if (kind > BigInt(66))kind = BigInt(66);
                        } else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 126)this.jjstateSet[this.jjnewStateCnt++] = 5;
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 66){
                            this.jjCheckNAddStates(33, 68);
                        } else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 98){
                            this.jjCheckNAddStates(69, 104);
                        }
                        break;
                    case 53:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 124){
                            if (kind > BigInt(77))kind = BigInt(77);
                        } else if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 94){
                            if (kind > BigInt(77))kind = BigInt(77);
                        }
                        break;
                    case 7:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 126)this.jjstateSet[this.jjnewStateCnt++] = 5;
                        break;
                    case 8:
                    case 9:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 124 && kind > BigInt(66))kind = BigInt(66);
                        break;
                    case 10:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 124)this.jjstateSet[this.jjnewStateCnt++] = 9;
                        break;
                    case 12:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 92)this.jjstateSet[this.jjnewStateCnt++] = 11;
                        break;
                    case 16:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 92 && kind > BigInt(67))kind = BigInt(67);
                        break;
                    case 18:
                        if ((BigInt("4563402753") & l) !== BigInt(0) && kind > BigInt(79))kind = BigInt(79);
                        break;
                    case 21:
                        if ((BigInt("137438953504") & l) !== BigInt(0)){
                            this.jjAddStates(105, 106);
                        }
                        break;
                    case 24:
                        if ((BigInt("17179869188") & l) !== BigInt(0))this.jjstateSet[this.jjnewStateCnt++] = 25;
                        break;
                    case 27:
                        if ((BigInt("140737488388096") & l) !== BigInt(0))this.jjstateSet[this.jjnewStateCnt++] = 28;
                        break;
                    case 30:
                        if ((BigInt("1099511628032") & l) !== BigInt(0))this.jjstateSet[this.jjnewStateCnt++] = 31;
                        break;
                    case 32:
                        if ((BigInt("541165879422") & l) === BigInt(0))break;
                        if (kind > BigInt(121))kind = BigInt(121);
                        this.jjstateSet[this.jjnewStateCnt++] = 32;
                        break;
                    case 33:
                        if ((BigInt("576460745995190270") & l) === BigInt(0))break;
                        if (kind > BigInt(123))kind = BigInt(123);
                        {
                            this.jjCheckNAddTwoStates(34, 36);
                        };
                        break;
                    case 35:
                        if ((BigInt("576460745995190270") & l) === BigInt(0))break;
                        if (kind > BigInt(123))kind = BigInt(123);
                        {
                            this.jjCheckNAddTwoStates(34, 35);
                        };
                        break;
                    case 36:
                        if ((BigInt("576460745995190270") & l) === BigInt(0))break;
                        if (kind > BigInt(123))kind = BigInt(123);
                        {
                            this.jjCheckNAddStates(107, 109);
                        };
                        break;
                    case 45:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 100){
                            this.jjAddStates(31, 32);
                        }
                        break;
                    case 47:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 114)this.jjstateSet[this.jjnewStateCnt++] = 46;
                        break;
                    case 48:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 101)this.jjstateSet[this.jjnewStateCnt++] = 47;
                        break;
                    case 50:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 114)this.jjstateSet[this.jjnewStateCnt++] = 49;
                        break;
                    case 51:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 101)this.jjstateSet[this.jjnewStateCnt++] = 50;
                        break;
                    case 52:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 64){
                            this.jjAddStates(26, 30);
                        }
                        break;
                    case 54:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 94)kind = BigInt(77);
                        break;
                    case 55:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 124 && kind > 77)kind = BigInt(77);
                        break;
                    case 60:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 91){
                            this.jjAddStates(24, 25);
                        }
                        break;
                    case 61:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 93)kind = BigInt(60);
                        break;
                    case 65:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 126){
                            this.jjAddStates(18, 23);
                        }
                        break;
                    case 69:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 92 && kind > 74)kind = BigInt(74);
                        break;
                    case 71:
                    case 72:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 124 && kind > 76)kind = BigInt(76);
                        break;
                    case 73:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 124)this.jjstateSet[this.jjnewStateCnt++] = 72;
                        break;
                    case 75:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 92)this.jjstateSet[this.jjnewStateCnt++] = 74;
                        break;
                    case 76:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 98){
                            this.jjCheckNAddStates(69, 104);
                        }
                        break;
                    case 110:
                        if ((BigInt("8589934594") & l) === BigInt(0))break;
                        if (kind > BigInt(93))kind = BigInt(93);
                        this.jjstateSet[this.jjnewStateCnt++] = 110;
                        break;
                    case 114:
                        if ((BigInt("25769803782") & l) === BigInt(0))break;
                        if (kind > BigInt(94))kind = BigInt(94);
                        this.jjstateSet[this.jjnewStateCnt++] = 114;
                        break;
                    case 118:
                        if ((BigInt("60129542158") & l) === BigInt(0))break;
                        if (kind > BigInt(95))kind = BigInt(95);
                        this.jjstateSet[this.jjnewStateCnt++] = 118;
                        break;
                    case 122:
                        if ((BigInt("128849018910") & l) === BigInt(0))break;
                        if (kind > BigInt(96))kind = BigInt(96);
                        this.jjstateSet[this.jjnewStateCnt++] = 122;
                        break;
                    case 126:
                        if ((BigInt("266287972414") & l) === BigInt(0))break;
                        if (kind > BigInt(97))kind = BigInt(97);
                        this.jjstateSet[this.jjnewStateCnt++] = 126;
                        break;
                    case 130:
                        if ((BigInt("541165879422") & l) === BigInt(0))break;
                        if (kind > BigInt(98))kind = BigInt(98);
                        this.jjstateSet[this.jjnewStateCnt++] = 130;
                        break;
                    case 134:
                        if ((BigInt("1090921693438") & l) === BigInt(0))break;
                        if (kind > BigInt(99))kind = BigInt(99);
                        this.jjstateSet[this.jjnewStateCnt++] = 134;
                        break;
                    case 138:
                        if ((BigInt("2190433321470") & l) === BigInt(0))break;
                        if (kind > BigInt(100))kind = BigInt(100);
                        this.jjstateSet[this.jjnewStateCnt++] = 138;
                        break;
                    case 142:
                        if ((BigInt("4389456577534") & l) === BigInt(0))break;
                        if (kind > BigInt(101))kind = BigInt(101);
                        this.jjstateSet[this.jjnewStateCnt++] = 142;
                        break;
                    case 146:
                        if ((BigInt("8787503089662") & l) === BigInt(0))break;
                        if (kind > BigInt(102))kind = BigInt(102);
                        this.jjstateSet[this.jjnewStateCnt++] = 146;
                        break;
                    case 150:
                        if ((BigInt("17583596113918") & l) === BigInt(0))break;
                        if (kind > BigInt(103))kind = BigInt(103);
                        this.jjstateSet[this.jjnewStateCnt++] = 150;
                        break;
                    case 154:
                        if ((BigInt("35175782162430") & l) === BigInt(0))break;
                        if (kind > BigInt(104))kind = BigInt(104);
                        this.jjstateSet[this.jjnewStateCnt++] = 154;
                        break;
                    case 158:
                        if ((BigInt("70360154259454") & l) === BigInt(0))break;
                        if (kind > BigInt(105))kind = BigInt(105);
                        this.jjstateSet[this.jjnewStateCnt++] = 158;
                        break;
                    case 162:
                        if ((BigInt("140728898453502") & l) === BigInt(0))break;
                        if (kind > BigInt(106))kind = BigInt(106);
                        this.jjstateSet[this.jjnewStateCnt++] = 162;
                        break;
                    case 166:
                        if ((BigInt("281466386841598") & l) === BigInt(0))break;
                        if (kind > BigInt(107))kind = BigInt(107);
                        this.jjstateSet[this.jjnewStateCnt++] = 166;
                        break;
                    case 170:
                        if ((BigInt("562941363617790") & l) === BigInt(0))break;
                        if (kind > BigInt(108))kind = BigInt(108);
                        this.jjstateSet[this.jjnewStateCnt++] = 170;
                        break;
                    case 174:
                        if ((BigInt("1125891317170174") & l) === BigInt(0))break;
                        if (kind > BigInt(109))kind = BigInt(109);
                        this.jjstateSet[this.jjnewStateCnt++] = 174;
                        break;
                    case 178:
                        if ((BigInt("2251791224274942") & l) === BigInt(0))break;
                        if (kind > BigInt(110))kind = BigInt(110);
                        this.jjstateSet[this.jjnewStateCnt++] = 178;
                        break;
                    case 182:
                        if ((BigInt("4503591038484478") & l) === BigInt(0))break;
                        if (kind > BigInt(111))kind = BigInt(111);
                        this.jjstateSet[this.jjnewStateCnt++] = 182;
                        break;
                    case 186:
                        if ((BigInt("9007190666903550") & l) === BigInt(0))break;
                        if (kind > BigInt(112))kind = BigInt(112);
                        this.jjstateSet[this.jjnewStateCnt++] = 186;
                        break;
                    case 190:
                        if ((BigInt("18014389923741694") & l) === BigInt(0))break;
                        if (kind > BigInt(113))kind = BigInt(113);
                        this.jjstateSet[this.jjnewStateCnt++] = 190;
                        break;
                    case 194:
                        if ((BigInt("36028788437417982") & l) === BigInt(0))break;
                        if (kind > BigInt(114))kind = BigInt(114);
                        this.jjstateSet[this.jjnewStateCnt++] = 194;
                        break;
                    case 198:
                        if ((BigInt("72057585464770558") & l) === BigInt(0))break;
                        if (kind > BigInt(115))kind = BigInt(115);
                        this.jjstateSet[this.jjnewStateCnt++] = 198;
                        break;
                    case 202:
                        if ((BigInt("144115179519475710") & l) === BigInt(0))break;
                        if (kind > BigInt(116))kind = BigInt(116);
                        this.jjstateSet[this.jjnewStateCnt++] = 202;
                        break;
                    case 206:
                        if ((BigInt("288230367628886014") & l) === BigInt(0))break;
                        if (kind > BigInt(117))kind = BigInt(117);
                        this.jjstateSet[this.jjnewStateCnt++] = 206;
                        break;
                    case 210:
                        if ((BigInt("576460743847706622") & l) === BigInt(0))break;
                        if (kind > BigInt(118))kind = BigInt(118);
                        this.jjstateSet[this.jjnewStateCnt++] = 210;
                        break;
                    case 212:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 66){
                            this.jjCheckNAddStates(33, 68);
                        }
                        break;
                    case 244:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 95)this.jjstateSet[this.jjnewStateCnt++] = 245;
                        break;
                    case 246:
                        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == 95)this.jjstateSet[this.jjnewStateCnt++] = 247;
                        break;
                    default:
                        break;
                    }
                }} while((i !== startsAt));
            } else {
                const i2: number = ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) & 255) >> 6;
                const l2: number = 1 << ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) & 63);
                do {{
                    switch((this.jjstateSet[--i])) {
                    default:
                        break;
                    }
                }} while((i !== startsAt));
            }
            if (kind !== BigInt("2147483647")){
                this.jjmatchedKind = kind;
                this.jjmatchedPos = BigInt(curPos);
                kind = BigInt("2147483647");
            }
            ++curPos;
            if ((i = this.jjnewStateCnt) === (startsAt = 248 - (this.jjnewStateCnt = startsAt)))return BigInt(curPos);
            try {
                this.curChar = this.input_stream.readChar();
            } catch(e) {
                return BigInt(curPos);
            }
        };}
    }

    static jjnextStates: number[]; public static jjnextStates_$LI$(): number[] { if (SyntaxCheckerTokenManager.jjnextStates == null) { SyntaxCheckerTokenManager.jjnextStates = [241, 19, 242, 21, 243, 244, 245, 246, 43, 41, 44, 39, 38, 39, 40, 41, 35, 34, 66, 68, 70, 71, 73, 75, 62, 64, 53, 54, 55, 57, 59, 48, 51, 77, 80, 83, 86, 89, 92, 95, 98, 101, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 77, 80, 83, 86, 89, 92, 95, 98, 101, 107, 111, 115, 119, 123, 127, 131, 135, 139, 143, 147, 151, 155, 159, 163, 167, 171, 175, 179, 183, 187, 191, 195, 199, 203, 207, 211, 22, 23, 34, 35, 36]; }  return SyntaxCheckerTokenManager.jjnextStates; }

    /**
     * Token literal values.
     */
    public static jjstrLiteralImages: string[]; public static jjstrLiteralImages_$LI$(): string[] { if (SyntaxCheckerTokenManager.jjstrLiteralImages == null) { SyntaxCheckerTokenManager.jjstrLiteralImages = ["", null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, "(", ")", "+", "-", "*", "/", "^", "^^", "#", "!", "%", ",", ";", null, null, null, "<", "<=", ">", ">=", null, null, "~", "@~", "-->", "<--", "-/>", "</-", null, "<->", null, null, "(+)", null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, "[", "]", null, null]; }  return SyntaxCheckerTokenManager.jjstrLiteralImages; }

    jjFillToken(): Token {
        let t: Token;
        let curTokenImage: string;
        let beginLine: number;
        let endLine: number;
        let beginColumn: number;
        let endColumn: number;
        const im: string = SyntaxCheckerTokenManager.jjstrLiteralImages_$LI$()[Number(this.jjmatchedKind)];
        curTokenImage = (im == null) ? this.input_stream.GetImage() : im;
        beginLine = this.input_stream.getBeginLine();
        beginColumn = this.input_stream.getBeginColumn();
        endLine = this.input_stream.getEndLine();
        endColumn = this.input_stream.getEndColumn();
        t = Token.newToken(Number(this.jjmatchedKind), curTokenImage);
        t.beginLine = beginLine;
        t.endLine = endLine;
        t.beginColumn = beginColumn;
        t.endColumn = endColumn;
        return t;
    }

    curLexState: bigint;

    defaultLexState: bigint;

    jjnewStateCnt: number;

    jjround: bigint;

    jjmatchedPos: bigint;

    jjmatchedKind: bigint;

    /**
     * Get the next Token.
     * @return {Token}
     */
    public getNextToken(): Token {
        let matchedToken: Token;
        let curPos: bigint = BigInt(0);
        EOFLoop: for(; ; ) {{
            try {
                this.curChar = this.input_stream.BeginToken();
            } catch(e) {
                this.jjmatchedKind = BigInt(0);
                this.jjmatchedPos = BigInt(-1);
                matchedToken = this.jjFillToken();
                return matchedToken;
            }
            try {
                this.input_stream.backup(0);
                while(((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) <= BigInt(32) && (BigInt(4294977024) & BigInt((1 << (c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar)))) !== BigInt(0))) {this.curChar = this.input_stream.BeginToken()};
            } catch(e1) {
                continue EOFLoop;
            }
            this.jjmatchedKind = BigInt(2147483647);
            this.jjmatchedPos = BigInt(0);
            curPos = this.jjMoveStringLiteralDfa0_0();
            if (this.jjmatchedPos === BigInt(0) && this.jjmatchedKind > BigInt(128)){
                this.jjmatchedKind = BigInt(128);
            }
            if (this.jjmatchedKind !== BigInt(2147483647)){
                if (this.jjmatchedPos + BigInt(1) < curPos)this.input_stream.backup(Number(curPos - this.jjmatchedPos - BigInt(1)));
                if ((SyntaxCheckerTokenManager.jjtoToken_$LI$()[Number((this.jjmatchedKind >> BigInt(6)))] & (BigInt(1) << (this.jjmatchedKind & BigInt(63)))) !== BigInt(0)){
                    matchedToken = this.jjFillToken();
                    return matchedToken;
                } else {
                    continue EOFLoop;
                }
            }
            let error_line: number = this.input_stream.getEndLine();
            let error_column: number = this.input_stream.getEndColumn();
            let error_after: string = null;
            let EOFSeen: boolean = false;
            try {
                this.input_stream.readChar();
                this.input_stream.backup(1);
            } catch(e1) {
                EOFSeen = true;
                error_after = curPos <= 1 ? "" : this.input_stream.GetImage();
                if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == '\n'.charCodeAt(0) || (c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(this.curChar) == '\r'.charCodeAt(0)){
                    error_line++;
                    error_column = 0;
                } else error_column++;
            }
            if (!EOFSeen){
                this.input_stream.backup(1);
                error_after = curPos <= 1 ? "" : this.input_stream.GetImage();
            }
            throw new TokenMgrError(EOFSeen, this.curLexState, error_line, error_column, error_after, this.curChar, TokenMgrError.LEXICAL_ERROR);
        };}
    }

    /*private*/ jjCheckNAdd(state: number) {
        if (this.jjrounds[state] !== this.jjround){
            this.jjstateSet[this.jjnewStateCnt++] = state;
            this.jjrounds[state] = this.jjround;
        }
    }

    /*private*/ jjAddStates(start: number, end: number) {
        do {{
            this.jjstateSet[this.jjnewStateCnt++] = SyntaxCheckerTokenManager.jjnextStates_$LI$()[start];
        }} while((start++ !== end));
    }

    /*private*/ jjCheckNAddTwoStates(state1: number, state2: number) {
        this.jjCheckNAdd(state1);
        this.jjCheckNAdd(state2);
    }

    /*private*/ jjCheckNAddStates(start: number, end: number) {
        do {{
            this.jjCheckNAdd(SyntaxCheckerTokenManager.jjnextStates_$LI$()[start]);
        }} while((start++ !== end));
    }

    public constructor(stream?: any, lexState?: any) {
        if (((stream != null && stream instanceof <any>SimpleCharStream) || stream === null) && ((typeof lexState === 'number') || lexState === null)) {
            let __args = arguments;
            if (this.jjnewStateCnt === undefined) { this.jjnewStateCnt = 0; } 
            if (this.jjround === undefined) { this.jjround = BigInt(0); } 
            if (this.jjmatchedPos === undefined) { this.jjmatchedPos = BigInt(0); } 
            if (this.jjmatchedKind === undefined) { this.jjmatchedKind = BigInt(0); } 
            if (this.input_stream === undefined) { this.input_stream = null; } 
            if (this.curChar === undefined) { this.curChar = null; } 
            this.debugStream = java.lang.System.out;
            this.curLexState = BigInt(0);
            this.defaultLexState = BigInt(0);
            this.jjrounds = (s => { let a=[]; while(s-->0) a.push(0); return a; })(248);
            this.jjstateSet = (s => { let a=[]; while(s-->0) a.push(0); return a; })(2 * 248);
            this.ReInit$org_mariuszgromada_math_mxparser_syntaxchecker_SimpleCharStream(stream);
            this.SwitchTo(lexState);
        } else if (((stream != null && stream instanceof <any>SimpleCharStream) || stream === null) && lexState === undefined) {
            let __args = arguments;
            if (this.jjnewStateCnt === undefined) { this.jjnewStateCnt = 0; } 
            if (this.jjround === undefined) { this.jjround = BigInt(0); } 
            if (this.jjmatchedPos === undefined) { this.jjmatchedPos = BigInt(0); } 
            if (this.jjmatchedKind === undefined) { this.jjmatchedKind = BigInt(0); } 
            if (this.input_stream === undefined) { this.input_stream = null; } 
            if (this.curChar === undefined) { this.curChar = null; } 
            this.debugStream = java.lang.System.out;
            this.curLexState = BigInt(0);
            this.defaultLexState = BigInt(0);
            this.jjrounds = (s => { let a=[]; while(s-->0) a.push(0); return a; })(248);
            this.jjstateSet = (s => { let a=[]; while(s-->0) a.push(0); return a; })(2 * 248);
            if (SimpleCharStream.staticFlag)throw new Error("ERROR: Cannot use a static CharStream class with a non-static lexical analyzer.");
            this.input_stream = stream;
        } else throw new Error('invalid overload');
    }

    public ReInit$org_mariuszgromada_math_mxparser_syntaxchecker_SimpleCharStream(stream: SimpleCharStream) {
        this.jjmatchedPos = BigInt(0);
        this.jjnewStateCnt = 0;
        this.curLexState = this.defaultLexState;
        this.input_stream = stream;
        this.ReInitRounds();
    }

    /*private*/ ReInitRounds() {
        let i: number;
        this.jjround = BigInt(-2147483647);
        for(i = 248; i-- > 0; ) {this.jjrounds[i] = BigInt(-2147483648);}
    }

    public ReInit$org_mariuszgromada_math_mxparser_syntaxchecker_SimpleCharStream$int(stream: SimpleCharStream, lexState: bigint) {
        this.ReInit$org_mariuszgromada_math_mxparser_syntaxchecker_SimpleCharStream(stream);
        this.SwitchTo(lexState);
    }

    /**
     * Reinitialise parser.
     * @param {SimpleCharStream} stream
     * @param {number} lexState
     */
    public ReInit(stream?: any, lexState?: any) {
        if (((stream != null && stream instanceof <any>SimpleCharStream) || stream === null) && ((typeof lexState === 'number') || lexState === null)) {
            return <any>this.ReInit$org_mariuszgromada_math_mxparser_syntaxchecker_SimpleCharStream$int(stream, lexState);
        } else if (((stream != null && stream instanceof <any>SimpleCharStream) || stream === null) && lexState === undefined) {
            return <any>this.ReInit$org_mariuszgromada_math_mxparser_syntaxchecker_SimpleCharStream(stream);
        } else throw new Error('invalid overload');
    }

    /**
     * Switch to specified lex state.
     * @param {bigint} lexState
     */
    public SwitchTo(lexState: bigint) {
        if (lexState >= BigInt(1) || lexState < BigInt(0))throw new TokenMgrError("Error: Ignoring invalid lexical state : " + lexState + ". State unchanged.", TokenMgrError.INVALID_LEXICAL_STATE); else this.curLexState = lexState;
    }

    /**
     * Lexer state names.
     */
    public static lexStateNames: string[]; public static lexStateNames_$LI$(): string[] { if (SyntaxCheckerTokenManager.lexStateNames == null) { SyntaxCheckerTokenManager.lexStateNames = ["DEFAULT"]; }  return SyntaxCheckerTokenManager.lexStateNames; }

    static jjtoToken: bigint[]; public static jjtoToken_$LI$(): bigint[] { if (SyntaxCheckerTokenManager.jjtoToken == null) { SyntaxCheckerTokenManager.jjtoToken = [BigInt(-70368744177663), BigInt(-196609), BigInt(1)]; }  return SyntaxCheckerTokenManager.jjtoToken; }

    static jjtoSkip: bigint[]; public static jjtoSkip_$LI$(): bigint[] { if (SyntaxCheckerTokenManager.jjtoSkip == null) { SyntaxCheckerTokenManager.jjtoSkip = [BigInt(30), BigInt(0), BigInt(0)]; }  return SyntaxCheckerTokenManager.jjtoSkip; }

    input_stream: SimpleCharStream;

    /*private*/ jjrounds: bigint[];

    /*private*/ jjstateSet: number[];

    curChar: string;
}
SyntaxCheckerTokenManager["__class"] = "org.mariuszgromada.math.mxparser.syntaxchecker.SyntaxCheckerTokenManager";
SyntaxCheckerTokenManager["__interfaces"] = ["org.mariuszgromada.math.mxparser.syntaxchecker.SyntaxCheckerConstants"];