import { mXparserConstants } from '../mXparserConstants';

/**
 * Random variables - mXparserConstants tokens definition.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.1.0
 * @class
 */
export class RandomVariable {
    public static TYPE_ID: number = 10;

    public static TYPE_DESC: string = "Random Variable";

    public static UNIFORM_ID: number = 1;

    public static INT_ID: number = 2;

    public static INT1_ID: number = 3;

    public static INT2_ID: number = 4;

    public static INT3_ID: number = 5;

    public static INT4_ID: number = 6;

    public static INT5_ID: number = 7;

    public static INT6_ID: number = 8;

    public static INT7_ID: number = 9;

    public static INT8_ID: number = 10;

    public static INT9_ID: number = 11;

    public static NAT0_ID: number = 12;

    public static NAT0_1_ID: number = 13;

    public static NAT0_2_ID: number = 14;

    public static NAT0_3_ID: number = 15;

    public static NAT0_4_ID: number = 16;

    public static NAT0_5_ID: number = 17;

    public static NAT0_6_ID: number = 18;

    public static NAT0_7_ID: number = 19;

    public static NAT0_8_ID: number = 20;

    public static NAT0_9_ID: number = 21;

    public static NAT1_ID: number = 22;

    public static NAT1_1_ID: number = 23;

    public static NAT1_2_ID: number = 24;

    public static NAT1_3_ID: number = 25;

    public static NAT1_4_ID: number = 26;

    public static NAT1_5_ID: number = 27;

    public static NAT1_6_ID: number = 28;

    public static NAT1_7_ID: number = 29;

    public static NAT1_8_ID: number = 30;

    public static NAT1_9_ID: number = 31;

    public static NOR_ID: number = 32;

    public static UNIFORM_STR: string = "[Uni]";

    public static INT_STR: string = "[Int]";

    public static INT1_STR: string = "[Int1]";

    public static INT2_STR: string = "[Int2]";

    public static INT3_STR: string = "[Int3]";

    public static INT4_STR: string = "[Int4]";

    public static INT5_STR: string = "[Int5]";

    public static INT6_STR: string = "[Int6]";

    public static INT7_STR: string = "[Int7]";

    public static INT8_STR: string = "[Int8]";

    public static INT9_STR: string = "[Int9]";

    public static NAT0_STR: string = "[nat]";

    public static NAT0_1_STR: string = "[nat1]";

    public static NAT0_2_STR: string = "[nat2]";

    public static NAT0_3_STR: string = "[nat3]";

    public static NAT0_4_STR: string = "[nat4]";

    public static NAT0_5_STR: string = "[nat5]";

    public static NAT0_6_STR: string = "[nat6]";

    public static NAT0_7_STR: string = "[nat7]";

    public static NAT0_8_STR: string = "[nat8]";

    public static NAT0_9_STR: string = "[nat9]";

    public static NAT1_STR: string = "[Nat]";

    public static NAT1_1_STR: string = "[Nat1]";

    public static NAT1_2_STR: string = "[Nat2]";

    public static NAT1_3_STR: string = "[Nat3]";

    public static NAT1_4_STR: string = "[Nat4]";

    public static NAT1_5_STR: string = "[Nat5]";

    public static NAT1_6_STR: string = "[Nat6]";

    public static NAT1_7_STR: string = "[Nat7]";

    public static NAT1_8_STR: string = "[Nat8]";

    public static NAT1_9_STR: string = "[Nat9]";

    public static NOR_STR: string = "[Nor]";

    public static UNIFORM_SYN: string; public static UNIFORM_SYN_$LI$(): string { if (RandomVariable.UNIFORM_SYN == null) { RandomVariable.UNIFORM_SYN = RandomVariable.UNIFORM_STR; }  return RandomVariable.UNIFORM_SYN; }

    public static INT_SYN: string; public static INT_SYN_$LI$(): string { if (RandomVariable.INT_SYN == null) { RandomVariable.INT_SYN = RandomVariable.INT_STR; }  return RandomVariable.INT_SYN; }

    public static INT1_SYN: string; public static INT1_SYN_$LI$(): string { if (RandomVariable.INT1_SYN == null) { RandomVariable.INT1_SYN = RandomVariable.INT1_STR; }  return RandomVariable.INT1_SYN; }

    public static INT2_SYN: string; public static INT2_SYN_$LI$(): string { if (RandomVariable.INT2_SYN == null) { RandomVariable.INT2_SYN = RandomVariable.INT2_STR; }  return RandomVariable.INT2_SYN; }

