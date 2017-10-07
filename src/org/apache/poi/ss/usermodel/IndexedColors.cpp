// Generated from /POI/java/org/apache/poi/ss/usermodel/IndexedColors.java
#include <org/apache/poi/ss/usermodel/IndexedColors.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::IndexedColors, ::java::lang::EnumArray > IndexedColorsArray;
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::usermodel::IndexedColors::IndexedColors(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::IndexedColors::IndexedColors(::java::lang::String* name, int ordinal, int32_t idx) 
    : IndexedColors(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, idx);
}

org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::BLACK1 = new ::org::apache::poi::ss::usermodel::IndexedColors(u"BLACK1"_j, 0, int32_t(0));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::WHITE1 = new ::org::apache::poi::ss::usermodel::IndexedColors(u"WHITE1"_j, 1, int32_t(1));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::RED1 = new ::org::apache::poi::ss::usermodel::IndexedColors(u"RED1"_j, 2, int32_t(2));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::BRIGHT_GREEN1 = new ::org::apache::poi::ss::usermodel::IndexedColors(u"BRIGHT_GREEN1"_j, 3, int32_t(3));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::BLUE1 = new ::org::apache::poi::ss::usermodel::IndexedColors(u"BLUE1"_j, 4, int32_t(4));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::YELLOW1 = new ::org::apache::poi::ss::usermodel::IndexedColors(u"YELLOW1"_j, 5, int32_t(5));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::PINK1 = new ::org::apache::poi::ss::usermodel::IndexedColors(u"PINK1"_j, 6, int32_t(6));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::TURQUOISE1 = new ::org::apache::poi::ss::usermodel::IndexedColors(u"TURQUOISE1"_j, 7, int32_t(7));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::BLACK = new ::org::apache::poi::ss::usermodel::IndexedColors(u"BLACK"_j, 8, int32_t(8));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::WHITE = new ::org::apache::poi::ss::usermodel::IndexedColors(u"WHITE"_j, 9, int32_t(9));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::RED = new ::org::apache::poi::ss::usermodel::IndexedColors(u"RED"_j, 10, int32_t(10));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::BRIGHT_GREEN = new ::org::apache::poi::ss::usermodel::IndexedColors(u"BRIGHT_GREEN"_j, 11, int32_t(11));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::BLUE = new ::org::apache::poi::ss::usermodel::IndexedColors(u"BLUE"_j, 12, int32_t(12));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::YELLOW = new ::org::apache::poi::ss::usermodel::IndexedColors(u"YELLOW"_j, 13, int32_t(13));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::PINK = new ::org::apache::poi::ss::usermodel::IndexedColors(u"PINK"_j, 14, int32_t(14));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::TURQUOISE = new ::org::apache::poi::ss::usermodel::IndexedColors(u"TURQUOISE"_j, 15, int32_t(15));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::DARK_RED = new ::org::apache::poi::ss::usermodel::IndexedColors(u"DARK_RED"_j, 16, int32_t(16));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::GREEN = new ::org::apache::poi::ss::usermodel::IndexedColors(u"GREEN"_j, 17, int32_t(17));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::DARK_BLUE = new ::org::apache::poi::ss::usermodel::IndexedColors(u"DARK_BLUE"_j, 18, int32_t(18));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::DARK_YELLOW = new ::org::apache::poi::ss::usermodel::IndexedColors(u"DARK_YELLOW"_j, 19, int32_t(19));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::VIOLET = new ::org::apache::poi::ss::usermodel::IndexedColors(u"VIOLET"_j, 20, int32_t(20));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::TEAL = new ::org::apache::poi::ss::usermodel::IndexedColors(u"TEAL"_j, 21, int32_t(21));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::GREY_25_PERCENT = new ::org::apache::poi::ss::usermodel::IndexedColors(u"GREY_25_PERCENT"_j, 22, int32_t(22));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::GREY_50_PERCENT = new ::org::apache::poi::ss::usermodel::IndexedColors(u"GREY_50_PERCENT"_j, 23, int32_t(23));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::CORNFLOWER_BLUE = new ::org::apache::poi::ss::usermodel::IndexedColors(u"CORNFLOWER_BLUE"_j, 24, int32_t(24));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::MAROON = new ::org::apache::poi::ss::usermodel::IndexedColors(u"MAROON"_j, 25, int32_t(25));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::LEMON_CHIFFON = new ::org::apache::poi::ss::usermodel::IndexedColors(u"LEMON_CHIFFON"_j, 26, int32_t(26));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::LIGHT_TURQUOISE1 = new ::org::apache::poi::ss::usermodel::IndexedColors(u"LIGHT_TURQUOISE1"_j, 27, int32_t(27));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::ORCHID = new ::org::apache::poi::ss::usermodel::IndexedColors(u"ORCHID"_j, 28, int32_t(28));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::CORAL = new ::org::apache::poi::ss::usermodel::IndexedColors(u"CORAL"_j, 29, int32_t(29));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::ROYAL_BLUE = new ::org::apache::poi::ss::usermodel::IndexedColors(u"ROYAL_BLUE"_j, 30, int32_t(30));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::LIGHT_CORNFLOWER_BLUE = new ::org::apache::poi::ss::usermodel::IndexedColors(u"LIGHT_CORNFLOWER_BLUE"_j, 31, int32_t(31));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::SKY_BLUE = new ::org::apache::poi::ss::usermodel::IndexedColors(u"SKY_BLUE"_j, 32, int32_t(40));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::LIGHT_TURQUOISE = new ::org::apache::poi::ss::usermodel::IndexedColors(u"LIGHT_TURQUOISE"_j, 33, int32_t(41));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::LIGHT_GREEN = new ::org::apache::poi::ss::usermodel::IndexedColors(u"LIGHT_GREEN"_j, 34, int32_t(42));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::LIGHT_YELLOW = new ::org::apache::poi::ss::usermodel::IndexedColors(u"LIGHT_YELLOW"_j, 35, int32_t(43));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::PALE_BLUE = new ::org::apache::poi::ss::usermodel::IndexedColors(u"PALE_BLUE"_j, 36, int32_t(44));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::ROSE = new ::org::apache::poi::ss::usermodel::IndexedColors(u"ROSE"_j, 37, int32_t(45));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::LAVENDER = new ::org::apache::poi::ss::usermodel::IndexedColors(u"LAVENDER"_j, 38, int32_t(46));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::TAN = new ::org::apache::poi::ss::usermodel::IndexedColors(u"TAN"_j, 39, int32_t(47));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::LIGHT_BLUE = new ::org::apache::poi::ss::usermodel::IndexedColors(u"LIGHT_BLUE"_j, 40, int32_t(48));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::AQUA = new ::org::apache::poi::ss::usermodel::IndexedColors(u"AQUA"_j, 41, int32_t(49));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::LIME = new ::org::apache::poi::ss::usermodel::IndexedColors(u"LIME"_j, 42, int32_t(50));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::GOLD = new ::org::apache::poi::ss::usermodel::IndexedColors(u"GOLD"_j, 43, int32_t(51));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::LIGHT_ORANGE = new ::org::apache::poi::ss::usermodel::IndexedColors(u"LIGHT_ORANGE"_j, 44, int32_t(52));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::ORANGE = new ::org::apache::poi::ss::usermodel::IndexedColors(u"ORANGE"_j, 45, int32_t(53));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::BLUE_GREY = new ::org::apache::poi::ss::usermodel::IndexedColors(u"BLUE_GREY"_j, 46, int32_t(54));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::GREY_40_PERCENT = new ::org::apache::poi::ss::usermodel::IndexedColors(u"GREY_40_PERCENT"_j, 47, int32_t(55));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::DARK_TEAL = new ::org::apache::poi::ss::usermodel::IndexedColors(u"DARK_TEAL"_j, 48, int32_t(56));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::SEA_GREEN = new ::org::apache::poi::ss::usermodel::IndexedColors(u"SEA_GREEN"_j, 49, int32_t(57));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::DARK_GREEN = new ::org::apache::poi::ss::usermodel::IndexedColors(u"DARK_GREEN"_j, 50, int32_t(58));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::OLIVE_GREEN = new ::org::apache::poi::ss::usermodel::IndexedColors(u"OLIVE_GREEN"_j, 51, int32_t(59));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::BROWN = new ::org::apache::poi::ss::usermodel::IndexedColors(u"BROWN"_j, 52, int32_t(60));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::PLUM = new ::org::apache::poi::ss::usermodel::IndexedColors(u"PLUM"_j, 53, int32_t(61));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::INDIGO = new ::org::apache::poi::ss::usermodel::IndexedColors(u"INDIGO"_j, 54, int32_t(62));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::GREY_80_PERCENT = new ::org::apache::poi::ss::usermodel::IndexedColors(u"GREY_80_PERCENT"_j, 55, int32_t(63));
org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::AUTOMATIC = new ::org::apache::poi::ss::usermodel::IndexedColors(u"AUTOMATIC"_j, 56, int32_t(64));
org::apache::poi::ss::usermodel::IndexedColorsArray*& org::apache::poi::ss::usermodel::IndexedColors::_values()
{
    clinit();
    return _values_;
}
org::apache::poi::ss::usermodel::IndexedColorsArray* org::apache::poi::ss::usermodel::IndexedColors::_values_;

