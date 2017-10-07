// Generated from /POI/java/org/apache/poi/ss/formula/functions/AggregateFunction.java
#include <org/apache/poi/ss/formula/functions/AggregateFunction_LargeSmall.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction_ValueCollector.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction.hpp>
#include <org/apache/poi/ss/formula/functions/StatsLib.hpp>
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

org::apache::poi::ss::formula::functions::AggregateFunction_LargeSmall::AggregateFunction_LargeSmall(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::AggregateFunction_LargeSmall::AggregateFunction_LargeSmall(bool isLarge) 
    : AggregateFunction_LargeSmall(*static_cast< ::default_init_tag* >(0))
{
    ctor(isLarge);
}

void org::apache::poi::ss::formula::functions::AggregateFunction_LargeSmall::ctor(bool isLarge)
{
    super::ctor();
    _isLarge = isLarge;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::AggregateFunction_LargeSmall::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1)
{
    double dn;
    try {
        auto ve1 = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(arg1, srcRowIndex, srcColumnIndex);
        dn = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(ve1);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e1) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    if(dn < 1.0) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
    }
    auto k = static_cast< int32_t >(::java::lang::Math::ceil(dn));
    double result;
    try {
        auto ds = AggregateFunction_ValueCollector::collectValues(new ::org::apache::poi::ss::formula::eval::ValueEvalArray({arg0}));
        if(k > npc(ds)->length) {
            return ::org::apache::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
        }
        result = _isLarge ? StatsLib::kthLargest(ds, k) : StatsLib::kthSmallest(ds, k);
        NumericFunction::checkValue(result);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return new ::org::apache::poi::ss::formula::eval::NumberEval(result);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::AggregateFunction_LargeSmall::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.AggregateFunction.LargeSmall", 64);
    return c;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::AggregateFunction_LargeSmall::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::AggregateFunction_LargeSmall::getClass0()
{
    return class_();
}

