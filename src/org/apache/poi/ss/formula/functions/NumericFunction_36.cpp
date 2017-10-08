// Generated from /POI/java/org/apache/poi/ss/formula/functions/NumericFunction.java
#include <org/apache/poi/ss/formula/functions/NumericFunction_36.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction.hpp>
#include <Array.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace eval
            {
typedef ::SubArray< ::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
            } // eval
        } // formula
    } // ss
} // poi

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::NumericFunction_36::NumericFunction_36()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    init();
    ctor();
}

void poi::ss::formula::functions::NumericFunction_36::init()
{
    FACTORIALS = new ::int64_tArray({
        int64_t(1LL)
        , int64_t(1LL)
        , int64_t(2LL)
        , int64_t(6LL)
        , int64_t(24LL)
        , int64_t(120LL)
        , int64_t(720LL)
        , int64_t(5040LL)
        , int64_t(40320LL)
        , int64_t(362880LL)
        , int64_t(3628800LL)
        , int64_t(39916800LL)
        , int64_t(479001600LL)
        , int64_t(6227020800LL)
        , int64_t(87178291200LL)
        , int64_t(1307674368000LL)
        , int64_t(20922789888000LL)
        , int64_t(355687428096000LL)
        , int64_t(6402373705728000LL)
        , int64_t(121645100408832000LL)
        , int64_t(2432902008176640000LL)
    });
}

constexpr double poi::ss::formula::functions::NumericFunction_36::DEFAULT_RETURN_RESULT;

bool poi::ss::formula::functions::NumericFunction_36::isDefaultResult(double x, double mean)
{
    if(x == 0 && mean == 0) {
        return true;
    }
    return false;
}

bool poi::ss::formula::functions::NumericFunction_36::checkArgument(double aDouble) /* throws(EvaluationException) */
{
    NumericFunction::checkValue(aDouble);
    if(aDouble < 0) {
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::NUM_ERROR());
    }
    return true;
}

double poi::ss::formula::functions::NumericFunction_36::probability(int32_t k, double lambda)
{
    return ::java::lang::Math::pow(lambda, k) * ::java::lang::Math::exp(-lambda) / factorial(k);
}

double poi::ss::formula::functions::NumericFunction_36::cumulativeProbability(int32_t x, double lambda)
{
    double result = int32_t(0);
    for (auto k = int32_t(0); k <= x; k++) {
        result += probability(k, lambda);
    }
    return result;
}

int64_t poi::ss::formula::functions::NumericFunction_36::factorial(int32_t n)
{
    if(n < 0 || n > 20) {
        throw new ::java::lang::IllegalArgumentException(u"Valid argument should be in the range [0..20]"_j);
    }
    return (*FACTORIALS)[n];
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::NumericFunction_36::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2)
{
    double mean = int32_t(0);
    double x = int32_t(0);
    auto cumulative = npc((java_cast< ::poi::ss::formula::eval::BoolEval* >(arg2)))->getBooleanValue();
    double result = int32_t(0);
    try {
        x = NumericFunction::singleOperandEvaluate(arg0, srcRowIndex, srcColumnIndex);
        mean = NumericFunction::singleOperandEvaluate(arg1, srcRowIndex, srcColumnIndex);
        if(isDefaultResult(x, mean)) {
            return new ::poi::ss::formula::eval::NumberEval(DEFAULT_RETURN_RESULT);
        }
        checkArgument(x);
        checkArgument(mean);
        if(cumulative) {
            result = cumulativeProbability(static_cast< int32_t >(x), mean);
        } else {
            result = probability(static_cast< int32_t >(x), mean);
        }
        NumericFunction::checkValue(result);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return new ::poi::ss::formula::eval::NumberEval(result);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::NumericFunction_36::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::NumericFunction_36::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::NumericFunction_36::getClass0()
{
    return class_();
}

