// Generated from /POI/java/org/apache/poi/ss/formula/functions/Sumifs.java
#include <org/apache/poi/ss/formula/functions/Sumifs.hpp>

org::apache::poi::ss::formula::functions::Sumifs::Sumifs(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Sumifs::Sumifs()
    : Sumifs(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::functions::FreeRefFunction*& org::apache::poi::ss::formula::functions::Sumifs::instance()
{
    clinit();
    return instance_;
}
org::apache::poi::ss::formula::functions::FreeRefFunction* org::apache::poi::ss::formula::functions::Sumifs::instance_;

bool org::apache::poi::ss::formula::functions::Sumifs::hasInitialRange()
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Sumifs::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Sumifs", 42);
    return c;
}

void org::apache::poi::ss::formula::functions::Sumifs::clinit()
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

java::lang::Class* org::apache::poi::ss::formula::functions::Sumifs::getClass0()
{
    return class_();
}

