// Generated from /POI/java/org/apache/poi/ss/formula/eval/FunctionNameEval.java
#include <org/apache/poi/ss/formula/eval/FunctionNameEval.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::eval::FunctionNameEval::FunctionNameEval(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::eval::FunctionNameEval::FunctionNameEval(::java::lang::String* functionName) 
    : FunctionNameEval(*static_cast< ::default_init_tag* >(0))
{
    ctor(functionName);
}

void org::apache::poi::ss::formula::eval::FunctionNameEval::ctor(::java::lang::String* functionName)
{
    super::ctor();
    _functionName = functionName;
}

java::lang::String* org::apache::poi::ss::formula::eval::FunctionNameEval::getFunctionName()
{
    return _functionName;
}

java::lang::String* org::apache::poi::ss::formula::eval::FunctionNameEval::toString()
{
    return ::java::lang::StringBuilder().append(npc(getClass())->getName())->append(u" ["_j)
        ->append(_functionName)
        ->append(u"]"_j)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::eval::FunctionNameEval::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.FunctionNameEval", 47);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::eval::FunctionNameEval::getClass0()
{
    return class_();
}

