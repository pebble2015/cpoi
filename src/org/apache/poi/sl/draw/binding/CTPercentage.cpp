// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPercentage.java
#include <org/apache/poi/sl/draw/binding/CTPercentage.hpp>

poi::sl::draw::binding::CTPercentage::CTPercentage(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTPercentage::CTPercentage()
    : CTPercentage(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t poi::sl::draw::binding::CTPercentage::getVal()
{
    return val;
}

void poi::sl::draw::binding::CTPercentage::setVal(int32_t value)
{
    this->val = value;
}

bool poi::sl::draw::binding::CTPercentage::isSetVal()
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTPercentage::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTPercentage", 43);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTPercentage::getClass0()
{
    return class_();
}

