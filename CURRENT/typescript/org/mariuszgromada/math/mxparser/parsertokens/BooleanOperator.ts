import { mXparserConstants } from '../mXparserConstants';

/**
 * Boolean Operators - mXparser tokens definition.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.1.0
 * @class
 */
export class BooleanOperator {
    public static TYPE_ID: number = 2;

    public static TYPE_DESC: string = "Boolean Operator";

    public static AND_ID: number = 1;

    public static NAND_ID: number = 2;

    public static OR_ID: number = 3;

    public static NOR_ID: number = 4;

    public static XOR_ID: number = 5;

    public static IMP_ID: number = 6;

    public static CIMP_ID: number = 7;

    public static NIMP_ID: number = 8;

    public static CNIMP_ID: number = 9;

    public static EQV_ID: number = 10;

    public static NEG_ID: number = 11;

    public static NEG_STR: string = "~";

    public static AND_STR: string = "&";

    public static AND1_STR: string = "&&";

    public static AND2_STR: string = "/\\";

    public static NAND_STR: string; public static NAND_STR_$LI$(): string { if (BooleanOperator.NAND_STR == null) { BooleanOperator.NAND_STR = BooleanOperator.NEG_STR + BooleanOperator.AND_STR; }  return BooleanOperator.NAND_STR; }

    public static NAND1_STR: string; public static NAND1_STR_$LI$(): string { if (BooleanOperator.NAND1_STR == null) { BooleanOperator.NAND1_STR = BooleanOperator.NEG_STR + BooleanOperator.AND1_STR; }  return BooleanOperator.NAND1_STR; }

    public static NAND2_STR: string; public static NAND2_STR_$LI$(): string { if (BooleanOperator.NAND2_STR == null) { BooleanOperator.NAND2_STR = BooleanOperator.NEG_STR + BooleanOperator.AND2_STR; }  return BooleanOperator.NAND2_STR; }

    public static OR_STR: string = "|";

    public static OR1_STR: string = "||";

    public static OR2_STR: string = "\\/";

    public static NOR_STR: string; public static NOR_STR_$LI$(): string { if (BooleanOperator.NOR_STR == null) { BooleanOperator.NOR_STR = BooleanOperator.NEG_STR + BooleanOperator.OR_STR; }  return BooleanOperator.NOR_STR; }

    public static NOR1_STR: string; public static NOR1_STR_$LI$(): string { if (BooleanOperator.NOR1_STR == null) { BooleanOperator.NOR1_STR = BooleanOperator.NEG_STR + BooleanOperator.OR1_STR; }  return BooleanOperator.NOR1_STR; }

    public static NOR2_STR: string; public static NOR2_STR_$LI$(): string { if (BooleanOperator.NOR2_STR == null) { BooleanOperator.NOR2_STR = BooleanOperator.NEG_STR + BooleanOperator.OR2_STR; }  return BooleanOperator.NOR2_STR; }

    public static XOR_STR: string = "(+)";

    public static IMP_STR: string = "-->";

    public static CIMP_STR: string = "<--";

    public static NIMP_STR: string = "-/>";

    public static CNIMP_STR: string = "</-";

    public static EQV_STR: string = "<->";

    public static NEG_SYN: string = "~p";

    public static AND_SYN: string = "p & q";

    public static AND1_SYN: string = "p && q";

    public static AND2_SYN: string = "p /\\ q";

    public static NAND_SYN: string; public static NAND_SYN_$LI$(): string { if (BooleanOperator.NAND_SYN == null) { BooleanOperator.NAND_SYN = "p " + BooleanOperator.NEG_STR + BooleanOperator.AND_STR + " q"; }  return BooleanOperator.NAND_SYN; }

    public static NAND1_SYN: string; public static NAND1_SYN_$LI$(): string { if (BooleanOperator.NAND1_SYN == null) { BooleanOperator.NAND1_SYN = "p " + BooleanOperator.NEG_STR + BooleanOperator.AND1_STR + " q"; }  return BooleanOperator.NAND1_SYN; }

    public static NAND2_SYN: string; public static NAND2_SYN_$LI$(): string { if (BooleanOperator.NAND2_SYN == null) { BooleanOperator.NAND2_SYN = "p " + BooleanOperator.NEG_STR + BooleanOperator.AND2_STR + " q"; }  return BooleanOperator.NAND2_SYN; }

    public static OR_SYN: string = "p | q";

    public static OR1_SYN: string = "p || q";

    public static OR2_SYN: string = "p \\/ q";

    public static NOR_SYN: string; public static NOR_SYN_$LI$(): string { if (BooleanOperator.NOR_SYN == null) { BooleanOperator.NOR_SYN = "p " + BooleanOperator.NEG_STR + BooleanOperator.OR_STR + " q"; }  return BooleanOperator.NOR_SYN; }

