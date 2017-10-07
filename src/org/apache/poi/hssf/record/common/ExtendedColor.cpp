// Generated from /POI/java/org/apache/poi/hssf/record/common/ExtendedColor.java
#include <org/apache/poi/hssf/record/common/ExtendedColor.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::common::ExtendedColor::ExtendedColor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::common::ExtendedColor::ExtendedColor() 
    : ExtendedColor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::common::ExtendedColor::ExtendedColor(::org::apache::poi::util::LittleEndianInput* in) 
    : ExtendedColor(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int32_t org::apache::poi::hssf::record::common::ExtendedColor::TYPE_AUTO;

constexpr int32_t org::apache::poi::hssf::record::common::ExtendedColor::TYPE_INDEXED;

constexpr int32_t org::apache::poi::hssf::record::common::ExtendedColor::TYPE_RGB;

constexpr int32_t org::apache::poi::hssf::record::common::ExtendedColor::TYPE_THEMED;

constexpr int32_t org::apache::poi::hssf::record::common::ExtendedColor::TYPE_UNSET;

constexpr int32_t org::apache::poi::hssf::record::common::ExtendedColor::THEME_DARK_1;

constexpr int32_t org::apache::poi::hssf::record::common::ExtendedColor::THEME_LIGHT_1;

constexpr int32_t org::apache::poi::hssf::record::common::ExtendedColor::THEME_DARK_2;

constexpr int32_t org::apache::poi::hssf::record::common::ExtendedColor::THEME_LIGHT_2;

constexpr int32_t org::apache::poi::hssf::record::common::ExtendedColor::THEME_ACCENT_1;

constexpr int32_t org::apache::poi::hssf::record::common::ExtendedColor::THEME_ACCENT_2;

constexpr int32_t org::apache::poi::hssf::record::common::ExtendedColor::THEME_ACCENT_3;

constexpr int32_t org::apache::poi::hssf::record::common::ExtendedColor::THEME_ACCENT_4;

constexpr int32_t org::apache::poi::hssf::record::common::ExtendedColor::THEME_ACCENT_5;

constexpr int32_t org::apache::poi::hssf::record::common::ExtendedColor::THEME_ACCENT_6;

constexpr int32_t org::apache::poi::hssf::record::common::ExtendedColor::THEME_HYPERLINK;

constexpr int32_t org::apache::poi::hssf::record::common::ExtendedColor::THEME_FOLLOWED_HYPERLINK;

void org::apache::poi::hssf::record::common::ExtendedColor::ctor()
{
    super::ctor();
    this->type = TYPE_INDEXED;
    this->colorIndex = 0;
    this->tint = 0.0;
}

void org::apache::poi::hssf::record::common::ExtendedColor::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    super::ctor();
    type = npc(in)->readInt();
    if(type == TYPE_INDEXED) {
        colorIndex = npc(in)->readInt();
    } else if(type == TYPE_RGB) {
        rgba = new ::int8_tArray(int32_t(4));
        npc(in)->readFully(rgba);
    } else if(type == TYPE_THEMED) {
        themeIndex = npc(in)->readInt();
    } else {
        npc(in)->readInt();
    }
    tint = npc(in)->readDouble();
}

int32_t org::apache::poi::hssf::record::common::ExtendedColor::getType()
{
    return type;
}

void org::apache::poi::hssf::record::common::ExtendedColor::setType(int32_t type)
{
    this->type = type;
}

int32_t org::apache::poi::hssf::record::common::ExtendedColor::getColorIndex()
{
    return colorIndex;
}

void org::apache::poi::hssf::record::common::ExtendedColor::setColorIndex(int32_t colorIndex)
{
    this->colorIndex = colorIndex;
}

int8_tArray* org::apache::poi::hssf::record::common::ExtendedColor::getRGBA()
{
    return rgba;
}

void org::apache::poi::hssf::record::common::ExtendedColor::setRGBA(::int8_tArray* rgba)
{
    this->rgba = (rgba == nullptr) ? static_cast< ::int8_tArray* >(nullptr) : npc(rgba)->clone();
}

int32_t org::apache::poi::hssf::record::common::ExtendedColor::getThemeIndex()
{
    return themeIndex;
}

void org::apache::poi::hssf::record::common::ExtendedColor::setThemeIndex(int32_t themeIndex)
{
    this->themeIndex = themeIndex;
}

double org::apache::poi::hssf::record::common::ExtendedColor::getTint()
{
    return tint;
}

void org::apache::poi::hssf::record::common::ExtendedColor::setTint(double tint)
{
    if(tint < -int32_t(1) || tint > 1) {
        throw new ::java::lang::IllegalArgumentException(u"Tint/Shade must be between -1 and +1"_j);
    }
    this->tint = tint;
}

java::lang::String* org::apache::poi::hssf::record::common::ExtendedColor::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"    [Extended Color]\n"_j);
    npc(npc(npc(buffer)->append(u"          .type  = "_j))->append(type))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .tint  = "_j))->append(tint))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .c_idx = "_j))->append(colorIndex))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .rgba  = "_j))->append(::org::apache::poi::util::HexDump::toHex(rgba)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .t_idx = "_j))->append(themeIndex))->append(u"\n"_j);
    npc(buffer)->append(u"    [/Extended Color]\n"_j);
    return npc(buffer)->toString();
}

org::apache::poi::hssf::record::common::ExtendedColor* org::apache::poi::hssf::record::common::ExtendedColor::clone()
{
    auto exc = new ExtendedColor();
    npc(exc)->type = type;
    npc(exc)->tint = tint;
    if(type == TYPE_INDEXED) {
        npc(exc)->colorIndex = colorIndex;
    } else if(type == TYPE_RGB) {
        npc(exc)->rgba = new ::int8_tArray(int32_t(4));
        ::java::lang::System::arraycopy(rgba, 0, npc(exc)->rgba, 0, 4);
    } else if(type == TYPE_THEMED) {
        npc(exc)->themeIndex = themeIndex;
    }
    return exc;
}

int32_t org::apache::poi::hssf::record::common::ExtendedColor::getDataLength()
{
    return int32_t(4) + int32_t(4) + int32_t(8);
}

void org::apache::poi::hssf::record::common::ExtendedColor::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeInt(type);
    if(type == TYPE_INDEXED) {
        npc(out)->writeInt(colorIndex);
    } else if(type == TYPE_RGB) {
        npc(out)->write(rgba);
    } else if(type == TYPE_THEMED) {
        npc(out)->writeInt(themeIndex);
    } else {
        npc(out)->writeInt(0);
    }
    npc(out)->writeDouble(tint);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::common::ExtendedColor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.common.ExtendedColor", 47);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::common::ExtendedColor::getClass0()
{
    return class_();
}

