// Generated from /POI/java/org/apache/poi/hssf/util/HSSFColor.java
#include <org/apache/poi/hssf/util/HSSFColor_HSSFColorPredefined.hpp>

#include <java/awt/Color.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/hssf/util/HSSFColor.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>
#include <Array.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

namespace poi
{
    namespace hssf
    {
        namespace util
        {
typedef ::SubArray< ::poi::hssf::util::HSSFColor_HSSFColorPredefined, ::java::lang::EnumArray > HSSFColor_HSSFColorPredefinedArray;
        } // util
    } // hssf
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::util::HSSFColor_HSSFColorPredefined::HSSFColor_HSSFColorPredefined(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::util::HSSFColor_HSSFColorPredefined::HSSFColor_HSSFColorPredefined(::java::lang::String* name, int ordinal, int32_t index, int32_t index2, int32_t rgb) 
    : HSSFColor_HSSFColorPredefined(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, index,index2,rgb);
}

poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::BLACK = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"BLACK"_j, 0, int32_t(8), -int32_t(1), int32_t(0));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::BROWN = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"BROWN"_j, 1, int32_t(60), -int32_t(1), int32_t(10040064));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::OLIVE_GREEN = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"OLIVE_GREEN"_j, 2, int32_t(59), -int32_t(1), int32_t(3355392));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::DARK_GREEN = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"DARK_GREEN"_j, 3, int32_t(58), -int32_t(1), int32_t(13056));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::DARK_TEAL = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"DARK_TEAL"_j, 4, int32_t(56), -int32_t(1), int32_t(13158));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::DARK_BLUE = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"DARK_BLUE"_j, 5, int32_t(18), int32_t(32), int32_t(128));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::INDIGO = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"INDIGO"_j, 6, int32_t(62), -int32_t(1), int32_t(3355545));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::GREY_80_PERCENT = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"GREY_80_PERCENT"_j, 7, int32_t(63), -int32_t(1), int32_t(3355443));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::ORANGE = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"ORANGE"_j, 8, int32_t(53), -int32_t(1), int32_t(16737792));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::DARK_YELLOW = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"DARK_YELLOW"_j, 9, int32_t(19), -int32_t(1), int32_t(8421376));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::GREEN = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"GREEN"_j, 10, int32_t(17), -int32_t(1), int32_t(32768));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::TEAL = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"TEAL"_j, 11, int32_t(21), int32_t(38), int32_t(32896));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::BLUE = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"BLUE"_j, 12, int32_t(12), int32_t(39), int32_t(255));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::BLUE_GREY = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"BLUE_GREY"_j, 13, int32_t(54), -int32_t(1), int32_t(6710937));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::GREY_50_PERCENT = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"GREY_50_PERCENT"_j, 14, int32_t(23), -int32_t(1), int32_t(8421504));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::RED = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"RED"_j, 15, int32_t(10), -int32_t(1), int32_t(16711680));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::LIGHT_ORANGE = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"LIGHT_ORANGE"_j, 16, int32_t(52), -int32_t(1), int32_t(16750848));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::LIME = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"LIME"_j, 17, int32_t(50), -int32_t(1), int32_t(10079232));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::SEA_GREEN = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"SEA_GREEN"_j, 18, int32_t(57), -int32_t(1), int32_t(3381606));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::AQUA = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"AQUA"_j, 19, int32_t(49), -int32_t(1), int32_t(3394764));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::LIGHT_BLUE = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"LIGHT_BLUE"_j, 20, int32_t(48), -int32_t(1), int32_t(3368703));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::VIOLET = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"VIOLET"_j, 21, int32_t(20), int32_t(36), int32_t(8388736));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::GREY_40_PERCENT = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"GREY_40_PERCENT"_j, 22, int32_t(55), -int32_t(1), int32_t(9868950));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::PINK = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"PINK"_j, 23, int32_t(14), int32_t(33), int32_t(16711935));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::GOLD = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"GOLD"_j, 24, int32_t(51), -int32_t(1), int32_t(16763904));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::YELLOW = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"YELLOW"_j, 25, int32_t(13), int32_t(34), int32_t(16776960));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::BRIGHT_GREEN = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"BRIGHT_GREEN"_j, 26, int32_t(11), -int32_t(1), int32_t(65280));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::TURQUOISE = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"TURQUOISE"_j, 27, int32_t(15), int32_t(35), int32_t(65535));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::DARK_RED = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"DARK_RED"_j, 28, int32_t(16), int32_t(37), int32_t(8388608));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::SKY_BLUE = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"SKY_BLUE"_j, 29, int32_t(40), -int32_t(1), int32_t(52479));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::PLUM = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"PLUM"_j, 30, int32_t(61), int32_t(25), int32_t(10040166));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::GREY_25_PERCENT = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"GREY_25_PERCENT"_j, 31, int32_t(22), -int32_t(1), int32_t(12632256));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::ROSE = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"ROSE"_j, 32, int32_t(45), -int32_t(1), int32_t(16751052));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::LIGHT_YELLOW = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"LIGHT_YELLOW"_j, 33, int32_t(43), -int32_t(1), int32_t(16777113));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::LIGHT_GREEN = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"LIGHT_GREEN"_j, 34, int32_t(42), -int32_t(1), int32_t(13434828));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::LIGHT_TURQUOISE = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"LIGHT_TURQUOISE"_j, 35, int32_t(41), int32_t(27), int32_t(13434879));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::PALE_BLUE = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"PALE_BLUE"_j, 36, int32_t(44), -int32_t(1), int32_t(10079487));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::LAVENDER = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"LAVENDER"_j, 37, int32_t(46), -int32_t(1), int32_t(13408767));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::WHITE = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"WHITE"_j, 38, int32_t(9), -int32_t(1), int32_t(16777215));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::CORNFLOWER_BLUE = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"CORNFLOWER_BLUE"_j, 39, int32_t(24), -int32_t(1), int32_t(10066431));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::LEMON_CHIFFON = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"LEMON_CHIFFON"_j, 40, int32_t(26), -int32_t(1), int32_t(16777164));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::MAROON = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"MAROON"_j, 41, int32_t(25), -int32_t(1), int32_t(8323072));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::ORCHID = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"ORCHID"_j, 42, int32_t(28), -int32_t(1), int32_t(6684774));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::CORAL = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"CORAL"_j, 43, int32_t(29), -int32_t(1), int32_t(16744576));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::ROYAL_BLUE = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"ROYAL_BLUE"_j, 44, int32_t(30), -int32_t(1), int32_t(26316));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::LIGHT_CORNFLOWER_BLUE = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"LIGHT_CORNFLOWER_BLUE"_j, 45, int32_t(31), -int32_t(1), int32_t(13421823));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::TAN = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"TAN"_j, 46, int32_t(47), -int32_t(1), int32_t(16764057));
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::AUTOMATIC = new ::poi::hssf::util::HSSFColor_HSSFColorPredefined(u"AUTOMATIC"_j, 47, int32_t(64), -int32_t(1), int32_t(0));
void poi::hssf::util::HSSFColor_HSSFColorPredefined::ctor(::java::lang::String* name, int ordinal, int32_t index, int32_t index2, int32_t rgb)
{
    super::ctor(name, ordinal);
    this->color = new HSSFColor(index, index2, new ::java::awt::Color(rgb));
}

