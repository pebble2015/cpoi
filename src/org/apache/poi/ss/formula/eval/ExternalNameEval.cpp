// Generated from /POI/java/org/apache/poi/ss/formula/eval/ExternalNameEval.java
#include <org/apache/poi/ss/formula/eval/ExternalNameEval.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/EvaluationName.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::eval::ExternalNameEval::ExternalNameEval(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::eval::ExternalNameEval::ExternalNameEval(::poi::ss::formula::EvaluationName* name) 
    : ExternalNameEval(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

void poi::ss::formula::eval::ExternalNameEval::ctor(::poi::ss::formula::EvaluationName* name)
{
    super::ctor();
    _name = name;
}

poi::ss::formula::EvaluationName* poi::ss::formula::eval::ExternalNameEval::getName()
{
    return _name;
}

java::lang::String* poi::ss::formula::eval::ExternalNameEval::toString()
{
    return ::java::lang::StringBuilder().append(npc(getClass())->getName())->append(u" ["_j)
        ->append(npc(_name)->getNameText())
        ->append(u"]"_j)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::eval::ExternalNameEval::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.ExternalNameEval", 47);
    return c;
}

java::lang::Class* poi::ss::formula::eval::ExternalNameEval::getClass0()
{
    return class_();
}

