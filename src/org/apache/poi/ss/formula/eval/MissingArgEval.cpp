// Generated from /POI/java/org/apache/poi/ss/formula/eval/MissingArgEval.java
#include <org/apache/poi/ss/formula/eval/MissingArgEval.hpp>

poi::ss::formula::eval::MissingArgEval::MissingArgEval(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::eval::MissingArgEval::MissingArgEval() 
    : MissingArgEval(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::MissingArgEval*& poi::ss::formula::eval::MissingArgEval::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::eval::MissingArgEval* poi::ss::formula::eval::MissingArgEval::instance_;

void poi::ss::formula::eval::MissingArgEval::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::eval::MissingArgEval::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.MissingArgEval", 45);
    return c;
}

void poi::ss::formula::eval::MissingArgEval::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new MissingArgEval();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::eval::MissingArgEval::getClass0()
{
    return class_();
}

