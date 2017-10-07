// Generated from /POI/java/org/apache/poi/ss/formula/functions/Irr.java
#include <org/apache/poi/ss/formula/functions/Irr.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction_ValueCollector.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace eval
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
                    } // eval
                } // formula
            } // ss
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::functions::Irr::Irr(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Irr::Irr()
    : Irr(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Irr::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    if(npc(args)->length == 0 || npc(args)->length > 2) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    try {
        auto values = AggregateFunction_ValueCollector::collectValues(new ::org::apache::poi::ss::formula::eval::ValueEvalArray({(*args)[int32_t(0)]}));
        double guess;
        if(npc(args)->length == 2) {
            guess = NumericFunction::singleOperandEvaluate((*args)[int32_t(1)], srcRowIndex, srcColumnIndex);
        } else {
            guess = 0.1;
        }
        auto result = irr(values, guess);
        NumericFunction::checkValue(result);
        return new ::org::apache::poi::ss::formula::eval::NumberEval(result);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

double org::apache::poi::ss::formula::functions::Irr::irr(::doubleArray* income)
{
    clinit();
    return irr(income, 0.1);
}

double org::apache::poi::ss::formula::functions::Irr::irr(::doubleArray* values, double guess)
{
    clinit();
    auto const maxIterationCount = int32_t(20);
    auto const absoluteAccuracy = 1.0E-7;
    auto x0 = guess;
    double x1;
    auto i = int32_t(0);
    while (i < maxIterationCount) {
        auto const factor = 1.0 + x0;
        auto k = int32_t(0);
        auto fValue = (*values)[k];
        double fDerivative = int32_t(0);
        for (auto denominator = factor; ++k < npc(values)->length; ) {
            auto const value = (*values)[k];
            fValue += value / denominator;
            denominator *= factor;
            fDerivative -= k * value / denominator;
        }
        x1 = x0 - fValue / fDerivative;
        if(::java::lang::Math::abs(x1 - x0) <= absoluteAccuracy) {
            return x1;
        }
        x0 = x1;
        ++i;
    }
    return ::java::lang::Double::NaN;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Irr::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Irr", 39);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::Irr::getClass0()
{
    return class_();
}

