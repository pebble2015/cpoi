// Generated from /POI/java/org/apache/poi/ss/formula/functions/MinaMaxa.java
#include <org/apache/poi/ss/formula/functions/MinaMaxa_2.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/MathX.hpp>
#include <Array.hpp>

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

poi::ss::formula::functions::MinaMaxa_2::MinaMaxa_2()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

double poi::ss::formula::functions::MinaMaxa_2::evaluate(::doubleArray* values)
{
    return npc(values)->length > 0 ? MathX::min(values) : static_cast< double >(int32_t(0));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::MinaMaxa_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::MinaMaxa_2::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol)
{
    return super::evaluate(args, srcCellRow, srcCellCol);
}

java::lang::Class* poi::ss::formula::functions::MinaMaxa_2::getClass0()
{
    return class_();
}