    public static INT3_SYN: string; public static INT3_SYN_$LI$(): string { if (RandomVariable.INT3_SYN == null) { RandomVariable.INT3_SYN = RandomVariable.INT3_STR; }  return RandomVariable.INT3_SYN; }

    public static INT4_SYN: string; public static INT4_SYN_$LI$(): string { if (RandomVariable.INT4_SYN == null) { RandomVariable.INT4_SYN = RandomVariable.INT4_STR; }  return RandomVariable.INT4_SYN; }

    public static INT5_SYN: string; public static INT5_SYN_$LI$(): string { if (RandomVariable.INT5_SYN == null) { RandomVariable.INT5_SYN = RandomVariable.INT5_STR; }  return RandomVariable.INT5_SYN; }

    public static INT6_SYN: string; public static INT6_SYN_$LI$(): string { if (RandomVariable.INT6_SYN == null) { RandomVariable.INT6_SYN = RandomVariable.INT6_STR; }  return RandomVariable.INT6_SYN; }

    public static INT7_SYN: string; public static INT7_SYN_$LI$(): string { if (RandomVariable.INT7_SYN == null) { RandomVariable.INT7_SYN = RandomVariable.INT7_STR; }  return RandomVariable.INT7_SYN; }

    public static INT8_SYN: string; public static INT8_SYN_$LI$(): string { if (RandomVariable.INT8_SYN == null) { RandomVariable.INT8_SYN = RandomVariable.INT8_STR; }  return RandomVariable.INT8_SYN; }

    public static INT9_SYN: string; public static INT9_SYN_$LI$(): string { if (RandomVariable.INT9_SYN == null) { RandomVariable.INT9_SYN = RandomVariable.INT9_STR; }  return RandomVariable.INT9_SYN; }

    public static NAT0_SYN: string; public static NAT0_SYN_$LI$(): string { if (RandomVariable.NAT0_SYN == null) { RandomVariable.NAT0_SYN = RandomVariable.NAT0_STR; }  return RandomVariable.NAT0_SYN; }

    public static NAT0_1_SYN: string; public static NAT0_1_SYN_$LI$(): string { if (RandomVariable.NAT0_1_SYN == null) { RandomVariable.NAT0_1_SYN = RandomVariable.NAT0_1_STR; }  return RandomVariable.NAT0_1_SYN; }

    public static NAT0_2_SYN: string; public static NAT0_2_SYN_$LI$(): string { if (RandomVariable.NAT0_2_SYN == null) { RandomVariable.NAT0_2_SYN = RandomVariable.NAT0_2_STR; }  return RandomVariable.NAT0_2_SYN; }

    public static NAT0_3_SYN: string; public static NAT0_3_SYN_$LI$(): string { if (RandomVariable.NAT0_3_SYN == null) { RandomVariable.NAT0_3_SYN = RandomVariable.NAT0_3_STR; }  return RandomVariable.NAT0_3_SYN; }

    public static NAT0_4_SYN: string; public static NAT0_4_SYN_$LI$(): string { if (RandomVariable.NAT0_4_SYN == null) { RandomVariable.NAT0_4_SYN = RandomVariable.NAT0_4_STR; }  return RandomVariable.NAT0_4_SYN; }

    public static NAT0_5_SYN: string; public static NAT0_5_SYN_$LI$(): string { if (RandomVariable.NAT0_5_SYN == null) { RandomVariable.NAT0_5_SYN = RandomVariable.NAT0_5_STR; }  return RandomVariable.NAT0_5_SYN; }

    public static NAT0_6_SYN: string; public static NAT0_6_SYN_$LI$(): string { if (RandomVariable.NAT0_6_SYN == null) { RandomVariable.NAT0_6_SYN = RandomVariable.NAT0_6_STR; }  return RandomVariable.NAT0_6_SYN; }

    public static NAT0_7_SYN: string; public static NAT0_7_SYN_$LI$(): string { if (RandomVariable.NAT0_7_SYN == null) { RandomVariable.NAT0_7_SYN = RandomVariable.NAT0_7_STR; }  return RandomVariable.NAT0_7_SYN; }

    public static NAT0_8_SYN: string; public static NAT0_8_SYN_$LI$(): string { if (RandomVariable.NAT0_8_SYN == null) { RandomVariable.NAT0_8_SYN = RandomVariable.NAT0_8_STR; }  return RandomVariable.NAT0_8_SYN; }

