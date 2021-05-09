import { BinaryRelations } from './BinaryRelations';
import { MathConstants } from './MathConstants';
import { java } from 'j4ts/j4ts';
import { javaemul } from 'j4ts/j4ts';
import { MathFunctions } from './MathFunctions';
import { SpecialValue } from './SpecialValue';

/**
 * Main constructor
 * @param {number} factor  The angle provided as a factor of PI
 * @param {number} sin     The sine function value
 * @param {number} cos     The cosine function value
 * @param {number} tan     The tangent function value
 * @param {number} ctan    The cotangent function value
 * @param {number} sec     The secant function value
 * @param {number} csc     The cosecant function value
 * @class
 */
export class SpecialValueTrigonometric {
    /**
     * Epsilon is used to compare the x value with regards to some given small interval
     */
    public static EPSILON: number; public static EPSILON_$LI$(): number { if (SpecialValueTrigonometric.EPSILON == null) { SpecialValueTrigonometric.EPSILON = 10 * BinaryRelations.DEFAULT_COMPARISON_EPSILON; }  return SpecialValueTrigonometric.EPSILON; }

    public static SIN_0: number = 0.0;

    public static COS_0: number = 1.0;

    public static TAN_0: number = 0.0;

    public static CTAN_0: number; public static CTAN_0_$LI$(): number { if (SpecialValueTrigonometric.CTAN_0 == null) { SpecialValueTrigonometric.CTAN_0 = javaemul.internal.DoubleHelper.NaN; }  return SpecialValueTrigonometric.CTAN_0; }

    public static SEC_0: number = 1.0;

    public static CSC_0: number; public static CSC_0_$LI$(): number { if (SpecialValueTrigonometric.CSC_0 == null) { SpecialValueTrigonometric.CSC_0 = javaemul.internal.DoubleHelper.NaN; }  return SpecialValueTrigonometric.CSC_0; }

    public static SIN_30: number = 0.5;

    public static COS_30: number; public static COS_30_$LI$(): number { if (SpecialValueTrigonometric.COS_30 == null) { SpecialValueTrigonometric.COS_30 = MathConstants.SQRT3BY2_$LI$(); }  return SpecialValueTrigonometric.COS_30; }

    public static TAN_30: number; public static TAN_30_$LI$(): number { if (SpecialValueTrigonometric.TAN_30 == null) { SpecialValueTrigonometric.TAN_30 = MathConstants.SQRT3BY3_$LI$(); }  return SpecialValueTrigonometric.TAN_30; }

    public static CTAN_30: number; public static CTAN_30_$LI$(): number { if (SpecialValueTrigonometric.CTAN_30 == null) { SpecialValueTrigonometric.CTAN_30 = MathConstants.SQRT3_$LI$(); }  return SpecialValueTrigonometric.CTAN_30; }

    public static SEC_30: number; public static SEC_30_$LI$(): number { if (SpecialValueTrigonometric.SEC_30 == null) { SpecialValueTrigonometric.SEC_30 = MathConstants.D2BYSQRT3_$LI$(); }  return SpecialValueTrigonometric.SEC_30; }

    public static CSC_30: number = 2.0;

    public static SIN_45: number; public static SIN_45_$LI$(): number { if (SpecialValueTrigonometric.SIN_45 == null) { SpecialValueTrigonometric.SIN_45 = MathConstants.SQRT2BY2_$LI$(); }  return SpecialValueTrigonometric.SIN_45; }

    public static COS_45: number; public static COS_45_$LI$(): number { if (SpecialValueTrigonometric.COS_45 == null) { SpecialValueTrigonometric.COS_45 = MathConstants.SQRT2BY2_$LI$(); }  return SpecialValueTrigonometric.COS_45; }

    public static TAN_45: number = 1.0;

    public static CTAN_45: number = 1.0;

    public static SEC_45: number; public static SEC_45_$LI$(): number { if (SpecialValueTrigonometric.SEC_45 == null) { SpecialValueTrigonometric.SEC_45 = MathConstants.SQRT2_$LI$(); }  return SpecialValueTrigonometric.SEC_45; }

    public static CSC_45: number; public static CSC_45_$LI$(): number { if (SpecialValueTrigonometric.CSC_45 == null) { SpecialValueTrigonometric.CSC_45 = MathConstants.SQRT2_$LI$(); }  return SpecialValueTrigonometric.CSC_45; }

    public static SIN_60: number; public static SIN_60_$LI$(): number { if (SpecialValueTrigonometric.SIN_60 == null) { SpecialValueTrigonometric.SIN_60 = MathConstants.SQRT3BY2_$LI$(); }  return SpecialValueTrigonometric.SIN_60; }

    public static COS_60: number = 0.5;

    public static TAN_60: number; public static TAN_60_$LI$(): number { if (SpecialValueTrigonometric.TAN_60 == null) { SpecialValueTrigonometric.TAN_60 = MathConstants.SQRT3_$LI$(); }  return SpecialValueTrigonometric.TAN_60; }

    public static CTAN_60: number; public static CTAN_60_$LI$(): number { if (SpecialValueTrigonometric.CTAN_60 == null) { SpecialValueTrigonometric.CTAN_60 = MathConstants.SQRT3BY3_$LI$(); }  return SpecialValueTrigonometric.CTAN_60; }

    public static SEC_60: number = 2.0;

    public static CSC_60: number; public static CSC_60_$LI$(): number { if (SpecialValueTrigonometric.CSC_60 == null) { SpecialValueTrigonometric.CSC_60 = MathConstants.D2BYSQRT3_$LI$(); }  return SpecialValueTrigonometric.CSC_60; }

    public static SIN_90: number = 1.0;

    public static COS_90: number = 0.0;

    public static TAN_90: number; public static TAN_90_$LI$(): number { if (SpecialValueTrigonometric.TAN_90 == null) { SpecialValueTrigonometric.TAN_90 = javaemul.internal.DoubleHelper.NaN; }  return SpecialValueTrigonometric.TAN_90; }

    public static CTAN_90: number = 0;

    public static SEC_90: number; public static SEC_90_$LI$(): number { if (SpecialValueTrigonometric.SEC_90 == null) { SpecialValueTrigonometric.SEC_90 = javaemul.internal.DoubleHelper.NaN; }  return SpecialValueTrigonometric.SEC_90; }

    public static CSC_90: number = 1.0;

    public static SIN_120: number; public static SIN_120_$LI$(): number { if (SpecialValueTrigonometric.SIN_120 == null) { SpecialValueTrigonometric.SIN_120 = SpecialValueTrigonometric.SIN_60_$LI$(); }  return SpecialValueTrigonometric.SIN_120; }

    public static COS_120: number; public static COS_120_$LI$(): number { if (SpecialValueTrigonometric.COS_120 == null) { SpecialValueTrigonometric.COS_120 = -SpecialValueTrigonometric.COS_60; }  return SpecialValueTrigonometric.COS_120; }

    public static TAN_120: number; public static TAN_120_$LI$(): number { if (SpecialValueTrigonometric.TAN_120 == null) { SpecialValueTrigonometric.TAN_120 = -SpecialValueTrigonometric.TAN_60_$LI$(); }  return SpecialValueTrigonometric.TAN_120; }

    public static CTAN_120: number; public static CTAN_120_$LI$(): number { if (SpecialValueTrigonometric.CTAN_120 == null) { SpecialValueTrigonometric.CTAN_120 = -SpecialValueTrigonometric.CTAN_60_$LI$(); }  return SpecialValueTrigonometric.CTAN_120; }

    public static SEC_120: number; public static SEC_120_$LI$(): number { if (SpecialValueTrigonometric.SEC_120 == null) { SpecialValueTrigonometric.SEC_120 = -SpecialValueTrigonometric.SEC_60; }  return SpecialValueTrigonometric.SEC_120; }

    public static CSC_120: number; public static CSC_120_$LI$(): number { if (SpecialValueTrigonometric.CSC_120 == null) { SpecialValueTrigonometric.CSC_120 = SpecialValueTrigonometric.CSC_60_$LI$(); }  return SpecialValueTrigonometric.CSC_120; }

    public static SIN_135: number; public static SIN_135_$LI$(): number { if (SpecialValueTrigonometric.SIN_135 == null) { SpecialValueTrigonometric.SIN_135 = SpecialValueTrigonometric.SIN_45_$LI$(); }  return SpecialValueTrigonometric.SIN_135; }

    public static COS_135: number; public static COS_135_$LI$(): number { if (SpecialValueTrigonometric.COS_135 == null) { SpecialValueTrigonometric.COS_135 = -SpecialValueTrigonometric.COS_45_$LI$(); }  return SpecialValueTrigonometric.COS_135; }

    public static TAN_135: number; public static TAN_135_$LI$(): number { if (SpecialValueTrigonometric.TAN_135 == null) { SpecialValueTrigonometric.TAN_135 = -SpecialValueTrigonometric.TAN_45; }  return SpecialValueTrigonometric.TAN_135; }

