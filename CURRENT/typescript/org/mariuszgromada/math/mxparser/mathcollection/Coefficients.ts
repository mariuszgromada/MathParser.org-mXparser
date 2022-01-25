/**
 * Coefficients - various coefficients supporting numerical computation.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.2.0
 * @class
 */
export class Coefficients {
    /**
     * Polynomial coefficients for a numerator of erfImp
     * calculation for erf(x) in the interval [1e-10, 0.5].
     */
    static erfImpAn: number[]; public static erfImpAn_$LI$(): number[] { if (Coefficients.erfImpAn == null) { Coefficients.erfImpAn = [0.0033791670955125737, -7.369565304816795E-4, -0.3747323373929196, 0.08174424487335873, -0.04210893199365486, 0.007016570951209575, -0.004950912559824351, 8.716465990379225E-4]; }  return Coefficients.erfImpAn; }

    /**
     * Polynomial coefficients for  adenominator of erfImp
     * calculation for erf(x) in the interval [1e-10, 0.5].
     */
    static erfImpAd: number[]; public static erfImpAd_$LI$(): number[] { if (Coefficients.erfImpAd == null) { Coefficients.erfImpAd = [1, -0.21808821808792464, 0.4125429727254421, -0.08418911478731067, 0.06553388564002416, -0.012001960445494177, 0.00408165558926174, -6.159007215577697E-4]; }  return Coefficients.erfImpAd; }

    /**
     * Polynomial coefficients for a numerator in erfImp
     * calculation for erfc(x) in the interval [0.5, 0.75].
     */
    static erfImpBn: number[]; public static erfImpBn_$LI$(): number[] { if (Coefficients.erfImpBn == null) { Coefficients.erfImpBn = [-0.03617903907182625, 0.2922518834448827, 0.2814470417976045, 0.12561020886276694, 0.027413502826893053, 0.0025083967216806575]; }  return Coefficients.erfImpBn; }

    /**
     * Polynomial coefficients for a denominator in erfImp
     * calculation for erfc(x) in the interval [0.5, 0.75].
     */
    static erfImpBd: number[]; public static erfImpBd_$LI$(): number[] { if (Coefficients.erfImpBd == null) { Coefficients.erfImpBd = [1, 1.8545005897903486, 1.4357580303783142, 0.5828276587530365, 0.12481047693294975, 0.011372417654635328]; }  return Coefficients.erfImpBd; }

    /**
     * Polynomial coefficients for a numerator in erfImp
     * calculation for erfc(x) in the interval [0.75, 1.25].
     */
    static erfImpCn: number[]; public static erfImpCn_$LI$(): number[] { if (Coefficients.erfImpCn == null) { Coefficients.erfImpCn = [-0.03978768926111369, 0.1531652124678783, 0.19126029560093624, 0.10276327061989304, 0.029637090615738836, 0.004609348678027549, 3.076078203486802E-4]; }  return Coefficients.erfImpCn; }

    /**
     * Polynomial coefficients for a denominator in erfImp
     * calculation for erfc(x) in the interval [0.75, 1.25].
     */
    static erfImpCd: number[]; public static erfImpCd_$LI$(): number[] { if (Coefficients.erfImpCd == null) { Coefficients.erfImpCd = [1, 1.955200729876277, 1.6476231719938486, 0.7682386070221262, 0.20979318593650978, 0.031956931689991336, 0.0021336316089578537]; }  return Coefficients.erfImpCd; }

    /**
     * Polynomial coefficients for a numerator in erfImp
     * calculation for erfc(x) in the interval [1.25, 2.25].
     */
    static erfImpDn: number[]; public static erfImpDn_$LI$(): number[] { if (Coefficients.erfImpDn == null) { Coefficients.erfImpDn = [-0.030083856055794972, 0.05385788298444545, 0.07262115416519142, 0.036762846988804936, 0.009646290155725275, 0.0013345348007529107, 7.780875997825043E-5]; }  return Coefficients.erfImpDn; }

    /**
     * Polynomial coefficients for a denominator in erfImp
     * calculation for erfc(x) in the interval [1.25, 2.25].
     */
    static erfImpDd: number[]; public static erfImpDd_$LI$(): number[] { if (Coefficients.erfImpDd == null) { Coefficients.erfImpDd = [1, 1.7596709814716753, 1.3288357143796112, 0.5525285965087576, 0.13379305694133287, 0.017950964517628076, 0.0010471244001993736, -1.0664038182035734E-8]; }  return Coefficients.erfImpDd; }