    public static NAT0_9_SYN: string; public static NAT0_9_SYN_$LI$(): string { if (RandomVariable.NAT0_9_SYN == null) { RandomVariable.NAT0_9_SYN = RandomVariable.NAT0_9_STR; }  return RandomVariable.NAT0_9_SYN; }

    public static NAT1_SYN: string; public static NAT1_SYN_$LI$(): string { if (RandomVariable.NAT1_SYN == null) { RandomVariable.NAT1_SYN = RandomVariable.NAT1_STR; }  return RandomVariable.NAT1_SYN; }

    public static NAT1_1_SYN: string; public static NAT1_1_SYN_$LI$(): string { if (RandomVariable.NAT1_1_SYN == null) { RandomVariable.NAT1_1_SYN = RandomVariable.NAT1_1_STR; }  return RandomVariable.NAT1_1_SYN; }

    public static NAT1_2_SYN: string; public static NAT1_2_SYN_$LI$(): string { if (RandomVariable.NAT1_2_SYN == null) { RandomVariable.NAT1_2_SYN = RandomVariable.NAT1_2_STR; }  return RandomVariable.NAT1_2_SYN; }

    public static NAT1_3_SYN: string; public static NAT1_3_SYN_$LI$(): string { if (RandomVariable.NAT1_3_SYN == null) { RandomVariable.NAT1_3_SYN = RandomVariable.NAT1_3_STR; }  return RandomVariable.NAT1_3_SYN; }

    public static NAT1_4_SYN: string; public static NAT1_4_SYN_$LI$(): string { if (RandomVariable.NAT1_4_SYN == null) { RandomVariable.NAT1_4_SYN = RandomVariable.NAT1_4_STR; }  return RandomVariable.NAT1_4_SYN; }

    public static NAT1_5_SYN: string; public static NAT1_5_SYN_$LI$(): string { if (RandomVariable.NAT1_5_SYN == null) { RandomVariable.NAT1_5_SYN = RandomVariable.NAT1_5_STR; }  return RandomVariable.NAT1_5_SYN; }

    public static NAT1_6_SYN: string; public static NAT1_6_SYN_$LI$(): string { if (RandomVariable.NAT1_6_SYN == null) { RandomVariable.NAT1_6_SYN = RandomVariable.NAT1_6_STR; }  return RandomVariable.NAT1_6_SYN; }

    public static NAT1_7_SYN: string; public static NAT1_7_SYN_$LI$(): string { if (RandomVariable.NAT1_7_SYN == null) { RandomVariable.NAT1_7_SYN = RandomVariable.NAT1_7_STR; }  return RandomVariable.NAT1_7_SYN; }

    public static NAT1_8_SYN: string; public static NAT1_8_SYN_$LI$(): string { if (RandomVariable.NAT1_8_SYN == null) { RandomVariable.NAT1_8_SYN = RandomVariable.NAT1_8_STR; }  return RandomVariable.NAT1_8_SYN; }

    public static NAT1_9_SYN: string; public static NAT1_9_SYN_$LI$(): string { if (RandomVariable.NAT1_9_SYN == null) { RandomVariable.NAT1_9_SYN = RandomVariable.NAT1_9_STR; }  return RandomVariable.NAT1_9_SYN; }

    public static NOR_SYN: string; public static NOR_SYN_$LI$(): string { if (RandomVariable.NOR_SYN == null) { RandomVariable.NOR_SYN = RandomVariable.NOR_STR; }  return RandomVariable.NOR_SYN; }

    public static UNIFORM_DESC: string = "Random variable - Uniform continuous distribution U(0,1)";

    public static INT_DESC: string = "Random variable - random integer";

    public static INT1_DESC: string = "Random variable - random integer - Uniform discrete distribution U{-10^1, 10^1}";

    public static INT2_DESC: string = "Random variable - random integer - Uniform discrete distribution U{-10^2, 10^2}";

    public static INT3_DESC: string = "Random variable - random integer - Uniform discrete distribution U{-10^3, 10^3}";

    public static INT4_DESC: string = "Random variable - random integer - Uniform discrete distribution U{-10^4, 10^4}";

    public static INT5_DESC: string = "Random variable - random integer - Uniform discrete distribution U{-10^5, 10^5}";

    public static INT6_DESC: string = "Random variable - random integer - Uniform discrete distribution U{-10^6, 10^6}";

    public static INT7_DESC: string = "Random variable - random integer - Uniform discrete distribution U{-10^7, 10^7}";

    public static INT8_DESC: string = "Random variable - random integer - Uniform discrete distribution U{-10^8, 10^8}";

