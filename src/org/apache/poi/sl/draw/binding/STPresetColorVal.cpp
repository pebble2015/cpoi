// Generated from /POI/java/org/apache/poi/sl/draw/binding/STPresetColorVal.java
#include <org/apache/poi/sl/draw/binding/STPresetColorVal.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
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
            namespace sl
            {
                namespace draw
                {
                    namespace binding
                    {
typedef ::SubArray< ::org::apache::poi::sl::draw::binding::STPresetColorVal, ::java::lang::EnumArray > STPresetColorValArray;
                    } // binding
                } // draw
            } // sl
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::sl::draw::binding::STPresetColorVal::STPresetColorVal(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::STPresetColorVal::STPresetColorVal(::java::lang::String* name, int ordinal, ::java::lang::String* v) 
    : STPresetColorVal(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, v);
}

org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::ALICE_BLUE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"ALICE_BLUE"_j, 0, u"aliceBlue"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::ANTIQUE_WHITE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"ANTIQUE_WHITE"_j, 1, u"antiqueWhite"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::AQUA = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"AQUA"_j, 2, u"aqua"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::AQUAMARINE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"AQUAMARINE"_j, 3, u"aquamarine"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::AZURE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"AZURE"_j, 4, u"azure"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::BEIGE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"BEIGE"_j, 5, u"beige"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::BISQUE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"BISQUE"_j, 6, u"bisque"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::BLACK = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"BLACK"_j, 7, u"black"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::BLANCHED_ALMOND = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"BLANCHED_ALMOND"_j, 8, u"blanchedAlmond"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::BLUE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"BLUE"_j, 9, u"blue"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::BLUE_VIOLET = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"BLUE_VIOLET"_j, 10, u"blueViolet"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::BROWN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"BROWN"_j, 11, u"brown"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::BURLY_WOOD = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"BURLY_WOOD"_j, 12, u"burlyWood"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::CADET_BLUE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"CADET_BLUE"_j, 13, u"cadetBlue"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::CHARTREUSE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"CHARTREUSE"_j, 14, u"chartreuse"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::CHOCOLATE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"CHOCOLATE"_j, 15, u"chocolate"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::CORAL = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"CORAL"_j, 16, u"coral"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::CORNFLOWER_BLUE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"CORNFLOWER_BLUE"_j, 17, u"cornflowerBlue"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::CORNSILK = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"CORNSILK"_j, 18, u"cornsilk"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::CRIMSON = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"CRIMSON"_j, 19, u"crimson"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::CYAN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"CYAN"_j, 20, u"cyan"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DK_BLUE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DK_BLUE"_j, 21, u"dkBlue"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DK_CYAN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DK_CYAN"_j, 22, u"dkCyan"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DK_GOLDENROD = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DK_GOLDENROD"_j, 23, u"dkGoldenrod"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DK_GRAY = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DK_GRAY"_j, 24, u"dkGray"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DK_GREEN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DK_GREEN"_j, 25, u"dkGreen"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DK_KHAKI = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DK_KHAKI"_j, 26, u"dkKhaki"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DK_MAGENTA = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DK_MAGENTA"_j, 27, u"dkMagenta"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DK_OLIVE_GREEN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DK_OLIVE_GREEN"_j, 28, u"dkOliveGreen"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DK_ORANGE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DK_ORANGE"_j, 29, u"dkOrange"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DK_ORCHID = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DK_ORCHID"_j, 30, u"dkOrchid"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DK_RED = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DK_RED"_j, 31, u"dkRed"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DK_SALMON = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DK_SALMON"_j, 32, u"dkSalmon"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DK_SEA_GREEN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DK_SEA_GREEN"_j, 33, u"dkSeaGreen"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DK_SLATE_BLUE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DK_SLATE_BLUE"_j, 34, u"dkSlateBlue"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DK_SLATE_GRAY = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DK_SLATE_GRAY"_j, 35, u"dkSlateGray"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DK_TURQUOISE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DK_TURQUOISE"_j, 36, u"dkTurquoise"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DK_VIOLET = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DK_VIOLET"_j, 37, u"dkViolet"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DEEP_PINK = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DEEP_PINK"_j, 38, u"deepPink"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DEEP_SKY_BLUE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DEEP_SKY_BLUE"_j, 39, u"deepSkyBlue"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DIM_GRAY = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DIM_GRAY"_j, 40, u"dimGray"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::DODGER_BLUE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"DODGER_BLUE"_j, 41, u"dodgerBlue"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::FIREBRICK = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"FIREBRICK"_j, 42, u"firebrick"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::FLORAL_WHITE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"FLORAL_WHITE"_j, 43, u"floralWhite"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::FOREST_GREEN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"FOREST_GREEN"_j, 44, u"forestGreen"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::FUCHSIA = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"FUCHSIA"_j, 45, u"fuchsia"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::GAINSBORO = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"GAINSBORO"_j, 46, u"gainsboro"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::GHOST_WHITE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"GHOST_WHITE"_j, 47, u"ghostWhite"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::GOLD = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"GOLD"_j, 48, u"gold"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::GOLDENROD = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"GOLDENROD"_j, 49, u"goldenrod"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::GRAY = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"GRAY"_j, 50, u"gray"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::GREEN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"GREEN"_j, 51, u"green"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::GREEN_YELLOW = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"GREEN_YELLOW"_j, 52, u"greenYellow"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::HONEYDEW = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"HONEYDEW"_j, 53, u"honeydew"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::HOT_PINK = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"HOT_PINK"_j, 54, u"hotPink"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::INDIAN_RED = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"INDIAN_RED"_j, 55, u"indianRed"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::INDIGO = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"INDIGO"_j, 56, u"indigo"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::IVORY = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"IVORY"_j, 57, u"ivory"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::KHAKI = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"KHAKI"_j, 58, u"khaki"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::LAVENDER = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"LAVENDER"_j, 59, u"lavender"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::LAVENDER_BLUSH = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"LAVENDER_BLUSH"_j, 60, u"lavenderBlush"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::LAWN_GREEN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"LAWN_GREEN"_j, 61, u"lawnGreen"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::LEMON_CHIFFON = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"LEMON_CHIFFON"_j, 62, u"lemonChiffon"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::LT_BLUE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"LT_BLUE"_j, 63, u"ltBlue"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::LT_CORAL = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"LT_CORAL"_j, 64, u"ltCoral"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::LT_CYAN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"LT_CYAN"_j, 65, u"ltCyan"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::LT_GOLDENROD_YELLOW = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"LT_GOLDENROD_YELLOW"_j, 66, u"ltGoldenrodYellow"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::LT_GRAY = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"LT_GRAY"_j, 67, u"ltGray"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::LT_GREEN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"LT_GREEN"_j, 68, u"ltGreen"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::LT_PINK = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"LT_PINK"_j, 69, u"ltPink"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::LT_SALMON = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"LT_SALMON"_j, 70, u"ltSalmon"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::LT_SEA_GREEN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"LT_SEA_GREEN"_j, 71, u"ltSeaGreen"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::LT_SKY_BLUE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"LT_SKY_BLUE"_j, 72, u"ltSkyBlue"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::LT_SLATE_GRAY = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"LT_SLATE_GRAY"_j, 73, u"ltSlateGray"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::LT_STEEL_BLUE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"LT_STEEL_BLUE"_j, 74, u"ltSteelBlue"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::LT_YELLOW = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"LT_YELLOW"_j, 75, u"ltYellow"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::LIME = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"LIME"_j, 76, u"lime"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::LIME_GREEN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"LIME_GREEN"_j, 77, u"limeGreen"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::LINEN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"LINEN"_j, 78, u"linen"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::MAGENTA = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"MAGENTA"_j, 79, u"magenta"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::MAROON = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"MAROON"_j, 80, u"maroon"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::MED_AQUAMARINE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"MED_AQUAMARINE"_j, 81, u"medAquamarine"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::MED_BLUE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"MED_BLUE"_j, 82, u"medBlue"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::MED_ORCHID = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"MED_ORCHID"_j, 83, u"medOrchid"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::MED_PURPLE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"MED_PURPLE"_j, 84, u"medPurple"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::MED_SEA_GREEN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"MED_SEA_GREEN"_j, 85, u"medSeaGreen"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::MED_SLATE_BLUE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"MED_SLATE_BLUE"_j, 86, u"medSlateBlue"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::MED_SPRING_GREEN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"MED_SPRING_GREEN"_j, 87, u"medSpringGreen"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::MED_TURQUOISE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"MED_TURQUOISE"_j, 88, u"medTurquoise"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::MED_VIOLET_RED = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"MED_VIOLET_RED"_j, 89, u"medVioletRed"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::MIDNIGHT_BLUE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"MIDNIGHT_BLUE"_j, 90, u"midnightBlue"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::MINT_CREAM = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"MINT_CREAM"_j, 91, u"mintCream"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::MISTY_ROSE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"MISTY_ROSE"_j, 92, u"mistyRose"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::MOCCASIN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"MOCCASIN"_j, 93, u"moccasin"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::NAVAJO_WHITE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"NAVAJO_WHITE"_j, 94, u"navajoWhite"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::NAVY = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"NAVY"_j, 95, u"navy"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::OLD_LACE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"OLD_LACE"_j, 96, u"oldLace"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::OLIVE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"OLIVE"_j, 97, u"olive"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::OLIVE_DRAB = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"OLIVE_DRAB"_j, 98, u"oliveDrab"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::ORANGE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"ORANGE"_j, 99, u"orange"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::ORANGE_RED = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"ORANGE_RED"_j, 100, u"orangeRed"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::ORCHID = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"ORCHID"_j, 101, u"orchid"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::PALE_GOLDENROD = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"PALE_GOLDENROD"_j, 102, u"paleGoldenrod"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::PALE_GREEN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"PALE_GREEN"_j, 103, u"paleGreen"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::PALE_TURQUOISE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"PALE_TURQUOISE"_j, 104, u"paleTurquoise"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::PALE_VIOLET_RED = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"PALE_VIOLET_RED"_j, 105, u"paleVioletRed"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::PAPAYA_WHIP = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"PAPAYA_WHIP"_j, 106, u"papayaWhip"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::PEACH_PUFF = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"PEACH_PUFF"_j, 107, u"peachPuff"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::PERU = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"PERU"_j, 108, u"peru"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::PINK = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"PINK"_j, 109, u"pink"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::PLUM = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"PLUM"_j, 110, u"plum"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::POWDER_BLUE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"POWDER_BLUE"_j, 111, u"powderBlue"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::PURPLE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"PURPLE"_j, 112, u"purple"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::RED = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"RED"_j, 113, u"red"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::ROSY_BROWN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"ROSY_BROWN"_j, 114, u"rosyBrown"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::ROYAL_BLUE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"ROYAL_BLUE"_j, 115, u"royalBlue"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::SADDLE_BROWN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"SADDLE_BROWN"_j, 116, u"saddleBrown"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::SALMON = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"SALMON"_j, 117, u"salmon"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::SANDY_BROWN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"SANDY_BROWN"_j, 118, u"sandyBrown"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::SEA_GREEN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"SEA_GREEN"_j, 119, u"seaGreen"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::SEA_SHELL = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"SEA_SHELL"_j, 120, u"seaShell"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::SIENNA = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"SIENNA"_j, 121, u"sienna"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::SILVER = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"SILVER"_j, 122, u"silver"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::SKY_BLUE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"SKY_BLUE"_j, 123, u"skyBlue"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::SLATE_BLUE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"SLATE_BLUE"_j, 124, u"slateBlue"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::SLATE_GRAY = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"SLATE_GRAY"_j, 125, u"slateGray"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::SNOW = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"SNOW"_j, 126, u"snow"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::SPRING_GREEN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"SPRING_GREEN"_j, 127, u"springGreen"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::STEEL_BLUE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"STEEL_BLUE"_j, 128, u"steelBlue"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::TAN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"TAN"_j, 129, u"tan"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::TEAL = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"TEAL"_j, 130, u"teal"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::THISTLE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"THISTLE"_j, 131, u"thistle"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::TOMATO = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"TOMATO"_j, 132, u"tomato"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::TURQUOISE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"TURQUOISE"_j, 133, u"turquoise"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::VIOLET = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"VIOLET"_j, 134, u"violet"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::WHEAT = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"WHEAT"_j, 135, u"wheat"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::WHITE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"WHITE"_j, 136, u"white"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::WHITE_SMOKE = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"WHITE_SMOKE"_j, 137, u"whiteSmoke"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::YELLOW = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"YELLOW"_j, 138, u"yellow"_j);
org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::YELLOW_GREEN = new ::org::apache::poi::sl::draw::binding::STPresetColorVal(u"YELLOW_GREEN"_j, 139, u"yellowGreen"_j);
void org::apache::poi::sl::draw::binding::STPresetColorVal::ctor(::java::lang::String* name, int ordinal, ::java::lang::String* v)
{
    super::ctor(name, ordinal);
    value_ = v;
}

