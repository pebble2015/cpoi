// Generated from /POI/java/org/apache/poi/ss/formula/functions/AggregateFunction.java
#include <org/apache/poi/ss/formula/functions/AggregateFunction_Percentile.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Double.hpp>
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

org::apache::poi::ss::formula::functions::AggregateFunction_Percentile::AggregateFunction_Percentile(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::AggregateFunction_Percentile::AggregateFunction_Percentile() 
    : AggregateFunction_Percentile(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ss::formula::functions::AggregateFunction_Percentile::ctor()
{
    super::ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::AggregateFunction_Percentile::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1)
{
    double dn;
    try {
        auto ve1 = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(arg1, srcRowIndex, srcColumnIndex);
        dn = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(ve1);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e1) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    if(dn < 0 || dn > 1) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
    }
    double result;
    try {
        auto ds = AggregateFunction_ValueCollector::collectValues(new ::org::apache::poi::ss::formula::eval::ValueEvalArray({arg0}));
        auto N = npc(ds)->length;
        if(N == 0 || N > 8191) {
            return ::org::apache::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
        }
        auto n = (N - int32_t(1)) * dn + int32_t(1);
        if(n == 1.0) {
            result = StatsLib::kthSmallest(ds, 1);
        } else if(::java::lang::Double::compare(n, N) == 0) {
            result = StatsLib::kthLargest(ds, 1);
        } else {
            auto k = static_cast< int32_t >(n);
            auto d = n - k;
            result = StatsLib::kthSmallest(ds, k) + d * (StatsLib::kthSmallest(ds, k + int32_t(1)) - StatsLib::kthSmallest(ds, k));
        }
        NumericFunction::checkValue(result);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return new ::org::apache::poi::ss::formula::eval::NumberEval(result);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::AggregateFunction_Percentile::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.AggregateFunction.Percentile", 64);
    return c;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::AggregateFunction_Percentile::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::AggregateFunction_Percentile::getClass0()
{
    return class_();
}