    /**
     * Polynomial coefficients for a numerator in erfImp
     * calculation for erfc(x) in the interval [2.25, 3.5].
     */
    static erfImpEn: number[]; public static erfImpEn_$LI$(): number[] { if (Coefficients.erfImpEn == null) { Coefficients.erfImpEn = [-0.011790757013722784, 0.01426213209053881, 0.020223443590296084, 0.009306682999904321, 0.00213357802422066, 2.5022987386460105E-4, 1.2053491221958819E-5]; }  return Coefficients.erfImpEn; }

    /**
     * Polynomial coefficients for a denominator in erfImp
     * calculation for erfc(x) in the interval [2.25, 3.5].
     */
    static erfImpEd: number[]; public static erfImpEd_$LI$(): number[] { if (Coefficients.erfImpEd == null) { Coefficients.erfImpEd = [1, 1.5037622520362048, 0.9653977862044629, 0.3392652304767967, 0.06897406495415698, 0.007710602624917683, 3.714211015310693E-4]; }  return Coefficients.erfImpEd; }

    /**
     * Polynomial coefficients for a numerator in erfImp
     * calculation for erfc(x) in the interval [3.5, 5.25].
     */
    static erfImpFn: number[]; public static erfImpFn_$LI$(): number[] { if (Coefficients.erfImpFn == null) { Coefficients.erfImpFn = [-0.005469547955387293, 0.004041902787317071, 0.005496336955316117, 0.002126164726039454, 3.949840144950839E-4, 3.655654770644424E-5, 1.3548589710993232E-6]; }  return Coefficients.erfImpFn; }

    /**
     * Polynomial coefficients for a denominator in erfImp
     * calculation for erfc(x) in the interval [3.5, 5.25].
     */
    static erfImpFd: number[]; public static erfImpFd_$LI$(): number[] { if (Coefficients.erfImpFd == null) { Coefficients.erfImpFd = [1, 1.2101969777363077, 0.6209146682211439, 0.17303843066114277, 0.027655081377343203, 0.0024062597442430973, 8.918118172513365E-5, -4.655288362833827E-12]; }  return Coefficients.erfImpFd; }

    /**
     * Polynomial coefficients for a numerator in erfImp
     * calculation for erfc(x) in the interval [5.25, 8].
     */
    static erfImpGn: number[]; public static erfImpGn_$LI$(): number[] { if (Coefficients.erfImpGn == null) { Coefficients.erfImpGn = [-0.0027072253590577837, 0.00131875634250294, 0.0011992593326100233, 2.7849619811344664E-4, 2.6782298821833186E-5, 9.230436723150282E-7]; }  return Coefficients.erfImpGn; }

    /**
     * Polynomial coefficients for a denominator in erfImp
     * calculation for erfc(x) in the interval [5.25, 8].
     */
    static erfImpGd: number[]; public static erfImpGd_$LI$(): number[] { if (Coefficients.erfImpGd == null) { Coefficients.erfImpGd = [1, 0.8146328085431416, 0.26890166585629954, 0.044987721610304114, 0.0038175966332024847, 1.3157189788859692E-4, 4.048153596757641E-12]; }  return Coefficients.erfImpGd; }

    /**
     * Polynomial coefficients for a numerator in erfImp
     * calculation for erfc(x) in the interval [8, 11.5].
     */
    static erfImpHn: number[]; public static erfImpHn_$LI$(): number[] { if (Coefficients.erfImpHn == null) { Coefficients.erfImpHn = [-0.001099467206917422, 4.0642544275042267E-4, 2.744994894169007E-4, 4.652937706466594E-5, 3.2095542539576746E-6, 7.782860181450209E-8]; }  return Coefficients.erfImpHn; }

    /**
     * Polynomial coefficients for a denominator in erfImp
     * calculation for erfc(x) in the interval [8, 11.5].
     */
    static erfImpHd: number[]; public static erfImpHd_$LI$(): number[] { if (Coefficients.erfImpHd == null) { Coefficients.erfImpHd = [1, 0.5881737106118461, 0.13936333128940975, 0.016632934041708368, 0.0010002392131023491, 2.4254837521587224E-5]; }  return Coefficients.erfImpHd; }