java::lang::String* org::apache::poi::sl::draw::binding::STPresetColorVal::value()
{
    return value_;
}

org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::fromValue(::java::lang::String* v)
{
    clinit();
    for(auto c : *npc(STPresetColorVal::values())) {
        if(npc(npc(c)->value_)->equals(static_cast< ::java::lang::Object* >(v))) {
            return c;
        }
    }
    throw new ::java::lang::IllegalArgumentException(v);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::STPresetColorVal::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.STPresetColorVal", 47);
    return c;
}

org::apache::poi::sl::draw::binding::STPresetColorVal* org::apache::poi::sl::draw::binding::STPresetColorVal::valueOf(::java::lang::String* a0)
{
    if(ALICE_BLUE->toString()->equals(a0))
        return ALICE_BLUE;
    if(ANTIQUE_WHITE->toString()->equals(a0))
        return ANTIQUE_WHITE;
    if(AQUA->toString()->equals(a0))
        return AQUA;
    if(AQUAMARINE->toString()->equals(a0))
        return AQUAMARINE;
    if(AZURE->toString()->equals(a0))
        return AZURE;
    if(BEIGE->toString()->equals(a0))
        return BEIGE;
    if(BISQUE->toString()->equals(a0))
        return BISQUE;
    if(BLACK->toString()->equals(a0))
        return BLACK;
    if(BLANCHED_ALMOND->toString()->equals(a0))
        return BLANCHED_ALMOND;
    if(BLUE->toString()->equals(a0))
        return BLUE;
    if(BLUE_VIOLET->toString()->equals(a0))
        return BLUE_VIOLET;
    if(BROWN->toString()->equals(a0))
        return BROWN;
    if(BURLY_WOOD->toString()->equals(a0))
        return BURLY_WOOD;
    if(CADET_BLUE->toString()->equals(a0))
        return CADET_BLUE;
    if(CHARTREUSE->toString()->equals(a0))
        return CHARTREUSE;
    if(CHOCOLATE->toString()->equals(a0))
        return CHOCOLATE;
    if(CORAL->toString()->equals(a0))
        return CORAL;
    if(CORNFLOWER_BLUE->toString()->equals(a0))
        return CORNFLOWER_BLUE;
    if(CORNSILK->toString()->equals(a0))
        return CORNSILK;
    if(CRIMSON->toString()->equals(a0))
        return CRIMSON;
    if(CYAN->toString()->equals(a0))
        return CYAN;
    if(DEEP_PINK->toString()->equals(a0))
        return DEEP_PINK;
    if(DEEP_SKY_BLUE->toString()->equals(a0))
        return DEEP_SKY_BLUE;
    if(DIM_GRAY->toString()->equals(a0))
        return DIM_GRAY;
    if(DK_BLUE->toString()->equals(a0))
        return DK_BLUE;
    if(DK_CYAN->toString()->equals(a0))
        return DK_CYAN;
    if(DK_GOLDENROD->toString()->equals(a0))
        return DK_GOLDENROD;
    if(DK_GRAY->toString()->equals(a0))
        return DK_GRAY;
    if(DK_GREEN->toString()->equals(a0))
        return DK_GREEN;
    if(DK_KHAKI->toString()->equals(a0))
        return DK_KHAKI;
    if(DK_MAGENTA->toString()->equals(a0))
        return DK_MAGENTA;
    if(DK_OLIVE_GREEN->toString()->equals(a0))
        return DK_OLIVE_GREEN;
    if(DK_ORANGE->toString()->equals(a0))
        return DK_ORANGE;
    if(DK_ORCHID->toString()->equals(a0))
        return DK_ORCHID;
    if(DK_RED->toString()->equals(a0))
        return DK_RED;
    if(DK_SALMON->toString()->equals(a0))
        return DK_SALMON;
    if(DK_SEA_GREEN->toString()->equals(a0))
        return DK_SEA_GREEN;
    if(DK_SLATE_BLUE->toString()->equals(a0))
        return DK_SLATE_BLUE;
    if(DK_SLATE_GRAY->toString()->equals(a0))
        return DK_SLATE_GRAY;
    if(DK_TURQUOISE->toString()->equals(a0))
        return DK_TURQUOISE;
    if(DK_VIOLET->toString()->equals(a0))
        return DK_VIOLET;
    if(DODGER_BLUE->toString()->equals(a0))
        return DODGER_BLUE;
    if(FIREBRICK->toString()->equals(a0))
        return FIREBRICK;
    if(FLORAL_WHITE->toString()->equals(a0))
        return FLORAL_WHITE;
    if(FOREST_GREEN->toString()->equals(a0))
        return FOREST_GREEN;
    if(FUCHSIA->toString()->equals(a0))
        return FUCHSIA;
    if(GAINSBORO->toString()->equals(a0))
        return GAINSBORO;
    if(GHOST_WHITE->toString()->equals(a0))
        return GHOST_WHITE;
    if(GOLD->toString()->equals(a0))
        return GOLD;
    if(GOLDENROD->toString()->equals(a0))
        return GOLDENROD;
    if(GRAY->toString()->equals(a0))
        return GRAY;
    if(GREEN->toString()->equals(a0))
        return GREEN;
    if(GREEN_YELLOW->toString()->equals(a0))
        return GREEN_YELLOW;
    if(HONEYDEW->toString()->equals(a0))
        return HONEYDEW;
    if(HOT_PINK->toString()->equals(a0))
        return HOT_PINK;
    if(INDIAN_RED->toString()->equals(a0))
        return INDIAN_RED;
    if(INDIGO->toString()->equals(a0))
        return INDIGO;
    if(IVORY->toString()->equals(a0))
        return IVORY;
    if(KHAKI->toString()->equals(a0))
        return KHAKI;
    if(LAVENDER->toString()->equals(a0))
        return LAVENDER;
    if(LAVENDER_BLUSH->toString()->equals(a0))
        return LAVENDER_BLUSH;
    if(LAWN_GREEN->toString()->equals(a0))
        return LAWN_GREEN;
    if(LEMON_CHIFFON->toString()->equals(a0))
        return LEMON_CHIFFON;
    if(LIME->toString()->equals(a0))
        return LIME;
    if(LIME_GREEN->toString()->equals(a0))
        return LIME_GREEN;
    if(LINEN->toString()->equals(a0))
        return LINEN;
    if(LT_BLUE->toString()->equals(a0))
        return LT_BLUE;
    if(LT_CORAL->toString()->equals(a0))
        return LT_CORAL;
    if(LT_CYAN->toString()->equals(a0))
        return LT_CYAN;
    if(LT_GOLDENROD_YELLOW->toString()->equals(a0))
        return LT_GOLDENROD_YELLOW;
    if(LT_GRAY->toString()->equals(a0))
        return LT_GRAY;
    if(LT_GREEN->toString()->equals(a0))
        return LT_GREEN;
    if(LT_PINK->toString()->equals(a0))
        return LT_PINK;
    if(LT_SALMON->toString()->equals(a0))
        return LT_SALMON;
    if(LT_SEA_GREEN->toString()->equals(a0))
        return LT_SEA_GREEN;
    if(LT_SKY_BLUE->toString()->equals(a0))
        return LT_SKY_BLUE;
    if(LT_SLATE_GRAY->toString()->equals(a0))
        return LT_SLATE_GRAY;
    if(LT_STEEL_BLUE->toString()->equals(a0))
        return LT_STEEL_BLUE;
    if(LT_YELLOW->toString()->equals(a0))
        return LT_YELLOW;
    if(MAGENTA->toString()->equals(a0))
        return MAGENTA;
    if(MAROON->toString()->equals(a0))
        return MAROON;
    if(MED_AQUAMARINE->toString()->equals(a0))
        return MED_AQUAMARINE;
    if(MED_BLUE->toString()->equals(a0))
        return MED_BLUE;
    if(MED_ORCHID->toString()->equals(a0))
        return MED_ORCHID;
    if(MED_PURPLE->toString()->equals(a0))
        return MED_PURPLE;
    if(MED_SEA_GREEN->toString()->equals(a0))
        return MED_SEA_GREEN;
    if(MED_SLATE_BLUE->toString()->equals(a0))
        return MED_SLATE_BLUE;
    if(MED_SPRING_GREEN->toString()->equals(a0))
        return MED_SPRING_GREEN;
    if(MED_TURQUOISE->toString()->equals(a0))
        return MED_TURQUOISE;
    if(MED_VIOLET_RED->toString()->equals(a0))
        return MED_VIOLET_RED;
    if(MIDNIGHT_BLUE->toString()->equals(a0))
        return MIDNIGHT_BLUE;
    if(MINT_CREAM->toString()->equals(a0))
        return MINT_CREAM;
    if(MISTY_ROSE->toString()->equals(a0))
        return MISTY_ROSE;
    if(MOCCASIN->toString()->equals(a0))
        return MOCCASIN;
    if(NAVAJO_WHITE->toString()->equals(a0))
        return NAVAJO_WHITE;
    if(NAVY->toString()->equals(a0))
        return NAVY;
    if(OLD_LACE->toString()->equals(a0))
        return OLD_LACE;
    if(OLIVE->toString()->equals(a0))
        return OLIVE;
    if(OLIVE_DRAB->toString()->equals(a0))
        return OLIVE_DRAB;
    if(ORANGE->toString()->equals(a0))
        return ORANGE;
    if(ORANGE_RED->toString()->equals(a0))
        return ORANGE_RED;
    if(ORCHID->toString()->equals(a0))
        return ORCHID;
    if(PALE_GOLDENROD->toString()->equals(a0))
        return PALE_GOLDENROD;
    if(PALE_GREEN->toString()->equals(a0))
        return PALE_GREEN;
    if(PALE_TURQUOISE->toString()->equals(a0))
        return PALE_TURQUOISE;
    if(PALE_VIOLET_RED->toString()->equals(a0))
        return PALE_VIOLET_RED;
    if(PAPAYA_WHIP->toString()->equals(a0))
        return PAPAYA_WHIP;
    if(PEACH_PUFF->toString()->equals(a0))
        return PEACH_PUFF;
    if(PERU->toString()->equals(a0))
        return PERU;
    if(PINK->toString()->equals(a0))
        return PINK;
    if(PLUM->toString()->equals(a0))
        return PLUM;
    if(POWDER_BLUE->toString()->equals(a0))
        return POWDER_BLUE;
    if(PURPLE->toString()->equals(a0))
        return PURPLE;
    if(RED->toString()->equals(a0))
        return RED;
    if(ROSY_BROWN->toString()->equals(a0))
        return ROSY_BROWN;
    if(ROYAL_BLUE->toString()->equals(a0))
        return ROYAL_BLUE;
    if(SADDLE_BROWN->toString()->equals(a0))
        return SADDLE_BROWN;
    if(SALMON->toString()->equals(a0))
        return SALMON;
    if(SANDY_BROWN->toString()->equals(a0))
        return SANDY_BROWN;
    if(SEA_GREEN->toString()->equals(a0))
        return SEA_GREEN;
    if(SEA_SHELL->toString()->equals(a0))
        return SEA_SHELL;
    if(SIENNA->toString()->equals(a0))
        return SIENNA;
    if(SILVER->toString()->equals(a0))
        return SILVER;
    if(SKY_BLUE->toString()->equals(a0))
        return SKY_BLUE;
    if(SLATE_BLUE->toString()->equals(a0))
        return SLATE_BLUE;
    if(SLATE_GRAY->toString()->equals(a0))
        return SLATE_GRAY;
    if(SNOW->toString()->equals(a0))
        return SNOW;
    if(SPRING_GREEN->toString()->equals(a0))
        return SPRING_GREEN;
    if(STEEL_BLUE->toString()->equals(a0))
        return STEEL_BLUE;
    if(TAN->toString()->equals(a0))
        return TAN;
    if(TEAL->toString()->equals(a0))
        return TEAL;
    if(THISTLE->toString()->equals(a0))
        return THISTLE;
    if(TOMATO->toString()->equals(a0))
        return TOMATO;
    if(TURQUOISE->toString()->equals(a0))
        return TURQUOISE;
    if(VIOLET->toString()->equals(a0))
        return VIOLET;
    if(WHEAT->toString()->equals(a0))
        return WHEAT;
    if(WHITE->toString()->equals(a0))
        return WHITE;
    if(WHITE_SMOKE->toString()->equals(a0))
        return WHITE_SMOKE;
    if(YELLOW->toString()->equals(a0))
        return YELLOW;
    if(YELLOW_GREEN->toString()->equals(a0))
        return YELLOW_GREEN;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::sl::draw::binding::STPresetColorValArray* org::apache::poi::sl::draw::binding::STPresetColorVal::values()
{
    return new org::apache::poi::sl::draw::binding::STPresetColorValArray({
        ALICE_BLUE,
        ANTIQUE_WHITE,
        AQUA,
        AQUAMARINE,
        AZURE,
        BEIGE,
        BISQUE,
        BLACK,
        BLANCHED_ALMOND,
        BLUE,
        BLUE_VIOLET,
        BROWN,
        BURLY_WOOD,
        CADET_BLUE,
        CHARTREUSE,
        CHOCOLATE,
        CORAL,
        CORNFLOWER_BLUE,
        CORNSILK,
        CRIMSON,
        CYAN,
        DEEP_PINK,
        DEEP_SKY_BLUE,
        DIM_GRAY,
        DK_BLUE,
        DK_CYAN,
        DK_GOLDENROD,
        DK_GRAY,
        DK_GREEN,
        DK_KHAKI,
        DK_MAGENTA,
        DK_OLIVE_GREEN,
        DK_ORANGE,
        DK_ORCHID,
        DK_RED,
        DK_SALMON,
        DK_SEA_GREEN,
        DK_SLATE_BLUE,
        DK_SLATE_GRAY,
        DK_TURQUOISE,
        DK_VIOLET,
        DODGER_BLUE,
        FIREBRICK,
        FLORAL_WHITE,
        FOREST_GREEN,
        FUCHSIA,
        GAINSBORO,
        GHOST_WHITE,
        GOLD,
        GOLDENROD,
        GRAY,
        GREEN,
        GREEN_YELLOW,
        HONEYDEW,
        HOT_PINK,
        INDIAN_RED,
        INDIGO,
        IVORY,
        KHAKI,
        LAVENDER,
        LAVENDER_BLUSH,
        LAWN_GREEN,
        LEMON_CHIFFON,
        LIME,
        LIME_GREEN,
        LINEN,
        LT_BLUE,
        LT_CORAL,
        LT_CYAN,
        LT_GOLDENROD_YELLOW,
        LT_GRAY,
        LT_GREEN,
        LT_PINK,
        LT_SALMON,
        LT_SEA_GREEN,
        LT_SKY_BLUE,
        LT_SLATE_GRAY,
        LT_STEEL_BLUE,
        LT_YELLOW,
        MAGENTA,
        MAROON,
        MED_AQUAMARINE,
        MED_BLUE,
        MED_ORCHID,
        MED_PURPLE,
        MED_SEA_GREEN,
        MED_SLATE_BLUE,
        MED_SPRING_GREEN,
        MED_TURQUOISE,
        MED_VIOLET_RED,
        MIDNIGHT_BLUE,
        MINT_CREAM,
        MISTY_ROSE,
        MOCCASIN,
        NAVAJO_WHITE,
        NAVY,
        OLD_LACE,
        OLIVE,
        OLIVE_DRAB,
        ORANGE,
        ORANGE_RED,
        ORCHID,
        PALE_GOLDENROD,
        PALE_GREEN,
        PALE_TURQUOISE,
        PALE_VIOLET_RED,
        PAPAYA_WHIP,
        PEACH_PUFF,
        PERU,
        PINK,
        PLUM,
        POWDER_BLUE,
        PURPLE,
        RED,
        ROSY_BROWN,
        ROYAL_BLUE,
        SADDLE_BROWN,
        SALMON,
        SANDY_BROWN,
        SEA_GREEN,
        SEA_SHELL,
        SIENNA,
        SILVER,
        SKY_BLUE,
        SLATE_BLUE,
        SLATE_GRAY,
        SNOW,
        SPRING_GREEN,
        STEEL_BLUE,
        TAN,
        TEAL,
        THISTLE,
        TOMATO,
        TURQUOISE,
        VIOLET,
        WHEAT,
        WHITE,
        WHITE_SMOKE,
        YELLOW,
        YELLOW_GREEN,
    });
}

java::lang::Class* org::apache::poi::sl::draw::binding::STPresetColorVal::getClass0()
{
    return class_();
}

