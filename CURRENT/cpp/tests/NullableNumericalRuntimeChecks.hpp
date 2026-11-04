#ifndef MXPARSER_NULLABLE_NUMERICAL_RUNTIME_CHECKS_HPP
#define MXPARSER_NULLABLE_NUMERICAL_RUNTIME_CHECKS_HPP
#include "org/mariuszgromada/math/mxparser.hpp"
#include <functional>
#include <iostream>
#include <limits>
#include <stdexcept>
#include <string>
namespace nullable_numerical_test_detail {
using namespace org::mariuszgromada::math::mxparser;
using namespace org::mariuszgromada::math::mxparser::mathcollection;
struct Counter final:ArgumentExtension {int calls=0;double getArgumentValue()override{++calls;return Double::NaN;}ArgumentExtensionPtr clone()override{return std::make_shared<Counter>();}};
struct CustomRandom final:IRandom {Long last=42;Long nextInt(Long bound)override{last=bound;return 0;}double nextDouble()override{return .5;}void setSeed(unsigned int)override{}};
}
inline unsigned nullableNumericalRuntimeChecks(const std::function<void(bool)>& assertion){
 using namespace org::mariuszgromada::math::mxparser;
 using namespace org::mariuszgromada::math::mxparser::mathcollection;
 using namespace org::mariuszgromada::math::mxparser::wrapper;
 unsigned checks=0;const char* current="setup";
 const auto check=[&](bool value){++checks;if(!value)std::cerr<<"NULL_NUMERICAL_FAILED "<<current<<"\n";assertion(value);};
 const auto reject=[&](const std::string& message,const std::function<void()>& action){bool caught=false;try{action();}catch(const std::invalid_argument& error){caught=message==error.what();}check(caught);};
 const ExpressionPtr noneF;const ArgumentPtr noneX;const RandomPtr noneR;
 auto x=new_Argument("x",3.0);auto f=new_Expression("x^2",x);
 auto random=new_Random(123),twin=new_Random(123);
 auto customState=std::make_shared<nullable_numerical_test_detail::CustomRandom>();RandomPtr custom=customState;
 auto counter=std::make_shared<nullable_numerical_test_detail::Counter>();const ArgumentExtensionPtr counterExtension=counter;auto counterArgument=new_Argument(S("counter"),counterExtension);
 const auto original=ProbabilityDistributions::randomGenerator;
 struct Restore {RandomPtr value;~Restore(){ProbabilityDistributions::randomGenerator=value;}} restore{original};
 mXparser::resetCancelCurrentCalculationFlag();
 {current="integral/null-expression";reject("MathFunctions.getFunctionValue requires a non-null expression",[&]{Calculus::integralTrapezoid(noneF,x,0,1,1e-5,4);});}
 {current="derivative/null-index";reject("MathFunctions.getFunctionValue requires a non-null argument",[&]{Calculus::derivative(f,noneX,2,3,1e-5,4);});}
 {current="nth/null-expression";reject("MathFunctions.getFunctionValue requires a non-null expression",[&]{Calculus::derivativeNth(noneF,2,x,2,2,1e-5,4);});}
 {current="solver/null-expression";reject("MathFunctions.getFunctionValue requires a non-null expression",[&]{Calculus::solveBrent(noneF,x,0,1,1e-5,4);});}
 {current="forwardDifference/explicit-point/null-index";reject("Calculus difference requires a non-null argument",[&]{Calculus::forwardDifference(noneF,noneX,2);});}
 {current="forwardDifference/implicit-point/null-index";reject("Calculus difference requires a non-null argument",[&]{Calculus::forwardDifference(noneF,noneX);});}
 {current="forwardDifference/h-explicit-point/null-index";reject("Calculus difference requires a non-null argument",[&]{Calculus::forwardDifference(noneF,.25,noneX,2);});}
 {current="forwardDifference/h-implicit-point/null-index";reject("Calculus difference requires a non-null argument",[&]{Calculus::forwardDifference(noneF,.25,noneX);});}
 {current="forwardDifference/implicit/null-expression";reject("Calculus difference requires a non-null expression",[&]{Calculus::forwardDifference(noneF,x);});}
 {current="forwardDifference/h-implicit/null-expression";reject("Calculus difference requires a non-null expression",[&]{Calculus::forwardDifference(noneF,.25,x);});}
 {current="forwardDifference/defined-NaN-point";check(Double::isNaN(Calculus::forwardDifference(noneF,noneX,Double::NaN)));}
 {current="forwardDifference/defined-h-NaN-point";check(Double::isNaN(Calculus::forwardDifference(noneF,.25,noneX,Double::NaN)));}
 {current="backwardDifference/explicit-point/null-index";reject("Calculus difference requires a non-null argument",[&]{Calculus::backwardDifference(noneF,noneX,2);});}
 {current="backwardDifference/implicit-point/null-index";reject("Calculus difference requires a non-null argument",[&]{Calculus::backwardDifference(noneF,noneX);});}
 {current="backwardDifference/h-explicit-point/null-index";reject("Calculus difference requires a non-null argument",[&]{Calculus::backwardDifference(noneF,.25,noneX,2);});}
 {current="backwardDifference/h-implicit-point/null-index";reject("Calculus difference requires a non-null argument",[&]{Calculus::backwardDifference(noneF,.25,noneX);});}
 {current="backwardDifference/implicit/null-expression";reject("Calculus difference requires a non-null expression",[&]{Calculus::backwardDifference(noneF,x);});}
 {current="backwardDifference/h-implicit/null-expression";reject("Calculus difference requires a non-null expression",[&]{Calculus::backwardDifference(noneF,.25,x);});}
 {current="backwardDifference/defined-NaN-point";check(Double::isNaN(Calculus::backwardDifference(noneF,noneX,Double::NaN)));}
 {current="backwardDifference/defined-h-NaN-point";check(Double::isNaN(Calculus::backwardDifference(noneF,.25,noneX,Double::NaN)));}
 {current="ordinary-expression/recovers-after-errors";x->setArgumentValue(3);check(f->calculate()==9);}
 {current="values/null-expression";reject("MathFunctions.getFunctionValue requires a non-null expression",[&]{MathFunctions::getFunctionValues(noneF,x,0,1,1);});}
 {current="mx-values/null-expression";reject("MathFunctions.getFunctionValue requires a non-null expression",[&]{mXparser::getFunctionValues(noneF,x,0,1,1);});}
 {current="values/null-index";reject("MathFunctions.getFunctionValue requires a non-null argument",[&]{MathFunctions::getFunctionValues(f,noneX,0,1,1);});}
 {current="values/reversed-null-index";reject("MathFunctions.getFunctionValue requires a non-null argument",[&]{MathFunctions::getFunctionValues(f,noneX,1,0,-1);});}
 {current="values/defined-null/direction";check((MathFunctions::getFunctionValues(noneF,noneX,1,0,1))==(nullptr));}
 {current="values/defined-null/NaN-range";check((MathFunctions::getFunctionValues(noneF,noneX,Double::NaN,1,1))==(nullptr));}
 {current="values/defined-null/zero-step";check((MathFunctions::getFunctionValues(noneF,noneX,0,1,0))==(nullptr));}
 {current="statistics/avg/null-expression";reject("MathFunctions.getFunctionValue requires a non-null expression",[&]{(static_cast<double(*)(const ExpressionPtr&,const ArgumentPtr&,double,double,double)>(&Statistics::avg))(noneF,x,0,1,1);});}
 {current="statistics/avg/single-point-null-index";reject("MathFunctions.getFunctionValue requires a non-null argument",[&]{(static_cast<double(*)(const ExpressionPtr&,const ArgumentPtr&,double,double,double)>(&Statistics::avg))(noneF,noneX,1,1,1);});}
 {current="statistics/avg/wrong-direction";check(Double::isNaN((static_cast<double(*)(const ExpressionPtr&,const ArgumentPtr&,double,double,double)>(&Statistics::avg))(noneF,noneX,1,0,1)));}
 {current="statistics/avg/defined-zero-step";check(Double::isNaN((static_cast<double(*)(const ExpressionPtr&,const ArgumentPtr&,double,double,double)>(&Statistics::avg))(noneF,noneX,0,1,0)));}
 {current="statistics/var/null-expression";reject("MathFunctions.getFunctionValue requires a non-null expression",[&]{(static_cast<double(*)(const ExpressionPtr&,const ArgumentPtr&,double,double,double)>(&Statistics::var))(noneF,x,0,1,1);});}
 {current="statistics/var/single-point-null-index";reject("MathFunctions.getFunctionValue requires a non-null argument",[&]{(static_cast<double(*)(const ExpressionPtr&,const ArgumentPtr&,double,double,double)>(&Statistics::var))(noneF,noneX,1,1,1);});}
 {current="statistics/var/wrong-direction";check(Double::isNaN((static_cast<double(*)(const ExpressionPtr&,const ArgumentPtr&,double,double,double)>(&Statistics::var))(noneF,noneX,1,0,1)));}
 {current="statistics/var/defined-zero-step";check(Double::isNaN((static_cast<double(*)(const ExpressionPtr&,const ArgumentPtr&,double,double,double)>(&Statistics::var))(noneF,noneX,0,1,0)));}
 {current="statistics/std/null-expression";reject("MathFunctions.getFunctionValue requires a non-null expression",[&]{(static_cast<double(*)(const ExpressionPtr&,const ArgumentPtr&,double,double,double)>(&Statistics::std))(noneF,x,0,1,1);});}
 {current="statistics/std/single-point-null-index";reject("MathFunctions.getFunctionValue requires a non-null argument",[&]{(static_cast<double(*)(const ExpressionPtr&,const ArgumentPtr&,double,double,double)>(&Statistics::std))(noneF,noneX,1,1,1);});}
 {current="statistics/std/wrong-direction";check(Double::isNaN((static_cast<double(*)(const ExpressionPtr&,const ArgumentPtr&,double,double,double)>(&Statistics::std))(noneF,noneX,1,0,1)));}
 {current="statistics/std/defined-zero-step";check(Double::isNaN((static_cast<double(*)(const ExpressionPtr&,const ArgumentPtr&,double,double,double)>(&Statistics::std))(noneF,noneX,0,1,0)));}
 {current="random/null-generator/uniform-positive";reject("ProbabilityDistributions.rndUniformContinuous requires a non-null random generator",[&]{ProbabilityDistributions::rndUniformContinuous(0,1,noneR);});}
 {current="random/null-generator/uniform-unit";reject("ProbabilityDistributions.rndUniformContinuous requires a non-null random generator",[&]{ProbabilityDistributions::rndUniformContinuous(noneR);});}
 {current="random/null-generator/integer-positive";reject("ProbabilityDistributions.rndInteger requires a non-null random generator",[&]{ProbabilityDistributions::rndInteger(0,1,noneR);});}
 {current="random/null-generator/integer-unit";reject("ProbabilityDistributions.rndInteger requires a non-null random generator",[&]{ProbabilityDistributions::rndInteger(noneR);});}
 {current="random/null-generator/index-positive";reject("ProbabilityDistributions.rndIndex requires a non-null random generator",[&]{ProbabilityDistributions::rndIndex(1,noneR);});}
 {current="uniform/defined-equal-limits";check((ProbabilityDistributions::rndUniformContinuous(2,2,noneR))==(2));}
 {current="uniform/defined-reversed-limits";check(Double::isNaN(ProbabilityDistributions::rndUniformContinuous(1,0,noneR)));}
 {current="uniform/defined-NaN";check(Double::isNaN(ProbabilityDistributions::rndUniformContinuous(Double::NaN,1,noneR)));}
 {current="integer/defined-equal-limits";check((ProbabilityDistributions::rndInteger(2,2,noneR))==(2));}
 {current="integer/defined-reversed-limits";check(Double::isNaN(ProbabilityDistributions::rndInteger(1,0,noneR)));}
 {current="integer/defined-NaN";check(Double::isNaN(ProbabilityDistributions::rndInteger(Double::NaN,1.0,noneR)));}
 {current="index/defined-negative-bound";check((ProbabilityDistributions::rndIndex(-1,noneR))==(-1));}
 {current="normal/defined-null-generator";check(Double::isNaN(ProbabilityDistributions::rndNormal(2,0,noneR)));}
 {current="concrete/index-zero-rejected";reject("Random.nextInt requires a nonzero bound with a representable signed64 absolute value",[&]{ProbabilityDistributions::rndIndex(0,random);});}
 {current="concrete/direct-zero-rejected";reject("Random.nextInt requires a nonzero bound with a representable signed64 absolute value",[&]{random->nextInt(0);});}
 {current="concrete/direct-minimum-rejected";reject("Random.nextInt requires a nonzero bound with a representable signed64 absolute value",[&]{random->nextInt(std::numeric_limits<Long>::min());});}
 {current="concrete/rejection-consumes-no-rng-state";check(ProbabilityDistributions::rndIndex(5,random)==ProbabilityDistributions::rndIndex(5,twin));}
 {current="custom/full-signed64-forwarding";check((custom->nextInt(std::numeric_limits<Long>::min()))==(Long{0}));}
 {current="custom/full-signed64-observed";check((customState->last)==(std::numeric_limits<Long>::min()));}
 {current="custom/zero-index-forwarding";check((ProbabilityDistributions::rndIndex(0,custom))==(0));}
 {current="custom/zero-index-observed";check((customState->last)==(Long{0}));}
 {current="global/null-generator-setup";ProbabilityDistributions::randomGenerator=nullptr;}
 {current="global/null-generator/uniform";reject("ProbabilityDistributions.rndUniformContinuous requires a non-null random generator",[&]{ProbabilityDistributions::randomUniformContinuous();});}
 {current="global/null-generator/integer";reject("ProbabilityDistributions.rndInteger requires a non-null random generator",[&]{ProbabilityDistributions::rndInteger();});}
 {current="global/null-generator/index";reject("ProbabilityDistributions.rndIndex requires a non-null random generator",[&]{ProbabilityDistributions::rndIndex(1);});}
 {current="global/null-generator/student";reject("ProbabilityDistributions.rndStudentT requires a non-null random generator",[&]{ProbabilityDistributions::rndStudentT(2);});}
 {current="global/null-generator/chi";reject("ProbabilityDistributions.rndChiSquared requires a non-null random generator",[&]{ProbabilityDistributions::rndChiSquared(2);});}
 {current="global/null-generator/f";reject("ProbabilityDistributions.rndSnedecordF requires a non-null random generator",[&]{ProbabilityDistributions::rndSnedecordF(1,2);});}
 {current="global/defined-null/student";check(Double::isNaN(ProbabilityDistributions::rndStudentT(0)));}
 {current="global/defined-null/chi";check(Double::isNaN(ProbabilityDistributions::rndChiSquared(0)));}
 {current="global/defined-null/f";check(Double::isNaN(ProbabilityDistributions::rndSnedecordF(0,1)));}
 {current="global/defined-null/normal";check(Double::isNaN(ProbabilityDistributions::rndNormal(0,1)));}
 {current="global/defined-null/equal-uniform";check((ProbabilityDistributions::rndUniformContinuous(2,2))==(2));}
 {current="global/defined-null/negative-index";check((ProbabilityDistributions::rndIndex(-1))==(-1));}
 {current="global/restore";ProbabilityDistributions::randomGenerator=original;}
 {current="nth/defined-negative-order";check((Calculus::derivativeNth(noneF,-1,noneX,2,2,1e-5,12))==(0));}
 {current="nth/defined-existing-NaN-order";check(Double::isNaN(Calculus::derivativeNth(noneF,Double::NaN,noneX,2,2,1e-5,12)));}
 {current="callback/defined-NaN/0";check(Double::isNaN(Calculus::forwardDifference(noneF,counterArgument)));}
 {current="callback/exactly-once/0";check((counter->calls)==(1));}
 {current="callback/defined-NaN/1";check(Double::isNaN(Calculus::backwardDifference(noneF,counterArgument)));}
 {current="callback/exactly-once/1";check((counter->calls)==(2));}
 {current="callback/defined-NaN/2";check(Double::isNaN(Calculus::forwardDifference(noneF,.25,counterArgument)));}
 {current="callback/exactly-once/2";check((counter->calls)==(3));}
 {current="callback/defined-NaN/3";check(Double::isNaN(Calculus::backwardDifference(noneF,.25,counterArgument)));}
 {current="callback/exactly-once/3";check((counter->calls)==(4));}
 return checks;
}
#endif
