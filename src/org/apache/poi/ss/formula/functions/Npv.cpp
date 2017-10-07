// Generated from /POI/java/org/apache/poi/ss/formula/functions/Npv.java
#include <org/apache/poi/ss/formula/functions/Npv.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction_ValueCollector.hpp>
#include <org/apache/poi/ss/formula/functions/FinanceLib.hpp>
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

org::apache::poi::ss::formula::functions::Npv::Npv(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Npv::Npv()
    : Npv(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Npv::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    auto nArgs = npc(args)->length;
    if(nArgs < 2) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    try {
        auto rate = NumericFunction::singleOperandEvaluate((*args)[int32_t(0)], srcRowIndex, srcColumnIndex);
        auto vargs = new ::org::apache::poi::ss::formula::eval::ValueEvalArray(npc(args)->length - int32_t(1));
        ::java::lang::System::arraycopy(args, 1, vargs, 0, npc(vargs)->length);
        auto values = AggregateFunction_ValueCollector::collectValues(vargs);
        auto result = FinanceLib::npv(rate, values);
        NumericFunction::checkValue(result);
        return new ::org::apache::poi::ss::formula::eval::NumberEval(result);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Npv::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Npv", 39);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::Npv::getClass0()
{
    return class_();
}