    public static INT9_DESC: string = "Random variable - random integer - Uniform discrete distribution U{-10^9, 10^9}";

    public static NAT0_DESC: string = "Random variable - random natural number including 0";

    public static NAT0_1_DESC: string = "Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^1}";

    public static NAT0_2_DESC: string = "Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^2}";

    public static NAT0_3_DESC: string = "Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^3}";

    public static NAT0_4_DESC: string = "Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^4}";

    public static NAT0_5_DESC: string = "Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^5}";

    public static NAT0_6_DESC: string = "Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^6}";

    public static NAT0_7_DESC: string = "Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^7}";

    public static NAT0_8_DESC: string = "Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^8}";

    public static NAT0_9_DESC: string = "Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^9}";

    public static NAT1_DESC: string = "Random variable - random natural number";

    public static NAT1_1_DESC: string = "Random variable - random natural number - Uniform discrete distribution U{1, 10^1}";

    public static NAT1_2_DESC: string = "Random variable - random natural number - Uniform discrete distribution U{1, 10^2}";

    public static NAT1_3_DESC: string = "Random variable - random natural number - Uniform discrete distribution U{1, 10^3}";

    public static NAT1_4_DESC: string = "Random variable - random natural number - Uniform discrete distribution U{1, 10^4}";

    public static NAT1_5_DESC: string = "Random variable - random natural number - Uniform discrete distribution U{1, 10^5}";

    public static NAT1_6_DESC: string = "Random variable - random natural number - Uniform discrete distribution U{1, 10^6}";

    public static NAT1_7_DESC: string = "Random variable - random natural number - Uniform discrete distribution U{1, 10^7}";

    public static NAT1_8_DESC: string = "Random variable - random natural number - Uniform discrete distribution U{1, 10^8}";

    public static NAT1_9_DESC: string = "Random variable - random natural number - Uniform discrete distribution U{1, 10^9}";

    public static NOR_DESC: string = "Random variable - Normal distribution N(0,1)";

