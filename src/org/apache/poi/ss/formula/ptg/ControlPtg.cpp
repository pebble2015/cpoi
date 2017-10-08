// Generated from /POI/java/org/apache/poi/ss/formula/ptg/ControlPtg.java
#include <org/apache/poi/ss/formula/ptg/ControlPtg.hpp>

#include <java/lang/IllegalStateException.hpp>
#include <java/lang/String.hpp>

poi::ss::formula::ptg::ControlPtg::ControlPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::ControlPtg::ControlPtg()
    : ControlPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool poi::ss::formula::ptg::ControlPtg::isBaseToken()
{
    return true;
}

int8_t poi::ss::formula::ptg::ControlPtg::getDefaultOperandClass()
{
    throw new ::java::lang::IllegalStateException(u"Control tokens are not classified"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::ControlPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.ControlPtg", 40);
    return c;
}

java::lang::Class* poi::ss::formula::ptg::ControlPtg::getClass0()
{
    return class_();
}

