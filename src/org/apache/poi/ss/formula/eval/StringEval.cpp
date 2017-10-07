// Generated from /POI/java/org/apache/poi/ss/formula/eval/StringEval.java
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/formula/ptg/StringPtg.hpp>

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

org::apache::poi::ss::formula::eval::StringEval::StringEval(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::eval::StringEval::StringEval(::org::apache::poi::ss::formula::ptg::Ptg* ptg) 
    : StringEval(*static_cast< ::default_init_tag* >(0))
{
    ctor(ptg);
}

org::apache::poi::ss::formula::eval::StringEval::StringEval(::java::lang::String* value) 
    : StringEval(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

org::apache::poi::ss::formula::eval::StringEval*& org::apache::poi::ss::formula::eval::StringEval::EMPTY_INSTANCE()
{
    clinit();
    return EMPTY_INSTANCE_;
}
org::apache::poi::ss::formula::eval::StringEval* org::apache::poi::ss::formula::eval::StringEval::EMPTY_INSTANCE_;

void org::apache::poi::ss::formula::eval::StringEval::ctor(::org::apache::poi::ss::formula::ptg::Ptg* ptg)
{
    ctor(npc((java_cast< ::org::apache::poi::ss::formula::ptg::StringPtg* >(ptg)))->getValue());
}

void org::apache::poi::ss::formula::eval::StringEval::ctor(::java::lang::String* value)
{
    super::ctor();
    if(value == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"value must not be null"_j);
    }
    _value = value;
}

java::lang::String* org::apache::poi::ss::formula::eval::StringEval::getStringValue()
{
    return _value;
}

java::lang::String* org::apache::poi::ss::formula::eval::StringEval::toString()
{
    return ::java::lang::StringBuilder().append(npc(getClass())->getName())->append(u" ["_j)
        ->append(_value)
        ->append(u"]"_j)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::eval::StringEval::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.StringEval", 41);
    return c;
}

void org::apache::poi::ss::formula::eval::StringEval::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EMPTY_INSTANCE_ = new StringEval(u""_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::eval::StringEval::getClass0()
{
    return class_();
}

