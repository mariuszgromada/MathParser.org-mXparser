import { mXparserConstants } from '../mXparserConstants';

/**
 * Parser symbols - mXparserConstants tokens definition.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.2.0
 * @class
 */
export class ParserSymbol {
    public static DIGIT: string = "[0-9]";

    public static DIGIT_B1: string = "1";

    public static DIGIT_B2: string = "[01]";

    public static DIGIT_B3: string = "[0-2]";

    public static DIGIT_B4: string = "[0-3]";

    public static DIGIT_B5: string = "[0-4]";

    public static DIGIT_B6: string = "[0-5]";

    public static DIGIT_B7: string = "[0-6]";

    public static DIGIT_B8: string = "[0-7]";

    public static DIGIT_B9: string = "[0-8]";

    public static DIGIT_B10: string = "[0-9]";

    public static DIGIT_B11: string = "[0-9aA]";

    public static DIGIT_B12: string = "[0-9a-bA-B]";

    public static DIGIT_B13: string = "[0-9a-cA-C]";

    public static DIGIT_B14: string = "[0-9a-dA-D]";

    public static DIGIT_B15: string = "[0-9a-eA-E]";

    public static DIGIT_B16: string = "[0-9a-fA-F]";

    public static DIGIT_B17: string = "[0-9a-gA-G]";

    public static DIGIT_B18: string = "[0-9a-hA-H]";

    public static DIGIT_B19: string = "[0-9a-iA-I]";

    public static DIGIT_B20: string = "[0-9a-jA-J]";

    public static DIGIT_B21: string = "[0-9a-kA-K]";

    public static DIGIT_B22: string = "[0-9a-lA-L]";

    public static DIGIT_B23: string = "[0-9a-mA-M]";

    public static DIGIT_B24: string = "[0-9a-nA-N]";

    public static DIGIT_B25: string = "[0-9a-oA-O]";

    public static DIGIT_B26: string = "[0-9a-pA-P]";

    public static DIGIT_B27: string = "[0-9a-qA-Q]";

    public static DIGIT_B28: string = "[0-9a-rA-R]";

    public static DIGIT_B29: string = "[0-9a-sA-S]";

    public static DIGIT_B30: string = "[0-9a-tA-T]";

    public static DIGIT_B31: string = "[0-9a-uA-U]";

    public static DIGIT_B32: string = "[0-9a-vA-V]";

    public static DIGIT_B33: string = "[0-9a-wA-W]";

    public static DIGIT_B34: string = "[0-9a-xA-X]";

    public static DIGIT_B35: string = "[0-9a-yA-Y]";

    public static DIGIT_B36: string = "[0-9a-zA-Z]";

    public static INTEGER: string; public static INTEGER_$LI$(): string { if (ParserSymbol.INTEGER == null) { ParserSymbol.INTEGER = ParserSymbol.DIGIT + "(" + ParserSymbol.DIGIT + ")*"; }  return ParserSymbol.INTEGER; }

    public static DEC_FRACT: string; public static DEC_FRACT_$LI$(): string { if (ParserSymbol.DEC_FRACT == null) { ParserSymbol.DEC_FRACT = "(" + ParserSymbol.INTEGER_$LI$() + ")?\\." + ParserSymbol.INTEGER_$LI$(); }  return ParserSymbol.DEC_FRACT; }

    public static DEC_FRACT_OR_INT: string; public static DEC_FRACT_OR_INT_$LI$(): string { if (ParserSymbol.DEC_FRACT_OR_INT == null) { ParserSymbol.DEC_FRACT_OR_INT = "(" + ParserSymbol.DEC_FRACT_$LI$() + "|" + ParserSymbol.INTEGER_$LI$() + ")"; }  return ParserSymbol.DEC_FRACT_OR_INT; }

    public static DECIMAL_REG_EXP: string; public static DECIMAL_REG_EXP_$LI$(): string { if (ParserSymbol.DECIMAL_REG_EXP == null) { ParserSymbol.DECIMAL_REG_EXP = "[+-]?" + ParserSymbol.DEC_FRACT_OR_INT_$LI$() + "([eE][+-]?" + ParserSymbol.INTEGER_$LI$() + ")?"; }  return ParserSymbol.DECIMAL_REG_EXP; }

