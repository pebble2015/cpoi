// Generated from /POI/java/org/apache/poi/ss/formula/functions/Fixed4ArgFunction.java
#include <org/apache/poi/ss/formula/functions/Fixed4ArgFunction.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
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

poi::ss::formula::functions::Fixed4ArgFunction::Fixed4ArgFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Fixed4ArgFunction::Fixed4ArgFunction()
    : Fixed4ArgFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Fixed4ArgFunction::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    if(npc(args)->length != 4) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    return evaluate(srcRowIndex, srcColumnIndex, (*args)[int32_t(0)], (*args)[int32_t(1)], (*args)[int32_t(2)], (*args)[int32_t(3)]);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Fixed4ArgFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Fixed4ArgFunction", 53);
    return c;
}

java::lang::Class* poi::ss::formula::functions::Fixed4ArgFunction::getClass0()
{
    return class_();
}

