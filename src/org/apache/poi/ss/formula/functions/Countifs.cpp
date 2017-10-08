// Generated from /POI/java/org/apache/poi/ss/formula/functions/Countifs.java
#include <org/apache/poi/ss/formula/functions/Countifs.hpp>

poi::ss::formula::functions::Countifs::Countifs(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Countifs::Countifs()
    : Countifs(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::FreeRefFunction*& poi::ss::formula::functions::Countifs::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::functions::FreeRefFunction* poi::ss::formula::functions::Countifs::instance_;

bool poi::ss::formula::functions::Countifs::hasInitialRange()
{
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Countifs::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Countifs", 44);
    return c;
}

void poi::ss::formula::functions::Countifs::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new Countifs();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::functions::Countifs::getClass0()
{
    return class_();
}

