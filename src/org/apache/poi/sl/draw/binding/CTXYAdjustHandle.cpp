// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTXYAdjustHandle.java
#include <org/apache/poi/sl/draw/binding/CTXYAdjustHandle.hpp>

#include <java/lang/String.hpp>
#include <org/apache/poi/sl/draw/binding/CTAdjPoint2D.hpp>

poi::sl::draw::binding::CTXYAdjustHandle::CTXYAdjustHandle(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTXYAdjustHandle::CTXYAdjustHandle()
    : CTXYAdjustHandle(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::sl::draw::binding::CTAdjPoint2D* poi::sl::draw::binding::CTXYAdjustHandle::getPos()
{
    return pos;
}

void poi::sl::draw::binding::CTXYAdjustHandle::setPos(CTAdjPoint2D* value)
{
    this->pos = value;
}

bool poi::sl::draw::binding::CTXYAdjustHandle::isSetPos()
{
    return (this->pos != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTXYAdjustHandle::getGdRefX()
{
    return gdRefX;
}

void poi::sl::draw::binding::CTXYAdjustHandle::setGdRefX(::java::lang::String* value)
{
    this->gdRefX = value;
}

bool poi::sl::draw::binding::CTXYAdjustHandle::isSetGdRefX()
{
    return (this->gdRefX != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTXYAdjustHandle::getMinX()
{
    return minX;
}

void poi::sl::draw::binding::CTXYAdjustHandle::setMinX(::java::lang::String* value)
{
    this->minX = value;
}

bool poi::sl::draw::binding::CTXYAdjustHandle::isSetMinX()
{
    return (this->minX != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTXYAdjustHandle::getMaxX()
{
    return maxX;
}

void poi::sl::draw::binding::CTXYAdjustHandle::setMaxX(::java::lang::String* value)
{
    this->maxX = value;
}

bool poi::sl::draw::binding::CTXYAdjustHandle::isSetMaxX()
{
    return (this->maxX != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTXYAdjustHandle::getGdRefY()
{
    return gdRefY;
}

void poi::sl::draw::binding::CTXYAdjustHandle::setGdRefY(::java::lang::String* value)
{
    this->gdRefY = value;
}

bool poi::sl::draw::binding::CTXYAdjustHandle::isSetGdRefY()
{
    return (this->gdRefY != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTXYAdjustHandle::getMinY()
{
    return minY;
}

void poi::sl::draw::binding::CTXYAdjustHandle::setMinY(::java::lang::String* value)
{
    this->minY = value;
}

bool poi::sl::draw::binding::CTXYAdjustHandle::isSetMinY()
{
    return (this->minY != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTXYAdjustHandle::getMaxY()
{
    return maxY;
}

void poi::sl::draw::binding::CTXYAdjustHandle::setMaxY(::java::lang::String* value)
{
    this->maxY = value;
}

bool poi::sl::draw::binding::CTXYAdjustHandle::isSetMaxY()
{
    return (this->maxY != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTXYAdjustHandle::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTXYAdjustHandle", 47);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTXYAdjustHandle::getClass0()
{
    return class_();
}

