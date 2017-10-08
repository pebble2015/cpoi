// Generated from /POI/java/org/apache/poi/sl/draw/DrawFontInfo.java
#include <org/apache/poi/sl/draw/DrawFontInfo.hpp>

#include <java/lang/String.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <org/apache/poi/common/usermodel/fonts/FontCharset.hpp>
#include <org/apache/poi/common/usermodel/fonts/FontFamily.hpp>
#include <org/apache/poi/common/usermodel/fonts/FontPitch.hpp>

poi::sl::draw::DrawFontInfo::DrawFontInfo(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::DrawFontInfo::DrawFontInfo(::java::lang::String* typeface) 
    : DrawFontInfo(*static_cast< ::default_init_tag* >(0))
{
    ctor(typeface);
}

void poi::sl::draw::DrawFontInfo::ctor(::java::lang::String* typeface)
{
    super::ctor();
    this->typeface = typeface;
}

java::lang::Integer* poi::sl::draw::DrawFontInfo::getIndex()
{
    return nullptr;
}

void poi::sl::draw::DrawFontInfo::setIndex(int32_t index)
{
    throw new ::java::lang::UnsupportedOperationException(u"DrawFontManagers FontInfo can't be changed."_j);
}

java::lang::String* poi::sl::draw::DrawFontInfo::getTypeface()
{
    return typeface;
}

void poi::sl::draw::DrawFontInfo::setTypeface(::java::lang::String* typeface)
{
    throw new ::java::lang::UnsupportedOperationException(u"DrawFontManagers FontInfo can't be changed."_j);
}

poi::common::usermodel::fonts::FontCharset* poi::sl::draw::DrawFontInfo::getCharset()
{
    return ::poi::common::usermodel::fonts::FontCharset::ANSI;
}

void poi::sl::draw::DrawFontInfo::setCharset(::poi::common::usermodel::fonts::FontCharset* charset)
{
    throw new ::java::lang::UnsupportedOperationException(u"DrawFontManagers FontInfo can't be changed."_j);
}

poi::common::usermodel::fonts::FontFamily* poi::sl::draw::DrawFontInfo::getFamily()
{
    return ::poi::common::usermodel::fonts::FontFamily::FF_SWISS;
}

void poi::sl::draw::DrawFontInfo::setFamily(::poi::common::usermodel::fonts::FontFamily* family)
{
    throw new ::java::lang::UnsupportedOperationException(u"DrawFontManagers FontInfo can't be changed."_j);
}

poi::common::usermodel::fonts::FontPitch* poi::sl::draw::DrawFontInfo::getPitch()
{
    return ::poi::common::usermodel::fonts::FontPitch::VARIABLE;
}

void poi::sl::draw::DrawFontInfo::setPitch(::poi::common::usermodel::fonts::FontPitch* pitch)
{
    throw new ::java::lang::UnsupportedOperationException(u"DrawFontManagers FontInfo can't be changed."_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::DrawFontInfo::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawFontInfo", 35);
    return c;
}

java::lang::Class* poi::sl::draw::DrawFontInfo::getClass0()
{
    return class_();
}

