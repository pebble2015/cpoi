// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTConnectionSite.java
#include <org/apache/poi/sl/draw/binding/CTConnectionSite.hpp>

#include <java/lang/String.hpp>
#include <org/apache/poi/sl/draw/binding/CTAdjPoint2D.hpp>

poi::sl::draw::binding::CTConnectionSite::CTConnectionSite(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTConnectionSite::CTConnectionSite()
    : CTConnectionSite(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::sl::draw::binding::CTAdjPoint2D* poi::sl::draw::binding::CTConnectionSite::getPos()
{
    return pos;
}

void poi::sl::draw::binding::CTConnectionSite::setPos(CTAdjPoint2D* value)
{
    this->pos = value;
}

bool poi::sl::draw::binding::CTConnectionSite::isSetPos()
{
    return (this->pos != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTConnectionSite::getAng()
{
    return ang;
}

void poi::sl::draw::binding::CTConnectionSite::setAng(::java::lang::String* value)
{
    this->ang = value;
}

bool poi::sl::draw::binding::CTConnectionSite::isSetAng()
{
    return (this->ang != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTConnectionSite::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTConnectionSite", 47);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTConnectionSite::getClass0()
{
    return class_();
}