    public static DECIMAL_SCIENTIFIC_REG_EXP: string; public static DECIMAL_SCIENTIFIC_REG_EXP_$LI$(): string { if (ParserSymbol.DECIMAL_SCIENTIFIC_REG_EXP == null) { ParserSymbol.DECIMAL_SCIENTIFIC_REG_EXP = "[+-]?" + ParserSymbol.DEC_FRACT_OR_INT_$LI$() + "([eE][+-]?" + ParserSymbol.INTEGER_$LI$() + ")"; }  return ParserSymbol.DECIMAL_SCIENTIFIC_REG_EXP; }

    public static BASE1_REG_EXP: string; public static BASE1_REG_EXP_$LI$(): string { if (ParserSymbol.BASE1_REG_EXP == null) { ParserSymbol.BASE1_REG_EXP = "[+-]?[bB]1\\.(" + ParserSymbol.DIGIT_B1 + ")*"; }  return ParserSymbol.BASE1_REG_EXP; }

    public static BASE2_REG_EXP: string; public static BASE2_REG_EXP_$LI$(): string { if (ParserSymbol.BASE2_REG_EXP == null) { ParserSymbol.BASE2_REG_EXP = "[+-]?[bB][2]?\\." + ParserSymbol.DIGIT_B2 + "(" + ParserSymbol.DIGIT_B2 + ")*"; }  return ParserSymbol.BASE2_REG_EXP; }

    public static BASE3_REG_EXP: string; public static BASE3_REG_EXP_$LI$(): string { if (ParserSymbol.BASE3_REG_EXP == null) { ParserSymbol.BASE3_REG_EXP = "[+-]?[bB]3\\." + ParserSymbol.DIGIT_B3 + "(" + ParserSymbol.DIGIT_B3 + ")*"; }  return ParserSymbol.BASE3_REG_EXP; }

    public static BASE4_REG_EXP: string; public static BASE4_REG_EXP_$LI$(): string { if (ParserSymbol.BASE4_REG_EXP == null) { ParserSymbol.BASE4_REG_EXP = "[+-]?[bB]4\\." + ParserSymbol.DIGIT_B4 + "(" + ParserSymbol.DIGIT_B4 + ")*"; }  return ParserSymbol.BASE4_REG_EXP; }

    public static BASE5_REG_EXP: string; public static BASE5_REG_EXP_$LI$(): string { if (ParserSymbol.BASE5_REG_EXP == null) { ParserSymbol.BASE5_REG_EXP = "[+-]?[bB]5\\." + ParserSymbol.DIGIT_B5 + "(" + ParserSymbol.DIGIT_B5 + ")*"; }  return ParserSymbol.BASE5_REG_EXP; }

    public static BASE6_REG_EXP: string; public static BASE6_REG_EXP_$LI$(): string { if (ParserSymbol.BASE6_REG_EXP == null) { ParserSymbol.BASE6_REG_EXP = "[+-]?[bB]6\\." + ParserSymbol.DIGIT_B6 + "(" + ParserSymbol.DIGIT_B6 + ")*"; }  return ParserSymbol.BASE6_REG_EXP; }

    public static BASE7_REG_EXP: string; public static BASE7_REG_EXP_$LI$(): string { if (ParserSymbol.BASE7_REG_EXP == null) { ParserSymbol.BASE7_REG_EXP = "[+-]?[bB]7\\." + ParserSymbol.DIGIT_B7 + "(" + ParserSymbol.DIGIT_B7 + ")*"; }  return ParserSymbol.BASE7_REG_EXP; }

    public static BASE8_REG_EXP: string; public static BASE8_REG_EXP_$LI$(): string { if (ParserSymbol.BASE8_REG_EXP == null) { ParserSymbol.BASE8_REG_EXP = "[+-]?([bB]8|[oO])\\." + ParserSymbol.DIGIT_B8 + "(" + ParserSymbol.DIGIT_B8 + ")*"; }  return ParserSymbol.BASE8_REG_EXP; }