    /**
     * Polynomial coefficients for a numerator in erfImp
     * calculation for erfc(x) in the interval [11.5, 17].
     */
    static erfImpIn: number[]; public static erfImpIn_$LI$(): number[] { if (Coefficients.erfImpIn == null) { Coefficients.erfImpIn = [-5.690799360109496E-4, 1.6949854037376225E-4, 5.184723545811009E-5, 3.8281931223192885E-6, 8.249899312818944E-8]; }  return Coefficients.erfImpIn; }

    /**
     * Polynomial coefficients for a denominator in erfImp
     * calculation for erfc(x) in the interval [11.5, 17].
     */
    static erfImpId: number[]; public static erfImpId_$LI$(): number[] { if (Coefficients.erfImpId == null) { Coefficients.erfImpId = [1, 0.33963725005113937, 0.04347264787031066, 0.002485493352246371, 5.356333053371529E-5, -1.1749094440545958E-13]; }  return Coefficients.erfImpId; }

    /**
     * Polynomial coefficients for a numerator in erfImp
     * calculation for erfc(x) in the interval [17, 24].
     */
    static erfImpJn: number[]; public static erfImpJn_$LI$(): number[] { if (Coefficients.erfImpJn == null) { Coefficients.erfImpJn = [-2.4131359948399134E-4, 5.742249752025015E-5, 1.1599896292738377E-5, 5.817621344025938E-7, 8.539715550856736E-9]; }  return Coefficients.erfImpJn; }

    /**
     * Polynomial coefficients for a denominator in erfImp
     * calculation for erfc(x) in the interval [17, 24].
     */
    static erfImpJd: number[]; public static erfImpJd_$LI$(): number[] { if (Coefficients.erfImpJd == null) { Coefficients.erfImpJd = [1, 0.23304413829968784, 0.02041869405464403, 7.971856475643983E-4, 1.1701928167017232E-5]; }  return Coefficients.erfImpJd; }

    /**
     * Polynomial coefficients for a numerator in erfImp
     * calculation for erfc(x) in the interval [24, 38].
     */
    static erfImpKn: number[]; public static erfImpKn_$LI$(): number[] { if (Coefficients.erfImpKn == null) { Coefficients.erfImpKn = [-1.4667469927776036E-4, 1.6266655211228053E-5, 2.6911624850916523E-6, 9.79584479468092E-8, 1.0199464762572346E-9]; }  return Coefficients.erfImpKn; }

    /**
     * Polynomial coefficients for a denominator in erfImp
     * calculation for erfc(x) in the interval [24, 38].
     */
    static erfImpKd: number[]; public static erfImpKd_$LI$(): number[] { if (Coefficients.erfImpKd == null) { Coefficients.erfImpKd = [1, 0.16590781294484722, 0.010336171619150588, 2.865930263738684E-4, 2.9840157084090034E-6]; }  return Coefficients.erfImpKd; }

    /**
     * Polynomial coefficients for a numerator in erfImp
     * calculation for erfc(x) in the interval [38, 60].
     */
    static erfImpLn: number[]; public static erfImpLn_$LI$(): number[] { if (Coefficients.erfImpLn == null) { Coefficients.erfImpLn = [-5.839057976297718E-5, 4.125103251054962E-6, 4.3179092242025094E-7, 9.933651555900132E-9, 6.534805100201047E-11]; }  return Coefficients.erfImpLn; }

    /**
     * Polynomial coefficients for a denominator in erfImp
     * calculation for erfc(x) in the interval [38, 60].
     */
    static erfImpLd: number[]; public static erfImpLd_$LI$(): number[] { if (Coefficients.erfImpLd == null) { Coefficients.erfImpLd = [1, 0.10507708607203992, 0.004142784286754756, 7.263387546445238E-5, 4.778184710473988E-7]; }  return Coefficients.erfImpLd; }

    /**
     * Polynomial coefficients for a numerator in erfImp
     * calculation for erfc(x) in the interval [60, 85].
     */
    static erfImpMn: number[]; public static erfImpMn_$LI$(): number[] { if (Coefficients.erfImpMn == null) { Coefficients.erfImpMn = [-1.9645779760922958E-5, 1.572438876668007E-6, 5.439025111927009E-8, 3.174724923691177E-10]; }  return Coefficients.erfImpMn; }

    /**
     * Polynomial coefficients for a denominator in erfImp
     * calculation for erfc(x) in the interval [60, 85].
     */
    static erfImpMd: number[]; public static erfImpMd_$LI$(): number[] { if (Coefficients.erfImpMd == null) { Coefficients.erfImpMd = [1, 0.05280398924095763, 9.268760691517533E-4, 5.410117232266303E-6, 5.350938458036424E-16]; }  return Coefficients.erfImpMd; }

