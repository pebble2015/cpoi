// Generated from /POI/java/org/apache/poi/ss/formula/functions/AggregateFunction.java
#include <org/apache/poi/ss/formula/functions/AggregateFunction_9.hpp>

#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/MathX.hpp>

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

poi::ss::formula::functions::AggregateFunction_9::AggregateFunction_9()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

double poi::ss::formula::functions::AggregateFunction_9::evaluate(::doubleArray* values)
{
    return MathX::sum(values);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::AggregateFunction_9::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::AggregateFunction_9::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol)
{
    return super::evaluate(args, srcCellRow, srcCellCol);
}

java::lang::Class* poi::ss::formula::functions::AggregateFunction_9::getClass0()
{
    return class_();
}

