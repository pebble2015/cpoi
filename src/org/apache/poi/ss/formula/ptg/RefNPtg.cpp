// Generated from /POI/java/org/apache/poi/ss/formula/ptg/RefNPtg.java
#include <org/apache/poi/ss/formula/ptg/RefNPtg.hpp>

poi::ss::formula::ptg::RefNPtg::RefNPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::RefNPtg::RefNPtg(::poi::util::LittleEndianInput* in) 
    : RefNPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int8_t poi::ss::formula::ptg::RefNPtg::sid;

void poi::ss::formula::ptg::RefNPtg::ctor(::poi::util::LittleEndianInput* in)
{
    super::ctor(in);
}

int8_t poi::ss::formula::ptg::RefNPtg::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::RefNPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.RefNPtg", 37);
    return c;
}

java::lang::Class* poi::ss::formula::ptg::RefNPtg::getClass0()
{
    return class_();
}