    /**
     * Polynomial coefficients for a numerator in erfImp
     * calculation for erfc(x) in the interval [85, 110].
     */
    static erfImpNn: number[]; public static erfImpNn_$LI$(): number[] { if (Coefficients.erfImpNn == null) { Coefficients.erfImpNn = [-7.892247039787227E-6, 6.22088451660987E-7, 1.457284456768824E-8, 6.037155055427153E-11]; }  return Coefficients.erfImpNn; }

    /**
     * Polynomial coefficients for a denominator in erfImp
     * calculation for erfc(x) in the interval [85, 110].
     */
    static erfImpNd: number[]; public static erfImpNd_$LI$(): number[] { if (Coefficients.erfImpNd == null) { Coefficients.erfImpNd = [1, 0.03753288463562937, 4.679195359746253E-4, 1.9384703927584565E-6]; }  return Coefficients.erfImpNd; }

    /**
     * Polynomial coefficients for a numerator of erfInvImp
     * calculation for erf^-1(z) in the interval [0, 0.5].
     */
    static ervInvImpAn: number[]; public static ervInvImpAn_$LI$(): number[] { if (Coefficients.ervInvImpAn == null) { Coefficients.ervInvImpAn = [-5.087819496582806E-4, -0.008368748197417368, 0.03348066254097446, -0.012692614766297404, -0.03656379714117627, 0.02198786811111689, 0.008226878746769157, -0.005387729650712429]; }  return Coefficients.ervInvImpAn; }

    /**
     * Polynomial coefficients for a denominator of erfInvImp
     * calculation for erf^-1(z) in the interval [0, 0.5].
     */
    static ervInvImpAd: number[]; public static ervInvImpAd_$LI$(): number[] { if (Coefficients.ervInvImpAd == null) { Coefficients.ervInvImpAd = [1, -0.9700050433032906, -1.5657455823417585, 1.5622155839842302, 0.662328840472003, -0.7122890234154284, -0.05273963823400997, 0.07952836873415717, -0.0023339375937419, 8.862163904564247E-4]; }  return Coefficients.ervInvImpAd; }

    /**
     * Polynomial coefficients for a numerator of erfInvImp
     * calculation for erf^-1(z) in the interval [0.5, 0.75].
     */
    static ervInvImpBn: number[]; public static ervInvImpBn_$LI$(): number[] { if (Coefficients.ervInvImpBn == null) { Coefficients.ervInvImpBn = [-0.20243350835593876, 0.10526468069939171, 8.3705032834312, 17.644729840837403, -18.851064805871424, -44.6382324441787, 17.445385985570866, 21.12946554483405, -3.6719225470772936]; }  return Coefficients.ervInvImpBn; }

    /**
     * Polynomial coefficients for a denominator of erfInvImp
     * calculation for erf^-1(z) in the interval [0.5, 0.75].
     */
    static ervInvImpBd: number[]; public static ervInvImpBd_$LI$(): number[] { if (Coefficients.ervInvImpBd == null) { Coefficients.ervInvImpBd = [1, 6.242641248542475, 3.971343795334387, -28.66081804998, -20.14326346804852, 48.560921310873994, 10.826866735546016, -22.643693341313973, 1.7211476576120028]; }  return Coefficients.ervInvImpBd; }

    /**
     * Polynomial coefficients for a numerator of erfInvImp
     * calculation for erf^-1(z) in the interval [0.75, 1] with x less than 3.
     */
    static ervInvImpCn: number[]; public static ervInvImpCn_$LI$(): number[] { if (Coefficients.ervInvImpCn == null) { Coefficients.ervInvImpCn = [-0.1311027816799519, -0.16379404719331705, 0.11703015634199525, 0.38707973897260434, 0.3377855389120359, 0.14286953440815717, 0.029015791000532906, 0.0021455899538880526, -6.794655751811263E-7, 2.8522533178221704E-8, -6.81149956853777E-10]; }  return Coefficients.ervInvImpCn; }

    /**
     * Polynomial coefficients for a denominator of erfInvImp
     * calculation for erf^-1(z) in the interval [0.75, 1] with x less than 3.
     */
    static ervInvImpCd: number[]; public static ervInvImpCd_$LI$(): number[] { if (Coefficients.ervInvImpCd == null) { Coefficients.ervInvImpCd = [1, 3.4662540724256723, 5.381683457070069, 4.778465929458438, 2.5930192162362027, 0.848854343457902, 0.15226433829533179, 0.011059242293464892]; }  return Coefficients.ervInvImpCd; }

