// Generated from /POI/java/org/apache/poi/ss/formula/functions/FinanceFunction.java
#include <org/apache/poi/ss/formula/functions/FinanceFunction_2.hpp>

#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/FinanceLib.hpp>

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

org::apache::poi::ss::formula::functions::FinanceFunction_2::FinanceFunction_2()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

double org::apache::poi::ss::formula::functions::FinanceFunction_2::evaluate(double rate, double arg1, double arg2, double arg3, bool type)
{
    return FinanceLib::nper(rate, arg1, arg2, arg3, type);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::FinanceFunction_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::FinanceFunction_2::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1, ::org::apache::poi::ss::formula::eval::ValueEval* arg2)
{
    return super::evaluate(srcRowIndex, srcColumnIndex, arg0, arg1, arg2);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::FinanceFunction_2::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1, ::org::apache::poi::ss::formula::eval::ValueEval* arg2, ::org::apache::poi::ss::formula::eval::ValueEval* arg3)
{
    return super::evaluate(srcRowIndex, srcColumnIndex, arg0, arg1, arg2, arg3);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::FinanceFunction_2::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1, ::org::apache::poi::ss::formula::eval::ValueEval* arg2, ::org::apache::poi::ss::formula::eval::ValueEval* arg3, ::org::apache::poi::ss::formula::eval::ValueEval* arg4)
{
    return super::evaluate(srcRowIndex, srcColumnIndex, arg0, arg1, arg2, arg3, arg4);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::FinanceFunction_2::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

double org::apache::poi::ss::formula::functions::FinanceFunction_2::evaluate(::doubleArray* ds)
{
    return super::evaluate(ds);
}

java::lang::Class* org::apache::poi::ss::formula::functions::FinanceFunction_2::getClass0()
{
    return class_();
}

