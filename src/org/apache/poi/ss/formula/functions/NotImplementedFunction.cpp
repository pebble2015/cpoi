// Generated from /POI/java/org/apache/poi/ss/formula/functions/NotImplementedFunction.java
#include <org/apache/poi/ss/formula/functions/NotImplementedFunction.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/eval/NotImplementedFunctionException.hpp>

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

poi::ss::formula::functions::NotImplementedFunction::NotImplementedFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::NotImplementedFunction::NotImplementedFunction() 
    : NotImplementedFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::NotImplementedFunction::NotImplementedFunction(::java::lang::String* name) 
    : NotImplementedFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

void poi::ss::formula::functions::NotImplementedFunction::ctor()
{
    super::ctor();
    _functionName = npc(getClass())->getName();
}

void poi::ss::formula::functions::NotImplementedFunction::ctor(::java::lang::String* name)
{
    super::ctor();
    _functionName = name;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::NotImplementedFunction::evaluate(::poi::ss::formula::eval::ValueEvalArray* operands, int32_t srcRow, int32_t srcCol)
{
    throw new ::poi::ss::formula::eval::NotImplementedFunctionException(_functionName);
}

java::lang::String* poi::ss::formula::functions::NotImplementedFunction::getFunctionName()
{
    return _functionName;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::NotImplementedFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.NotImplementedFunction", 58);
    return c;
}

java::lang::Class* poi::ss::formula::functions::NotImplementedFunction::getClass0()
{
    return class_();
}