    public static UNIFORM_SINCE: string; public static UNIFORM_SINCE_$LI$(): string { if (RandomVariable.UNIFORM_SINCE == null) { RandomVariable.UNIFORM_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.UNIFORM_SINCE; }

    public static INT_SINCE: string; public static INT_SINCE_$LI$(): string { if (RandomVariable.INT_SINCE == null) { RandomVariable.INT_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.INT_SINCE; }

    public static INT1_SINCE: string; public static INT1_SINCE_$LI$(): string { if (RandomVariable.INT1_SINCE == null) { RandomVariable.INT1_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.INT1_SINCE; }

    public static INT2_SINCE: string; public static INT2_SINCE_$LI$(): string { if (RandomVariable.INT2_SINCE == null) { RandomVariable.INT2_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.INT2_SINCE; }

    public static INT3_SINCE: string; public static INT3_SINCE_$LI$(): string { if (RandomVariable.INT3_SINCE == null) { RandomVariable.INT3_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.INT3_SINCE; }

    public static INT4_SINCE: string; public static INT4_SINCE_$LI$(): string { if (RandomVariable.INT4_SINCE == null) { RandomVariable.INT4_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.INT4_SINCE; }

    public static INT5_SINCE: string; public static INT5_SINCE_$LI$(): string { if (RandomVariable.INT5_SINCE == null) { RandomVariable.INT5_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.INT5_SINCE; }

    public static INT6_SINCE: string; public static INT6_SINCE_$LI$(): string { if (RandomVariable.INT6_SINCE == null) { RandomVariable.INT6_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.INT6_SINCE; }

    public static INT7_SINCE: string; public static INT7_SINCE_$LI$(): string { if (RandomVariable.INT7_SINCE == null) { RandomVariable.INT7_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.INT7_SINCE; }

    public static INT8_SINCE: string; public static INT8_SINCE_$LI$(): string { if (RandomVariable.INT8_SINCE == null) { RandomVariable.INT8_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.INT8_SINCE; }

    public static INT9_SINCE: string; public static INT9_SINCE_$LI$(): string { if (RandomVariable.INT9_SINCE == null) { RandomVariable.INT9_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.INT9_SINCE; }

    public static NAT0_SINCE: string; public static NAT0_SINCE_$LI$(): string { if (RandomVariable.NAT0_SINCE == null) { RandomVariable.NAT0_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NAT0_SINCE; }

    public static NAT0_1_SINCE: string; public static NAT0_1_SINCE_$LI$(): string { if (RandomVariable.NAT0_1_SINCE == null) { RandomVariable.NAT0_1_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NAT0_1_SINCE; }

    public static NAT0_2_SINCE: string; public static NAT0_2_SINCE_$LI$(): string { if (RandomVariable.NAT0_2_SINCE == null) { RandomVariable.NAT0_2_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NAT0_2_SINCE; }

    public static NAT0_3_SINCE: string; public static NAT0_3_SINCE_$LI$(): string { if (RandomVariable.NAT0_3_SINCE == null) { RandomVariable.NAT0_3_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NAT0_3_SINCE; }

    public static NAT0_4_SINCE: string; public static NAT0_4_SINCE_$LI$(): string { if (RandomVariable.NAT0_4_SINCE == null) { RandomVariable.NAT0_4_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NAT0_4_SINCE; }

    public static NAT0_5_SINCE: string; public static NAT0_5_SINCE_$LI$(): string { if (RandomVariable.NAT0_5_SINCE == null) { RandomVariable.NAT0_5_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NAT0_5_SINCE; }

    public static NAT0_6_SINCE: string; public static NAT0_6_SINCE_$LI$(): string { if (RandomVariable.NAT0_6_SINCE == null) { RandomVariable.NAT0_6_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NAT0_6_SINCE; }

    public static NAT0_7_SINCE: string; public static NAT0_7_SINCE_$LI$(): string { if (RandomVariable.NAT0_7_SINCE == null) { RandomVariable.NAT0_7_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NAT0_7_SINCE; }

    public static NAT0_8_SINCE: string; public static NAT0_8_SINCE_$LI$(): string { if (RandomVariable.NAT0_8_SINCE == null) { RandomVariable.NAT0_8_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NAT0_8_SINCE; }

    public static NAT0_9_SINCE: string; public static NAT0_9_SINCE_$LI$(): string { if (RandomVariable.NAT0_9_SINCE == null) { RandomVariable.NAT0_9_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NAT0_9_SINCE; }

    public static NAT1_SINCE: string; public static NAT1_SINCE_$LI$(): string { if (RandomVariable.NAT1_SINCE == null) { RandomVariable.NAT1_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NAT1_SINCE; }

    public static NAT1_1_SINCE: string; public static NAT1_1_SINCE_$LI$(): string { if (RandomVariable.NAT1_1_SINCE == null) { RandomVariable.NAT1_1_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NAT1_1_SINCE; }

    public static NAT1_2_SINCE: string; public static NAT1_2_SINCE_$LI$(): string { if (RandomVariable.NAT1_2_SINCE == null) { RandomVariable.NAT1_2_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NAT1_2_SINCE; }

    public static NAT1_3_SINCE: string; public static NAT1_3_SINCE_$LI$(): string { if (RandomVariable.NAT1_3_SINCE == null) { RandomVariable.NAT1_3_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NAT1_3_SINCE; }

    public static NAT1_4_SINCE: string; public static NAT1_4_SINCE_$LI$(): string { if (RandomVariable.NAT1_4_SINCE == null) { RandomVariable.NAT1_4_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NAT1_4_SINCE; }

    public static NAT1_5_SINCE: string; public static NAT1_5_SINCE_$LI$(): string { if (RandomVariable.NAT1_5_SINCE == null) { RandomVariable.NAT1_5_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NAT1_5_SINCE; }

    public static NAT1_6_SINCE: string; public static NAT1_6_SINCE_$LI$(): string { if (RandomVariable.NAT1_6_SINCE == null) { RandomVariable.NAT1_6_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NAT1_6_SINCE; }

    public static NAT1_7_SINCE: string; public static NAT1_7_SINCE_$LI$(): string { if (RandomVariable.NAT1_7_SINCE == null) { RandomVariable.NAT1_7_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NAT1_7_SINCE; }

    public static NAT1_8_SINCE: string; public static NAT1_8_SINCE_$LI$(): string { if (RandomVariable.NAT1_8_SINCE == null) { RandomVariable.NAT1_8_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NAT1_8_SINCE; }

    public static NAT1_9_SINCE: string; public static NAT1_9_SINCE_$LI$(): string { if (RandomVariable.NAT1_9_SINCE == null) { RandomVariable.NAT1_9_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NAT1_9_SINCE; }

    public static NOR_SINCE: string; public static NOR_SINCE_$LI$(): string { if (RandomVariable.NOR_SINCE == null) { RandomVariable.NOR_SINCE = mXparserConstants.NAMEv30; }  return RandomVariable.NOR_SINCE; }
}
RandomVariable["__class"] = "org.mariuszgromada.math.mxparser.parsertokens.RandomVariable";