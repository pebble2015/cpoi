// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTAdjPoint2D.java
#include <org/apache/poi/sl/draw/binding/CTAdjPoint2D.hpp>

#include <java/lang/String.hpp>

poi::sl::draw::binding::CTAdjPoint2D::CTAdjPoint2D(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTAdjPoint2D::CTAdjPoint2D()
    : CTAdjPoint2D(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String* poi::sl::draw::binding::CTAdjPoint2D::getX()
{
    return x;
}

void poi::sl::draw::binding::CTAdjPoint2D::setX(::java::lang::String* value)
{
    this->x = value;
}

bool poi::sl::draw::binding::CTAdjPoint2D::isSetX()
{
    return (this->x != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTAdjPoint2D::getY()
{
    return y;
}

void poi::sl::draw::binding::CTAdjPoint2D::setY(::java::lang::String* value)
{
    this->y = value;
}

bool poi::sl::draw::binding::CTAdjPoint2D::isSetY()
{
    return (this->y != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTAdjPoint2D::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTAdjPoint2D", 43);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTAdjPoint2D::getClass0()
{
    return class_();
}

