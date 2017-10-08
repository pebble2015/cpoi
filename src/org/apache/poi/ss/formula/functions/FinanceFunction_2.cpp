// Generated from /POI/java/org/apache/poi/ss/formula/functions/FinanceFunction.java
#include <org/apache/poi/ss/formula/functions/FinanceFunction_2.hpp>

#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/FinanceLib.hpp>

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

poi::ss::formula::functions::FinanceFunction_2::FinanceFunction_2()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

double poi::ss::formula::functions::FinanceFunction_2::evaluate(double rate, double arg1, double arg2, double arg3, bool type)
{
    return FinanceLib::nper(rate, arg1, arg2, arg3, type);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::FinanceFunction_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::FinanceFunction_2::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2)
{
    return super::evaluate(srcRowIndex, srcColumnIndex, arg0, arg1, arg2);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::FinanceFunction_2::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2, ::poi::ss::formula::eval::ValueEval* arg3)
{
    return super::evaluate(srcRowIndex, srcColumnIndex, arg0, arg1, arg2, arg3);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::FinanceFunction_2::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2, ::poi::ss::formula::eval::ValueEval* arg3, ::poi::ss::formula::eval::ValueEval* arg4)
{
    return super::evaluate(srcRowIndex, srcColumnIndex, arg0, arg1, arg2, arg3, arg4);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::FinanceFunction_2::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

double poi::ss::formula::functions::FinanceFunction_2::evaluate(::doubleArray* ds)
{
    return super::evaluate(ds);
}

java::lang::Class* poi::ss::formula::functions::FinanceFunction_2::getClass0()
{
    return class_();
}

