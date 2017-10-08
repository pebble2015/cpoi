// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFPalette.java
#include <org/apache/poi/hssf/usermodel/HSSFPalette.hpp>

#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/hssf/record/PaletteRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPalette_CustomColor.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_HSSFColorPredefined.hpp>
#include <org/apache/poi/hssf/util/HSSFColor.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::usermodel::HSSFPalette::HSSFPalette(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFPalette::HSSFPalette(::poi::hssf::record::PaletteRecord* palette) 
    : HSSFPalette(*static_cast< ::default_init_tag* >(0))
{
    ctor(palette);
}

void poi::hssf::usermodel::HSSFPalette::ctor(::poi::hssf::record::PaletteRecord* palette)
{
    super::ctor();
    _palette = palette;
}

poi::hssf::util::HSSFColor* poi::hssf::usermodel::HSSFPalette::getColor(int16_t index)
{
    if(index == npc(::poi::hssf::util::HSSFColor_HSSFColorPredefined::AUTOMATIC)->getIndex()) {
        return npc(::poi::hssf::util::HSSFColor_HSSFColorPredefined::AUTOMATIC)->getColor();
    }
    auto b = npc(_palette)->getColor(index);
    return (b == nullptr) ? static_cast< ::poi::hssf::util::HSSFColor* >(nullptr) : static_cast< ::poi::hssf::util::HSSFColor* >(new HSSFPalette_CustomColor(index, b));
}

poi::hssf::util::HSSFColor* poi::hssf::usermodel::HSSFPalette::getColor(int32_t index)
{
    return getColor(static_cast< int16_t >(index));
}

poi::hssf::util::HSSFColor* poi::hssf::usermodel::HSSFPalette::findColor(int8_t red, int8_t green, int8_t blue)
{
    auto b = npc(_palette)->getColor(::poi::hssf::record::PaletteRecord::FIRST_COLOR_INDEX);
    for (auto i = ::poi::hssf::record::PaletteRecord::FIRST_COLOR_INDEX; b != nullptr; b = npc(_palette)->getColor(++i)) {
        if((*b)[int32_t(0)] == red && (*b)[int32_t(1)] == green && (*b)[int32_t(2)] == blue) {
            return new HSSFPalette_CustomColor(i, b);
        }
    }
    return nullptr;
}

poi::hssf::util::HSSFColor* poi::hssf::usermodel::HSSFPalette::findSimilarColor(int8_t red, int8_t green, int8_t blue)
{
    return findSimilarColor(unsignedInt(red), unsignedInt(green), unsignedInt(blue));
}

poi::hssf::util::HSSFColor* poi::hssf::usermodel::HSSFPalette::findSimilarColor(int32_t red, int32_t green, int32_t blue)
{
    ::poi::hssf::util::HSSFColor* result = nullptr;
    auto minColorDistance = ::java::lang::Integer::MAX_VALUE;
    auto b = npc(_palette)->getColor(::poi::hssf::record::PaletteRecord::FIRST_COLOR_INDEX);
    for (auto i = ::poi::hssf::record::PaletteRecord::FIRST_COLOR_INDEX; b != nullptr; b = npc(_palette)->getColor(++i)) {
        auto colorDistance = ::java::lang::Math::abs(red - unsignedInt((*b)[int32_t(0)])) + ::java::lang::Math::abs(green - unsignedInt((*b)[int32_t(1)])) + ::java::lang::Math::abs(blue - unsignedInt((*b)[int32_t(2)]));
        if(colorDistance < minColorDistance) {
            minColorDistance = colorDistance;
            result = getColor(i);
        }
    }
    return result;
}

int32_t poi::hssf::usermodel::HSSFPalette::unsignedInt(int8_t b)
{
    return int32_t(255) & b;
}

void poi::hssf::usermodel::HSSFPalette::setColorAtIndex(int16_t index, int8_t red, int8_t green, int8_t blue)
{
    npc(_palette)->setColor(index, red, green, blue);
}

poi::hssf::util::HSSFColor* poi::hssf::usermodel::HSSFPalette::addColor(int8_t red, int8_t green, int8_t blue)
{
    auto b = npc(_palette)->getColor(::poi::hssf::record::PaletteRecord::FIRST_COLOR_INDEX);
    int16_t i;
    for (i = ::poi::hssf::record::PaletteRecord::FIRST_COLOR_INDEX; i < ::poi::hssf::record::PaletteRecord::STANDARD_PALETTE_SIZE + ::poi::hssf::record::PaletteRecord::FIRST_COLOR_INDEX; b = npc(_palette)->getColor(++i)) {
        if(b == nullptr) {
            setColorAtIndex(i, red, green, blue);
            return getColor(i);
        }
    }
    throw new ::java::lang::RuntimeException(u"Could not find free color index"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFPalette::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFPalette", 41);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFPalette::getClass0()
{
    return class_();
}