    public static NOR1_SYN: string; public static NOR1_SYN_$LI$(): string { if (BooleanOperator.NOR1_SYN == null) { BooleanOperator.NOR1_SYN = "p " + BooleanOperator.NEG_STR + BooleanOperator.OR1_STR + " q"; }  return BooleanOperator.NOR1_SYN; }

    public static NOR2_SYN: string; public static NOR2_SYN_$LI$(): string { if (BooleanOperator.NOR2_SYN == null) { BooleanOperator.NOR2_SYN = "p " + BooleanOperator.NEG_STR + BooleanOperator.OR2_STR + " q"; }  return BooleanOperator.NOR2_SYN; }

    public static XOR_SYN: string = "p (+) q";

    public static IMP_SYN: string = "p --> q";

    public static CIMP_SYN: string = "p <-- q";

    public static NIMP_SYN: string = "p  -/> q";

    public static CNIMP_SYN: string = "p </- q";

    public static EQV_SYN: string = "p <-> q";

    public static AND_DESC: string = "Logical conjunction (AND)";

    public static OR_DESC: string = "Logical disjunction (OR)";

    public static NEG_DESC: string = "Negation";

    public static NAND_DESC: string = "NAND - Sheffer stroke";

    public static NOR_DESC: string = "Logical NOR";

    public static XOR_DESC: string = "Exclusive or (XOR)";

    public static IMP_DESC: string = "Implication (IMP)";

    public static CIMP_DESC: string = "Converse implication (CIMP)";

    public static NIMP_DESC: string = "Material nonimplication (NIMP)";

    public static CNIMP_DESC: string = "Converse nonimplication (CNIMP)";

    public static EQV_DESC: string = "Logical biconditional (EQV)";

    public static AND_SINCE: string; public static AND_SINCE_$LI$(): string { if (BooleanOperator.AND_SINCE == null) { BooleanOperator.AND_SINCE = mXparserConstants.NAMEv10; }  return BooleanOperator.AND_SINCE; }

    public static OR_SINCE: string; public static OR_SINCE_$LI$(): string { if (BooleanOperator.OR_SINCE == null) { BooleanOperator.OR_SINCE = mXparserConstants.NAMEv10; }  return BooleanOperator.OR_SINCE; }

    public static NEG_SINCE: string; public static NEG_SINCE_$LI$(): string { if (BooleanOperator.NEG_SINCE == null) { BooleanOperator.NEG_SINCE = mXparserConstants.NAMEv10; }  return BooleanOperator.NEG_SINCE; }

    public static NAND_SINCE: string; public static NAND_SINCE_$LI$(): string { if (BooleanOperator.NAND_SINCE == null) { BooleanOperator.NAND_SINCE = mXparserConstants.NAMEv10; }  return BooleanOperator.NAND_SINCE; }

    public static NOR_SINCE: string; public static NOR_SINCE_$LI$(): string { if (BooleanOperator.NOR_SINCE == null) { BooleanOperator.NOR_SINCE = mXparserConstants.NAMEv10; }  return BooleanOperator.NOR_SINCE; }

    public static XOR_SINCE: string; public static XOR_SINCE_$LI$(): string { if (BooleanOperator.XOR_SINCE == null) { BooleanOperator.XOR_SINCE = mXparserConstants.NAMEv10; }  return BooleanOperator.XOR_SINCE; }

    public static IMP_SINCE: string; public static IMP_SINCE_$LI$(): string { if (BooleanOperator.IMP_SINCE == null) { BooleanOperator.IMP_SINCE = mXparserConstants.NAMEv10; }  return BooleanOperator.IMP_SINCE; }

    public static CIMP_SINCE: string; public static CIMP_SINCE_$LI$(): string { if (BooleanOperator.CIMP_SINCE == null) { BooleanOperator.CIMP_SINCE = mXparserConstants.NAMEv10; }  return BooleanOperator.CIMP_SINCE; }

    public static NIMP_SINCE: string; public static NIMP_SINCE_$LI$(): string { if (BooleanOperator.NIMP_SINCE == null) { BooleanOperator.NIMP_SINCE = mXparserConstants.NAMEv10; }  return BooleanOperator.NIMP_SINCE; }

    public static CNIMP_SINCE: string; public static CNIMP_SINCE_$LI$(): string { if (BooleanOperator.CNIMP_SINCE == null) { BooleanOperator.CNIMP_SINCE = mXparserConstants.NAMEv10; }  return BooleanOperator.CNIMP_SINCE; }

    public static EQV_SINCE: string; public static EQV_SINCE_$LI$(): string { if (BooleanOperator.EQV_SINCE == null) { BooleanOperator.EQV_SINCE = mXparserConstants.NAMEv10; }  return BooleanOperator.EQV_SINCE; }
}
BooleanOperator["__class"] = "org.mariuszgromada.math.mxparser.parsertokens.BooleanOperator";