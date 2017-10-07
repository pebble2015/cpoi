// Generated from /POI/java/org/apache/poi/ss/formula/eval/BoolEval.java
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>

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

org::apache::poi::ss::formula::eval::BoolEval::BoolEval(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::eval::BoolEval::BoolEval(bool value) 
    : BoolEval(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

org::apache::poi::ss::formula::eval::BoolEval*& org::apache::poi::ss::formula::eval::BoolEval::FALSE()
{
    clinit();
    return FALSE_;
}
org::apache::poi::ss::formula::eval::BoolEval* org::apache::poi::ss::formula::eval::BoolEval::FALSE_;

org::apache::poi::ss::formula::eval::BoolEval*& org::apache::poi::ss::formula::eval::BoolEval::TRUE()
{
    clinit();
    return TRUE_;
}
org::apache::poi::ss::formula::eval::BoolEval* org::apache::poi::ss::formula::eval::BoolEval::TRUE_;

org::apache::poi::ss::formula::eval::BoolEval* org::apache::poi::ss::formula::eval::BoolEval::valueOf(bool b)
{
    clinit();
    return b ? TRUE_ : FALSE_;
}

void org::apache::poi::ss::formula::eval::BoolEval::ctor(bool value)
{
    super::ctor();
    _value = value;
}

bool org::apache::poi::ss::formula::eval::BoolEval::getBooleanValue()
{
    return _value;
}

double org::apache::poi::ss::formula::eval::BoolEval::getNumberValue()
{
    return _value ? int32_t(1) : int32_t(0);
}

java::lang::String* org::apache::poi::ss::formula::eval::BoolEval::getStringValue()
{
    return _value ? u"TRUE"_j : u"FALSE"_j;
}

java::lang::String* org::apache::poi::ss::formula::eval::BoolEval::toString()
{
    return ::java::lang::StringBuilder().append(npc(getClass())->getName())->append(u" ["_j)
        ->append(getStringValue())
        ->append(u"]"_j)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::eval::BoolEval::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.BoolEval", 39);
    return c;
}

void org::apache::poi::ss::formula::eval::BoolEval::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        FALSE_ = new BoolEval(false);
        TRUE_ = new BoolEval(true);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::eval::BoolEval::getClass0()
{
    return class_();
}

