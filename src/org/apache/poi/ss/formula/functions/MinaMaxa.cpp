// Generated from /POI/java/org/apache/poi/ss/formula/functions/MinaMaxa.java
#include <org/apache/poi/ss/formula/functions/MinaMaxa.hpp>

#include <org/apache/poi/ss/formula/functions/MinaMaxa_1.hpp>
#include <org/apache/poi/ss/formula/functions/MinaMaxa_2.hpp>

poi::ss::formula::functions::MinaMaxa::MinaMaxa(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::MinaMaxa::MinaMaxa() 
    : MinaMaxa(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::ss::formula::functions::MinaMaxa::ctor()
{
    super::ctor(true, true);
}

poi::ss::formula::functions::Function*& poi::ss::formula::functions::MinaMaxa::MAXA()
{
    clinit();
    return MAXA_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::MinaMaxa::MAXA_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::MinaMaxa::MINA()
{
    clinit();
    return MINA_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::MinaMaxa::MINA_;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::MinaMaxa::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.MinaMaxa", 44);
    return c;
}

void poi::ss::formula::functions::MinaMaxa::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        MAXA_ = new MinaMaxa_1();
        MINA_ = new MinaMaxa_2();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::functions::MinaMaxa::getClass0()
{
    return class_();
}

