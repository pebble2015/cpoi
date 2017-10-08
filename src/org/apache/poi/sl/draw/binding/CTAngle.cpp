// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTAngle.java
#include <org/apache/poi/sl/draw/binding/CTAngle.hpp>

poi::sl::draw::binding::CTAngle::CTAngle(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTAngle::CTAngle()
    : CTAngle(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t poi::sl::draw::binding::CTAngle::getVal()
{
    return val;
}

void poi::sl::draw::binding::CTAngle::setVal(int32_t value)
{
    this->val = value;
}

bool poi::sl::draw::binding::CTAngle::isSetVal()
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTAngle::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTAngle", 38);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTAngle::getClass0()
{
    return class_();
}