    public static CTAN_135: number; public static CTAN_135_$LI$(): number { if (SpecialValueTrigonometric.CTAN_135 == null) { SpecialValueTrigonometric.CTAN_135 = -SpecialValueTrigonometric.CTAN_45; }  return SpecialValueTrigonometric.CTAN_135; }

    public static SEC_135: number; public static SEC_135_$LI$(): number { if (SpecialValueTrigonometric.SEC_135 == null) { SpecialValueTrigonometric.SEC_135 = -SpecialValueTrigonometric.SEC_45_$LI$(); }  return SpecialValueTrigonometric.SEC_135; }

    public static CSC_135: number; public static CSC_135_$LI$(): number { if (SpecialValueTrigonometric.CSC_135 == null) { SpecialValueTrigonometric.CSC_135 = SpecialValueTrigonometric.CSC_45_$LI$(); }  return SpecialValueTrigonometric.CSC_135; }

    public static SIN_150: number; public static SIN_150_$LI$(): number { if (SpecialValueTrigonometric.SIN_150 == null) { SpecialValueTrigonometric.SIN_150 = SpecialValueTrigonometric.SIN_30; }  return SpecialValueTrigonometric.SIN_150; }

    public static COS_150: number; public static COS_150_$LI$(): number { if (SpecialValueTrigonometric.COS_150 == null) { SpecialValueTrigonometric.COS_150 = -SpecialValueTrigonometric.COS_30_$LI$(); }  return SpecialValueTrigonometric.COS_150; }

    public static TAN_150: number; public static TAN_150_$LI$(): number { if (SpecialValueTrigonometric.TAN_150 == null) { SpecialValueTrigonometric.TAN_150 = -SpecialValueTrigonometric.TAN_30_$LI$(); }  return SpecialValueTrigonometric.TAN_150; }

    public static CTAN_150: number; public static CTAN_150_$LI$(): number { if (SpecialValueTrigonometric.CTAN_150 == null) { SpecialValueTrigonometric.CTAN_150 = -SpecialValueTrigonometric.CTAN_30_$LI$(); }  return SpecialValueTrigonometric.CTAN_150; }

    public static SEC_150: number; public static SEC_150_$LI$(): number { if (SpecialValueTrigonometric.SEC_150 == null) { SpecialValueTrigonometric.SEC_150 = -SpecialValueTrigonometric.SEC_30_$LI$(); }  return SpecialValueTrigonometric.SEC_150; }

    public static CSC_150: number; public static CSC_150_$LI$(): number { if (SpecialValueTrigonometric.CSC_150 == null) { SpecialValueTrigonometric.CSC_150 = SpecialValueTrigonometric.CSC_30; }  return SpecialValueTrigonometric.CSC_150; }

    public static SIN_180: number; public static SIN_180_$LI$(): number { if (SpecialValueTrigonometric.SIN_180 == null) { SpecialValueTrigonometric.SIN_180 = SpecialValueTrigonometric.SIN_0; }  return SpecialValueTrigonometric.SIN_180; }

    public static COS_180: number; public static COS_180_$LI$(): number { if (SpecialValueTrigonometric.COS_180 == null) { SpecialValueTrigonometric.COS_180 = -SpecialValueTrigonometric.COS_0; }  return SpecialValueTrigonometric.COS_180; }

    public static TAN_180: number; public static TAN_180_$LI$(): number { if (SpecialValueTrigonometric.TAN_180 == null) { SpecialValueTrigonometric.TAN_180 = SpecialValueTrigonometric.TAN_0; }  return SpecialValueTrigonometric.TAN_180; }

    public static CTAN_180: number; public static CTAN_180_$LI$(): number { if (SpecialValueTrigonometric.CTAN_180 == null) { SpecialValueTrigonometric.CTAN_180 = SpecialValueTrigonometric.CTAN_0_$LI$(); }  return SpecialValueTrigonometric.CTAN_180; }

    public static SEC_180: number; public static SEC_180_$LI$(): number { if (SpecialValueTrigonometric.SEC_180 == null) { SpecialValueTrigonometric.SEC_180 = -SpecialValueTrigonometric.SEC_0; }  return SpecialValueTrigonometric.SEC_180; }

    public static CSC_180: number; public static CSC_180_$LI$(): number { if (SpecialValueTrigonometric.CSC_180 == null) { SpecialValueTrigonometric.CSC_180 = SpecialValueTrigonometric.CSC_0_$LI$(); }  return SpecialValueTrigonometric.CSC_180; }

    public static SIN_210: number; public static SIN_210_$LI$(): number { if (SpecialValueTrigonometric.SIN_210 == null) { SpecialValueTrigonometric.SIN_210 = -SpecialValueTrigonometric.SIN_30; }  return SpecialValueTrigonometric.SIN_210; }

    public static COS_210: number; public static COS_210_$LI$(): number { if (SpecialValueTrigonometric.COS_210 == null) { SpecialValueTrigonometric.COS_210 = -SpecialValueTrigonometric.COS_30_$LI$(); }  return SpecialValueTrigonometric.COS_210; }

    public static TAN_210: number; public static TAN_210_$LI$(): number { if (SpecialValueTrigonometric.TAN_210 == null) { SpecialValueTrigonometric.TAN_210 = SpecialValueTrigonometric.TAN_30_$LI$(); }  return SpecialValueTrigonometric.TAN_210; }

    public static CTAN_210: number; public static CTAN_210_$LI$(): number { if (SpecialValueTrigonometric.CTAN_210 == null) { SpecialValueTrigonometric.CTAN_210 = SpecialValueTrigonometric.CTAN_30_$LI$(); }  return SpecialValueTrigonometric.CTAN_210; }

    public static SEC_210: number; public static SEC_210_$LI$(): number { if (SpecialValueTrigonometric.SEC_210 == null) { SpecialValueTrigonometric.SEC_210 = -SpecialValueTrigonometric.SEC_30_$LI$(); }  return SpecialValueTrigonometric.SEC_210; }

    public static CSC_210: number; public static CSC_210_$LI$(): number { if (SpecialValueTrigonometric.CSC_210 == null) { SpecialValueTrigonometric.CSC_210 = -SpecialValueTrigonometric.CSC_30; }  return SpecialValueTrigonometric.CSC_210; }

    public static SIN_225: number; public static SIN_225_$LI$(): number { if (SpecialValueTrigonometric.SIN_225 == null) { SpecialValueTrigonometric.SIN_225 = -SpecialValueTrigonometric.SIN_45_$LI$(); }  return SpecialValueTrigonometric.SIN_225; }

    public static COS_225: number; public static COS_225_$LI$(): number { if (SpecialValueTrigonometric.COS_225 == null) { SpecialValueTrigonometric.COS_225 = -SpecialValueTrigonometric.COS_45_$LI$(); }  return SpecialValueTrigonometric.COS_225; }

    public static TAN_225: number; public static TAN_225_$LI$(): number { if (SpecialValueTrigonometric.TAN_225 == null) { SpecialValueTrigonometric.TAN_225 = SpecialValueTrigonometric.TAN_45; }  return SpecialValueTrigonometric.TAN_225; }

    public static CTAN_225: number; public static CTAN_225_$LI$(): number { if (SpecialValueTrigonometric.CTAN_225 == null) { SpecialValueTrigonometric.CTAN_225 = SpecialValueTrigonometric.CTAN_45; }  return SpecialValueTrigonometric.CTAN_225; }

    public static SEC_225: number; public static SEC_225_$LI$(): number { if (SpecialValueTrigonometric.SEC_225 == null) { SpecialValueTrigonometric.SEC_225 = -SpecialValueTrigonometric.SEC_45_$LI$(); }  return SpecialValueTrigonometric.SEC_225; }

    public static CSC_225: number; public static CSC_225_$LI$(): number { if (SpecialValueTrigonometric.CSC_225 == null) { SpecialValueTrigonometric.CSC_225 = -SpecialValueTrigonometric.CSC_45_$LI$(); }  return SpecialValueTrigonometric.CSC_225; }

    public static SIN_240: number; public static SIN_240_$LI$(): number { if (SpecialValueTrigonometric.SIN_240 == null) { SpecialValueTrigonometric.SIN_240 = -SpecialValueTrigonometric.SIN_60_$LI$(); }  return SpecialValueTrigonometric.SIN_240; }

    public static COS_240: number; public static COS_240_$LI$(): number { if (SpecialValueTrigonometric.COS_240 == null) { SpecialValueTrigonometric.COS_240 = -SpecialValueTrigonometric.COS_60; }  return SpecialValueTrigonometric.COS_240; }

