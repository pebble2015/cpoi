// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTColor.java
#include <org/apache/poi/sl/draw/binding/CTColor.hpp>

#include <org/apache/poi/sl/draw/binding/CTHslColor.hpp>
#include <org/apache/poi/sl/draw/binding/CTPresetColor.hpp>
#include <org/apache/poi/sl/draw/binding/CTSRgbColor.hpp>
#include <org/apache/poi/sl/draw/binding/CTScRgbColor.hpp>
#include <org/apache/poi/sl/draw/binding/CTSchemeColor.hpp>
#include <org/apache/poi/sl/draw/binding/CTSystemColor.hpp>

org::apache::poi::sl::draw::binding::CTColor::CTColor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTColor::CTColor()
    : CTColor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::sl::draw::binding::CTScRgbColor* org::apache::poi::sl::draw::binding::CTColor::getScrgbClr()
{
    return scrgbClr;
}

void org::apache::poi::sl::draw::binding::CTColor::setScrgbClr(CTScRgbColor* value)
{
    this->scrgbClr = value;
}

bool org::apache::poi::sl::draw::binding::CTColor::isSetScrgbClr()
{
    return (this->scrgbClr != nullptr);
}

org::apache::poi::sl::draw::binding::CTSRgbColor* org::apache::poi::sl::draw::binding::CTColor::getSrgbClr()
{
    return srgbClr;
}

void org::apache::poi::sl::draw::binding::CTColor::setSrgbClr(CTSRgbColor* value)
{
    this->srgbClr = value;
}

bool org::apache::poi::sl::draw::binding::CTColor::isSetSrgbClr()
{
    return (this->srgbClr != nullptr);
}

org::apache::poi::sl::draw::binding::CTHslColor* org::apache::poi::sl::draw::binding::CTColor::getHslClr()
{
    return hslClr;
}

void org::apache::poi::sl::draw::binding::CTColor::setHslClr(CTHslColor* value)
{
    this->hslClr = value;
}

bool org::apache::poi::sl::draw::binding::CTColor::isSetHslClr()
{
    return (this->hslClr != nullptr);
}

org::apache::poi::sl::draw::binding::CTSystemColor* org::apache::poi::sl::draw::binding::CTColor::getSysClr()
{
    return sysClr;
}

void org::apache::poi::sl::draw::binding::CTColor::setSysClr(CTSystemColor* value)
{
    this->sysClr = value;
}

bool org::apache::poi::sl::draw::binding::CTColor::isSetSysClr()
{
    return (this->sysClr != nullptr);
}

org::apache::poi::sl::draw::binding::CTSchemeColor* org::apache::poi::sl::draw::binding::CTColor::getSchemeClr()
{
    return schemeClr;
}

void org::apache::poi::sl::draw::binding::CTColor::setSchemeClr(CTSchemeColor* value)
{
    this->schemeClr = value;
}

bool org::apache::poi::sl::draw::binding::CTColor::isSetSchemeClr()
{
    return (this->schemeClr != nullptr);
}

org::apache::poi::sl::draw::binding::CTPresetColor* org::apache::poi::sl::draw::binding::CTColor::getPrstClr()
{
    return prstClr;
}

void org::apache::poi::sl::draw::binding::CTColor::setPrstClr(CTPresetColor* value)
{
    this->prstClr = value;
}

bool org::apache::poi::sl::draw::binding::CTColor::isSetPrstClr()
{
    return (this->prstClr != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTColor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTColor", 38);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTColor::getClass0()
{
    return class_();
}

