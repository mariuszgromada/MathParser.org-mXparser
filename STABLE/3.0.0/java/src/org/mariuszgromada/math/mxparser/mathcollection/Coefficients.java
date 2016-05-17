/*
 * @(#)Coefficients.java        3.0.0    2016-05-07
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2016 MARIUSZ GROMADA. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 *
 *    1. Redistributions of source code must retain the above copyright notice, this list of
 *       conditions and the following disclaimer.
 *
 *    2. Redistributions in binary form must reproduce the above copyright notice, this list
 *       of conditions and the following disclaimer in the documentation and/or other materials
 *       provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY <MARIUSZ GROMADA> ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those of the
 * authors and should not be interpreted as representing official policies, either expressed
 * or implied, of MARIUSZ GROMADA.
 *
 * Some parts of the Coefficients class were adopted from Math.NET Numerics project
 * Copyright (c) 2002-2015 Math.NET   http://numerics.mathdotnet.com/
 * http://numerics.mathdotnet.com/License.html
 *
 * If you have any questions/bugs feel free to contact:
 *
 *     Mariusz Gromada
 *     mariuszgromada.org@gmail.com
 *     http://mathparser.org
 *     http://mathspace.pl
 *     http://janetsudoku.mariuszgromada.org
 *     http://github.com/mariuszgromada/MathParser.org-mXparser
 *     http://mariuszgromada.github.io/MathParser.org-mXparser
 *     http://mxparser.sourceforge.net
 *     http://bitbucket.org/mariuszgromada/mxparser
 *     http://mxparser.codeplex.com
 *     http://github.com/mariuszgromada/Janet-Sudoku
 *     http://janetsudoku.codeplex.com
 *     http://sourceforge.net/projects/janetsudoku
 *     http://bitbucket.org/mariuszgromada/janet-sudoku
 *     http://github.com/mariuszgromada/MathParser.org-mXparser
 *
 *                              Asked if he believes in one God, a mathematician answered:
 *                              "Yes, up to isomorphism."
 */
package org.mariuszgromada.math.mxparser.mathcollection;

/**
 * Coefficients - various coefficients supporting numerical computation.
 *
 * @author         <b>Mariusz Gromada</b><br>
 *                 <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 *                 <a href="http://mathspace.pl" target="_blank">MathSpace.pl</a><br>
 *                 <a href="http://mathparser.org" target="_blank">MathParser.org - mXparser project page</a><br>
 *                 <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 *                 <a href="http://mxparser.sourceforge.net" target="_blank">mXparser on SourceForge</a><br>
 *                 <a href="http://bitbucket.org/mariuszgromada/mxparser" target="_blank">mXparser on Bitbucket</a><br>
 *                 <a href="http://mxparser.codeplex.com" target="_blank">mXparser on CodePlex</a><br>
 *                 <a href="http://janetsudoku.mariuszgromada.org" target="_blank">Janet Sudoku - project web page</a><br>
 *                 <a href="http://github.com/mariuszgromada/Janet-Sudoku" target="_blank">Janet Sudoku on GitHub</a><br>
 *                 <a href="http://janetsudoku.codeplex.com" target="_blank">Janet Sudoku on CodePlex</a><br>
 *                 <a href="http://sourceforge.net/projects/janetsudoku" target="_blank">Janet Sudoku on SourceForge</a><br>
 *                 <a href="http://bitbucket.org/mariuszgromada/janet-sudoku" target="_blank">Janet Sudoku on BitBucket</a><br>
 *
 * @version        3.0.0
 */