    public static BASE9_REG_EXP: string; public static BASE9_REG_EXP_$LI$(): string { if (ParserSymbol.BASE9_REG_EXP == null) { ParserSymbol.BASE9_REG_EXP = "[+-]?[bB]9\\." + ParserSymbol.DIGIT_B9 + "(" + ParserSymbol.DIGIT_B9 + ")*"; }  return ParserSymbol.BASE9_REG_EXP; }

    public static BASE10_REG_EXP: string; public static BASE10_REG_EXP_$LI$(): string { if (ParserSymbol.BASE10_REG_EXP == null) { ParserSymbol.BASE10_REG_EXP = "[+-]?[bB]10\\." + ParserSymbol.DIGIT_B10 + "(" + ParserSymbol.DIGIT_B10 + ")*"; }  return ParserSymbol.BASE10_REG_EXP; }

    public static BASE11_REG_EXP: string; public static BASE11_REG_EXP_$LI$(): string { if (ParserSymbol.BASE11_REG_EXP == null) { ParserSymbol.BASE11_REG_EXP = "[+-]?[bB]11\\." + ParserSymbol.DIGIT_B11 + "(" + ParserSymbol.DIGIT_B11 + ")*"; }  return ParserSymbol.BASE11_REG_EXP; }

    public static BASE12_REG_EXP: string; public static BASE12_REG_EXP_$LI$(): string { if (ParserSymbol.BASE12_REG_EXP == null) { ParserSymbol.BASE12_REG_EXP = "[+-]?[bB]12\\." + ParserSymbol.DIGIT_B12 + "(" + ParserSymbol.DIGIT_B12 + ")*"; }  return ParserSymbol.BASE12_REG_EXP; }

    public static BASE13_REG_EXP: string; public static BASE13_REG_EXP_$LI$(): string { if (ParserSymbol.BASE13_REG_EXP == null) { ParserSymbol.BASE13_REG_EXP = "[+-]?[bB]13\\." + ParserSymbol.DIGIT_B13 + "(" + ParserSymbol.DIGIT_B13 + ")*"; }  return ParserSymbol.BASE13_REG_EXP; }

    public static BASE14_REG_EXP: string; public static BASE14_REG_EXP_$LI$(): string { if (ParserSymbol.BASE14_REG_EXP == null) { ParserSymbol.BASE14_REG_EXP = "[+-]?[bB]14\\." + ParserSymbol.DIGIT_B14 + "(" + ParserSymbol.DIGIT_B14 + ")*"; }  return ParserSymbol.BASE14_REG_EXP; }

    public static BASE15_REG_EXP: string; public static BASE15_REG_EXP_$LI$(): string { if (ParserSymbol.BASE15_REG_EXP == null) { ParserSymbol.BASE15_REG_EXP = "[+-]?[bB]15\\." + ParserSymbol.DIGIT_B15 + "(" + ParserSymbol.DIGIT_B15 + ")*"; }  return ParserSymbol.BASE15_REG_EXP; }

    public static BASE16_REG_EXP: string; public static BASE16_REG_EXP_$LI$(): string { if (ParserSymbol.BASE16_REG_EXP == null) { ParserSymbol.BASE16_REG_EXP = "[+-]?([bB]16|[hH])\\." + ParserSymbol.DIGIT_B16 + "(" + ParserSymbol.DIGIT_B16 + ")*"; }  return ParserSymbol.BASE16_REG_EXP; }

    public static BASE17_REG_EXP: string; public static BASE17_REG_EXP_$LI$(): string { if (ParserSymbol.BASE17_REG_EXP == null) { ParserSymbol.BASE17_REG_EXP = "[+-]?[bB]17\\." + ParserSymbol.DIGIT_B17 + "(" + ParserSymbol.DIGIT_B17 + ")*"; }  return ParserSymbol.BASE17_REG_EXP; }

    public static BASE18_REG_EXP: string; public static BASE18_REG_EXP_$LI$(): string { if (ParserSymbol.BASE18_REG_EXP == null) { ParserSymbol.BASE18_REG_EXP = "[+-]?[bB]18\\." + ParserSymbol.DIGIT_B18 + "(" + ParserSymbol.DIGIT_B18 + ")*"; }  return ParserSymbol.BASE18_REG_EXP; }