    public static TAN_240: number; public static TAN_240_$LI$(): number { if (SpecialValueTrigonometric.TAN_240 == null) { SpecialValueTrigonometric.TAN_240 = SpecialValueTrigonometric.TAN_60_$LI$(); }  return SpecialValueTrigonometric.TAN_240; }

    public static CTAN_240: number; public static CTAN_240_$LI$(): number { if (SpecialValueTrigonometric.CTAN_240 == null) { SpecialValueTrigonometric.CTAN_240 = SpecialValueTrigonometric.CTAN_60_$LI$(); }  return SpecialValueTrigonometric.CTAN_240; }

    public static SEC_240: number; public static SEC_240_$LI$(): number { if (SpecialValueTrigonometric.SEC_240 == null) { SpecialValueTrigonometric.SEC_240 = -SpecialValueTrigonometric.SEC_60; }  return SpecialValueTrigonometric.SEC_240; }

    public static CSC_240: number; public static CSC_240_$LI$(): number { if (SpecialValueTrigonometric.CSC_240 == null) { SpecialValueTrigonometric.CSC_240 = -SpecialValueTrigonometric.CSC_60_$LI$(); }  return SpecialValueTrigonometric.CSC_240; }

    public static SIN_270: number; public static SIN_270_$LI$(): number { if (SpecialValueTrigonometric.SIN_270 == null) { SpecialValueTrigonometric.SIN_270 = -SpecialValueTrigonometric.SIN_90; }  return SpecialValueTrigonometric.SIN_270; }

    public static COS_270: number; public static COS_270_$LI$(): number { if (SpecialValueTrigonometric.COS_270 == null) { SpecialValueTrigonometric.COS_270 = SpecialValueTrigonometric.COS_90; }  return SpecialValueTrigonometric.COS_270; }

    public static TAN_270: number; public static TAN_270_$LI$(): number { if (SpecialValueTrigonometric.TAN_270 == null) { SpecialValueTrigonometric.TAN_270 = SpecialValueTrigonometric.TAN_90_$LI$(); }  return SpecialValueTrigonometric.TAN_270; }

    public static CTAN_270: number; public static CTAN_270_$LI$(): number { if (SpecialValueTrigonometric.CTAN_270 == null) { SpecialValueTrigonometric.CTAN_270 = SpecialValueTrigonometric.CTAN_90; }  return SpecialValueTrigonometric.CTAN_270; }

    public static SEC_270: number; public static SEC_270_$LI$(): number { if (SpecialValueTrigonometric.SEC_270 == null) { SpecialValueTrigonometric.SEC_270 = SpecialValueTrigonometric.SEC_90_$LI$(); }  return SpecialValueTrigonometric.SEC_270; }

    public static CSC_270: number; public static CSC_270_$LI$(): number { if (SpecialValueTrigonometric.CSC_270 == null) { SpecialValueTrigonometric.CSC_270 = -SpecialValueTrigonometric.CSC_90; }  return SpecialValueTrigonometric.CSC_270; }

    public static SIN_300: number; public static SIN_300_$LI$(): number { if (SpecialValueTrigonometric.SIN_300 == null) { SpecialValueTrigonometric.SIN_300 = -SpecialValueTrigonometric.SIN_60_$LI$(); }  return SpecialValueTrigonometric.SIN_300; }

    public static COS_300: number; public static COS_300_$LI$(): number { if (SpecialValueTrigonometric.COS_300 == null) { SpecialValueTrigonometric.COS_300 = SpecialValueTrigonometric.COS_60; }  return SpecialValueTrigonometric.COS_300; }

    public static TAN_300: number; public static TAN_300_$LI$(): number { if (SpecialValueTrigonometric.TAN_300 == null) { SpecialValueTrigonometric.TAN_300 = -SpecialValueTrigonometric.TAN_60_$LI$(); }  return SpecialValueTrigonometric.TAN_300; }

    public static CTAN_300: number; public static CTAN_300_$LI$(): number { if (SpecialValueTrigonometric.CTAN_300 == null) { SpecialValueTrigonometric.CTAN_300 = -SpecialValueTrigonometric.CTAN_60_$LI$(); }  return SpecialValueTrigonometric.CTAN_300; }

    public static SEC_300: number; public static SEC_300_$LI$(): number { if (SpecialValueTrigonometric.SEC_300 == null) { SpecialValueTrigonometric.SEC_300 = SpecialValueTrigonometric.SEC_60; }  return SpecialValueTrigonometric.SEC_300; }

    public static CSC_300: number; public static CSC_300_$LI$(): number { if (SpecialValueTrigonometric.CSC_300 == null) { SpecialValueTrigonometric.CSC_300 = -SpecialValueTrigonometric.CSC_60_$LI$(); }  return SpecialValueTrigonometric.CSC_300; }

    public static SIN_315: number; public static SIN_315_$LI$(): number { if (SpecialValueTrigonometric.SIN_315 == null) { SpecialValueTrigonometric.SIN_315 = -SpecialValueTrigonometric.SIN_45_$LI$(); }  return SpecialValueTrigonometric.SIN_315; }

    public static COS_315: number; public static COS_315_$LI$(): number { if (SpecialValueTrigonometric.COS_315 == null) { SpecialValueTrigonometric.COS_315 = SpecialValueTrigonometric.COS_45_$LI$(); }  return SpecialValueTrigonometric.COS_315; }

    public static TAN_315: number; public static TAN_315_$LI$(): number { if (SpecialValueTrigonometric.TAN_315 == null) { SpecialValueTrigonometric.TAN_315 = -SpecialValueTrigonometric.TAN_45; }  return SpecialValueTrigonometric.TAN_315; }

    public static CTAN_315: number; public static CTAN_315_$LI$(): number { if (SpecialValueTrigonometric.CTAN_315 == null) { SpecialValueTrigonometric.CTAN_315 = -SpecialValueTrigonometric.CTAN_45; }  return SpecialValueTrigonometric.CTAN_315; }

    public static SEC_315: number; public static SEC_315_$LI$(): number { if (SpecialValueTrigonometric.SEC_315 == null) { SpecialValueTrigonometric.SEC_315 = SpecialValueTrigonometric.SEC_45_$LI$(); }  return SpecialValueTrigonometric.SEC_315; }

    public static CSC_315: number; public static CSC_315_$LI$(): number { if (SpecialValueTrigonometric.CSC_315 == null) { SpecialValueTrigonometric.CSC_315 = -SpecialValueTrigonometric.CSC_45_$LI$(); }  return SpecialValueTrigonometric.CSC_315; }

    public static SIN_330: number; public static SIN_330_$LI$(): number { if (SpecialValueTrigonometric.SIN_330 == null) { SpecialValueTrigonometric.SIN_330 = -SpecialValueTrigonometric.SIN_30; }  return SpecialValueTrigonometric.SIN_330; }

    public static COS_330: number; public static COS_330_$LI$(): number { if (SpecialValueTrigonometric.COS_330 == null) { SpecialValueTrigonometric.COS_330 = SpecialValueTrigonometric.COS_30_$LI$(); }  return SpecialValueTrigonometric.COS_330; }

    public static TAN_330: number; public static TAN_330_$LI$(): number { if (SpecialValueTrigonometric.TAN_330 == null) { SpecialValueTrigonometric.TAN_330 = -SpecialValueTrigonometric.TAN_30_$LI$(); }  return SpecialValueTrigonometric.TAN_330; }

    public static CTAN_330: number; public static CTAN_330_$LI$(): number { if (SpecialValueTrigonometric.CTAN_330 == null) { SpecialValueTrigonometric.CTAN_330 = -SpecialValueTrigonometric.CTAN_30_$LI$(); }  return SpecialValueTrigonometric.CTAN_330; }

    public static SEC_330: number; public static SEC_330_$LI$(): number { if (SpecialValueTrigonometric.SEC_330 == null) { SpecialValueTrigonometric.SEC_330 = SpecialValueTrigonometric.SEC_30_$LI$(); }  return SpecialValueTrigonometric.SEC_330; }

    public static CSC_330: number; public static CSC_330_$LI$(): number { if (SpecialValueTrigonometric.CSC_330 == null) { SpecialValueTrigonometric.CSC_330 = -SpecialValueTrigonometric.CSC_30; }  return SpecialValueTrigonometric.CSC_330; }

    public static SIN_360: number; public static SIN_360_$LI$(): number { if (SpecialValueTrigonometric.SIN_360 == null) { SpecialValueTrigonometric.SIN_360 = SpecialValueTrigonometric.SIN_0; }  return SpecialValueTrigonometric.SIN_360; }

    public static COS_360: number; public static COS_360_$LI$(): number { if (SpecialValueTrigonometric.COS_360 == null) { SpecialValueTrigonometric.COS_360 = SpecialValueTrigonometric.COS_0; }  return SpecialValueTrigonometric.COS_360; }

