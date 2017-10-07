// Generated from /POI/java/org/apache/poi/ss/formula/eval/BlankEval.java
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>

org::apache::poi::ss::formula::eval::BlankEval::BlankEval(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::eval::BlankEval::BlankEval() 
    : BlankEval(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::eval::BlankEval*& org::apache::poi::ss::formula::eval::BlankEval::instance()
{
    clinit();
    return instance_;
}
org::apache::poi::ss::formula::eval::BlankEval* org::apache::poi::ss::formula::eval::BlankEval::instance_;

void org::apache::poi::ss::formula::eval::BlankEval::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::eval::BlankEval::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.BlankEval", 40);
    return c;
}

void org::apache::poi::ss::formula::eval::BlankEval::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new BlankEval();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::eval::BlankEval::getClass0()
{
    return class_();
}

