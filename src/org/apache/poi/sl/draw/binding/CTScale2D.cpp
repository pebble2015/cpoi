// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTScale2D.java
#include <org/apache/poi/sl/draw/binding/CTScale2D.hpp>

#include <org/apache/poi/sl/draw/binding/CTRatio.hpp>

org::apache::poi::sl::draw::binding::CTScale2D::CTScale2D(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTScale2D::CTScale2D()
    : CTScale2D(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::sl::draw::binding::CTRatio* org::apache::poi::sl::draw::binding::CTScale2D::getSx()
{
    return sx;
}

void org::apache::poi::sl::draw::binding::CTScale2D::setSx(CTRatio* value)
{
    this->sx = value;
}

bool org::apache::poi::sl::draw::binding::CTScale2D::isSetSx()
{
    return (this->sx != nullptr);
}

org::apache::poi::sl::draw::binding::CTRatio* org::apache::poi::sl::draw::binding::CTScale2D::getSy()
{
    return sy;
}

void org::apache::poi::sl::draw::binding::CTScale2D::setSy(CTRatio* value)
{
    this->sy = value;
}

bool org::apache::poi::sl::draw::binding::CTScale2D::isSetSy()
{
    return (this->sy != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTScale2D::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTScale2D", 40);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTScale2D::getClass0()
{
    return class_();
}