    /**
     * Polynomial coefficients for a numerator of erfInvImp
     * calculation for erf^-1(z) in the interval [0.75, 1] with x between 3 and 6.
     */
    static ervInvImpDn: number[]; public static ervInvImpDn_$LI$(): number[] { if (Coefficients.ervInvImpDn == null) { Coefficients.ervInvImpDn = [-0.0350353787183178, -0.0022242652921344794, 0.018557330651423107, 0.009508047013259196, 0.0018712349281955923, 1.5754461742496055E-4, 4.60469890584318E-6, -2.304047769118826E-10, 2.6633922742578204E-12]; }  return Coefficients.ervInvImpDn; }

    /**
     * Polynomial coefficients for a denominator of erfInvImp
     * calculation for erf^-1(z) in the interval [0.75, 1] with x between 3 and 6.
     */
    static ervInvImpDd: number[]; public static ervInvImpDd_$LI$(): number[] { if (Coefficients.ervInvImpDd == null) { Coefficients.ervInvImpDd = [1, 1.3653349817554064, 0.7620591645536234, 0.22009110576413124, 0.03415891436709477, 0.00263861676657016, 7.646752923027944E-5]; }  return Coefficients.ervInvImpDd; }

    /**
     * Polynomial coefficients for a numerator of erfInvImp
     * calculation for erf^-1(z) in the interval [0.75, 1] with x between 6 and 18.
     */
    static ervInvImpEn: number[]; public static ervInvImpEn_$LI$(): number[] { if (Coefficients.ervInvImpEn == null) { Coefficients.ervInvImpEn = [-0.016743100507663373, -0.0011295143874558028, 0.001056288621524929, 2.0938631748758808E-4, 1.4962478375834237E-5, 4.4969678992770644E-7, 4.625961635228786E-9, -2.811287356288318E-14, 9.905570997331033E-17]; }  return Coefficients.ervInvImpEn; }

    /**
     * Polynomial coefficients for a denominator of erfInvImp
     * calculation for erf^-1(z) in the interval [0.75, 1] with x between 6 and 18.
     */
    static ervInvImpEd: number[]; public static ervInvImpEd_$LI$(): number[] { if (Coefficients.ervInvImpEd == null) { Coefficients.ervInvImpEd = [1, 0.5914293448864175, 0.1381518657490833, 0.016074608709367652, 9.640118070051656E-4, 2.7533547476472603E-5, 2.82243172016108E-7]; }  return Coefficients.ervInvImpEd; }

    /**
     * Polynomial coefficients for a numerator of erfInvImp
     * calculation for erf^-1(z) in the interval [0.75, 1] with x between 18 and 44.
     */
    static ervInvImpFn: number[]; public static ervInvImpFn_$LI$(): number[] { if (Coefficients.ervInvImpFn == null) { Coefficients.ervInvImpFn = [-0.002497821279189813, -7.79190719229054E-6, 2.5472303741302746E-5, 1.6239777734251093E-6, 3.963410113048012E-8, 4.116328311909442E-10, 1.4559628671867504E-12, -1.1676501239718427E-18]; }  return Coefficients.ervInvImpFn; }

    /**
     * Polynomial coefficients for a denominator of erfInvImp
     * calculation for erf^-1(z) in the interval [0.75, 1] with x between 18 and 44.
     */
    static ervInvImpFd: number[]; public static ervInvImpFd_$LI$(): number[] { if (Coefficients.ervInvImpFd == null) { Coefficients.ervInvImpFd = [1, 0.2071231122144225, 0.01694108381209759, 6.905382656226846E-4, 1.4500735981823264E-5, 1.4443775662814415E-7, 5.097612765997785E-10]; }  return Coefficients.ervInvImpFd; }

    /**
     * Polynomial coefficients for a numerator of erfInvImp
     * calculation for erf^-1(z) in the interval [0.75, 1] with x greater than 44.
     */
    static ervInvImpGn: number[]; public static ervInvImpGn_$LI$(): number[] { if (Coefficients.ervInvImpGn == null) { Coefficients.ervInvImpGn = [-5.390429110190785E-4, -2.8398759004727723E-7, 8.994651148922914E-7, 2.2934585926592085E-8, 2.2556144486350015E-10, 9.478466275030226E-13, 1.3588013010892486E-15, -3.4889039339994887E-22]; }  return Coefficients.ervInvImpGn; }

