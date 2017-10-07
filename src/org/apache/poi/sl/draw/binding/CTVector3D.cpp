// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTVector3D.java
#include <org/apache/poi/sl/draw/binding/CTVector3D.hpp>

org::apache::poi::sl::draw::binding::CTVector3D::CTVector3D(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTVector3D::CTVector3D()
    : CTVector3D(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int64_t org::apache::poi::sl::draw::binding::CTVector3D::getDx()
{
    return dx;
}

void org::apache::poi::sl::draw::binding::CTVector3D::setDx(int64_t value)
{
    this->dx = value;
}

bool org::apache::poi::sl::draw::binding::CTVector3D::isSetDx()
{
    return true;
}

int64_t org::apache::poi::sl::draw::binding::CTVector3D::getDy()
{
    return dy;
}

void org::apache::poi::sl::draw::binding::CTVector3D::setDy(int64_t value)
{
    this->dy = value;
}

bool org::apache::poi::sl::draw::binding::CTVector3D::isSetDy()
{
    return true;
}

int64_t org::apache::poi::sl::draw::binding::CTVector3D::getDz()
{
    return dz;
}

void org::apache::poi::sl::draw::binding::CTVector3D::setDz(int64_t value)
{
    this->dz = value;
}

bool org::apache::poi::sl::draw::binding::CTVector3D::isSetDz()
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTVector3D::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTVector3D", 41);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTVector3D::getClass0()
{
    return class_();
}