    public static BASE19_REG_EXP: string; public static BASE19_REG_EXP_$LI$(): string { if (ParserSymbol.BASE19_REG_EXP == null) { ParserSymbol.BASE19_REG_EXP = "[+-]?[bB]19\\." + ParserSymbol.DIGIT_B19 + "(" + ParserSymbol.DIGIT_B19 + ")*"; }  return ParserSymbol.BASE19_REG_EXP; }

    public static BASE20_REG_EXP: string; public static BASE20_REG_EXP_$LI$(): string { if (ParserSymbol.BASE20_REG_EXP == null) { ParserSymbol.BASE20_REG_EXP = "[+-]?[bB]20\\." + ParserSymbol.DIGIT_B20 + "(" + ParserSymbol.DIGIT_B20 + ")*"; }  return ParserSymbol.BASE20_REG_EXP; }

    public static BASE21_REG_EXP: string; public static BASE21_REG_EXP_$LI$(): string { if (ParserSymbol.BASE21_REG_EXP == null) { ParserSymbol.BASE21_REG_EXP = "[+-]?[bB]21\\." + ParserSymbol.DIGIT_B21 + "(" + ParserSymbol.DIGIT_B21 + ")*"; }  return ParserSymbol.BASE21_REG_EXP; }

    public static BASE22_REG_EXP: string; public static BASE22_REG_EXP_$LI$(): string { if (ParserSymbol.BASE22_REG_EXP == null) { ParserSymbol.BASE22_REG_EXP = "[+-]?[bB]22\\." + ParserSymbol.DIGIT_B22 + "(" + ParserSymbol.DIGIT_B22 + ")*"; }  return ParserSymbol.BASE22_REG_EXP; }

    public static BASE23_REG_EXP: string; public static BASE23_REG_EXP_$LI$(): string { if (ParserSymbol.BASE23_REG_EXP == null) { ParserSymbol.BASE23_REG_EXP = "[+-]?[bB]23\\." + ParserSymbol.DIGIT_B23 + "(" + ParserSymbol.DIGIT_B23 + ")*"; }  return ParserSymbol.BASE23_REG_EXP; }

    public static BASE24_REG_EXP: string; public static BASE24_REG_EXP_$LI$(): string { if (ParserSymbol.BASE24_REG_EXP == null) { ParserSymbol.BASE24_REG_EXP = "[+-]?[bB]24\\." + ParserSymbol.DIGIT_B24 + "(" + ParserSymbol.DIGIT_B24 + ")*"; }  return ParserSymbol.BASE24_REG_EXP; }

    public static BASE25_REG_EXP: string; public static BASE25_REG_EXP_$LI$(): string { if (ParserSymbol.BASE25_REG_EXP == null) { ParserSymbol.BASE25_REG_EXP = "[+-]?[bB]25\\." + ParserSymbol.DIGIT_B25 + "(" + ParserSymbol.DIGIT_B25 + ")*"; }  return ParserSymbol.BASE25_REG_EXP; }

    public static BASE26_REG_EXP: string; public static BASE26_REG_EXP_$LI$(): string { if (ParserSymbol.BASE26_REG_EXP == null) { ParserSymbol.BASE26_REG_EXP = "[+-]?[bB]26\\." + ParserSymbol.DIGIT_B26 + "(" + ParserSymbol.DIGIT_B26 + ")*"; }  return ParserSymbol.BASE26_REG_EXP; }

    public static BASE27_REG_EXP: string; public static BASE27_REG_EXP_$LI$(): string { if (ParserSymbol.BASE27_REG_EXP == null) { ParserSymbol.BASE27_REG_EXP = "[+-]?[bB]27\\." + ParserSymbol.DIGIT_B27 + "(" + ParserSymbol.DIGIT_B27 + ")*"; }  return ParserSymbol.BASE27_REG_EXP; }

    public static BASE28_REG_EXP: string; public static BASE28_REG_EXP_$LI$(): string { if (ParserSymbol.BASE28_REG_EXP == null) { ParserSymbol.BASE28_REG_EXP = "[+-]?[bB]28\\." + ParserSymbol.DIGIT_B28 + "(" + ParserSymbol.DIGIT_B28 + ")*"; }  return ParserSymbol.BASE28_REG_EXP; }

