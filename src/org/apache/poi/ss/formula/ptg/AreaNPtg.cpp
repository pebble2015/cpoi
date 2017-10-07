// Generated from /POI/java/org/apache/poi/ss/formula/ptg/AreaNPtg.java
#include <org/apache/poi/ss/formula/ptg/AreaNPtg.hpp>

org::apache::poi::ss::formula::ptg::AreaNPtg::AreaNPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::AreaNPtg::AreaNPtg(::org::apache::poi::util::LittleEndianInput* in) 
    : AreaNPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::ss::formula::ptg::AreaNPtg::sid;

void org::apache::poi::ss::formula::ptg::AreaNPtg::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    super::ctor(in);
}

int8_t org::apache::poi::ss::formula::ptg::AreaNPtg::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::AreaNPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.AreaNPtg", 38);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::ptg::AreaNPtg::getClass0()
{
    return class_();
}

