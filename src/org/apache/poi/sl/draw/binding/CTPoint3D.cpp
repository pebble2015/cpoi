// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPoint3D.java
#include <org/apache/poi/sl/draw/binding/CTPoint3D.hpp>

org::apache::poi::sl::draw::binding::CTPoint3D::CTPoint3D(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTPoint3D::CTPoint3D()
    : CTPoint3D(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int64_t org::apache::poi::sl::draw::binding::CTPoint3D::getX()
{
    return x;
}

void org::apache::poi::sl::draw::binding::CTPoint3D::setX(int64_t value)
{
    this->x = value;
}

bool org::apache::poi::sl::draw::binding::CTPoint3D::isSetX()
{
    return true;
}

int64_t org::apache::poi::sl::draw::binding::CTPoint3D::getY()
{
    return y;
}

void org::apache::poi::sl::draw::binding::CTPoint3D::setY(int64_t value)
{
    this->y = value;
}

bool org::apache::poi::sl::draw::binding::CTPoint3D::isSetY()
{
    return true;
}

int64_t org::apache::poi::sl::draw::binding::CTPoint3D::getZ()
{
    return z;
}

void org::apache::poi::sl::draw::binding::CTPoint3D::setZ(int64_t value)
{
    this->z = value;
}

bool org::apache::poi::sl::draw::binding::CTPoint3D::isSetZ()
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTPoint3D::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTPoint3D", 40);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTPoint3D::getClass0()
{
    return class_();
}

