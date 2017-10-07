// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFPalette.java
#include <org/apache/poi/hssf/usermodel/HSSFPalette_CustomColor.hpp>

#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Locale.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::usermodel::HSSFPalette_CustomColor::HSSFPalette_CustomColor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFPalette_CustomColor::HSSFPalette_CustomColor(int16_t byteOffset, ::int8_tArray* colors) 
    : HSSFPalette_CustomColor(*static_cast< ::default_init_tag* >(0))
{
    ctor(byteOffset,colors);
}

org::apache::poi::hssf::usermodel::HSSFPalette_CustomColor::HSSFPalette_CustomColor(int16_t byteOffset, int8_t red, int8_t green, int8_t blue) 
    : HSSFPalette_CustomColor(*static_cast< ::default_init_tag* >(0))
{
    ctor(byteOffset,red,green,blue);
}

void org::apache::poi::hssf::usermodel::HSSFPalette_CustomColor::ctor(int16_t byteOffset, ::int8_tArray* colors)
{
    ctor(byteOffset, (*colors)[int32_t(0)], (*colors)[int32_t(1)], (*colors)[int32_t(2)]);
}

void org::apache::poi::hssf::usermodel::HSSFPalette_CustomColor::ctor(int16_t byteOffset, int8_t red, int8_t green, int8_t blue)
{
    super::ctor();
    _byteOffset = byteOffset;
    _red = red;
    _green = green;
    _blue = blue;
}

int16_t org::apache::poi::hssf::usermodel::HSSFPalette_CustomColor::getIndex()
{
    return _byteOffset;
}

int16_tArray* org::apache::poi::hssf::usermodel::HSSFPalette_CustomColor::getTriplet()
{
    return new ::int16_tArray({
        static_cast< int16_t >((_red & int32_t(255)))
        , static_cast< int16_t >((_green & int32_t(255)))
        , static_cast< int16_t >((_blue & int32_t(255)))
    });
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFPalette_CustomColor::getHexString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(getGnumericPart(_red));
    npc(sb)->append(u':');
    npc(sb)->append(getGnumericPart(_green));
    npc(sb)->append(u':');
    npc(sb)->append(getGnumericPart(_blue));
    return npc(sb)->toString();
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFPalette_CustomColor::getGnumericPart(int8_t color)
{
    ::java::lang::String* s;
    if(color == 0) {
        s = u"0"_j;
    } else {
        auto c = color & int32_t(255);
        c = (c << int32_t(8)) | c;
        s = npc(::java::lang::Integer::toHexString(c))->toUpperCase(::java::util::Locale::ROOT());
        while (npc(s)->length() < 4) {
            s = ::java::lang::StringBuilder().append(u"0"_j)->append(s)->toString();
        }
    }
    return s;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFPalette_CustomColor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFPalette.CustomColor", 53);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFPalette_CustomColor::getClass0()
{
    return class_();
}