final class Coefficients {
	/*
	 * --------------------------------------
	 * COEFFICIENTS FOR METHOD erfImp
	 * --------------------------------------
	*/
	/**
	 * Polynomial coefficients for a numerator of erfImp
	 * calculation for erf(x) in the interval [1e-10, 0.5].
	 */
	static final double[] erfImpAn = { 0.00337916709551257388990745, -0.00073695653048167948530905, -0.374732337392919607868241, 0.0817442448733587196071743, -0.0421089319936548595203468, 0.0070165709512095756344528, -0.00495091255982435110337458, 0.000871646599037922480317225 };
	/**
	 * Polynomial coefficients for  adenominator of erfImp
	 * calculation for erf(x) in the interval [1e-10, 0.5].
	 */
	static final double[] erfImpAd = { 1, -0.218088218087924645390535, 0.412542972725442099083918, -0.0841891147873106755410271, 0.0655338856400241519690695, -0.0120019604454941768171266, 0.00408165558926174048329689, -0.000615900721557769691924509 };
	/**
	 * Polynomial coefficients for a numerator in erfImp
	 * calculation for erfc(x) in the interval [0.5, 0.75].
	 */
	static final double[] erfImpBn = { -0.0361790390718262471360258, 0.292251883444882683221149, 0.281447041797604512774415, 0.125610208862766947294894, 0.0274135028268930549240776, 0.00250839672168065762786937 };
	/**
	 * Polynomial coefficients for a denominator in erfImp
	 * calculation for erfc(x) in the interval [0.5, 0.75].
	 */
	static final double[] erfImpBd = { 1, 1.8545005897903486499845, 1.43575803037831418074962, 0.582827658753036572454135, 0.124810476932949746447682, 0.0113724176546353285778481 };
	/**
	 * Polynomial coefficients for a numerator in erfImp
	 * calculation for erfc(x) in the interval [0.75, 1.25].
	 */
	static final double[] erfImpCn = { -0.0397876892611136856954425, 0.153165212467878293257683, 0.191260295600936245503129, 0.10276327061989304213645, 0.029637090615738836726027, 0.0046093486780275489468812, 0.000307607820348680180548455 };
	/**
	 * Polynomial coefficients for a denominator in erfImp
	 * calculation for erfc(x) in the interval [0.75, 1.25].
	 */
	static final double[] erfImpCd = { 1, 1.95520072987627704987886, 1.64762317199384860109595, 0.768238607022126250082483, 0.209793185936509782784315, 0.0319569316899913392596356, 0.00213363160895785378615014 };
	/**
	 * Polynomial coefficients for a numerator in erfImp
	 * calculation for erfc(x) in the interval [1.25, 2.25].
	 */
	static final double[] erfImpDn = { -0.0300838560557949717328341, 0.0538578829844454508530552, 0.0726211541651914182692959, 0.0367628469888049348429018, 0.00964629015572527529605267, 0.00133453480075291076745275, 0.778087599782504251917881e-4 };
	/**
	 * Polynomial coefficients for a denominator in erfImp
	 * calculation for erfc(x) in the interval [1.25, 2.25].
	 */
	static final double[] erfImpDd = { 1, 1.75967098147167528287343, 1.32883571437961120556307, 0.552528596508757581287907, 0.133793056941332861912279, 0.0179509645176280768640766, 0.00104712440019937356634038, -0.106640381820357337177643e-7 };
	/**
	 * Polynomial coefficients for a numerator in erfImp
	 * calculation for erfc(x) in the interval [2.25, 3.5].
	 */
	static final double[] erfImpEn = { -0.0117907570137227847827732, 0.014262132090538809896674, 0.0202234435902960820020765, 0.00930668299990432009042239, 0.00213357802422065994322516, 0.00025022987386460102395382, 0.120534912219588189822126e-4 };
	/**
	 * Polynomial coefficients for a denominator in erfImp
	 * calculation for erfc(x) in the interval [2.25, 3.5].
	 */
	static final double[] erfImpEd = { 1, 1.50376225203620482047419, 0.965397786204462896346934, 0.339265230476796681555511, 0.0689740649541569716897427, 0.00771060262491768307365526, 0.000371421101531069302990367 };
	/**
	 * Polynomial coefficients for a numerator in erfImp
	 * calculation for erfc(x) in the interval [3.5, 5.25].
	 */
	static final double[] erfImpFn = { -0.00546954795538729307482955, 0.00404190278731707110245394, 0.0054963369553161170521356, 0.00212616472603945399437862, 0.000394984014495083900689956, 0.365565477064442377259271e-4, 0.135485897109932323253786e-5 };
	/**
	 * Polynomial coefficients for a denominator in erfImp
	 * calculation for erfc(x) in the interval [3.5, 5.25].
	 */
	static final double[] erfImpFd = { 1, 1.21019697773630784832251, 0.620914668221143886601045, 0.173038430661142762569515, 0.0276550813773432047594539, 0.00240625974424309709745382, 0.891811817251336577241006e-4, -0.465528836283382684461025e-11 };
	/**
	 * Polynomial coefficients for a numerator in erfImp
	 * calculation for erfc(x) in the interval [5.25, 8].
	 */
	static final double[] erfImpGn = { -0.00270722535905778347999196, 0.0013187563425029400461378, 0.00119925933261002333923989, 0.00027849619811344664248235, 0.267822988218331849989363e-4, 0.923043672315028197865066e-6 };
	/**
	 * Polynomial coefficients for a denominator in erfImp
	 * calculation for erfc(x) in the interval [5.25, 8].
	 */
	static final double[] erfImpGd = { 1, 0.814632808543141591118279, 0.268901665856299542168425, 0.0449877216103041118694989, 0.00381759663320248459168994, 0.000131571897888596914350697, 0.404815359675764138445257e-11 };
	/**
	 * Polynomial coefficients for a numerator in erfImp
	 * calculation for erfc(x) in the interval [8, 11.5].
	 */
	static final double[] erfImpHn = { -0.00109946720691742196814323, 0.000406425442750422675169153, 0.000274499489416900707787024, 0.465293770646659383436343e-4, 0.320955425395767463401993e-5, 0.778286018145020892261936e-7 };
	/**
	 * Polynomial coefficients for a denominator in erfImp
	 * calculation for erfc(x) in the interval [8, 11.5].
	 */
	static final double[] erfImpHd = { 1, 0.588173710611846046373373, 0.139363331289409746077541, 0.0166329340417083678763028, 0.00100023921310234908642639, 0.24254837521587225125068e-4 };
	/**
	 * Polynomial coefficients for a numerator in erfImp
	 * calculation for erfc(x) in the interval [11.5, 17].
	 */
	static final double[] erfImpIn = { -0.00056907993601094962855594, 0.000169498540373762264416984, 0.518472354581100890120501e-4, 0.382819312231928859704678e-5, 0.824989931281894431781794e-7 };
	/**
	 * Polynomial coefficients for a denominator in erfImp
	 * calculation for erfc(x) in the interval [11.5, 17].
	 */
	static final double[] erfImpId = { 1, 0.339637250051139347430323, 0.043472647870310663055044, 0.00248549335224637114641629, 0.535633305337152900549536e-4, -0.117490944405459578783846e-12 };
	/**
	 * Polynomial coefficients for a numerator in erfImp
	 * calculation for erfc(x) in the interval [17, 24].
	 */
	static final double[] erfImpJn = { -0.000241313599483991337479091, 0.574224975202501512365975e-4, 0.115998962927383778460557e-4, 0.581762134402593739370875e-6, 0.853971555085673614607418e-8 };
	/**
	 * Polynomial coefficients for a denominator in erfImp
	 * calculation for erfc(x) in the interval [17, 24].
	 */
	static final double[] erfImpJd = { 1, 0.233044138299687841018015, 0.0204186940546440312625597, 0.000797185647564398289151125, 0.117019281670172327758019e-4 };
	/**
	 * Polynomial coefficients for a numerator in erfImp
	 * calculation for erfc(x) in the interval [24, 38].
	 */
	static final double[] erfImpKn = { -0.000146674699277760365803642, 0.162666552112280519955647e-4, 0.269116248509165239294897e-5, 0.979584479468091935086972e-7, 0.101994647625723465722285e-8 };
	/**
	 * Polynomial coefficients for a denominator in erfImp
	 * calculation for erfc(x) in the interval [24, 38].
	 */
	static final double[] erfImpKd = { 1, 0.165907812944847226546036, 0.0103361716191505884359634, 0.000286593026373868366935721, 0.298401570840900340874568e-5 };
	/**
	 * Polynomial coefficients for a numerator in erfImp
	 * calculation for erfc(x) in the interval [38, 60].
	 */
	static final double[] erfImpLn = { -0.583905797629771786720406e-4, 0.412510325105496173512992e-5, 0.431790922420250949096906e-6, 0.993365155590013193345569e-8, 0.653480510020104699270084e-10 };
	/**
	 * Polynomial coefficients for a denominator in erfImp
	 * calculation for erfc(x) in the interval [38, 60].
	 */
	static final double[] erfImpLd = { 1, 0.105077086072039915406159, 0.00414278428675475620830226, 0.726338754644523769144108e-4, 0.477818471047398785369849e-6 };
	/**
	 * Polynomial coefficients for a numerator in erfImp
	 * calculation for erfc(x) in the interval [60, 85].
	 */
	static final double[] erfImpMn = { -0.196457797609229579459841e-4, 0.157243887666800692441195e-5, 0.543902511192700878690335e-7, 0.317472492369117710852685e-9 };
	/**
	 * Polynomial coefficients for a denominator in erfImp
	 * calculation for erfc(x) in the interval [60, 85].
	 */
	static final double[] erfImpMd = { 1, 0.052803989240957632204885, 0.000926876069151753290378112, 0.541011723226630257077328e-5, 0.535093845803642394908747e-15 };
	/**
	 * Polynomial coefficients for a numerator in erfImp
	 * calculation for erfc(x) in the interval [85, 110].
	 */
	static final double[] erfImpNn = { -0.789224703978722689089794e-5, 0.622088451660986955124162e-6, 0.145728445676882396797184e-7, 0.603715505542715364529243e-10 };
	/**
	 * Polynomial coefficients for a denominator in erfImp
	 * calculation for erfc(x) in the interval [85, 110].
	 */
	static final double[] erfImpNd = { 1, 0.0375328846356293715248719, 0.000467919535974625308126054, 0.193847039275845656900547e-5 };
	/*
	 *
	 * 	--------------------------------------
	 * 	COEFFICIENTS FOR METHOD erfInvImp
	 * 	--------------------------------------
	 */
	/**
	 * Polynomial coefficients for a numerator of erfInvImp
	 * calculation for erf^-1(z) in the interval [0, 0.5].
	 */
	static final double[] ervInvImpAn = { -0.000508781949658280665617, -0.00836874819741736770379, 0.0334806625409744615033, -0.0126926147662974029034, -0.0365637971411762664006, 0.0219878681111168899165, 0.00822687874676915743155, -0.00538772965071242932965 };
	/**
	 * Polynomial coefficients for a denominator of erfInvImp
	 * calculation for erf^-1(z) in the interval [0, 0.5].
	 */
	static final double[] ervInvImpAd = { 1, -0.970005043303290640362, -1.56574558234175846809, 1.56221558398423026363, 0.662328840472002992063, -0.71228902341542847553, -0.0527396382340099713954, 0.0795283687341571680018, -0.00233393759374190016776, 0.000886216390456424707504 };
	/**
	 * Polynomial coefficients for a numerator of erfInvImp
	 * calculation for erf^-1(z) in the interval [0.5, 0.75].
	 */
	static final double[] ervInvImpBn = { -0.202433508355938759655, 0.105264680699391713268, 8.37050328343119927838, 17.6447298408374015486, -18.8510648058714251895, -44.6382324441786960818, 17.445385985570866523, 21.1294655448340526258, -3.67192254707729348546 };
	/**
	 * Polynomial coefficients for a denominator of erfInvImp
	 * calculation for erf^-1(z) in the interval [0.5, 0.75].
	 */
	static final double[] ervInvImpBd = { 1, 6.24264124854247537712, 3.9713437953343869095, -28.6608180499800029974, -20.1432634680485188801, 48.5609213108739935468, 10.8268667355460159008, -22.6436933413139721736, 1.72114765761200282724 };
	/**
	 * Polynomial coefficients for a numerator of erfInvImp
	 * calculation for erf^-1(z) in the interval [0.75, 1] with x less than 3.
	 */
	static final double[] ervInvImpCn = { -0.131102781679951906451, -0.163794047193317060787, 0.117030156341995252019, 0.387079738972604337464, 0.337785538912035898924, 0.142869534408157156766, 0.0290157910005329060432, 0.00214558995388805277169, -0.679465575181126350155e-6, 0.285225331782217055858e-7, -0.681149956853776992068e-9 };
	/**
	 * Polynomial coefficients for a denominator of erfInvImp
	 * calculation for erf^-1(z) in the interval [0.75, 1] with x less than 3.
	 */
	static final double[] ervInvImpCd = { 1, 3.46625407242567245975, 5.38168345707006855425, 4.77846592945843778382, 2.59301921623620271374, 0.848854343457902036425, 0.152264338295331783612, 0.01105924229346489121 };
	/**
	 * Polynomial coefficients for a numerator of erfInvImp
	 * calculation for erf^-1(z) in the interval [0.75, 1] with x between 3 and 6.
	 */
	static final double[] ervInvImpDn = { -0.0350353787183177984712, -0.00222426529213447927281, 0.0185573306514231072324, 0.00950804701325919603619, 0.00187123492819559223345, 0.000157544617424960554631, 0.460469890584317994083e-5, -0.230404776911882601748e-9, 0.266339227425782031962e-11 };
	/**
	 * Polynomial coefficients for a denominator of erfInvImp
	 * calculation for erf^-1(z) in the interval [0.75, 1] with x between 3 and 6.
	 */
	static final double[] ervInvImpDd = { 1, 1.3653349817554063097, 0.762059164553623404043, 0.220091105764131249824, 0.0341589143670947727934, 0.00263861676657015992959, 0.764675292302794483503e-4 };
	/**
	 * Polynomial coefficients for a numerator of erfInvImp
	 * calculation for erf^-1(z) in the interval [0.75, 1] with x between 6 and 18.
	 */
	static final double[] ervInvImpEn = { -0.0167431005076633737133, -0.00112951438745580278863, 0.00105628862152492910091, 0.000209386317487588078668, 0.149624783758342370182e-4, 0.449696789927706453732e-6, 0.462596163522878599135e-8, -0.281128735628831791805e-13, 0.99055709973310326855e-16 };
	/**
	 * Polynomial coefficients for a denominator of erfInvImp
	 * calculation for erf^-1(z) in the interval [0.75, 1] with x between 6 and 18.
	 */
	static final double[] ervInvImpEd = { 1, 0.591429344886417493481, 0.138151865749083321638, 0.0160746087093676504695, 0.000964011807005165528527, 0.275335474764726041141e-4, 0.282243172016108031869e-6 };
	/**
	 * Polynomial coefficients for a numerator of erfInvImp
	 * calculation for erf^-1(z) in the interval [0.75, 1] with x between 18 and 44.
	 */
	static final double[] ervInvImpFn = { -0.0024978212791898131227, -0.779190719229053954292e-5, 0.254723037413027451751e-4, 0.162397777342510920873e-5, 0.396341011304801168516e-7, 0.411632831190944208473e-9, 0.145596286718675035587e-11, -0.116765012397184275695e-17 };
	/**
	 * Polynomial coefficients for a denominator of erfInvImp
	 * calculation for erf^-1(z) in the interval [0.75, 1] with x between 18 and 44.
	 */
	static final double[] ervInvImpFd = { 1, 0.207123112214422517181, 0.0169410838120975906478, 0.000690538265622684595676, 0.145007359818232637924e-4, 0.144437756628144157666e-6, 0.509761276599778486139e-9 };
	/**
	 * Polynomial coefficients for a numerator of erfInvImp
	 * calculation for erf^-1(z) in the interval [0.75, 1] with x greater than 44.
	 */
	static final double[] ervInvImpGn = { -0.000539042911019078575891, -0.28398759004727721098e-6, 0.899465114892291446442e-6, 0.229345859265920864296e-7, 0.225561444863500149219e-9, 0.947846627503022684216e-12, 0.135880130108924861008e-14, -0.348890393399948882918e-21 };
	/**
	 * Polynomial coefficients for a denominator of erfInvImp
	 * calculation for erf^-1(z) in the interval [0.75, 1] with x greater than 44.
	 */
	static final double[] ervInvImpGd = { 1, 0.0845746234001899436914, 0.00282092984726264681981, 0.468292921940894236786e-4, 0.399968812193862100054e-6, 0.161809290887904476097e-8, 0.231558608310259605225e-11 };
	/**
	 * Supporting function
	 * while Exponential integral function Ei(x) calculation
	 */
	static final double[] EI = {
			1.915047433355013959531e2, 4.403798995348382689974e2,
			1.037878290717089587658e3, 2.492228976241877759138e3,
			6.071406374098611507965e3, 1.495953266639752885229e4,
			3.719768849068903560439e4, 9.319251363396537129882e4,
			2.349558524907683035782e5, 5.955609986708370018502e5,
			1.516637894042516884433e6, 3.877904330597443502996e6,
			9.950907251046844760026e6, 2.561565266405658882048e7,
			6.612718635548492136250e7, 1.711446713003636684975e8,
			4.439663698302712208698e8, 1.154115391849182948287e9,
			3.005950906525548689841e9, 7.842940991898186370453e9,
			2.049649711988081236484e10, 5.364511859231469415605e10,
			1.405991957584069047340e11, 3.689732094072741970640e11,
			9.694555759683939661662e11, 2.550043566357786926147e12,
			6.714640184076497558707e12,	1.769803724411626854310e13,
			4.669055014466159544500e13,	1.232852079912097685431e14,
			3.257988998672263996790e14,	8.616388199965786544948e14,
			2.280446200301902595341e15,	6.039718263611241578359e15,
			1.600664914324504111070e16,	4.244796092136850759368e16,
			1.126348290166966760275e17,	2.990444718632336675058e17,
			7.943916035704453771510e17,	2.111342388647824195000e18,
			5.614329680810343111535e18,	1.493630213112993142255e19,
			3.975442747903744836007e19,	1.058563689713169096306e20
		};
}
