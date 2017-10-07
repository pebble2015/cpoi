// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTXYAdjustHandle.java
#include <org/apache/poi/sl/draw/binding/CTXYAdjustHandle.hpp>

#include <java/lang/String.hpp>
#include <org/apache/poi/sl/draw/binding/CTAdjPoint2D.hpp>

org::apache::poi::sl::draw::binding::CTXYAdjustHandle::CTXYAdjustHandle(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTXYAdjustHandle::CTXYAdjustHandle()
    : CTXYAdjustHandle(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::sl::draw::binding::CTAdjPoint2D* org::apache::poi::sl::draw::binding::CTXYAdjustHandle::getPos()
{
    return pos;
}

void org::apache::poi::sl::draw::binding::CTXYAdjustHandle::setPos(CTAdjPoint2D* value)
{
    this->pos = value;
}

bool org::apache::poi::sl::draw::binding::CTXYAdjustHandle::isSetPos()
{
    return (this->pos != nullptr);
}

java::lang::String* org::apache::poi::sl::draw::binding::CTXYAdjustHandle::getGdRefX()
{
    return gdRefX;
}

void org::apache::poi::sl::draw::binding::CTXYAdjustHandle::setGdRefX(::java::lang::String* value)
{
    this->gdRefX = value;
}

bool org::apache::poi::sl::draw::binding::CTXYAdjustHandle::isSetGdRefX()
{
    return (this->gdRefX != nullptr);
}

java::lang::String* org::apache::poi::sl::draw::binding::CTXYAdjustHandle::getMinX()
{
    return minX;
}

void org::apache::poi::sl::draw::binding::CTXYAdjustHandle::setMinX(::java::lang::String* value)
{
    this->minX = value;
}

bool org::apache::poi::sl::draw::binding::CTXYAdjustHandle::isSetMinX()
{
    return (this->minX != nullptr);
}

java::lang::String* org::apache::poi::sl::draw::binding::CTXYAdjustHandle::getMaxX()
{
    return maxX;
}

void org::apache::poi::sl::draw::binding::CTXYAdjustHandle::setMaxX(::java::lang::String* value)
{
    this->maxX = value;
}

bool org::apache::poi::sl::draw::binding::CTXYAdjustHandle::isSetMaxX()
{
    return (this->maxX != nullptr);
}

java::lang::String* org::apache::poi::sl::draw::binding::CTXYAdjustHandle::getGdRefY()
{
    return gdRefY;
}

void org::apache::poi::sl::draw::binding::CTXYAdjustHandle::setGdRefY(::java::lang::String* value)
{
    this->gdRefY = value;
}

bool org::apache::poi::sl::draw::binding::CTXYAdjustHandle::isSetGdRefY()
{
    return (this->gdRefY != nullptr);
}

java::lang::String* org::apache::poi::sl::draw::binding::CTXYAdjustHandle::getMinY()
{
    return minY;
}

void org::apache::poi::sl::draw::binding::CTXYAdjustHandle::setMinY(::java::lang::String* value)
{
    this->minY = value;
}

bool org::apache::poi::sl::draw::binding::CTXYAdjustHandle::isSetMinY()
{
    return (this->minY != nullptr);
}

java::lang::String* org::apache::poi::sl::draw::binding::CTXYAdjustHandle::getMaxY()
{
    return maxY;
}

void org::apache::poi::sl::draw::binding::CTXYAdjustHandle::setMaxY(::java::lang::String* value)
{
    this->maxY = value;
}

bool org::apache::poi::sl::draw::binding::CTXYAdjustHandle::isSetMaxY()
{
    return (this->maxY != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTXYAdjustHandle::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTXYAdjustHandle", 47);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTXYAdjustHandle::getClass0()
{
    return class_();
}

