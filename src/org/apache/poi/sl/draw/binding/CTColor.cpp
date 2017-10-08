// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTColor.java
#include <org/apache/poi/sl/draw/binding/CTColor.hpp>

#include <org/apache/poi/sl/draw/binding/CTHslColor.hpp>
#include <org/apache/poi/sl/draw/binding/CTPresetColor.hpp>
#include <org/apache/poi/sl/draw/binding/CTSRgbColor.hpp>
#include <org/apache/poi/sl/draw/binding/CTScRgbColor.hpp>
#include <org/apache/poi/sl/draw/binding/CTSchemeColor.hpp>
#include <org/apache/poi/sl/draw/binding/CTSystemColor.hpp>

poi::sl::draw::binding::CTColor::CTColor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTColor::CTColor()
    : CTColor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::sl::draw::binding::CTScRgbColor* poi::sl::draw::binding::CTColor::getScrgbClr()
{
    return scrgbClr;
}

void poi::sl::draw::binding::CTColor::setScrgbClr(CTScRgbColor* value)
{
    this->scrgbClr = value;
}

bool poi::sl::draw::binding::CTColor::isSetScrgbClr()
{
    return (this->scrgbClr != nullptr);
}

poi::sl::draw::binding::CTSRgbColor* poi::sl::draw::binding::CTColor::getSrgbClr()
{
    return srgbClr;
}

void poi::sl::draw::binding::CTColor::setSrgbClr(CTSRgbColor* value)
{
    this->srgbClr = value;
}

bool poi::sl::draw::binding::CTColor::isSetSrgbClr()
{
    return (this->srgbClr != nullptr);
}

poi::sl::draw::binding::CTHslColor* poi::sl::draw::binding::CTColor::getHslClr()
{
    return hslClr;
}

void poi::sl::draw::binding::CTColor::setHslClr(CTHslColor* value)
{
    this->hslClr = value;
}

bool poi::sl::draw::binding::CTColor::isSetHslClr()
{
    return (this->hslClr != nullptr);
}

poi::sl::draw::binding::CTSystemColor* poi::sl::draw::binding::CTColor::getSysClr()
{
    return sysClr;
}

void poi::sl::draw::binding::CTColor::setSysClr(CTSystemColor* value)
{
    this->sysClr = value;
}

bool poi::sl::draw::binding::CTColor::isSetSysClr()
{
    return (this->sysClr != nullptr);
}

poi::sl::draw::binding::CTSchemeColor* poi::sl::draw::binding::CTColor::getSchemeClr()
{
    return schemeClr;
}

void poi::sl::draw::binding::CTColor::setSchemeClr(CTSchemeColor* value)
{
    this->schemeClr = value;
}

bool poi::sl::draw::binding::CTColor::isSetSchemeClr()
{
    return (this->schemeClr != nullptr);
}

poi::sl::draw::binding::CTPresetColor* poi::sl::draw::binding::CTColor::getPrstClr()
{
    return prstClr;
}

void poi::sl::draw::binding::CTColor::setPrstClr(CTPresetColor* value)
{
    this->prstClr = value;
}

bool poi::sl::draw::binding::CTColor::isSetPrstClr()
{
    return (this->prstClr != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTColor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTColor", 38);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTColor::getClass0()
{
    return class_();
}

