// Generated from /POI/java/org/apache/poi/ss/formula/ptg/ControlPtg.java
#include <org/apache/poi/ss/formula/ptg/ControlPtg.hpp>

#include <java/lang/IllegalStateException.hpp>
#include <java/lang/String.hpp>

org::apache::poi::ss::formula::ptg::ControlPtg::ControlPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::ControlPtg::ControlPtg()
    : ControlPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool org::apache::poi::ss::formula::ptg::ControlPtg::isBaseToken()
{
    return true;
}

int8_t org::apache::poi::ss::formula::ptg::ControlPtg::getDefaultOperandClass()
{
    throw new ::java::lang::IllegalStateException(u"Control tokens are not classified"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::ControlPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.ControlPtg", 40);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::ptg::ControlPtg::getClass0()
{
    return class_();
}

