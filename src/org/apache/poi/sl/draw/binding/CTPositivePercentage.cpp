// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPositivePercentage.java
#include <org/apache/poi/sl/draw/binding/CTPositivePercentage.hpp>

poi::sl::draw::binding::CTPositivePercentage::CTPositivePercentage(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTPositivePercentage::CTPositivePercentage()
    : CTPositivePercentage(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t poi::sl::draw::binding::CTPositivePercentage::getVal()
{
    return val;
}

void poi::sl::draw::binding::CTPositivePercentage::setVal(int32_t value)
{
    this->val = value;
}

bool poi::sl::draw::binding::CTPositivePercentage::isSetVal()
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTPositivePercentage::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTPositivePercentage", 51);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTPositivePercentage::getClass0()
{
    return class_();
}

