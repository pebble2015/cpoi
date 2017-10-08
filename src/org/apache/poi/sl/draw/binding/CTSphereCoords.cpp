// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTSphereCoords.java
#include <org/apache/poi/sl/draw/binding/CTSphereCoords.hpp>

poi::sl::draw::binding::CTSphereCoords::CTSphereCoords(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTSphereCoords::CTSphereCoords()
    : CTSphereCoords(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t poi::sl::draw::binding::CTSphereCoords::getLat()
{
    return lat;
}

void poi::sl::draw::binding::CTSphereCoords::setLat(int32_t value)
{
    this->lat = value;
}

bool poi::sl::draw::binding::CTSphereCoords::isSetLat()
{
    return true;
}

int32_t poi::sl::draw::binding::CTSphereCoords::getLon()
{
    return lon;
}

void poi::sl::draw::binding::CTSphereCoords::setLon(int32_t value)
{
    this->lon = value;
}

bool poi::sl::draw::binding::CTSphereCoords::isSetLon()
{
    return true;
}

int32_t poi::sl::draw::binding::CTSphereCoords::getRev()
{
    return rev;
}

void poi::sl::draw::binding::CTSphereCoords::setRev(int32_t value)
{
    this->rev = value;
}

bool poi::sl::draw::binding::CTSphereCoords::isSetRev()
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTSphereCoords::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTSphereCoords", 45);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTSphereCoords::getClass0()
{
    return class_();
}

