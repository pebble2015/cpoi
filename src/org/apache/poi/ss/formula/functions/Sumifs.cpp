// Generated from /POI/java/org/apache/poi/ss/formula/functions/Sumifs.java
#include <org/apache/poi/ss/formula/functions/Sumifs.hpp>

poi::ss::formula::functions::Sumifs::Sumifs(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Sumifs::Sumifs()
    : Sumifs(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::FreeRefFunction*& poi::ss::formula::functions::Sumifs::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::functions::FreeRefFunction* poi::ss::formula::functions::Sumifs::instance_;

bool poi::ss::formula::functions::Sumifs::hasInitialRange()
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Sumifs::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Sumifs", 42);
    return c;
}

void poi::ss::formula::functions::Sumifs::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new Sumifs();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::functions::Sumifs::getClass0()
{
    return class_();
}

