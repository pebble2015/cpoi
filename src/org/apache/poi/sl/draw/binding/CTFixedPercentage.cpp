// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTFixedPercentage.java
#include <org/apache/poi/sl/draw/binding/CTFixedPercentage.hpp>

org::apache::poi::sl::draw::binding::CTFixedPercentage::CTFixedPercentage(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTFixedPercentage::CTFixedPercentage()
    : CTFixedPercentage(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t org::apache::poi::sl::draw::binding::CTFixedPercentage::getVal()
{
    return val;
}

void org::apache::poi::sl::draw::binding::CTFixedPercentage::setVal(int32_t value)
{
    this->val = value;
}

bool org::apache::poi::sl::draw::binding::CTFixedPercentage::isSetVal()
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTFixedPercentage::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTFixedPercentage", 48);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTFixedPercentage::getClass0()
{
    return class_();
}

