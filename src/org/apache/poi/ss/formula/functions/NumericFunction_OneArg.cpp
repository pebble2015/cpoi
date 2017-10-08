// Generated from /POI/java/org/apache/poi/ss/formula/functions/NumericFunction.java
#include <org/apache/poi/ss/formula/functions/NumericFunction_OneArg.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

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

poi::ss::formula::functions::NumericFunction_OneArg::NumericFunction_OneArg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::NumericFunction_OneArg::NumericFunction_OneArg() 
    : NumericFunction_OneArg(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::ss::formula::functions::NumericFunction_OneArg::ctor()
{
    super::ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::NumericFunction_OneArg::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0)
{
    double result;
    try {
        auto d = NumericFunction::singleOperandEvaluate(arg0, srcRowIndex, srcColumnIndex);
        result = evaluate(d);
        NumericFunction::checkValue(result);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return new ::poi::ss::formula::eval::NumberEval(result);
}

double poi::ss::formula::functions::NumericFunction_OneArg::eval(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    if(npc(args)->length != 1) {
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
    }
    auto d = NumericFunction::singleOperandEvaluate((*args)[int32_t(0)], srcCellRow, srcCellCol);
    return evaluate(d);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::NumericFunction_OneArg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.NumericFunction.OneArg", 58);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::NumericFunction_OneArg::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::NumericFunction_OneArg::getClass0()
{
    return class_();
}

