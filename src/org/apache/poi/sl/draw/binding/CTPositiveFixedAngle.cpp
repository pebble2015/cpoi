// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPositiveFixedAngle.java
#include <org/apache/poi/sl/draw/binding/CTPositiveFixedAngle.hpp>

org::apache::poi::sl::draw::binding::CTPositiveFixedAngle::CTPositiveFixedAngle(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTPositiveFixedAngle::CTPositiveFixedAngle()
    : CTPositiveFixedAngle(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t org::apache::poi::sl::draw::binding::CTPositiveFixedAngle::getVal()
{
    return val;
}

void org::apache::poi::sl::draw::binding::CTPositiveFixedAngle::setVal(int32_t value)
{
    this->val = value;
}

bool org::apache::poi::sl::draw::binding::CTPositiveFixedAngle::isSetVal()
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTPositiveFixedAngle::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTPositiveFixedAngle", 51);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTPositiveFixedAngle::getClass0()
{
    return class_();
}