    public static BASE29_REG_EXP: string; public static BASE29_REG_EXP_$LI$(): string { if (ParserSymbol.BASE29_REG_EXP == null) { ParserSymbol.BASE29_REG_EXP = "[+-]?[bB]29\\." + ParserSymbol.DIGIT_B29 + "(" + ParserSymbol.DIGIT_B29 + ")*"; }  return ParserSymbol.BASE29_REG_EXP; }

    public static BASE30_REG_EXP: string; public static BASE30_REG_EXP_$LI$(): string { if (ParserSymbol.BASE30_REG_EXP == null) { ParserSymbol.BASE30_REG_EXP = "[+-]?[bB]30\\." + ParserSymbol.DIGIT_B30 + "(" + ParserSymbol.DIGIT_B30 + ")*"; }  return ParserSymbol.BASE30_REG_EXP; }

    public static BASE31_REG_EXP: string; public static BASE31_REG_EXP_$LI$(): string { if (ParserSymbol.BASE31_REG_EXP == null) { ParserSymbol.BASE31_REG_EXP = "[+-]?[bB]31\\." + ParserSymbol.DIGIT_B31 + "(" + ParserSymbol.DIGIT_B31 + ")*"; }  return ParserSymbol.BASE31_REG_EXP; }

    public static BASE32_REG_EXP: string; public static BASE32_REG_EXP_$LI$(): string { if (ParserSymbol.BASE32_REG_EXP == null) { ParserSymbol.BASE32_REG_EXP = "[+-]?[bB]32\\." + ParserSymbol.DIGIT_B32 + "(" + ParserSymbol.DIGIT_B32 + ")*"; }  return ParserSymbol.BASE32_REG_EXP; }

    public static BASE33_REG_EXP: string; public static BASE33_REG_EXP_$LI$(): string { if (ParserSymbol.BASE33_REG_EXP == null) { ParserSymbol.BASE33_REG_EXP = "[+-]?[bB]33\\." + ParserSymbol.DIGIT_B33 + "(" + ParserSymbol.DIGIT_B33 + ")*"; }  return ParserSymbol.BASE33_REG_EXP; }

    public static BASE34_REG_EXP: string; public static BASE34_REG_EXP_$LI$(): string { if (ParserSymbol.BASE34_REG_EXP == null) { ParserSymbol.BASE34_REG_EXP = "[+-]?[bB]34\\." + ParserSymbol.DIGIT_B34 + "(" + ParserSymbol.DIGIT_B34 + ")*"; }  return ParserSymbol.BASE34_REG_EXP; }

    public static BASE35_REG_EXP: string; public static BASE35_REG_EXP_$LI$(): string { if (ParserSymbol.BASE35_REG_EXP == null) { ParserSymbol.BASE35_REG_EXP = "[+-]?[bB]35\\." + ParserSymbol.DIGIT_B35 + "(" + ParserSymbol.DIGIT_B35 + ")*"; }  return ParserSymbol.BASE35_REG_EXP; }

    public static BASE36_REG_EXP: string; public static BASE36_REG_EXP_$LI$(): string { if (ParserSymbol.BASE36_REG_EXP == null) { ParserSymbol.BASE36_REG_EXP = "[+-]?[bB]36\\." + ParserSymbol.DIGIT_B36 + "(" + ParserSymbol.DIGIT_B36 + ")*"; }  return ParserSymbol.BASE36_REG_EXP; }

    public static FRACTION: string; public static FRACTION_$LI$(): string { if (ParserSymbol.FRACTION == null) { ParserSymbol.FRACTION = "(" + ParserSymbol.INTEGER_$LI$() + "\\_)?" + ParserSymbol.INTEGER_$LI$() + "\\_" + ParserSymbol.INTEGER_$LI$(); }  return ParserSymbol.FRACTION; }

    public static nameOnlyTokenRegExp: string = "([a-zA-Z_])+([a-zA-Z0-9_])*";

    public static unitOnlyTokenRegExp: string; public static unitOnlyTokenRegExp_$LI$(): string { if (ParserSymbol.unitOnlyTokenRegExp == null) { ParserSymbol.unitOnlyTokenRegExp = "\\[" + ParserSymbol.nameOnlyTokenRegExp + "\\]"; }  return ParserSymbol.unitOnlyTokenRegExp; }