void org::apache::poi::ss::usermodel::IndexedColors::ctor(::java::lang::String* name, int ordinal, int32_t idx)
{
    super::ctor(name, ordinal);
    index = static_cast< int16_t >(idx);
}

int16_t org::apache::poi::ss::usermodel::IndexedColors::getIndex()
{
    return index;
}

org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::fromInt(int32_t index)
{
    clinit();
    if(index < 0 || index >= npc(_values_)->length) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Illegal IndexedColor index: "_j)->append(index)->toString());
    }
    auto color = (*_values_)[index];
    if(color == nullptr) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Illegal IndexedColor index: "_j)->append(index)->toString());
    }
    return color;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::IndexedColors::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.IndexedColors", 41);
    return c;
}

void org::apache::poi::ss::usermodel::IndexedColors::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _values_ = new IndexedColorsArray(int32_t(65));
        {
            for(auto color : *npc(values())) {
                _values_->set(npc(color)->index, color);
            }
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

org::apache::poi::ss::usermodel::IndexedColors* org::apache::poi::ss::usermodel::IndexedColors::valueOf(::java::lang::String* a0)
{
    if(AQUA->toString()->equals(a0))
        return AQUA;
    if(AUTOMATIC->toString()->equals(a0))
        return AUTOMATIC;
    if(BLACK->toString()->equals(a0))
        return BLACK;
    if(BLACK1->toString()->equals(a0))
        return BLACK1;
    if(BLUE->toString()->equals(a0))
        return BLUE;
    if(BLUE1->toString()->equals(a0))
        return BLUE1;
    if(BLUE_GREY->toString()->equals(a0))
        return BLUE_GREY;
    if(BRIGHT_GREEN->toString()->equals(a0))
        return BRIGHT_GREEN;
    if(BRIGHT_GREEN1->toString()->equals(a0))
        return BRIGHT_GREEN1;
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
    if(LIGHT_TURQUOISE1->toString()->equals(a0))
        return LIGHT_TURQUOISE1;
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
    if(PINK1->toString()->equals(a0))
        return PINK1;
    if(PLUM->toString()->equals(a0))
        return PLUM;
    if(RED->toString()->equals(a0))
        return RED;
    if(RED1->toString()->equals(a0))
        return RED1;
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
    if(TURQUOISE1->toString()->equals(a0))
        return TURQUOISE1;
    if(VIOLET->toString()->equals(a0))
        return VIOLET;
    if(WHITE->toString()->equals(a0))
        return WHITE;
    if(WHITE1->toString()->equals(a0))
        return WHITE1;
    if(YELLOW->toString()->equals(a0))
        return YELLOW;
    if(YELLOW1->toString()->equals(a0))
        return YELLOW1;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::usermodel::IndexedColorsArray* org::apache::poi::ss::usermodel::IndexedColors::values()
{
    return new org::apache::poi::ss::usermodel::IndexedColorsArray({
        AQUA,
        AUTOMATIC,
        BLACK,
        BLACK1,
        BLUE,
        BLUE1,
        BLUE_GREY,
        BRIGHT_GREEN,
        BRIGHT_GREEN1,
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
        LIGHT_TURQUOISE1,
        LIGHT_YELLOW,
        LIME,
        MAROON,
        OLIVE_GREEN,
        ORANGE,
        ORCHID,
        PALE_BLUE,
        PINK,
        PINK1,
        PLUM,
        RED,
        RED1,
        ROSE,
        ROYAL_BLUE,
        SEA_GREEN,
        SKY_BLUE,
        TAN,
        TEAL,
        TURQUOISE,
        TURQUOISE1,
        VIOLET,
        WHITE,
        WHITE1,
        YELLOW,
        YELLOW1,
    });
}

java::lang::Class* org::apache::poi::ss::usermodel::IndexedColors::getClass0()
{
    return class_();
}

