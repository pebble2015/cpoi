// Generated from /POI/java/org/apache/poi/sl/draw/DrawFontInfo.java
#include <org/apache/poi/sl/draw/DrawFontInfo.hpp>

#include <java/lang/String.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <org/apache/poi/common/usermodel/fonts/FontCharset.hpp>
#include <org/apache/poi/common/usermodel/fonts/FontFamily.hpp>
#include <org/apache/poi/common/usermodel/fonts/FontPitch.hpp>

org::apache::poi::sl::draw::DrawFontInfo::DrawFontInfo(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::DrawFontInfo::DrawFontInfo(::java::lang::String* typeface) 
    : DrawFontInfo(*static_cast< ::default_init_tag* >(0))
{
    ctor(typeface);
}

void org::apache::poi::sl::draw::DrawFontInfo::ctor(::java::lang::String* typeface)
{
    super::ctor();
    this->typeface = typeface;
}

java::lang::Integer* org::apache::poi::sl::draw::DrawFontInfo::getIndex()
{
    return nullptr;
}

void org::apache::poi::sl::draw::DrawFontInfo::setIndex(int32_t index)
{
    throw new ::java::lang::UnsupportedOperationException(u"DrawFontManagers FontInfo can't be changed."_j);
}

java::lang::String* org::apache::poi::sl::draw::DrawFontInfo::getTypeface()
{
    return typeface;
}

void org::apache::poi::sl::draw::DrawFontInfo::setTypeface(::java::lang::String* typeface)
{
    throw new ::java::lang::UnsupportedOperationException(u"DrawFontManagers FontInfo can't be changed."_j);
}

org::apache::poi::common::usermodel::fonts::FontCharset* org::apache::poi::sl::draw::DrawFontInfo::getCharset()
{
    return ::org::apache::poi::common::usermodel::fonts::FontCharset::ANSI;
}

void org::apache::poi::sl::draw::DrawFontInfo::setCharset(::org::apache::poi::common::usermodel::fonts::FontCharset* charset)
{
    throw new ::java::lang::UnsupportedOperationException(u"DrawFontManagers FontInfo can't be changed."_j);
}

org::apache::poi::common::usermodel::fonts::FontFamily* org::apache::poi::sl::draw::DrawFontInfo::getFamily()
{
    return ::org::apache::poi::common::usermodel::fonts::FontFamily::FF_SWISS;
}

void org::apache::poi::sl::draw::DrawFontInfo::setFamily(::org::apache::poi::common::usermodel::fonts::FontFamily* family)
{
    throw new ::java::lang::UnsupportedOperationException(u"DrawFontManagers FontInfo can't be changed."_j);
}

org::apache::poi::common::usermodel::fonts::FontPitch* org::apache::poi::sl::draw::DrawFontInfo::getPitch()
{
    return ::org::apache::poi::common::usermodel::fonts::FontPitch::VARIABLE;
}

void org::apache::poi::sl::draw::DrawFontInfo::setPitch(::org::apache::poi::common::usermodel::fonts::FontPitch* pitch)
{
    throw new ::java::lang::UnsupportedOperationException(u"DrawFontManagers FontInfo can't be changed."_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::DrawFontInfo::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawFontInfo", 35);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::DrawFontInfo::getClass0()
{
    return class_();
}

