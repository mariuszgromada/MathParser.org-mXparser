#ifndef MXPARSER_TEST_NUMERIC_RUNTIME_CHECKS_HPP
#define MXPARSER_TEST_NUMERIC_RUNTIME_CHECKS_HPP
#include "org/mariuszgromada/math/mxparser.hpp"
#include "NullableNumericalRuntimeChecks.hpp"
#include <cmath>
#include <cstdint>
#include <cstring>
#include <functional>
#include <limits>
#include <stdexcept>
#include <string>

// Public native behavior checks shared by Catch2 and the standalone UBSan driver.
// Golden bit values come from the retained canonical Java runtime observations.
inline unsigned numericRuntimeChecks(const std::function<void(bool)>& assertion) {
    using namespace org::mariuszgromada::math::mxparser;
    using namespace org::mariuszgromada::math::mxparser::mathcollection;
    using namespace org::mariuszgromada::math::mxparser::wrapper;
    unsigned checks=0;
    const auto check=[&](bool ok){++checks;assertion(ok);};
    const auto invalid=[&](const std::function<void()>& action){
        bool caught=false;
        try { action(); } catch(const std::invalid_argument&) {caught=true;}
        check(caught);
    };
    mXparser::resetCancelCurrentCalculationFlag();
    mXparser::setDefaultOptions();
    for(double bad:{Double::POSITIVE_INFINITY,Double::NEGATIVE_INFINITY,1e40}) {
        invalid([&]{NumberTheory::primeTest(bad);});
        invalid([&]{NumberTheory::primeCount(bad);});
        invalid([&]{ProbabilityDistributions::rndInteger(bad,2.0,new_Random());});
        invalid([&]{ProbabilityDistributions::rndInteger(2.0,bad,new_Random());});
    }
    check(NumberTheory::primeCount(Double::NaN)==0.0);
    check(Double::isNaN(NumberTheory::primeTest(Double::NaN)));
    check(Double::isNaN(ProbabilityDistributions::rndInteger(Double::NaN,2.0,new_Random())));
    invalid([]{SpecialFunctions::gamma(1e40);});
    invalid([]{SpecialFunctions::logGamma(1e40);});
    invalid([]{SpecialFunctions::logGamma(-1e40);});
    invalid([]{SpecialFunctions::sgnGamma(-1e40);});
    invalid([]{SpecialFunctions::incompleteBeta(1e40,2.0,0.5);});
    invalid([]{SpecialFunctions::incompleteBeta(2.0,1e40,0.5);});
    invalid([]{NumberTheory::numberOfDigits(1e40,1.0);});
    invalid([]{NumberTheory::convDecimal2OthBase(1e40,1);});
    invalid([]{NumberTheory::convDecimal2OthBase(Double::POSITIVE_INFINITY,16);});
    invalid([]{NumberTheory::convDecimal2OthBase(Double::NEGATIVE_INFINITY,16);});
    const auto digits=new_double(1);(*digits)(0)=1.0;
    invalid([&]{NumberTheory::convOthBase2Decimal(1e40,digits);});
    (*digits)(0)=1e40;
    invalid([&]{NumberTheory::convOthBase2Decimal(2.0,digits);});
    check(NumberTheory::primeTest(13.9)==1.0);
    check(NumberTheory::primeCount(10.9)==4.0);
    check(ProbabilityDistributions::rndInteger(-2147483648.75,-2147483648.75,new_Random())==-2147483648.0);
    check(ProbabilityDistributions::rndInteger(2147483647.75,2147483647.75,new_Random())==2147483647.0);
    check(SpecialFunctions::gamma(5.0)==24.0);
    check(NumberTheory::numberOfDigits(12.75,1.0)==12.0);
    check(*NumberTheory::convDecimal2OthBase(3.0,1)==UTF("111"));
    check(*StringUtils::numberToHexString(Double::NaN)==UTF("0"));
    check(*StringUtils::numberToHexString(Double::POSITIVE_INFINITY)==UTF("7fffffffffffffff"));
    check(*StringUtils::numberToHexString(Double::NEGATIVE_INFINITY)==UTF("8000000000000000"));
    struct BitRow {const char* text;double input;std::uint64_t expected;};
    const BitRow bits[]={
        {"@~x", Double::NaN, 0xbff0000000000000ULL},
        {"x@&1", Double::NaN, 0x0ULL},
        {"x@|1", Double::NaN, 0x3ff0000000000000ULL},
        {"x@^1", Double::NaN, 0x3ff0000000000000ULL},
        {"x@~&1", Double::NaN, 0xbff0000000000000ULL},
        {"x@~|1", Double::NaN, 0xc000000000000000ULL},
        {"x@~^1", Double::NaN, 0xc000000000000000ULL},
        {"@~x", Double::POSITIVE_INFINITY, 0xc3e0000000000000ULL},
        {"x@&1", Double::POSITIVE_INFINITY, 0x3ff0000000000000ULL},
        {"x@|1", Double::POSITIVE_INFINITY, 0x43e0000000000000ULL},
        {"x@^1", Double::POSITIVE_INFINITY, 0x43e0000000000000ULL},
        {"x@~&1", Double::POSITIVE_INFINITY, 0xc000000000000000ULL},
        {"x@~|1", Double::POSITIVE_INFINITY, 0xc3e0000000000000ULL},
        {"x@~^1", Double::POSITIVE_INFINITY, 0xc3e0000000000000ULL},
        {"@~x", Double::NEGATIVE_INFINITY, 0x43e0000000000000ULL},
        {"x@&1", Double::NEGATIVE_INFINITY, 0x0ULL},
        {"x@|1", Double::NEGATIVE_INFINITY, 0xc3e0000000000000ULL},
        {"x@^1", Double::NEGATIVE_INFINITY, 0xc3e0000000000000ULL},
        {"x@~&1", Double::NEGATIVE_INFINITY, 0xbff0000000000000ULL},
        {"x@~|1", Double::NEGATIVE_INFINITY, 0x43e0000000000000ULL},
        {"x@~^1", Double::NEGATIVE_INFINITY, 0x43e0000000000000ULL},
        {"@~x", 1.0E40, 0xc3e0000000000000ULL},
        {"x@&1", 1.0E40, 0x3ff0000000000000ULL},
        {"x@|1", 1.0E40, 0x43e0000000000000ULL},
        {"x@^1", 1.0E40, 0x43e0000000000000ULL},
        {"x@~&1", 1.0E40, 0xc000000000000000ULL},
        {"x@~|1", 1.0E40, 0xc3e0000000000000ULL},
        {"x@~^1", 1.0E40, 0xc3e0000000000000ULL},
        {"1@<<64", 0.0, 0x3ff0000000000000ULL},
        {"1@<<(-1)", 0.0, 0xc3e0000000000000ULL},
        {"(-1)@<<1", 0.0, 0xc000000000000000ULL},
        {"1@>>64", 0.0, 0x3ff0000000000000ULL},
        {"1@>>(-1)", 0.0, 0x0ULL},
    };
    for(const auto& row:bits) {
        auto x=new_Argument("x",row.input);
        const StringPtr text=S(row.text);
        const auto definitions=new_List<PrimitiveElementPtr>();definitions->add(x);
        const auto e=new_Expression(text,definitions);
        check(e->checkSyntax());
        for(int i=0;i<2;++i) {
            const double result=e->calculate();
            std::uint64_t actual;std::memcpy(&actual,&result,sizeof(actual));
            check(actual==row.expected);
        }
    }
    const auto round=new_Expression("round(1.25,1e40)");
    check(round->checkSyntax());check(round->calculate()==1.25);check(round->calculate()==1.25);
    const auto function=new_Function("castProbe(...)=par(1e40)");
    check(function->checkSyntax());check(Double::isNaN(function->calculate(1.0,2.0)));
    const auto negative=new_Function("negativeProbe(...)=par(-2147483648)");
    check(negative->checkSyntax());check(Double::isNaN(negative->calculate(1.0,2.0)));
    const auto recursive=new_RecursiveArgument("r(n)=n");
    recursive->addBaseCase(0,42);
    for(double bad:{Double::NaN,Double::POSITIVE_INFINITY,Double::NEGATIVE_INFINITY,1e40}) {
        invalid([&]{recursive->getArgumentValue(bad);});
        check(recursive->getArgumentValue(0)==42);
    }
    auto values=new_Long(3);(*values)(0)=12;(*values)(1)=8;(*values)(2)=6;
    mXparser::cancelCurrentCalculation();
    check(NumberTheory::gcd(Long(12),Long(8))==0);
    check(static_cast<Long(*)(const ArrayPtr<Long>&)>(&NumberTheory::gcd)(values)==0);
    check(static_cast<Long(*)(const ArrayPtr<Long>&)>(&NumberTheory::lcm)(values)==0);
    check(NumberTheory::primeCount(Long(3))==0);
    check(NumberTheory::numberOfDigits(Long(12),Long(2))==0);
    check(NumberTheory::digitAtPosition(Long(12),1,10)==0);
    mXparser::resetCancelCurrentCalculationFlag();
    check(NumberTheory::gcd(Long(12),Long(8))==4);
    const Long minimum=(std::numeric_limits<Long>::min)(),maximum=(std::numeric_limits<Long>::max)();
    const auto nativeInvalid=[&](const char* method,const std::function<void()>& action){
        bool caught=false;
        try {action();} catch(const std::invalid_argument& error) {
            caught=std::string(error.what()).find(std::string("NumberTheory.")+method+" requires ")==0;
        }
        check(caught);
    };
    nativeInvalid("gcd",[&]{NumberTheory::gcd(minimum,Long{1});});
    nativeInvalid("gcd",[&]{NumberTheory::gcd(Long{1},minimum);});
    nativeInvalid("lcm",[&]{NumberTheory::lcm(minimum,Long{1});});
    nativeInvalid("lcm",[&]{NumberTheory::lcm(Long{1},minimum);});
    const auto singleton=new_Long(1);(*singleton)(0)=minimum;
    nativeInvalid("gcd",[&]{static_cast<Long(*)(const ArrayPtr<Long>&)>(&NumberTheory::gcd)(singleton);});
    nativeInvalid("lcm",[&]{static_cast<Long(*)(const ArrayPtr<Long>&)>(&NumberTheory::lcm)(singleton);});
    nativeInvalid("numberOfDigits",[&]{NumberTheory::numberOfDigits(minimum);});
    nativeInvalid("numberOfDigits",[&]{NumberTheory::numberOfDigits(minimum,Long{2});});
    nativeInvalid("digitAtPosition",[&]{NumberTheory::digitAtPosition(minimum,1,10);});
    nativeInvalid("primeFactors",[&]{NumberTheory::primeFactors(minimum);});
    nativeInvalid("lcm",[&]{NumberTheory::lcm(maximum,maximum);});
    nativeInvalid("lcm",[&]{NumberTheory::lcm(maximum,Long{2});});
    mXparser::cancelCurrentCalculation();
    nativeInvalid("lcm",[]{NumberTheory::lcm(Long{12},Long{8});});
    mXparser::resetCancelCurrentCalculationFlag();
    check(NumberTheory::lcm(maximum/2,Long{2})==maximum-1);
    check(NumberTheory::gcd(maximum,maximum-1)==1);
    for(int position:{0,1}) {
        check(NumberTheory::digitAtPosition(Long{0},position,10)==0);
        const double digit=NumberTheory::digitAtPosition(0.0,static_cast<double>(position),10.0);
        check(digit==0.0&&!std::signbit(digit));
    }
    const auto outside=[&](const std::function<void()>& action){
        bool caught=false;
        try {action();} catch(const std::out_of_range& error) {
            caught=std::string(error.what())=="NumberTheory.digitAtPosition digit index outside the native array";
        }
        check(caught);
    };
    for(Long magnitude:{Long{10000000000LL},Long{1000000000000LL},maximum})for(Long value:{magnitude,-magnitude}) {
        outside([&]{NumberTheory::digitAtPosition(value,1,10);});
        check(NumberTheory::digitAtPosition(Long{12345},1,10)==1);
        outside([&]{NumberTheory::digitAtPosition(value,1);});
        check(NumberTheory::digitAtPosition(Long{12345},1)==1);
    }
    check(NumberTheory::digitAtPosition(Long{2147483648LL},1,1)==-1);
    nullableNumericalRuntimeChecks(check);
    mXparser::setDefaultOptions();
    return checks;
}
#endif
