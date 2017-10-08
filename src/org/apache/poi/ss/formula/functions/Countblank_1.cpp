// Generated from /POI/java/org/apache/poi/ss/formula/functions/Countblank.java
#include <org/apache/poi/ss/formula/functions/Countblank_1.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::Countblank_1::Countblank_1()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

bool poi::ss::formula::functions::Countblank_1::matches(::poi::ss::formula::eval::ValueEval* valueEval)
{
    return valueEval == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::BlankEval::instance()) || (dynamic_cast< ::poi::ss::formula::eval::StringEval* >(valueEval) != nullptr && npc(u""_j)->equals(static_cast< ::java::lang::Object* >(npc((java_cast< ::poi::ss::formula::eval::StringEval* >(valueEval)))->getStringValue())));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Countblank_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::formula::functions::Countblank_1::getClass0()
{
    return class_();
}

