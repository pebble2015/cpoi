// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPolarAdjustHandle.java
#include <org/apache/poi/sl/draw/binding/CTPolarAdjustHandle.hpp>

#include <java/lang/String.hpp>
#include <org/apache/poi/sl/draw/binding/CTAdjPoint2D.hpp>

poi::sl::draw::binding::CTPolarAdjustHandle::CTPolarAdjustHandle(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTPolarAdjustHandle::CTPolarAdjustHandle()
    : CTPolarAdjustHandle(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::sl::draw::binding::CTAdjPoint2D* poi::sl::draw::binding::CTPolarAdjustHandle::getPos()
{
    return pos;
}

void poi::sl::draw::binding::CTPolarAdjustHandle::setPos(CTAdjPoint2D* value)
{
    this->pos = value;
}

bool poi::sl::draw::binding::CTPolarAdjustHandle::isSetPos()
{
    return (this->pos != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTPolarAdjustHandle::getGdRefR()
{
    return gdRefR;
}

void poi::sl::draw::binding::CTPolarAdjustHandle::setGdRefR(::java::lang::String* value)
{
    this->gdRefR = value;
}

bool poi::sl::draw::binding::CTPolarAdjustHandle::isSetGdRefR()
{
    return (this->gdRefR != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTPolarAdjustHandle::getMinR()
{
    return minR;
}

void poi::sl::draw::binding::CTPolarAdjustHandle::setMinR(::java::lang::String* value)
{
    this->minR = value;
}

bool poi::sl::draw::binding::CTPolarAdjustHandle::isSetMinR()
{
    return (this->minR != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTPolarAdjustHandle::getMaxR()
{
    return maxR;
}

void poi::sl::draw::binding::CTPolarAdjustHandle::setMaxR(::java::lang::String* value)
{
    this->maxR = value;
}

bool poi::sl::draw::binding::CTPolarAdjustHandle::isSetMaxR()
{
    return (this->maxR != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTPolarAdjustHandle::getGdRefAng()
{
    return gdRefAng;
}

void poi::sl::draw::binding::CTPolarAdjustHandle::setGdRefAng(::java::lang::String* value)
{
    this->gdRefAng = value;
}

bool poi::sl::draw::binding::CTPolarAdjustHandle::isSetGdRefAng()
{
    return (this->gdRefAng != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTPolarAdjustHandle::getMinAng()
{
    return minAng;
}

void poi::sl::draw::binding::CTPolarAdjustHandle::setMinAng(::java::lang::String* value)
{
    this->minAng = value;
}

bool poi::sl::draw::binding::CTPolarAdjustHandle::isSetMinAng()
{
    return (this->minAng != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTPolarAdjustHandle::getMaxAng()
{
    return maxAng;
}

void poi::sl::draw::binding::CTPolarAdjustHandle::setMaxAng(::java::lang::String* value)
{
    this->maxAng = value;
}

bool poi::sl::draw::binding::CTPolarAdjustHandle::isSetMaxAng()
{
    return (this->maxAng != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTPolarAdjustHandle::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTPolarAdjustHandle", 50);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTPolarAdjustHandle::getClass0()
{
    return class_();
}

