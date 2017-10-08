// Generated from /POI/java/org/apache/poi/ss/formula/functions/NumericFunction.java
#include <org/apache/poi/ss/formula/functions/NumericFunction_Log.hpp>

#include <java/lang/Double.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction.hpp>

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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::NumericFunction_Log::NumericFunction_Log(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::NumericFunction_Log::NumericFunction_Log() 
    : NumericFunction_Log(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::ss::formula::functions::NumericFunction_Log::ctor()
{
    super::ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::NumericFunction_Log::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0)
{
    double result;
    try {
        auto d0 = NumericFunction::singleOperandEvaluate(arg0, srcRowIndex, srcColumnIndex);
        result = ::java::lang::Math::log(d0) / NumericFunction::LOG_10_TO_BASE_e();
        NumericFunction::checkValue(result);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return new ::poi::ss::formula::eval::NumberEval(result);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::NumericFunction_Log::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1)
{
    double result;
    try {
        auto d0 = NumericFunction::singleOperandEvaluate(arg0, srcRowIndex, srcColumnIndex);
        auto d1 = NumericFunction::singleOperandEvaluate(arg1, srcRowIndex, srcColumnIndex);
        auto logE = ::java::lang::Math::log(d0);
        auto base = d1;
        if(::java::lang::Double::compare(base, ::java::lang::Math::E) == 0) {
            result = logE;
        } else {
            result = logE / ::java::lang::Math::log(base);
        }
        NumericFunction::checkValue(result);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return new ::poi::ss::formula::eval::NumberEval(result);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::NumericFunction_Log::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.NumericFunction.Log", 55);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::NumericFunction_Log::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::NumericFunction_Log::getClass0()
{
    return class_();
}