    public static TAN_360: number; public static TAN_360_$LI$(): number { if (SpecialValueTrigonometric.TAN_360 == null) { SpecialValueTrigonometric.TAN_360 = SpecialValueTrigonometric.TAN_0; }  return SpecialValueTrigonometric.TAN_360; }

    public static CTAN_360: number; public static CTAN_360_$LI$(): number { if (SpecialValueTrigonometric.CTAN_360 == null) { SpecialValueTrigonometric.CTAN_360 = SpecialValueTrigonometric.CTAN_0_$LI$(); }  return SpecialValueTrigonometric.CTAN_360; }

    public static SEC_360: number; public static SEC_360_$LI$(): number { if (SpecialValueTrigonometric.SEC_360 == null) { SpecialValueTrigonometric.SEC_360 = SpecialValueTrigonometric.SEC_0; }  return SpecialValueTrigonometric.SEC_360; }

    public static CSC_360: number; public static CSC_360_$LI$(): number { if (SpecialValueTrigonometric.CSC_360 == null) { SpecialValueTrigonometric.CSC_360 = SpecialValueTrigonometric.CSC_0_$LI$(); }  return SpecialValueTrigonometric.CSC_360; }

    /**
     * List of special values for all main trigonometric functions
     */
    public static valuesListTrig: SpecialValueTrigonometric[]; public static valuesListTrig_$LI$(): SpecialValueTrigonometric[] { if (SpecialValueTrigonometric.valuesListTrig == null) { SpecialValueTrigonometric.valuesListTrig = [new SpecialValueTrigonometric(0.0, SpecialValueTrigonometric.SIN_0, SpecialValueTrigonometric.COS_0, SpecialValueTrigonometric.TAN_0, SpecialValueTrigonometric.CTAN_0_$LI$(), SpecialValueTrigonometric.SEC_0, SpecialValueTrigonometric.CSC_0_$LI$()), new SpecialValueTrigonometric(2.0, SpecialValueTrigonometric.SIN_0, SpecialValueTrigonometric.COS_0, SpecialValueTrigonometric.TAN_0, SpecialValueTrigonometric.CTAN_0_$LI$(), SpecialValueTrigonometric.SEC_0, SpecialValueTrigonometric.CSC_0_$LI$()), new SpecialValueTrigonometric(-2.0, SpecialValueTrigonometric.SIN_0, SpecialValueTrigonometric.COS_0, SpecialValueTrigonometric.TAN_0, SpecialValueTrigonometric.CTAN_0_$LI$(), SpecialValueTrigonometric.SEC_0, SpecialValueTrigonometric.CSC_0_$LI$()), new SpecialValueTrigonometric(4.0, SpecialValueTrigonometric.SIN_0, SpecialValueTrigonometric.COS_0, SpecialValueTrigonometric.TAN_0, SpecialValueTrigonometric.CTAN_0_$LI$(), SpecialValueTrigonometric.SEC_0, SpecialValueTrigonometric.CSC_0_$LI$()), new SpecialValueTrigonometric(-4.0, SpecialValueTrigonometric.SIN_0, SpecialValueTrigonometric.COS_0, SpecialValueTrigonometric.TAN_0, SpecialValueTrigonometric.CTAN_0_$LI$(), SpecialValueTrigonometric.SEC_0, SpecialValueTrigonometric.CSC_0_$LI$()), new SpecialValueTrigonometric((1.0 / 6.0), SpecialValueTrigonometric.SIN_30, SpecialValueTrigonometric.COS_30_$LI$(), SpecialValueTrigonometric.TAN_30_$LI$(), SpecialValueTrigonometric.CTAN_30_$LI$(), SpecialValueTrigonometric.SEC_30_$LI$(), SpecialValueTrigonometric.CSC_30), new SpecialValueTrigonometric((13.0 / 6.0), SpecialValueTrigonometric.SIN_30, SpecialValueTrigonometric.COS_30_$LI$(), SpecialValueTrigonometric.TAN_30_$LI$(), SpecialValueTrigonometric.CTAN_30_$LI$(), SpecialValueTrigonometric.SEC_30_$LI$(), SpecialValueTrigonometric.CSC_30), new SpecialValueTrigonometric((-11.0 / 6.0), SpecialValueTrigonometric.SIN_30, SpecialValueTrigonometric.COS_30_$LI$(), SpecialValueTrigonometric.TAN_30_$LI$(), SpecialValueTrigonometric.CTAN_30_$LI$(), SpecialValueTrigonometric.SEC_30_$LI$(), SpecialValueTrigonometric.CSC_30), new SpecialValueTrigonometric((25.0 / 6.0), SpecialValueTrigonometric.SIN_30, SpecialValueTrigonometric.COS_30_$LI$(), SpecialValueTrigonometric.TAN_30_$LI$(), SpecialValueTrigonometric.CTAN_30_$LI$(), SpecialValueTrigonometric.SEC_30_$LI$(), SpecialValueTrigonometric.CSC_30), new SpecialValueTrigonometric((-23.0 / 6.0), SpecialValueTrigonometric.SIN_30, SpecialValueTrigonometric.COS_30_$LI$(), SpecialValueTrigonometric.TAN_30_$LI$(), SpecialValueTrigonometric.CTAN_30_$LI$(), SpecialValueTrigonometric.SEC_30_$LI$(), SpecialValueTrigonometric.CSC_30), new SpecialValueTrigonometric((1.0 / 4.0), SpecialValueTrigonometric.SIN_45_$LI$(), SpecialValueTrigonometric.COS_45_$LI$(), SpecialValueTrigonometric.TAN_45, SpecialValueTrigonometric.CTAN_45, SpecialValueTrigonometric.SEC_45_$LI$(), SpecialValueTrigonometric.CSC_45_$LI$()), new SpecialValueTrigonometric((9.0 / 4.0), SpecialValueTrigonometric.SIN_45_$LI$(), SpecialValueTrigonometric.COS_45_$LI$(), SpecialValueTrigonometric.TAN_45, SpecialValueTrigonometric.CTAN_45, SpecialValueTrigonometric.SEC_45_$LI$(), SpecialValueTrigonometric.CSC_45_$LI$()), new SpecialValueTrigonometric((-7.0 / 4.0), SpecialValueTrigonometric.SIN_45_$LI$(), SpecialValueTrigonometric.COS_45_$LI$(), SpecialValueTrigonometric.TAN_45, SpecialValueTrigonometric.CTAN_45, SpecialValueTrigonometric.SEC_45_$LI$(), SpecialValueTrigonometric.CSC_45_$LI$()), new SpecialValueTrigonometric((17.0 / 4.0), SpecialValueTrigonometric.SIN_45_$LI$(), SpecialValueTrigonometric.COS_45_$LI$(), SpecialValueTrigonometric.TAN_45, SpecialValueTrigonometric.CTAN_45, SpecialValueTrigonometric.SEC_45_$LI$(), SpecialValueTrigonometric.CSC_45_$LI$()), new SpecialValueTrigonometric((-15.0 / 4.0), SpecialValueTrigonometric.SIN_45_$LI$(), SpecialValueTrigonometric.COS_45_$LI$(), SpecialValueTrigonometric.TAN_45, SpecialValueTrigonometric.CTAN_45, SpecialValueTrigonometric.SEC_45_$LI$(), SpecialValueTrigonometric.CSC_45_$LI$()), new SpecialValueTrigonometric((1.0 / 3.0), SpecialValueTrigonometric.SIN_60_$LI$(), SpecialValueTrigonometric.COS_60, SpecialValueTrigonometric.TAN_60_$LI$(), SpecialValueTrigonometric.CTAN_60_$LI$(), SpecialValueTrigonometric.SEC_60, SpecialValueTrigonometric.CSC_60_$LI$()), new SpecialValueTrigonometric((7.0 / 3.0), SpecialValueTrigonometric.SIN_60_$LI$(), SpecialValueTrigonometric.COS_60, SpecialValueTrigonometric.TAN_60_$LI$(), SpecialValueTrigonometric.CTAN_60_$LI$(), SpecialValueTrigonometric.SEC_60, SpecialValueTrigonometric.CSC_60_$LI$()), new SpecialValueTrigonometric((-5.0 / 3.0), SpecialValueTrigonometric.SIN_60_$LI$(), SpecialValueTrigonometric.COS_60, SpecialValueTrigonometric.TAN_60_$LI$(), SpecialValueTrigonometric.CTAN_60_$LI$(), SpecialValueTrigonometric.SEC_60, SpecialValueTrigonometric.CSC_60_$LI$()), new SpecialValueTrigonometric((13.0 / 3.0), SpecialValueTrigonometric.SIN_60_$LI$(), SpecialValueTrigonometric.COS_60, SpecialValueTrigonometric.TAN_60_$LI$(), SpecialValueTrigonometric.CTAN_60_$LI$(), SpecialValueTrigonometric.SEC_60, SpecialValueTrigonometric.CSC_60_$LI$()), new SpecialValueTrigonometric((-11.0 / 3.0), SpecialValueTrigonometric.SIN_60_$LI$(), SpecialValueTrigonometric.COS_60, SpecialValueTrigonometric.TAN_60_$LI$(), SpecialValueTrigonometric.CTAN_60_$LI$(), SpecialValueTrigonometric.SEC_60, SpecialValueTrigonometric.CSC_60_$LI$()), new SpecialValueTrigonometric((1.0 / 2.0), SpecialValueTrigonometric.SIN_90, SpecialValueTrigonometric.COS_90, SpecialValueTrigonometric.TAN_90_$LI$(), SpecialValueTrigonometric.CTAN_90, SpecialValueTrigonometric.SEC_90_$LI$(), SpecialValueTrigonometric.CSC_90), new SpecialValueTrigonometric((5.0 / 2.0), SpecialValueTrigonometric.SIN_90, SpecialValueTrigonometric.COS_90, SpecialValueTrigonometric.TAN_90_$LI$(), SpecialValueTrigonometric.CTAN_90, SpecialValueTrigonometric.SEC_90_$LI$(), SpecialValueTrigonometric.CSC_90), new SpecialValueTrigonometric((-3.0 / 2.0), SpecialValueTrigonometric.SIN_90, SpecialValueTrigonometric.COS_90, SpecialValueTrigonometric.TAN_90_$LI$(), SpecialValueTrigonometric.CTAN_90, SpecialValueTrigonometric.SEC_90_$LI$(), SpecialValueTrigonometric.CSC_90), new SpecialValueTrigonometric((9.0 / 2.0), SpecialValueTrigonometric.SIN_90, SpecialValueTrigonometric.COS_90, SpecialValueTrigonometric.TAN_90_$LI$(), SpecialValueTrigonometric.CTAN_90, SpecialValueTrigonometric.SEC_90_$LI$(), SpecialValueTrigonometric.CSC_90), new SpecialValueTrigonometric((-7.0 / 2.0), SpecialValueTrigonometric.SIN_90, SpecialValueTrigonometric.COS_90, SpecialValueTrigonometric.TAN_90_$LI$(), SpecialValueTrigonometric.CTAN_90, SpecialValueTrigonometric.SEC_90_$LI$(), SpecialValueTrigonometric.CSC_90), new SpecialValueTrigonometric((2.0 / 3.0), SpecialValueTrigonometric.SIN_120_$LI$(), SpecialValueTrigonometric.COS_120_$LI$(), SpecialValueTrigonometric.TAN_120_$LI$(), SpecialValueTrigonometric.CTAN_120_$LI$(), SpecialValueTrigonometric.SEC_120_$LI$(), SpecialValueTrigonometric.CSC_120_$LI$()), new SpecialValueTrigonometric((8.0 / 3.0), SpecialValueTrigonometric.SIN_120_$LI$(), SpecialValueTrigonometric.COS_120_$LI$(), SpecialValueTrigonometric.TAN_120_$LI$(), SpecialValueTrigonometric.CTAN_120_$LI$(), SpecialValueTrigonometric.SEC_120_$LI$(), SpecialValueTrigonometric.CSC_120_$LI$()), new SpecialValueTrigonometric((-4.0 / 3.0), SpecialValueTrigonometric.SIN_120_$LI$(), SpecialValueTrigonometric.COS_120_$LI$(), SpecialValueTrigonometric.TAN_120_$LI$(), SpecialValueTrigonometric.CTAN_120_$LI$(), SpecialValueTrigonometric.SEC_120_$LI$(), SpecialValueTrigonometric.CSC_120_$LI$()), new SpecialValueTrigonometric((14.0 / 3.0), SpecialValueTrigonometric.SIN_120_$LI$(), SpecialValueTrigonometric.COS_120_$LI$(), SpecialValueTrigonometric.TAN_120_$LI$(), SpecialValueTrigonometric.CTAN_120_$LI$(), SpecialValueTrigonometric.SEC_120_$LI$(), SpecialValueTrigonometric.CSC_120_$LI$()), new SpecialValueTrigonometric((-10.0 / 3.0), SpecialValueTrigonometric.SIN_120_$LI$(), SpecialValueTrigonometric.COS_120_$LI$(), SpecialValueTrigonometric.TAN_120_$LI$(), SpecialValueTrigonometric.CTAN_120_$LI$(), SpecialValueTrigonometric.SEC_120_$LI$(), SpecialValueTrigonometric.CSC_120_$LI$()), new SpecialValueTrigonometric((3.0 / 4.0), SpecialValueTrigonometric.SIN_135_$LI$(), SpecialValueTrigonometric.COS_135_$LI$(), SpecialValueTrigonometric.TAN_135_$LI$(), SpecialValueTrigonometric.CTAN_135_$LI$(), SpecialValueTrigonometric.SEC_135_$LI$(), SpecialValueTrigonometric.CSC_135_$LI$()), new SpecialValueTrigonometric((11.0 / 4.0), SpecialValueTrigonometric.SIN_135_$LI$(), SpecialValueTrigonometric.COS_135_$LI$(), SpecialValueTrigonometric.TAN_135_$LI$(), SpecialValueTrigonometric.CTAN_135_$LI$(), SpecialValueTrigonometric.SEC_135_$LI$(), SpecialValueTrigonometric.CSC_135_$LI$()), new SpecialValueTrigonometric((-5.0 / 4.0), SpecialValueTrigonometric.SIN_135_$LI$(), SpecialValueTrigonometric.COS_135_$LI$(), SpecialValueTrigonometric.TAN_135_$LI$(), SpecialValueTrigonometric.CTAN_135_$LI$(), SpecialValueTrigonometric.SEC_135_$LI$(), SpecialValueTrigonometric.CSC_135_$LI$()), new SpecialValueTrigonometric((19.0 / 4.0), SpecialValueTrigonometric.SIN_135_$LI$(), SpecialValueTrigonometric.COS_135_$LI$(), SpecialValueTrigonometric.TAN_135_$LI$(), SpecialValueTrigonometric.CTAN_135_$LI$(), SpecialValueTrigonometric.SEC_135_$LI$(), SpecialValueTrigonometric.CSC_135_$LI$()), new SpecialValueTrigonometric((-13.0 / 4.0), SpecialValueTrigonometric.SIN_135_$LI$(), SpecialValueTrigonometric.COS_135_$LI$(), SpecialValueTrigonometric.TAN_135_$LI$(), SpecialValueTrigonometric.CTAN_135_$LI$(), SpecialValueTrigonometric.SEC_135_$LI$(), SpecialValueTrigonometric.CSC_135_$LI$()), new SpecialValueTrigonometric((5.0 / 6.0), SpecialValueTrigonometric.SIN_150_$LI$(), SpecialValueTrigonometric.COS_150_$LI$(), SpecialValueTrigonometric.TAN_150_$LI$(), SpecialValueTrigonometric.CTAN_150_$LI$(), SpecialValueTrigonometric.SEC_150_$LI$(), SpecialValueTrigonometric.CSC_150_$LI$()), new SpecialValueTrigonometric((17.0 / 6.0), SpecialValueTrigonometric.SIN_150_$LI$(), SpecialValueTrigonometric.COS_150_$LI$(), SpecialValueTrigonometric.TAN_150_$LI$(), SpecialValueTrigonometric.CTAN_150_$LI$(), SpecialValueTrigonometric.SEC_150_$LI$(), SpecialValueTrigonometric.CSC_150_$LI$()), new SpecialValueTrigonometric((-7.0 / 6.0), SpecialValueTrigonometric.SIN_150_$LI$(), SpecialValueTrigonometric.COS_150_$LI$(), SpecialValueTrigonometric.TAN_150_$LI$(), SpecialValueTrigonometric.CTAN_150_$LI$(), SpecialValueTrigonometric.SEC_150_$LI$(), SpecialValueTrigonometric.CSC_150_$LI$()), new SpecialValueTrigonometric((29.0 / 6.0), SpecialValueTrigonometric.SIN_150_$LI$(), SpecialValueTrigonometric.COS_150_$LI$(), SpecialValueTrigonometric.TAN_150_$LI$(), SpecialValueTrigonometric.CTAN_150_$LI$(), SpecialValueTrigonometric.SEC_150_$LI$(), SpecialValueTrigonometric.CSC_150_$LI$()), new SpecialValueTrigonometric((-19.0 / 6.0), SpecialValueTrigonometric.SIN_150_$LI$(), SpecialValueTrigonometric.COS_150_$LI$(), SpecialValueTrigonometric.TAN_150_$LI$(), SpecialValueTrigonometric.CTAN_150_$LI$(), SpecialValueTrigonometric.SEC_150_$LI$(), SpecialValueTrigonometric.CSC_150_$LI$()), new SpecialValueTrigonometric(1.0, SpecialValueTrigonometric.SIN_180_$LI$(), SpecialValueTrigonometric.COS_180_$LI$(), SpecialValueTrigonometric.TAN_180_$LI$(), SpecialValueTrigonometric.CTAN_180_$LI$(), SpecialValueTrigonometric.SEC_180_$LI$(), SpecialValueTrigonometric.CSC_180_$LI$()), new SpecialValueTrigonometric(3.0, SpecialValueTrigonometric.SIN_180_$LI$(), SpecialValueTrigonometric.COS_180_$LI$(), SpecialValueTrigonometric.TAN_180_$LI$(), SpecialValueTrigonometric.CTAN_180_$LI$(), SpecialValueTrigonometric.SEC_180_$LI$(), SpecialValueTrigonometric.CSC_180_$LI$()), new SpecialValueTrigonometric(-1.0, SpecialValueTrigonometric.SIN_180_$LI$(), SpecialValueTrigonometric.COS_180_$LI$(), SpecialValueTrigonometric.TAN_180_$LI$(), SpecialValueTrigonometric.CTAN_180_$LI$(), SpecialValueTrigonometric.SEC_180_$LI$(), SpecialValueTrigonometric.CSC_180_$LI$()), new SpecialValueTrigonometric(5.0, SpecialValueTrigonometric.SIN_180_$LI$(), SpecialValueTrigonometric.COS_180_$LI$(), SpecialValueTrigonometric.TAN_180_$LI$(), SpecialValueTrigonometric.CTAN_180_$LI$(), SpecialValueTrigonometric.SEC_180_$LI$(), SpecialValueTrigonometric.CSC_180_$LI$()), new SpecialValueTrigonometric(-3.0, SpecialValueTrigonometric.SIN_180_$LI$(), SpecialValueTrigonometric.COS_180_$LI$(), SpecialValueTrigonometric.TAN_180_$LI$(), SpecialValueTrigonometric.CTAN_180_$LI$(), SpecialValueTrigonometric.SEC_180_$LI$(), SpecialValueTrigonometric.CSC_180_$LI$()), new SpecialValueTrigonometric((7.0 / 6.0), SpecialValueTrigonometric.SIN_210_$LI$(), SpecialValueTrigonometric.COS_210_$LI$(), SpecialValueTrigonometric.TAN_210_$LI$(), SpecialValueTrigonometric.CTAN_210_$LI$(), SpecialValueTrigonometric.SEC_210_$LI$(), SpecialValueTrigonometric.CSC_210_$LI$()), new SpecialValueTrigonometric((19.0 / 6.0), SpecialValueTrigonometric.SIN_210_$LI$(), SpecialValueTrigonometric.COS_210_$LI$(), SpecialValueTrigonometric.TAN_210_$LI$(), SpecialValueTrigonometric.CTAN_210_$LI$(), SpecialValueTrigonometric.SEC_210_$LI$(), SpecialValueTrigonometric.CSC_210_$LI$()), new SpecialValueTrigonometric((-5.0 / 6.0), SpecialValueTrigonometric.SIN_210_$LI$(), SpecialValueTrigonometric.COS_210_$LI$(), SpecialValueTrigonometric.TAN_210_$LI$(), SpecialValueTrigonometric.CTAN_210_$LI$(), SpecialValueTrigonometric.SEC_210_$LI$(), SpecialValueTrigonometric.CSC_210_$LI$()), new SpecialValueTrigonometric((31.0 / 6.0), SpecialValueTrigonometric.SIN_210_$LI$(), SpecialValueTrigonometric.COS_210_$LI$(), SpecialValueTrigonometric.TAN_210_$LI$(), SpecialValueTrigonometric.CTAN_210_$LI$(), SpecialValueTrigonometric.SEC_210_$LI$(), SpecialValueTrigonometric.CSC_210_$LI$()), new SpecialValueTrigonometric((-17.0 / 6.0), SpecialValueTrigonometric.SIN_210_$LI$(), SpecialValueTrigonometric.COS_210_$LI$(), SpecialValueTrigonometric.TAN_210_$LI$(), SpecialValueTrigonometric.CTAN_210_$LI$(), SpecialValueTrigonometric.SEC_210_$LI$(), SpecialValueTrigonometric.CSC_210_$LI$()), new SpecialValueTrigonometric((5.0 / 4.0), SpecialValueTrigonometric.SIN_225_$LI$(), SpecialValueTrigonometric.COS_225_$LI$(), SpecialValueTrigonometric.TAN_225_$LI$(), SpecialValueTrigonometric.CTAN_225_$LI$(), SpecialValueTrigonometric.SEC_225_$LI$(), SpecialValueTrigonometric.CSC_225_$LI$()), new SpecialValueTrigonometric((13.0 / 4.0), SpecialValueTrigonometric.SIN_225_$LI$(), SpecialValueTrigonometric.COS_225_$LI$(), SpecialValueTrigonometric.TAN_225_$LI$(), SpecialValueTrigonometric.CTAN_225_$LI$(), SpecialValueTrigonometric.SEC_225_$LI$(), SpecialValueTrigonometric.CSC_225_$LI$()), new SpecialValueTrigonometric((-3.0 / 4.0), SpecialValueTrigonometric.SIN_225_$LI$(), SpecialValueTrigonometric.COS_225_$LI$(), SpecialValueTrigonometric.TAN_225_$LI$(), SpecialValueTrigonometric.CTAN_225_$LI$(), SpecialValueTrigonometric.SEC_225_$LI$(), SpecialValueTrigonometric.CSC_225_$LI$()), new SpecialValueTrigonometric((21.0 / 4.0), SpecialValueTrigonometric.SIN_225_$LI$(), SpecialValueTrigonometric.COS_225_$LI$(), SpecialValueTrigonometric.TAN_225_$LI$(), SpecialValueTrigonometric.CTAN_225_$LI$(), SpecialValueTrigonometric.SEC_225_$LI$(), SpecialValueTrigonometric.CSC_225_$LI$()), new SpecialValueTrigonometric((-11.0 / 4.0), SpecialValueTrigonometric.SIN_225_$LI$(), SpecialValueTrigonometric.COS_225_$LI$(), SpecialValueTrigonometric.TAN_225_$LI$(), SpecialValueTrigonometric.CTAN_225_$LI$(), SpecialValueTrigonometric.SEC_225_$LI$(), SpecialValueTrigonometric.CSC_225_$LI$()), new SpecialValueTrigonometric((4.0 / 3.0), SpecialValueTrigonometric.SIN_240_$LI$(), SpecialValueTrigonometric.COS_240_$LI$(), SpecialValueTrigonometric.TAN_240_$LI$(), SpecialValueTrigonometric.CTAN_240_$LI$(), SpecialValueTrigonometric.SEC_240_$LI$(), SpecialValueTrigonometric.CSC_240_$LI$()), new SpecialValueTrigonometric((10.0 / 3.0), SpecialValueTrigonometric.SIN_240_$LI$(), SpecialValueTrigonometric.COS_240_$LI$(), SpecialValueTrigonometric.TAN_240_$LI$(), SpecialValueTrigonometric.CTAN_240_$LI$(), SpecialValueTrigonometric.SEC_240_$LI$(), SpecialValueTrigonometric.CSC_240_$LI$()), new SpecialValueTrigonometric((-2.0 / 3.0), SpecialValueTrigonometric.SIN_240_$LI$(), SpecialValueTrigonometric.COS_240_$LI$(), SpecialValueTrigonometric.TAN_240_$LI$(), SpecialValueTrigonometric.CTAN_240_$LI$(), SpecialValueTrigonometric.SEC_240_$LI$(), SpecialValueTrigonometric.CSC_240_$LI$()), new SpecialValueTrigonometric((16.0 / 3.0), SpecialValueTrigonometric.SIN_240_$LI$(), SpecialValueTrigonometric.COS_240_$LI$(), SpecialValueTrigonometric.TAN_240_$LI$(), SpecialValueTrigonometric.CTAN_240_$LI$(), SpecialValueTrigonometric.SEC_240_$LI$(), SpecialValueTrigonometric.CSC_240_$LI$()), new SpecialValueTrigonometric((-8.0 / 3.0), SpecialValueTrigonometric.SIN_240_$LI$(), SpecialValueTrigonometric.COS_240_$LI$(), SpecialValueTrigonometric.TAN_240_$LI$(), SpecialValueTrigonometric.CTAN_240_$LI$(), SpecialValueTrigonometric.SEC_240_$LI$(), SpecialValueTrigonometric.CSC_240_$LI$()), new SpecialValueTrigonometric((3.0 / 2.0), SpecialValueTrigonometric.SIN_270_$LI$(), SpecialValueTrigonometric.COS_270_$LI$(), SpecialValueTrigonometric.TAN_270_$LI$(), SpecialValueTrigonometric.CTAN_270_$LI$(), SpecialValueTrigonometric.SEC_270_$LI$(), SpecialValueTrigonometric.CSC_270_$LI$()), new SpecialValueTrigonometric((7.0 / 2.0), SpecialValueTrigonometric.SIN_270_$LI$(), SpecialValueTrigonometric.COS_270_$LI$(), SpecialValueTrigonometric.TAN_270_$LI$(), SpecialValueTrigonometric.CTAN_270_$LI$(), SpecialValueTrigonometric.SEC_270_$LI$(), SpecialValueTrigonometric.CSC_270_$LI$()), new SpecialValueTrigonometric((-1.0 / 2.0), SpecialValueTrigonometric.SIN_270_$LI$(), SpecialValueTrigonometric.COS_270_$LI$(), SpecialValueTrigonometric.TAN_270_$LI$(), SpecialValueTrigonometric.CTAN_270_$LI$(), SpecialValueTrigonometric.SEC_270_$LI$(), SpecialValueTrigonometric.CSC_270_$LI$()), new SpecialValueTrigonometric((11.0 / 2.0), SpecialValueTrigonometric.SIN_270_$LI$(), SpecialValueTrigonometric.COS_270_$LI$(), SpecialValueTrigonometric.TAN_270_$LI$(), SpecialValueTrigonometric.CTAN_270_$LI$(), SpecialValueTrigonometric.SEC_270_$LI$(), SpecialValueTrigonometric.CSC_270_$LI$()), new SpecialValueTrigonometric((-5.0 / 2.0), SpecialValueTrigonometric.SIN_270_$LI$(), SpecialValueTrigonometric.COS_270_$LI$(), SpecialValueTrigonometric.TAN_270_$LI$(), SpecialValueTrigonometric.CTAN_270_$LI$(), SpecialValueTrigonometric.SEC_270_$LI$(), SpecialValueTrigonometric.CSC_270_$LI$()), new SpecialValueTrigonometric((5.0 / 3.0), SpecialValueTrigonometric.SIN_300_$LI$(), SpecialValueTrigonometric.COS_300_$LI$(), SpecialValueTrigonometric.TAN_300_$LI$(), SpecialValueTrigonometric.CTAN_300_$LI$(), SpecialValueTrigonometric.SEC_300_$LI$(), SpecialValueTrigonometric.CSC_300_$LI$()), new SpecialValueTrigonometric((11.0 / 3.0), SpecialValueTrigonometric.SIN_300_$LI$(), SpecialValueTrigonometric.COS_300_$LI$(), SpecialValueTrigonometric.TAN_300_$LI$(), SpecialValueTrigonometric.CTAN_300_$LI$(), SpecialValueTrigonometric.SEC_300_$LI$(), SpecialValueTrigonometric.CSC_300_$LI$()), new SpecialValueTrigonometric((-1.0 / 3.0), SpecialValueTrigonometric.SIN_300_$LI$(), SpecialValueTrigonometric.COS_300_$LI$(), SpecialValueTrigonometric.TAN_300_$LI$(), SpecialValueTrigonometric.CTAN_300_$LI$(), SpecialValueTrigonometric.SEC_300_$LI$(), SpecialValueTrigonometric.CSC_300_$LI$()), new SpecialValueTrigonometric((17.0 / 3.0), SpecialValueTrigonometric.SIN_300_$LI$(), SpecialValueTrigonometric.COS_300_$LI$(), SpecialValueTrigonometric.TAN_300_$LI$(), SpecialValueTrigonometric.CTAN_300_$LI$(), SpecialValueTrigonometric.SEC_300_$LI$(), SpecialValueTrigonometric.CSC_300_$LI$()), new SpecialValueTrigonometric((-7.0 / 3.0), SpecialValueTrigonometric.SIN_300_$LI$(), SpecialValueTrigonometric.COS_300_$LI$(), SpecialValueTrigonometric.TAN_300_$LI$(), SpecialValueTrigonometric.CTAN_300_$LI$(), SpecialValueTrigonometric.SEC_300_$LI$(), SpecialValueTrigonometric.CSC_300_$LI$()), new SpecialValueTrigonometric((7.0 / 4.0), SpecialValueTrigonometric.SIN_315_$LI$(), SpecialValueTrigonometric.COS_315_$LI$(), SpecialValueTrigonometric.TAN_315_$LI$(), SpecialValueTrigonometric.CTAN_315_$LI$(), SpecialValueTrigonometric.SEC_315_$LI$(), SpecialValueTrigonometric.CSC_315_$LI$()), new SpecialValueTrigonometric((15.0 / 4.0), SpecialValueTrigonometric.SIN_315_$LI$(), SpecialValueTrigonometric.COS_315_$LI$(), SpecialValueTrigonometric.TAN_315_$LI$(), SpecialValueTrigonometric.CTAN_315_$LI$(), SpecialValueTrigonometric.SEC_315_$LI$(), SpecialValueTrigonometric.CSC_315_$LI$()), new SpecialValueTrigonometric((-1.0 / 4.0), SpecialValueTrigonometric.SIN_315_$LI$(), SpecialValueTrigonometric.COS_315_$LI$(), SpecialValueTrigonometric.TAN_315_$LI$(), SpecialValueTrigonometric.CTAN_315_$LI$(), SpecialValueTrigonometric.SEC_315_$LI$(), SpecialValueTrigonometric.CSC_315_$LI$()), new SpecialValueTrigonometric((23.0 / 4.0), SpecialValueTrigonometric.SIN_315_$LI$(), SpecialValueTrigonometric.COS_315_$LI$(), SpecialValueTrigonometric.TAN_315_$LI$(), SpecialValueTrigonometric.CTAN_315_$LI$(), SpecialValueTrigonometric.SEC_315_$LI$(), SpecialValueTrigonometric.CSC_315_$LI$()), new SpecialValueTrigonometric((-9.0 / 4.0), SpecialValueTrigonometric.SIN_315_$LI$(), SpecialValueTrigonometric.COS_315_$LI$(), SpecialValueTrigonometric.TAN_315_$LI$(), SpecialValueTrigonometric.CTAN_315_$LI$(), SpecialValueTrigonometric.SEC_315_$LI$(), SpecialValueTrigonometric.CSC_315_$LI$()), new SpecialValueTrigonometric((11.0 / 6.0), SpecialValueTrigonometric.SIN_330_$LI$(), SpecialValueTrigonometric.COS_330_$LI$(), SpecialValueTrigonometric.TAN_330_$LI$(), SpecialValueTrigonometric.CTAN_330_$LI$(), SpecialValueTrigonometric.SEC_330_$LI$(), SpecialValueTrigonometric.CSC_330_$LI$()), new SpecialValueTrigonometric((23.0 / 6.0), SpecialValueTrigonometric.SIN_330_$LI$(), SpecialValueTrigonometric.COS_330_$LI$(), SpecialValueTrigonometric.TAN_330_$LI$(), SpecialValueTrigonometric.CTAN_330_$LI$(), SpecialValueTrigonometric.SEC_330_$LI$(), SpecialValueTrigonometric.CSC_330_$LI$()), new SpecialValueTrigonometric((-1.0 / 6.0), SpecialValueTrigonometric.SIN_330_$LI$(), SpecialValueTrigonometric.COS_330_$LI$(), SpecialValueTrigonometric.TAN_330_$LI$(), SpecialValueTrigonometric.CTAN_330_$LI$(), SpecialValueTrigonometric.SEC_330_$LI$(), SpecialValueTrigonometric.CSC_330_$LI$()), new SpecialValueTrigonometric((35.0 / 6.0), SpecialValueTrigonometric.SIN_330_$LI$(), SpecialValueTrigonometric.COS_330_$LI$(), SpecialValueTrigonometric.TAN_330_$LI$(), SpecialValueTrigonometric.CTAN_330_$LI$(), SpecialValueTrigonometric.SEC_330_$LI$(), SpecialValueTrigonometric.CSC_330_$LI$()), new SpecialValueTrigonometric((-13.0 / 6.0), SpecialValueTrigonometric.SIN_330_$LI$(), SpecialValueTrigonometric.COS_330_$LI$(), SpecialValueTrigonometric.TAN_330_$LI$(), SpecialValueTrigonometric.CTAN_330_$LI$(), SpecialValueTrigonometric.SEC_330_$LI$(), SpecialValueTrigonometric.CSC_330_$LI$()), new SpecialValueTrigonometric(6.0, SpecialValueTrigonometric.SIN_360_$LI$(), SpecialValueTrigonometric.COS_360_$LI$(), SpecialValueTrigonometric.TAN_360_$LI$(), SpecialValueTrigonometric.CTAN_360_$LI$(), SpecialValueTrigonometric.SEC_360_$LI$(), SpecialValueTrigonometric.CSC_360_$LI$())]; }  return SpecialValueTrigonometric.valuesListTrig; }

