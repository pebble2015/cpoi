// Generated from /POI/java/org/apache/poi/hssf/util/PaneInformation.java
#include <org/apache/poi/hssf/util/PaneInformation.hpp>

poi::hssf::util::PaneInformation::PaneInformation(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::util::PaneInformation::PaneInformation(int16_t x, int16_t y, int16_t top, int16_t left, int8_t active, bool frozen) 
    : PaneInformation(*static_cast< ::default_init_tag* >(0))
{
    ctor(x,y,top,left,active,frozen);
}

void poi::hssf::util::PaneInformation::ctor(int16_t x, int16_t y, int16_t top, int16_t left, int8_t active, bool frozen)
{
    super::ctor(x, y, top, left, active, frozen);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::util::PaneInformation::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.util.PaneInformation", 40);
    return c;
}

java::lang::Class* poi::hssf::util::PaneInformation::getClass0()
{
    return class_();
}

