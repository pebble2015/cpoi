// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPoint2D.java
#include <org/apache/poi/sl/draw/binding/CTPoint2D.hpp>

poi::sl::draw::binding::CTPoint2D::CTPoint2D(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTPoint2D::CTPoint2D()
    : CTPoint2D(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int64_t poi::sl::draw::binding::CTPoint2D::getX()
{
    return x;
}

void poi::sl::draw::binding::CTPoint2D::setX(int64_t value)
{
    this->x = value;
}

bool poi::sl::draw::binding::CTPoint2D::isSetX()
{
    return true;
}

int64_t poi::sl::draw::binding::CTPoint2D::getY()
{
    return y;
}

void poi::sl::draw::binding::CTPoint2D::setY(int64_t value)
{
    this->y = value;
}

bool poi::sl::draw::binding::CTPoint2D::isSetY()
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTPoint2D::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTPoint2D", 40);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTPoint2D::getClass0()
{
    return class_();
}