    /**
     * Polynomial coefficients for a denominator of erfInvImp
     * calculation for erf^-1(z) in the interval [0.75, 1] with x greater than 44.
     */
    static ervInvImpGd: number[]; public static ervInvImpGd_$LI$(): number[] { if (Coefficients.ervInvImpGd == null) { Coefficients.ervInvImpGd = [1, 0.08457462340018994, 0.002820929847262647, 4.682929219408942E-5, 3.999688121938621E-7, 1.6180929088790448E-9, 2.315586083102596E-12]; }  return Coefficients.ervInvImpGd; }

    /**
     * Supporting function
     * while Exponential integral function Ei(x) calculation
     */
    static EI: number[]; public static EI_$LI$(): number[] { if (Coefficients.EI == null) { Coefficients.EI = [191.5047433355014, 440.3798995348383, 1037.8782907170896, 2492.2289762418777, 6071.406374098611, 14959.532666397528, 37197.688490689034, 93192.51363396537, 234955.8524907683, 595560.998670837, 1516637.8940425168, 3877904.3305974435, 9950907.251046846, 2.5615652664056588E7, 6.612718635548492E7, 1.7114467130036366E8, 4.4396636983027124E8, 1.1541153918491828E9, 3.0059509065255485E9, 7.842940991898187E9, 2.0496497119880814E10, 5.36451185923147E10, 1.405991957584069E11, 3.689732094072742E11, 9.694555759683939E11, 2.550043566357787E12, 6.714640184076498E12, 1.769803724411627E13, 4.669055014466159E13, 1.2328520799120977E14, 3.257988998672264E14, 8.616388199965786E14, 2.2804462003019025E15, 6.039718263611242E15, 1.6006649143245042E16, 4.2447960921368504E16, 1.12634829016696672E17, 2.9904447186323366E17, 7.9439160357044544E17, 2.11134238864782413E18, 5.6143296808103434E18, 1.4936302131129932E19, 3.975442747903745E19, 1.058563689713169E20]; }  return Coefficients.EI; }

    /**
     * Coefficients for Lanchos Gamma function approximation
     */
    static lanchosGamma: number[]; public static lanchosGamma_$LI$(): number[] { if (Coefficients.lanchosGamma == null) { Coefficients.lanchosGamma = [0.9999999999998099, 676.5203681218851, -1259.1392167224028, 771.3234287776531, -176.6150291621406, 12.507343278686905, -0.13857109526572012, 9.984369578019572E-6, 1.5056327351493116E-7]; }  return Coefficients.lanchosGamma; }

    /**
     * Coefficients for Log Gamma function approximation - A
     */
    static logGammaA: number[]; public static logGammaA_$LI$(): number[] { if (Coefficients.logGammaA == null) { Coefficients.logGammaA = [8.116141674705085E-4, -5.950619042843014E-4, 7.936503404577169E-4, -0.002777777777300997, 0.08333333333333319]; }  return Coefficients.logGammaA; }

    /**
     * Coefficients for Log Gamma function approximation - B
     */
    static logGammaB: number[]; public static logGammaB_$LI$(): number[] { if (Coefficients.logGammaB == null) { Coefficients.logGammaB = [-1378.2515256912086, -38801.631513463784, -331612.9927388712, -1162370.974927623, -1721737.0082083966, -853555.6642457654]; }  return Coefficients.logGammaB; }

    /**
     * Coefficients for Log Gamma function approximation - C
     */
    static logGammaC: number[]; public static logGammaC_$LI$(): number[] { if (Coefficients.logGammaC == null) { Coefficients.logGammaC = [-351.81570143652345, -17064.210665188115, -220528.59055385445, -1139334.4436798252, -2532523.0717758294, -2018891.4143353277]; }  return Coefficients.logGammaC; }

    /**
     * Coefficients for Lambert W function, series for q near zero
     */
    static lambertWqNearZero: number[]; public static lambertWqNearZero_$LI$(): number[] { if (Coefficients.lambertWqNearZero == null) { Coefficients.lambertWqNearZero = [-1.0, 2.331643981597124, -1.8121878856393634, 1.9366311144923598, -2.3535512018816145, 3.0668589010506317, -4.175335600258177, 5.858023729874774, -8.401032217523978, 12.25075350131446, -18.10069701247244, 27.029044799010563]; }  return Coefficients.lambertWqNearZero; }
}
Coefficients["__class"] = "org.mariuszgromada.math.mxparser.mathcollection.Coefficients";