    public static nameOnlyTokenOptBracketsRegExp: string; public static nameOnlyTokenOptBracketsRegExp_$LI$(): string { if (ParserSymbol.nameOnlyTokenOptBracketsRegExp == null) { ParserSymbol.nameOnlyTokenOptBracketsRegExp = "(" + ParserSymbol.nameOnlyTokenRegExp + "|" + ParserSymbol.unitOnlyTokenRegExp_$LI$() + ")"; }  return ParserSymbol.nameOnlyTokenOptBracketsRegExp; }

    public static nameTokenRegExp: string; public static nameTokenRegExp_$LI$(): string { if (ParserSymbol.nameTokenRegExp == null) { ParserSymbol.nameTokenRegExp = "(\\s)*" + ParserSymbol.nameOnlyTokenRegExp + "(\\s)*"; }  return ParserSymbol.nameTokenRegExp; }

    public static nameTokenOptBracketsRegExp: string; public static nameTokenOptBracketsRegExp_$LI$(): string { if (ParserSymbol.nameTokenOptBracketsRegExp == null) { ParserSymbol.nameTokenOptBracketsRegExp = "(\\s)*" + ParserSymbol.nameOnlyTokenOptBracketsRegExp_$LI$() + "(\\s)*"; }  return ParserSymbol.nameTokenOptBracketsRegExp; }

    public static paramsTokenRegeExp: string; public static paramsTokenRegeExp_$LI$(): string { if (ParserSymbol.paramsTokenRegeExp == null) { ParserSymbol.paramsTokenRegeExp = "(\\s)*\\((" + ParserSymbol.nameTokenRegExp_$LI$() + ",(\\s)*)*" + ParserSymbol.nameTokenRegExp_$LI$() + "\\)(\\s)*"; }  return ParserSymbol.paramsTokenRegeExp; }

    public static constArgDefStrRegExp: string; public static constArgDefStrRegExp_$LI$(): string { if (ParserSymbol.constArgDefStrRegExp == null) { ParserSymbol.constArgDefStrRegExp = ParserSymbol.nameTokenRegExp_$LI$() + "=(\\s)*(.)+(\\s)*"; }  return ParserSymbol.constArgDefStrRegExp; }

    public static constUnitgDefStrRegExp: string; public static constUnitgDefStrRegExp_$LI$(): string { if (ParserSymbol.constUnitgDefStrRegExp == null) { ParserSymbol.constUnitgDefStrRegExp = ParserSymbol.nameTokenOptBracketsRegExp_$LI$() + "=(\\s)*(.)+(\\s)*"; }  return ParserSymbol.constUnitgDefStrRegExp; }

    public static functionDefStrRegExp: string; public static functionDefStrRegExp_$LI$(): string { if (ParserSymbol.functionDefStrRegExp == null) { ParserSymbol.functionDefStrRegExp = ParserSymbol.nameTokenRegExp_$LI$() + ParserSymbol.paramsTokenRegeExp_$LI$() + "=(\\s)*(.)+(\\s)*"; }  return ParserSymbol.functionDefStrRegExp; }

    public static function1ArgDefStrRegExp: string; public static function1ArgDefStrRegExp_$LI$(): string { if (ParserSymbol.function1ArgDefStrRegExp == null) { ParserSymbol.function1ArgDefStrRegExp = ParserSymbol.nameTokenRegExp_$LI$() + "(\\s)*\\(" + ParserSymbol.nameTokenRegExp_$LI$() + "(\\s)*\\)(\\s)*=(\\s)*(.)+(\\s)*"; }  return ParserSymbol.function1ArgDefStrRegExp; }

    public static functionVariadicDefStrRegExp: string; public static functionVariadicDefStrRegExp_$LI$(): string { if (ParserSymbol.functionVariadicDefStrRegExp == null) { ParserSymbol.functionVariadicDefStrRegExp = ParserSymbol.nameTokenRegExp_$LI$() + "(\\s)*\\((\\s)*\\.\\.\\.(\\s)*\\)(\\s)*=(\\s)*(.)+(\\s)*"; }  return ParserSymbol.functionVariadicDefStrRegExp; }