    /**
     * List of special values of inverse sine function
     */
    public static valuesListAsin: java.util.List<SpecialValue> = null;

    /**
     * List of special values of inverse cosine function
     */
    public static valuesListAcos: java.util.List<SpecialValue> = null;

    /**
     * List of special values of inverse tangent function
     */
    public static valuesListAtan: java.util.List<SpecialValue> = null;

    /**
     * List of special values of inverse cotangent function
     */
    public static valuesListActan: java.util.List<SpecialValue> = null;

    /**
     * List of special values of inverse secant function
     */
    public static valuesListAsec: java.util.List<SpecialValue> = null;

    /**
     * List of special values of inverse cosecant function
     */
    public static valuesListAcsc: java.util.List<SpecialValue> = null;

    /**
     * Angle factor in Pi radians
     */
    public factor: number;

    /**
     * Angle in radians
     */
    public xrad: number;

    /**
     * Angle in degrees
     */
    public xdeg: number;

    /**
     * Angle in radians - the start of the interval where the function value is given
     */
    public xradFrom: number;

    /**
     * Angle in radians - the end of the interval where the function value is given
     */
    public xradTo: number;

    /**
     * The sine function value
     */
    public sin: number;

    /**
     * The cosine function value
     */
    public cos: number;

    /**
     * The tangent function value
     */
    public tan: number;

