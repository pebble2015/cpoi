// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFExtendedColor.java
#include <org/apache/poi/hssf/usermodel/HSSFExtendedColor.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/System.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/hssf/record/common/ExtendedColor.hpp>
#include <org/apache/poi/hssf/util/HSSFColor.hpp>
#include <Array.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::usermodel::HSSFExtendedColor::HSSFExtendedColor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFExtendedColor::HSSFExtendedColor(::org::apache::poi::hssf::record::common::ExtendedColor* color) 
    : HSSFExtendedColor(*static_cast< ::default_init_tag* >(0))
{
    ctor(color);
}

void org::apache::poi::hssf::usermodel::HSSFExtendedColor::ctor(::org::apache::poi::hssf::record::common::ExtendedColor* color)
{
    super::ctor();
    this->color = color;
}

org::apache::poi::hssf::record::common::ExtendedColor* org::apache::poi::hssf::usermodel::HSSFExtendedColor::getExtendedColor()
{
    return color;
}

bool org::apache::poi::hssf::usermodel::HSSFExtendedColor::isAuto()
{
    return npc(color)->getType() == ::org::apache::poi::hssf::record::common::ExtendedColor::TYPE_AUTO;
}

bool org::apache::poi::hssf::usermodel::HSSFExtendedColor::isIndexed()
{
    return npc(color)->getType() == ::org::apache::poi::hssf::record::common::ExtendedColor::TYPE_INDEXED;
}

bool org::apache::poi::hssf::usermodel::HSSFExtendedColor::isRGB()
{
    return npc(color)->getType() == ::org::apache::poi::hssf::record::common::ExtendedColor::TYPE_RGB;
}

bool org::apache::poi::hssf::usermodel::HSSFExtendedColor::isThemed()
{
    return npc(color)->getType() == ::org::apache::poi::hssf::record::common::ExtendedColor::TYPE_THEMED;
}

int16_t org::apache::poi::hssf::usermodel::HSSFExtendedColor::getIndex()
{
    return static_cast< int16_t >(npc(color)->getColorIndex());
}

int32_t org::apache::poi::hssf::usermodel::HSSFExtendedColor::getTheme()
{
    return npc(color)->getThemeIndex();
}

int8_tArray* org::apache::poi::hssf::usermodel::HSSFExtendedColor::getRGB()
{
    auto rgb = new ::int8_tArray(int32_t(3));
    auto rgba = npc(color)->getRGBA();
    if(rgba == nullptr)
        return nullptr;

    ::java::lang::System::arraycopy(rgba, 0, rgb, 0, 3);
    return rgb;
}

int8_tArray* org::apache::poi::hssf::usermodel::HSSFExtendedColor::getARGB()
{
    auto argb = new ::int8_tArray(int32_t(4));
    auto rgba = npc(color)->getRGBA();
    if(rgba == nullptr)
        return nullptr;

    ::java::lang::System::arraycopy(rgba, 0, argb, 1, 3);
    (*argb)[int32_t(0)] = (*rgba)[int32_t(3)];
    return argb;
}

int8_tArray* org::apache::poi::hssf::usermodel::HSSFExtendedColor::getStoredRBG()
{
    return getARGB();
}

void org::apache::poi::hssf::usermodel::HSSFExtendedColor::setRGB(::int8_tArray* rgb)
{
    if(npc(rgb)->length == 3) {
        auto rgba = new ::int8_tArray(int32_t(4));
        ::java::lang::System::arraycopy(rgb, 0, rgba, 0, 3);
        (*rgba)[int32_t(3)] = -int32_t(1);
    } else {
        auto a = (*rgb)[int32_t(0)];
        (*rgb)[int32_t(0)] = (*rgb)[int32_t(1)];
        (*rgb)[int32_t(1)] = (*rgb)[int32_t(2)];
        (*rgb)[int32_t(2)] = (*rgb)[int32_t(3)];
        (*rgb)[int32_t(3)] = a;
        npc(color)->setRGBA(rgb);
    }
    npc(color)->setType(::org::apache::poi::hssf::record::common::ExtendedColor::TYPE_RGB);
}

double org::apache::poi::hssf::usermodel::HSSFExtendedColor::getTint()
{
    return npc(color)->getTint();
}

void org::apache::poi::hssf::usermodel::HSSFExtendedColor::setTint(double tint)
{
    npc(color)->setTint(tint);
}

int8_tArray* org::apache::poi::hssf::usermodel::HSSFExtendedColor::getIndexedRGB()
{
    if(isIndexed() && getIndex() > 0) {
        int32_t indexNum = getIndex();
        auto indexed = java_cast< ::org::apache::poi::hssf::util::HSSFColor* >(npc(::org::apache::poi::hssf::util::HSSFColor::getIndexHash())->get(::java::lang::Integer::valueOf(indexNum)));
        if(indexed != nullptr) {
            auto rgb = new ::int8_tArray(int32_t(3));
            (*rgb)[int32_t(0)] = static_cast< int8_t >((*npc(indexed)->getTriplet())[int32_t(0)]);
            (*rgb)[int32_t(1)] = static_cast< int8_t >((*npc(indexed)->getTriplet())[int32_t(1)]);
            (*rgb)[int32_t(2)] = static_cast< int8_t >((*npc(indexed)->getTriplet())[int32_t(2)]);
            return rgb;
        }
    }
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFExtendedColor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFExtendedColor", 47);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFExtendedColor::getClass0()
{
    return class_();
}