    public static TYPE_ID: number = 20;

    public static TYPE_DESC: string = "Parser Symbol";

    public static LEFT_PARENTHESES_ID: number = 1;

    public static RIGHT_PARENTHESES_ID: number = 2;

    public static COMMA_ID: number = 3;

    public static BLANK_ID: number = 4;

    public static NUMBER_ID: number = 1;

    public static NUMBER_TYPE_ID: number = 0;

    public static LEFT_PARENTHESES_STR: string = "(";

    public static RIGHT_PARENTHESES_STR: string = ")";

    public static COMMA_STR: string = ",";

    public static SEMI_STR: string = ";";

    public static BLANK_STR: string = " ";

    public static NUMBER_STR: string = "_num_";

    public static LEFT_PARENTHESES_SYN: string = "( ... )";

    public static RIGHT_PARENTHESES_SYN: string = "( ... )";

    public static COMMA_SYN: string = "(a1, ... ,an)";

    public static SEMI_SYN: string = "(a1; ... ;an)";

    public static BLANK_SYN: string = " ";

    public static NUMBER_SYN: string = "Integer (since v.1.0): 1, -2; Decimal (since v.1.0): 0.2, -0.3, 1.2; Leading zero (since v.4.1): 001, -002.1; Scientific notation (since v.4.2): 1.2e-10, 1.2e+10, 2.3e10; No leading zero (since v.4.2): .2, -.212; Fractions (since v.4.2): 1_2, 2_1_3, 14_3; Other systems (since v.4.1): b1.111, b2.1001, b3.12021, b16.af12, h.af1, b.1001, o.0127";

    public static LEFT_PARENTHESES_DESC: string = "Left parentheses";

    public static RIGHT_PARENTHESES_DESC: string = "Right parentheses";

    public static COMMA_DESC: string = "Comma (function parameters)";

    public static SEMI_DESC: string = "Semicolon (function parameters)";

    public static BLANK_DESC: string = "Blank (whitespace) character";

    public static NUMBER_DESC: string = "Decimal number";

    public static NUMBER_REG_DESC: string = "Regullar expression for decimal numbers";

    public static LEFT_PARENTHESES_SINCE: string; public static LEFT_PARENTHESES_SINCE_$LI$(): string { if (ParserSymbol.LEFT_PARENTHESES_SINCE == null) { ParserSymbol.LEFT_PARENTHESES_SINCE = mXparserConstants.NAMEv10; }  return ParserSymbol.LEFT_PARENTHESES_SINCE; }

    public static RIGHT_PARENTHESES_SINCE: string; public static RIGHT_PARENTHESES_SINCE_$LI$(): string { if (ParserSymbol.RIGHT_PARENTHESES_SINCE == null) { ParserSymbol.RIGHT_PARENTHESES_SINCE = mXparserConstants.NAMEv10; }  return ParserSymbol.RIGHT_PARENTHESES_SINCE; }

    public static COMMA_SINCE: string; public static COMMA_SINCE_$LI$(): string { if (ParserSymbol.COMMA_SINCE == null) { ParserSymbol.COMMA_SINCE = mXparserConstants.NAMEv10; }  return ParserSymbol.COMMA_SINCE; }

    public static SEMI_SINCE: string; public static SEMI_SINCE_$LI$(): string { if (ParserSymbol.SEMI_SINCE == null) { ParserSymbol.SEMI_SINCE = mXparserConstants.NAMEv10; }  return ParserSymbol.SEMI_SINCE; }

    public static BLANK_SINCE: string; public static BLANK_SINCE_$LI$(): string { if (ParserSymbol.BLANK_SINCE == null) { ParserSymbol.BLANK_SINCE = mXparserConstants.NAMEv42; }  return ParserSymbol.BLANK_SINCE; }

    public static NUMBER_SINCE: string; public static NUMBER_SINCE_$LI$(): string { if (ParserSymbol.NUMBER_SINCE == null) { ParserSymbol.NUMBER_SINCE = mXparserConstants.NAMEv10; }  return ParserSymbol.NUMBER_SINCE; }
}
ParserSymbol["__class"] = "org.mariuszgromada.math.mxparser.parsertokens.ParserSymbol";