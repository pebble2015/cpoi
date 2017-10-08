// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPositiveFixedPercentage.java
#include <org/apache/poi/sl/draw/binding/CTPositiveFixedPercentage.hpp>

poi::sl::draw::binding::CTPositiveFixedPercentage::CTPositiveFixedPercentage(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTPositiveFixedPercentage::CTPositiveFixedPercentage()
    : CTPositiveFixedPercentage(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t poi::sl::draw::binding::CTPositiveFixedPercentage::getVal()
{
    return val;
}

void poi::sl::draw::binding::CTPositiveFixedPercentage::setVal(int32_t value)
{
    this->val = value;
}

bool poi::sl::draw::binding::CTPositiveFixedPercentage::isSetVal()
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTPositiveFixedPercentage::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTPositiveFixedPercentage", 56);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTPositiveFixedPercentage::getClass0()
{
    return class_();
}

