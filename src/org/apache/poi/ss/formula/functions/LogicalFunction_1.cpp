// Generated from /POI/java/org/apache/poi/ss/formula/functions/LogicalFunction.java
#include <org/apache/poi/ss/formula/functions/LogicalFunction_1.hpp>

#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

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

poi::ss::formula::functions::LogicalFunction_1::LogicalFunction_1()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

bool poi::ss::formula::functions::LogicalFunction_1::evaluate(::poi::ss::formula::eval::ValueEval* arg)
{
    return dynamic_cast< ::poi::ss::formula::eval::BoolEval* >(arg) != nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::LogicalFunction_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::LogicalFunction_1::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0)
{
    return super::evaluate(srcRowIndex, srcColumnIndex, arg0);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::LogicalFunction_1::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::LogicalFunction_1::getClass0()
{
    return class_();
}

