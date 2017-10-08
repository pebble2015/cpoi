// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPositiveSize2D.java
#include <org/apache/poi/sl/draw/binding/CTPositiveSize2D.hpp>

poi::sl::draw::binding::CTPositiveSize2D::CTPositiveSize2D(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTPositiveSize2D::CTPositiveSize2D()
    : CTPositiveSize2D(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int64_t poi::sl::draw::binding::CTPositiveSize2D::getCx()
{
    return cx;
}

void poi::sl::draw::binding::CTPositiveSize2D::setCx(int64_t value)
{
    this->cx = value;
}

bool poi::sl::draw::binding::CTPositiveSize2D::isSetCx()
{
    return true;
}

int64_t poi::sl::draw::binding::CTPositiveSize2D::getCy()
{
    return cy;
}

void poi::sl::draw::binding::CTPositiveSize2D::setCy(int64_t value)
{
    this->cy = value;
}

bool poi::sl::draw::binding::CTPositiveSize2D::isSetCy()
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTPositiveSize2D::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTPositiveSize2D", 47);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTPositiveSize2D::getClass0()
{
    return class_();
}