    /**
     * The cotangent function value
     */
    public ctan: number;

    /**
     * The secant function value
     */
    public sec: number;

    /**
     * The cosecant function value
     */
    public csc: number;

    public constructor(factor: number, sin: number, cos: number, tan: number, ctan: number, sec: number, csc: number) {
        if (this.factor === undefined) { this.factor = 0; }
        if (this.xrad === undefined) { this.xrad = 0; }
        if (this.xdeg === undefined) { this.xdeg = 0; }
        if (this.xradFrom === undefined) { this.xradFrom = 0; }
        if (this.xradTo === undefined) { this.xradTo = 0; }
        if (this.sin === undefined) { this.sin = 0; }
        if (this.cos === undefined) { this.cos = 0; }
        if (this.tan === undefined) { this.tan = 0; }
        if (this.ctan === undefined) { this.ctan = 0; }
        if (this.sec === undefined) { this.sec = 0; }
        if (this.csc === undefined) { this.csc = 0; }
        this.factor = factor;
        this.xrad = factor * MathConstants.PI;
        this.xdeg = MathFunctions.round(factor * 180.0, 0);
        this.sin = sin;
        this.cos = cos;
        this.tan = tan;
        this.ctan = ctan;
        this.sec = sec;
        this.csc = csc;
        this.xradFrom = this.xrad - SpecialValueTrigonometric.EPSILON_$LI$();
        this.xradTo = this.xrad + SpecialValueTrigonometric.EPSILON_$LI$();
        if ((-MathConstants.PIBY2_$LI$() - SpecialValueTrigonometric.EPSILON_$LI$() <= this.xrad) && (this.xrad <= MathConstants.PIBY2_$LI$() + SpecialValueTrigonometric.EPSILON_$LI$())){
            if (SpecialValueTrigonometric.valuesListAsin == null)SpecialValueTrigonometric.valuesListAsin = <any>(new java.util.ArrayList<SpecialValue>());
            if (SpecialValueTrigonometric.valuesListAtan == null)SpecialValueTrigonometric.valuesListAtan = <any>(new java.util.ArrayList<SpecialValue>());
            if (SpecialValueTrigonometric.valuesListAcsc == null)SpecialValueTrigonometric.valuesListAcsc = <any>(new java.util.ArrayList<SpecialValue>());
            SpecialValueTrigonometric.valuesListAsin.add(new SpecialValue(sin, this.xrad, this.xdeg));
            SpecialValueTrigonometric.valuesListAtan.add(new SpecialValue(tan, this.xrad, this.xdeg));
            SpecialValueTrigonometric.valuesListAcsc.add(new SpecialValue(csc, this.xrad, this.xdeg));
        }
        if ((-SpecialValueTrigonometric.EPSILON_$LI$() <= this.xrad) && (this.xrad <= MathConstants.PI + SpecialValueTrigonometric.EPSILON_$LI$())){
            if (SpecialValueTrigonometric.valuesListAcos == null)SpecialValueTrigonometric.valuesListAcos = <any>(new java.util.ArrayList<SpecialValue>());
            if (SpecialValueTrigonometric.valuesListActan == null)SpecialValueTrigonometric.valuesListActan = <any>(new java.util.ArrayList<SpecialValue>());
            if (SpecialValueTrigonometric.valuesListAsec == null)SpecialValueTrigonometric.valuesListAsec = <any>(new java.util.ArrayList<SpecialValue>());
            SpecialValueTrigonometric.valuesListAcos.add(new SpecialValue(cos, this.xrad, this.xdeg));
            SpecialValueTrigonometric.valuesListActan.add(new SpecialValue(ctan, this.xrad, this.xdeg));
            SpecialValueTrigonometric.valuesListAsec.add(new SpecialValue(sec, this.xrad, this.xdeg));
        }
    }