int16_t poi::hssf::util::HSSFColor_HSSFColorPredefined::getIndex()
{
    return npc(color)->getIndex();
}

int16_t poi::hssf::util::HSSFColor_HSSFColorPredefined::getIndex2()
{
    return npc(color)->getIndex2();
}

int16_tArray* poi::hssf::util::HSSFColor_HSSFColorPredefined::getTriplet()
{
    return npc(color)->getTriplet();
}

java::lang::String* poi::hssf::util::HSSFColor_HSSFColorPredefined::getHexString()
{
    return npc(color)->getHexString();
}

poi::hssf::util::HSSFColor* poi::hssf::util::HSSFColor_HSSFColorPredefined::getColor()
{
    return new HSSFColor(getIndex(), getIndex2(), npc(color)->color);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::util::HSSFColor_HSSFColorPredefined::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.util.HSSFColor.HSSFColorPredefined", 54);
    return c;
}

poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_HSSFColorPredefined::valueOf(::java::lang::String* a0)
{
    if(AQUA->toString()->equals(a0))
        return AQUA;
    if(AUTOMATIC->toString()->equals(a0))
        return AUTOMATIC;
    if(BLACK->toString()->equals(a0))
        return BLACK;
    if(BLUE->toString()->equals(a0))
        return BLUE;
    if(BLUE_GREY->toString()->equals(a0))
        return BLUE_GREY;
    if(BRIGHT_GREEN->toString()->equals(a0))
        return BRIGHT_GREEN;
    if(BROWN->toString()->equals(a0))
        return BROWN;
    if(CORAL->toString()->equals(a0))
        return CORAL;
    if(CORNFLOWER_BLUE->toString()->equals(a0))
        return CORNFLOWER_BLUE;
    if(DARK_BLUE->toString()->equals(a0))
        return DARK_BLUE;
    if(DARK_GREEN->toString()->equals(a0))
        return DARK_GREEN;
    if(DARK_RED->toString()->equals(a0))
        return DARK_RED;
    if(DARK_TEAL->toString()->equals(a0))
        return DARK_TEAL;
    if(DARK_YELLOW->toString()->equals(a0))
        return DARK_YELLOW;
    if(GOLD->toString()->equals(a0))
        return GOLD;
    if(GREEN->toString()->equals(a0))
        return GREEN;
    if(GREY_25_PERCENT->toString()->equals(a0))
        return GREY_25_PERCENT;
    if(GREY_40_PERCENT->toString()->equals(a0))
        return GREY_40_PERCENT;
    if(GREY_50_PERCENT->toString()->equals(a0))
        return GREY_50_PERCENT;
    if(GREY_80_PERCENT->toString()->equals(a0))
        return GREY_80_PERCENT;
    if(INDIGO->toString()->equals(a0))
        return INDIGO;
    if(LAVENDER->toString()->equals(a0))
        return LAVENDER;
    if(LEMON_CHIFFON->toString()->equals(a0))
        return LEMON_CHIFFON;
    if(LIGHT_BLUE->toString()->equals(a0))
        return LIGHT_BLUE;
    if(LIGHT_CORNFLOWER_BLUE->toString()->equals(a0))
        return LIGHT_CORNFLOWER_BLUE;
    if(LIGHT_GREEN->toString()->equals(a0))
        return LIGHT_GREEN;
    if(LIGHT_ORANGE->toString()->equals(a0))
        return LIGHT_ORANGE;
    if(LIGHT_TURQUOISE->toString()->equals(a0))
        return LIGHT_TURQUOISE;
    if(LIGHT_YELLOW->toString()->equals(a0))
        return LIGHT_YELLOW;
    if(LIME->toString()->equals(a0))
        return LIME;
    if(MAROON->toString()->equals(a0))
        return MAROON;
    if(OLIVE_GREEN->toString()->equals(a0))
        return OLIVE_GREEN;
    if(ORANGE->toString()->equals(a0))
        return ORANGE;
    if(ORCHID->toString()->equals(a0))
        return ORCHID;
    if(PALE_BLUE->toString()->equals(a0))
        return PALE_BLUE;
    if(PINK->toString()->equals(a0))
        return PINK;
    if(PLUM->toString()->equals(a0))
        return PLUM;
    if(RED->toString()->equals(a0))
        return RED;
    if(ROSE->toString()->equals(a0))
        return ROSE;
    if(ROYAL_BLUE->toString()->equals(a0))
        return ROYAL_BLUE;
    if(SEA_GREEN->toString()->equals(a0))
        return SEA_GREEN;
    if(SKY_BLUE->toString()->equals(a0))
        return SKY_BLUE;
    if(TAN->toString()->equals(a0))
        return TAN;
    if(TEAL->toString()->equals(a0))
        return TEAL;
    if(TURQUOISE->toString()->equals(a0))
        return TURQUOISE;
    if(VIOLET->toString()->equals(a0))
        return VIOLET;
    if(WHITE->toString()->equals(a0))
        return WHITE;
    if(YELLOW->toString()->equals(a0))
        return YELLOW;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::hssf::util::HSSFColor_HSSFColorPredefinedArray* poi::hssf::util::HSSFColor_HSSFColorPredefined::values()
{
    return new poi::hssf::util::HSSFColor_HSSFColorPredefinedArray({
        AQUA,
        AUTOMATIC,
        BLACK,
        BLUE,
        BLUE_GREY,
        BRIGHT_GREEN,
        BROWN,
        CORAL,
        CORNFLOWER_BLUE,
        DARK_BLUE,
        DARK_GREEN,
        DARK_RED,
        DARK_TEAL,
        DARK_YELLOW,
        GOLD,
        GREEN,
        GREY_25_PERCENT,
        GREY_40_PERCENT,
        GREY_50_PERCENT,
        GREY_80_PERCENT,
        INDIGO,
        LAVENDER,
        LEMON_CHIFFON,
        LIGHT_BLUE,
        LIGHT_CORNFLOWER_BLUE,
        LIGHT_GREEN,
        LIGHT_ORANGE,
        LIGHT_TURQUOISE,
        LIGHT_YELLOW,
        LIME,
        MAROON,
        OLIVE_GREEN,
        ORANGE,
        ORCHID,
        PALE_BLUE,
        PINK,
        PLUM,
        RED,
        ROSE,
        ROYAL_BLUE,
        SEA_GREEN,
        SKY_BLUE,
        TAN,
        TEAL,
        TURQUOISE,
        VIOLET,
        WHITE,
        YELLOW,
    });
}

java::lang::Class* poi::hssf::util::HSSFColor_HSSFColorPredefined::getClass0()
{
    return class_();
}

