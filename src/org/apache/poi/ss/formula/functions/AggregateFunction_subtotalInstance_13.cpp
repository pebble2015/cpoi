// Generated from /POI/java/org/apache/poi/ss/formula/functions/AggregateFunction.java
#include <org/apache/poi/ss/formula/functions/AggregateFunction_subtotalInstance_13.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction.hpp>

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

poi::ss::formula::functions::AggregateFunction_subtotalInstance_13::AggregateFunction_subtotalInstance_13(AggregateFunction* arg)
    : super(*static_cast< ::default_init_tag* >(0))
    , arg(arg)
{
    clinit();
    ctor();
}

double poi::ss::formula::functions::AggregateFunction_subtotalInstance_13::evaluate(::doubleArray* values) /* throws(EvaluationException) */
{
    return npc(arg)->evaluate(values);
}

bool poi::ss::formula::functions::AggregateFunction_subtotalInstance_13::isSubtotalCounted()
{
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::AggregateFunction_subtotalInstance_13::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::AggregateFunction_subtotalInstance_13::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol)
{
    return super::evaluate(args, srcCellRow, srcCellCol);
}

java::lang::Class* poi::ss::formula::functions::AggregateFunction_subtotalInstance_13::getClass0()
{
    return class_();
}