    /**
     * Returns special values of trigonometric functions
     * 
     * @param {number} xrad   The angle provided in radians
     * @return       {SpecialValueTrigonometric} Returns special values of trigonometric functions object if the special value was found for a given x
     * otherwise returns null
     */
    public static getSpecialValueTrigonometric(xrad: number): SpecialValueTrigonometric {
        if (/* isNaN */isNaN(xrad))return null;
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(xrad))return null;
        for(let index122=0; index122 < SpecialValueTrigonometric.valuesListTrig_$LI$().length; index122++) {
            let sv = SpecialValueTrigonometric.valuesListTrig_$LI$()[index122];
            {
                if ((sv.xradFrom <= xrad) && (xrad <= sv.xradTo))return sv;
            }
        }
        return null;
    }

    /**
     * Returns special value of inverse trigonometric sine function
     * @param {number} x    The sine value
     * @return     {SpecialValue} Returns special value object if special value was found,
     * other wise returns null.
     */
    public static getSpecialValueAsin(x: number): SpecialValue {
        return SpecialValueTrigonometric.getSpecialValue(x, SpecialValueTrigonometric.valuesListAsin);
    }

    /**
     * Returns special value of inverse trigonometric cosine function
     * @param {number} x    The cosine value
     * @return     {SpecialValue} Returns special value object if special value was found,
     * other wise returns null.
     */
    public static getSpecialValueAcos(x: number): SpecialValue {
        return SpecialValueTrigonometric.getSpecialValue(x, SpecialValueTrigonometric.valuesListAcos);
    }

    /**
     * Returns special value of inverse trigonometric tangent function
     * @param {number} x    The tangent value
     * @return     {SpecialValue} Returns special value object if special value was found,
     * other wise returns null.
     */
    public static getSpecialValueAtan(x: number): SpecialValue {
        return SpecialValueTrigonometric.getSpecialValue(x, SpecialValueTrigonometric.valuesListAtan);
    }

    /**
     * Returns special value of inverse trigonometric cotangent function
     * @param {number} x    The cotangent value
     * @return     {SpecialValue} Returns special value object if special value was found,
     * other wise returns null.
     */
    public static getSpecialValueActan(x: number): SpecialValue {
        return SpecialValueTrigonometric.getSpecialValue(x, SpecialValueTrigonometric.valuesListActan);
    }

    /**
     * Returns special value of inverse trigonometric secant function
     * @param {number} x    The secant value
     * @return     {SpecialValue} Returns special value object if special value was found,
     * other wise returns null.
     */
    public static getSpecialValueAsec(x: number): SpecialValue {
        return SpecialValueTrigonometric.getSpecialValue(x, SpecialValueTrigonometric.valuesListAsec);
    }

    /**
     * Returns special value of inverse trigonometric cosecant function
     * @param {number} x    The cosecant value
     * @return     {SpecialValue} Returns special value object if special value was found,
     * other wise returns null.
     */
    public static getSpecialValueAcsc(x: number): SpecialValue {
        return SpecialValueTrigonometric.getSpecialValue(x, SpecialValueTrigonometric.valuesListAcsc);
    }

    /**
     * Returns special value of inverse trigonometric function
     * @param {number} x              The trigonometric function value value
     * @param {*} valuesList     List of special values of a given trigonometric function
     * @return               {SpecialValue} Returns special value object if special value was found,
     * other wise returns null.
     * @private
     */
    /*private*/ static getSpecialValue(x: number, valuesList: java.util.List<SpecialValue>): SpecialValue {
        if (/* isNaN */isNaN(x))return null;
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(x))return null;
        for(let index123=valuesList.iterator();index123.hasNext();) {
            let sv = index123.next();
            {
                if ((sv.xFrom <= x) && (x <= sv.xTo))return sv;
            }
        }
        return null;
    }
}
SpecialValueTrigonometric["__class"] = "org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric";