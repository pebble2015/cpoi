// Generated from /POI/java/org/apache/poi/sl/usermodel/ShapeType.java
#include <org/apache/poi/sl/usermodel/ShapeType.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <Array.hpp>
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
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::sl::usermodel::ShapeType, ::java::lang::EnumArray > ShapeTypeArray;
                } // usermodel
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

org::apache::poi::sl::usermodel::ShapeType::ShapeType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::usermodel::ShapeType::ShapeType(::java::lang::String* name, int ordinal, int32_t ooxmlId, int32_t nativeId, ::java::lang::String* nativeName) 
    : ShapeType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, ooxmlId,nativeId,nativeName);
}

org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::NOT_PRIMITIVE = new ::org::apache::poi::sl::usermodel::ShapeType(u"NOT_PRIMITIVE"_j, 0, -int32_t(1), int32_t(0), u"NotPrimitive"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::LINE = new ::org::apache::poi::sl::usermodel::ShapeType(u"LINE"_j, 1, int32_t(1), int32_t(20), u"Line"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::LINE_INV = new ::org::apache::poi::sl::usermodel::ShapeType(u"LINE_INV"_j, 2, int32_t(2), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TRIANGLE = new ::org::apache::poi::sl::usermodel::ShapeType(u"TRIANGLE"_j, 3, int32_t(3), int32_t(5), u"IsocelesTriangle"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::RT_TRIANGLE = new ::org::apache::poi::sl::usermodel::ShapeType(u"RT_TRIANGLE"_j, 4, int32_t(4), int32_t(6), u"RightTriangle"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::RECT = new ::org::apache::poi::sl::usermodel::ShapeType(u"RECT"_j, 5, int32_t(5), int32_t(1), u"Rectangle"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::DIAMOND = new ::org::apache::poi::sl::usermodel::ShapeType(u"DIAMOND"_j, 6, int32_t(6), int32_t(4), u"Diamond"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::PARALLELOGRAM = new ::org::apache::poi::sl::usermodel::ShapeType(u"PARALLELOGRAM"_j, 7, int32_t(7), int32_t(7), u"Parallelogram"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TRAPEZOID = new ::org::apache::poi::sl::usermodel::ShapeType(u"TRAPEZOID"_j, 8, int32_t(8), int32_t(8), u"Trapezoid"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::NON_ISOSCELES_TRAPEZOID = new ::org::apache::poi::sl::usermodel::ShapeType(u"NON_ISOSCELES_TRAPEZOID"_j, 9, int32_t(9), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::PENTAGON = new ::org::apache::poi::sl::usermodel::ShapeType(u"PENTAGON"_j, 10, int32_t(10), int32_t(56), u"Pentagon"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::HEXAGON = new ::org::apache::poi::sl::usermodel::ShapeType(u"HEXAGON"_j, 11, int32_t(11), int32_t(9), u"Hexagon"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::HEPTAGON = new ::org::apache::poi::sl::usermodel::ShapeType(u"HEPTAGON"_j, 12, int32_t(12), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::OCTAGON = new ::org::apache::poi::sl::usermodel::ShapeType(u"OCTAGON"_j, 13, int32_t(13), int32_t(10), u"Octagon"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::DECAGON = new ::org::apache::poi::sl::usermodel::ShapeType(u"DECAGON"_j, 14, int32_t(14), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::DODECAGON = new ::org::apache::poi::sl::usermodel::ShapeType(u"DODECAGON"_j, 15, int32_t(15), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::STAR_4 = new ::org::apache::poi::sl::usermodel::ShapeType(u"STAR_4"_j, 16, int32_t(16), int32_t(187), u"Star4"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::STAR_5 = new ::org::apache::poi::sl::usermodel::ShapeType(u"STAR_5"_j, 17, int32_t(17), int32_t(12), u"Star"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::STAR_6 = new ::org::apache::poi::sl::usermodel::ShapeType(u"STAR_6"_j, 18, int32_t(18), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::STAR_7 = new ::org::apache::poi::sl::usermodel::ShapeType(u"STAR_7"_j, 19, int32_t(19), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::STAR_8 = new ::org::apache::poi::sl::usermodel::ShapeType(u"STAR_8"_j, 20, int32_t(20), int32_t(58), u"Star8"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::STAR_10 = new ::org::apache::poi::sl::usermodel::ShapeType(u"STAR_10"_j, 21, int32_t(21), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::STAR_12 = new ::org::apache::poi::sl::usermodel::ShapeType(u"STAR_12"_j, 22, int32_t(22), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::STAR_16 = new ::org::apache::poi::sl::usermodel::ShapeType(u"STAR_16"_j, 23, int32_t(23), int32_t(59), u"Star16"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::SEAL = new ::org::apache::poi::sl::usermodel::ShapeType(u"SEAL"_j, 24, int32_t(23), int32_t(18), u"Seal"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::STAR_24 = new ::org::apache::poi::sl::usermodel::ShapeType(u"STAR_24"_j, 25, int32_t(24), int32_t(92), u"Star24"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::STAR_32 = new ::org::apache::poi::sl::usermodel::ShapeType(u"STAR_32"_j, 26, int32_t(25), int32_t(60), u"Star32"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ROUND_RECT = new ::org::apache::poi::sl::usermodel::ShapeType(u"ROUND_RECT"_j, 27, int32_t(26), int32_t(2), u"RoundRectangle"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ROUND_1_RECT = new ::org::apache::poi::sl::usermodel::ShapeType(u"ROUND_1_RECT"_j, 28, int32_t(27), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ROUND_2_SAME_RECT = new ::org::apache::poi::sl::usermodel::ShapeType(u"ROUND_2_SAME_RECT"_j, 29, int32_t(28), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ROUND_2_DIAG_RECT = new ::org::apache::poi::sl::usermodel::ShapeType(u"ROUND_2_DIAG_RECT"_j, 30, int32_t(29), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::SNIP_ROUND_RECT = new ::org::apache::poi::sl::usermodel::ShapeType(u"SNIP_ROUND_RECT"_j, 31, int32_t(30), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::SNIP_1_RECT = new ::org::apache::poi::sl::usermodel::ShapeType(u"SNIP_1_RECT"_j, 32, int32_t(31), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::SNIP_2_SAME_RECT = new ::org::apache::poi::sl::usermodel::ShapeType(u"SNIP_2_SAME_RECT"_j, 33, int32_t(32), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::SNIP_2_DIAG_RECT = new ::org::apache::poi::sl::usermodel::ShapeType(u"SNIP_2_DIAG_RECT"_j, 34, int32_t(33), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::PLAQUE = new ::org::apache::poi::sl::usermodel::ShapeType(u"PLAQUE"_j, 35, int32_t(34), int32_t(21), u"Plaque"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ELLIPSE = new ::org::apache::poi::sl::usermodel::ShapeType(u"ELLIPSE"_j, 36, int32_t(35), int32_t(3), u"Ellipse"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEARDROP = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEARDROP"_j, 37, int32_t(36), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::HOME_PLATE = new ::org::apache::poi::sl::usermodel::ShapeType(u"HOME_PLATE"_j, 38, int32_t(37), int32_t(15), u"HomePlate"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CHEVRON = new ::org::apache::poi::sl::usermodel::ShapeType(u"CHEVRON"_j, 39, int32_t(38), int32_t(55), u"Chevron"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::PIE_WEDGE = new ::org::apache::poi::sl::usermodel::ShapeType(u"PIE_WEDGE"_j, 40, int32_t(39), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::PIE = new ::org::apache::poi::sl::usermodel::ShapeType(u"PIE"_j, 41, int32_t(40), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::BLOCK_ARC = new ::org::apache::poi::sl::usermodel::ShapeType(u"BLOCK_ARC"_j, 42, int32_t(41), int32_t(95), u"BlockArc"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::DONUT = new ::org::apache::poi::sl::usermodel::ShapeType(u"DONUT"_j, 43, int32_t(42), int32_t(23), u"Donut"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::NO_SMOKING = new ::org::apache::poi::sl::usermodel::ShapeType(u"NO_SMOKING"_j, 44, int32_t(43), int32_t(57), u"NoSmoking"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::RIGHT_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"RIGHT_ARROW"_j, 45, int32_t(44), int32_t(13), u"Arrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::LEFT_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"LEFT_ARROW"_j, 46, int32_t(45), int32_t(66), u"LeftArrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::UP_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"UP_ARROW"_j, 47, int32_t(46), int32_t(68), u"UpArrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::DOWN_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"DOWN_ARROW"_j, 48, int32_t(47), int32_t(67), u"DownArrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::STRIPED_RIGHT_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"STRIPED_RIGHT_ARROW"_j, 49, int32_t(48), int32_t(93), u"StripedRightArrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::NOTCHED_RIGHT_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"NOTCHED_RIGHT_ARROW"_j, 50, int32_t(49), int32_t(94), u"NotchedRightArrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::BENT_UP_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"BENT_UP_ARROW"_j, 51, int32_t(50), int32_t(90), u"BentUpArrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::LEFT_RIGHT_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"LEFT_RIGHT_ARROW"_j, 52, int32_t(51), int32_t(69), u"LeftRightArrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::UP_DOWN_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"UP_DOWN_ARROW"_j, 53, int32_t(52), int32_t(70), u"UpDownArrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::LEFT_UP_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"LEFT_UP_ARROW"_j, 54, int32_t(53), int32_t(89), u"LeftUpArrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::LEFT_RIGHT_UP_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"LEFT_RIGHT_UP_ARROW"_j, 55, int32_t(54), int32_t(182), u"LeftRightUpArrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::QUAD_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"QUAD_ARROW"_j, 56, int32_t(55), int32_t(76), u"QuadArrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::LEFT_ARROW_CALLOUT = new ::org::apache::poi::sl::usermodel::ShapeType(u"LEFT_ARROW_CALLOUT"_j, 57, int32_t(56), int32_t(77), u"LeftArrowCallout"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::RIGHT_ARROW_CALLOUT = new ::org::apache::poi::sl::usermodel::ShapeType(u"RIGHT_ARROW_CALLOUT"_j, 58, int32_t(57), int32_t(78), u"RightArrowCallout"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::UP_ARROW_CALLOUT = new ::org::apache::poi::sl::usermodel::ShapeType(u"UP_ARROW_CALLOUT"_j, 59, int32_t(58), int32_t(79), u"UpArrowCallout"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::DOWN_ARROW_CALLOUT = new ::org::apache::poi::sl::usermodel::ShapeType(u"DOWN_ARROW_CALLOUT"_j, 60, int32_t(59), int32_t(80), u"DownArrowCallout"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::LEFT_RIGHT_ARROW_CALLOUT = new ::org::apache::poi::sl::usermodel::ShapeType(u"LEFT_RIGHT_ARROW_CALLOUT"_j, 61, int32_t(60), int32_t(81), u"LeftRightArrowCallout"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::UP_DOWN_ARROW_CALLOUT = new ::org::apache::poi::sl::usermodel::ShapeType(u"UP_DOWN_ARROW_CALLOUT"_j, 62, int32_t(61), int32_t(82), u"UpDownArrowCallout"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::QUAD_ARROW_CALLOUT = new ::org::apache::poi::sl::usermodel::ShapeType(u"QUAD_ARROW_CALLOUT"_j, 63, int32_t(62), int32_t(83), u"QuadArrowCallout"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::BENT_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"BENT_ARROW"_j, 64, int32_t(63), int32_t(91), u"BentArrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::UTURN_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"UTURN_ARROW"_j, 65, int32_t(64), int32_t(101), u"UturnArrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CIRCULAR_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"CIRCULAR_ARROW"_j, 66, int32_t(65), int32_t(99), u"CircularArrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::LEFT_CIRCULAR_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"LEFT_CIRCULAR_ARROW"_j, 67, int32_t(66), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::LEFT_RIGHT_CIRCULAR_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"LEFT_RIGHT_CIRCULAR_ARROW"_j, 68, int32_t(67), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CURVED_RIGHT_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"CURVED_RIGHT_ARROW"_j, 69, int32_t(68), int32_t(102), u"CurvedRightArrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CURVED_LEFT_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"CURVED_LEFT_ARROW"_j, 70, int32_t(69), int32_t(103), u"CurvedLeftArrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CURVED_UP_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"CURVED_UP_ARROW"_j, 71, int32_t(70), int32_t(104), u"CurvedUpArrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CURVED_DOWN_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"CURVED_DOWN_ARROW"_j, 72, int32_t(71), int32_t(105), u"CurvedDownArrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::SWOOSH_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"SWOOSH_ARROW"_j, 73, int32_t(72), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CUBE = new ::org::apache::poi::sl::usermodel::ShapeType(u"CUBE"_j, 74, int32_t(73), int32_t(16), u"Cube"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CAN = new ::org::apache::poi::sl::usermodel::ShapeType(u"CAN"_j, 75, int32_t(74), int32_t(22), u"Can"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::LIGHTNING_BOLT = new ::org::apache::poi::sl::usermodel::ShapeType(u"LIGHTNING_BOLT"_j, 76, int32_t(75), int32_t(73), u"LightningBolt"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::HEART = new ::org::apache::poi::sl::usermodel::ShapeType(u"HEART"_j, 77, int32_t(76), int32_t(74), u"Heart"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::SUN = new ::org::apache::poi::sl::usermodel::ShapeType(u"SUN"_j, 78, int32_t(77), int32_t(183), u"Sun"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::MOON = new ::org::apache::poi::sl::usermodel::ShapeType(u"MOON"_j, 79, int32_t(78), int32_t(184), u"Moon"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::SMILEY_FACE = new ::org::apache::poi::sl::usermodel::ShapeType(u"SMILEY_FACE"_j, 80, int32_t(79), int32_t(96), u"SmileyFace"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::IRREGULAR_SEAL_1 = new ::org::apache::poi::sl::usermodel::ShapeType(u"IRREGULAR_SEAL_1"_j, 81, int32_t(80), int32_t(71), u"IrregularSeal1"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::IRREGULAR_SEAL_2 = new ::org::apache::poi::sl::usermodel::ShapeType(u"IRREGULAR_SEAL_2"_j, 82, int32_t(81), int32_t(72), u"IrregularSeal2"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FOLDED_CORNER = new ::org::apache::poi::sl::usermodel::ShapeType(u"FOLDED_CORNER"_j, 83, int32_t(82), int32_t(65), u"FoldedCorner"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::BEVEL = new ::org::apache::poi::sl::usermodel::ShapeType(u"BEVEL"_j, 84, int32_t(83), int32_t(84), u"Bevel"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FRAME = new ::org::apache::poi::sl::usermodel::ShapeType(u"FRAME"_j, 85, int32_t(84), int32_t(75), u"PictureFrame"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::HALF_FRAME = new ::org::apache::poi::sl::usermodel::ShapeType(u"HALF_FRAME"_j, 86, int32_t(85), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CORNER = new ::org::apache::poi::sl::usermodel::ShapeType(u"CORNER"_j, 87, int32_t(86), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::DIAG_STRIPE = new ::org::apache::poi::sl::usermodel::ShapeType(u"DIAG_STRIPE"_j, 88, int32_t(87), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CHORD = new ::org::apache::poi::sl::usermodel::ShapeType(u"CHORD"_j, 89, int32_t(88), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ARC = new ::org::apache::poi::sl::usermodel::ShapeType(u"ARC"_j, 90, int32_t(89), int32_t(19), u"Arc"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::LEFT_BRACKET = new ::org::apache::poi::sl::usermodel::ShapeType(u"LEFT_BRACKET"_j, 91, int32_t(90), int32_t(85), u"LeftBracket"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::RIGHT_BRACKET = new ::org::apache::poi::sl::usermodel::ShapeType(u"RIGHT_BRACKET"_j, 92, int32_t(91), int32_t(86), u"RightBracket"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::LEFT_BRACE = new ::org::apache::poi::sl::usermodel::ShapeType(u"LEFT_BRACE"_j, 93, int32_t(92), int32_t(87), u"LeftBrace"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::RIGHT_BRACE = new ::org::apache::poi::sl::usermodel::ShapeType(u"RIGHT_BRACE"_j, 94, int32_t(93), int32_t(88), u"RightBrace"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::BRACKET_PAIR = new ::org::apache::poi::sl::usermodel::ShapeType(u"BRACKET_PAIR"_j, 95, int32_t(94), int32_t(185), u"BracketPair"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::BRACE_PAIR = new ::org::apache::poi::sl::usermodel::ShapeType(u"BRACE_PAIR"_j, 96, int32_t(95), int32_t(186), u"BracePair"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::STRAIGHT_CONNECTOR_1 = new ::org::apache::poi::sl::usermodel::ShapeType(u"STRAIGHT_CONNECTOR_1"_j, 97, int32_t(96), int32_t(32), u"StraightConnector1"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::BENT_CONNECTOR_2 = new ::org::apache::poi::sl::usermodel::ShapeType(u"BENT_CONNECTOR_2"_j, 98, int32_t(97), int32_t(33), u"BentConnector2"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::BENT_CONNECTOR_3 = new ::org::apache::poi::sl::usermodel::ShapeType(u"BENT_CONNECTOR_3"_j, 99, int32_t(98), int32_t(34), u"BentConnector3"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::BENT_CONNECTOR_4 = new ::org::apache::poi::sl::usermodel::ShapeType(u"BENT_CONNECTOR_4"_j, 100, int32_t(99), int32_t(35), u"BentConnector4"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::BENT_CONNECTOR_5 = new ::org::apache::poi::sl::usermodel::ShapeType(u"BENT_CONNECTOR_5"_j, 101, int32_t(100), int32_t(36), u"BentConnector5"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CURVED_CONNECTOR_2 = new ::org::apache::poi::sl::usermodel::ShapeType(u"CURVED_CONNECTOR_2"_j, 102, int32_t(101), int32_t(37), u"CurvedConnector2"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CURVED_CONNECTOR_3 = new ::org::apache::poi::sl::usermodel::ShapeType(u"CURVED_CONNECTOR_3"_j, 103, int32_t(102), int32_t(38), u"CurvedConnector3"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CURVED_CONNECTOR_4 = new ::org::apache::poi::sl::usermodel::ShapeType(u"CURVED_CONNECTOR_4"_j, 104, int32_t(103), int32_t(39), u"CurvedConnector4"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CURVED_CONNECTOR_5 = new ::org::apache::poi::sl::usermodel::ShapeType(u"CURVED_CONNECTOR_5"_j, 105, int32_t(104), int32_t(40), u"CurvedConnector5"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CALLOUT_1 = new ::org::apache::poi::sl::usermodel::ShapeType(u"CALLOUT_1"_j, 106, int32_t(105), int32_t(41), u"Callout1"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CALLOUT_2 = new ::org::apache::poi::sl::usermodel::ShapeType(u"CALLOUT_2"_j, 107, int32_t(106), int32_t(42), u"Callout2"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CALLOUT_3 = new ::org::apache::poi::sl::usermodel::ShapeType(u"CALLOUT_3"_j, 108, int32_t(107), int32_t(43), u"Callout3"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ACCENT_CALLOUT_1 = new ::org::apache::poi::sl::usermodel::ShapeType(u"ACCENT_CALLOUT_1"_j, 109, int32_t(108), int32_t(44), u"AccentCallout1"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ACCENT_CALLOUT_2 = new ::org::apache::poi::sl::usermodel::ShapeType(u"ACCENT_CALLOUT_2"_j, 110, int32_t(109), int32_t(45), u"AccentCallout2"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ACCENT_CALLOUT_3 = new ::org::apache::poi::sl::usermodel::ShapeType(u"ACCENT_CALLOUT_3"_j, 111, int32_t(110), int32_t(46), u"AccentCallout3"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::BORDER_CALLOUT_1 = new ::org::apache::poi::sl::usermodel::ShapeType(u"BORDER_CALLOUT_1"_j, 112, int32_t(111), int32_t(47), u"BorderCallout1"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::BORDER_CALLOUT_2 = new ::org::apache::poi::sl::usermodel::ShapeType(u"BORDER_CALLOUT_2"_j, 113, int32_t(112), int32_t(48), u"BorderCallout2"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::BORDER_CALLOUT_3 = new ::org::apache::poi::sl::usermodel::ShapeType(u"BORDER_CALLOUT_3"_j, 114, int32_t(113), int32_t(49), u"BorderCallout3"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ACCENT_BORDER_CALLOUT_1 = new ::org::apache::poi::sl::usermodel::ShapeType(u"ACCENT_BORDER_CALLOUT_1"_j, 115, int32_t(114), int32_t(50), u"AccentBorderCallout1"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ACCENT_BORDER_CALLOUT_2 = new ::org::apache::poi::sl::usermodel::ShapeType(u"ACCENT_BORDER_CALLOUT_2"_j, 116, int32_t(115), int32_t(51), u"AccentBorderCallout2"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ACCENT_BORDER_CALLOUT_3 = new ::org::apache::poi::sl::usermodel::ShapeType(u"ACCENT_BORDER_CALLOUT_3"_j, 117, int32_t(116), int32_t(52), u"AccentBorderCallout3"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::WEDGE_RECT_CALLOUT = new ::org::apache::poi::sl::usermodel::ShapeType(u"WEDGE_RECT_CALLOUT"_j, 118, int32_t(117), int32_t(61), u"WedgeRectCallout"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::WEDGE_ROUND_RECT_CALLOUT = new ::org::apache::poi::sl::usermodel::ShapeType(u"WEDGE_ROUND_RECT_CALLOUT"_j, 119, int32_t(118), int32_t(62), u"WedgeRRectCallout"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::WEDGE_ELLIPSE_CALLOUT = new ::org::apache::poi::sl::usermodel::ShapeType(u"WEDGE_ELLIPSE_CALLOUT"_j, 120, int32_t(119), int32_t(63), u"WedgeEllipseCallout"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CLOUD_CALLOUT = new ::org::apache::poi::sl::usermodel::ShapeType(u"CLOUD_CALLOUT"_j, 121, int32_t(120), int32_t(106), u"CloudCallout"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CLOUD = new ::org::apache::poi::sl::usermodel::ShapeType(u"CLOUD"_j, 122, int32_t(121), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::RIBBON = new ::org::apache::poi::sl::usermodel::ShapeType(u"RIBBON"_j, 123, int32_t(122), int32_t(53), u"Ribbon"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::RIBBON_2 = new ::org::apache::poi::sl::usermodel::ShapeType(u"RIBBON_2"_j, 124, int32_t(123), int32_t(54), u"Ribbon2"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ELLIPSE_RIBBON = new ::org::apache::poi::sl::usermodel::ShapeType(u"ELLIPSE_RIBBON"_j, 125, int32_t(124), int32_t(107), u"EllipseRibbon"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ELLIPSE_RIBBON_2 = new ::org::apache::poi::sl::usermodel::ShapeType(u"ELLIPSE_RIBBON_2"_j, 126, int32_t(125), int32_t(108), u"EllipseRibbon2"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::LEFT_RIGHT_RIBBON = new ::org::apache::poi::sl::usermodel::ShapeType(u"LEFT_RIGHT_RIBBON"_j, 127, int32_t(126), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::VERTICAL_SCROLL = new ::org::apache::poi::sl::usermodel::ShapeType(u"VERTICAL_SCROLL"_j, 128, int32_t(127), int32_t(97), u"VerticalScroll"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::HORIZONTAL_SCROLL = new ::org::apache::poi::sl::usermodel::ShapeType(u"HORIZONTAL_SCROLL"_j, 129, int32_t(128), int32_t(98), u"HorizontalScroll"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::WAVE = new ::org::apache::poi::sl::usermodel::ShapeType(u"WAVE"_j, 130, int32_t(129), int32_t(64), u"Wave"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::DOUBLE_WAVE = new ::org::apache::poi::sl::usermodel::ShapeType(u"DOUBLE_WAVE"_j, 131, int32_t(130), int32_t(188), u"DoubleWave"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::PLUS = new ::org::apache::poi::sl::usermodel::ShapeType(u"PLUS"_j, 132, int32_t(131), int32_t(11), u"Plus"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_PROCESS = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_PROCESS"_j, 133, int32_t(132), int32_t(109), u"FlowChartProcess"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_DECISION = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_DECISION"_j, 134, int32_t(133), int32_t(110), u"FlowChartDecision"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_INPUT_OUTPUT = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_INPUT_OUTPUT"_j, 135, int32_t(134), int32_t(111), u"FlowChartInputOutput"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_PREDEFINED_PROCESS = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_PREDEFINED_PROCESS"_j, 136, int32_t(135), int32_t(112), u"FlowChartPredefinedProcess"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_INTERNAL_STORAGE = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_INTERNAL_STORAGE"_j, 137, int32_t(136), int32_t(113), u"FlowChartInternalStorage"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_DOCUMENT = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_DOCUMENT"_j, 138, int32_t(137), int32_t(114), u"FlowChartDocument"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_MULTIDOCUMENT = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_MULTIDOCUMENT"_j, 139, int32_t(138), int32_t(115), u"FlowChartMultidocument"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_TERMINATOR = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_TERMINATOR"_j, 140, int32_t(139), int32_t(116), u"FlowChartTerminator"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_PREPARATION = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_PREPARATION"_j, 141, int32_t(140), int32_t(117), u"FlowChartPreparation"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_MANUAL_INPUT = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_MANUAL_INPUT"_j, 142, int32_t(141), int32_t(118), u"FlowChartManualInput"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_MANUAL_OPERATION = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_MANUAL_OPERATION"_j, 143, int32_t(142), int32_t(119), u"FlowChartManualOperation"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_CONNECTOR = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_CONNECTOR"_j, 144, int32_t(143), int32_t(120), u"FlowChartConnector"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_PUNCHED_CARD = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_PUNCHED_CARD"_j, 145, int32_t(144), int32_t(121), u"FlowChartPunchedCard"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_PUNCHED_TAPE = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_PUNCHED_TAPE"_j, 146, int32_t(145), int32_t(122), u"FlowChartPunchedTape"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_SUMMING_JUNCTION = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_SUMMING_JUNCTION"_j, 147, int32_t(146), int32_t(123), u"FlowChartSummingJunction"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_OR = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_OR"_j, 148, int32_t(147), int32_t(124), u"FlowChartOr"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_COLLATE = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_COLLATE"_j, 149, int32_t(148), int32_t(125), u"FlowChartCollate"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_SORT = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_SORT"_j, 150, int32_t(149), int32_t(126), u"FlowChartSort"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_EXTRACT = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_EXTRACT"_j, 151, int32_t(150), int32_t(127), u"FlowChartExtract"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_MERGE = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_MERGE"_j, 152, int32_t(151), int32_t(128), u"FlowChartMerge"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_OFFLINE_STORAGE = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_OFFLINE_STORAGE"_j, 153, int32_t(152), int32_t(129), u"FlowChartOfflineStorage"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_ONLINE_STORAGE = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_ONLINE_STORAGE"_j, 154, int32_t(153), int32_t(130), u"FlowChartOnlineStorage"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_MAGNETIC_TAPE = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_MAGNETIC_TAPE"_j, 155, int32_t(154), int32_t(131), u"FlowChartMagneticTape"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_MAGNETIC_DISK = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_MAGNETIC_DISK"_j, 156, int32_t(155), int32_t(132), u"FlowChartMagneticDisk"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_MAGNETIC_DRUM = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_MAGNETIC_DRUM"_j, 157, int32_t(156), int32_t(133), u"FlowChartMagneticDrum"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_DISPLAY = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_DISPLAY"_j, 158, int32_t(157), int32_t(134), u"FlowChartDisplay"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_DELAY = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_DELAY"_j, 159, int32_t(158), int32_t(135), u"FlowChartDelay"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_ALTERNATE_PROCESS = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_ALTERNATE_PROCESS"_j, 160, int32_t(159), int32_t(176), u"FlowChartAlternateProcess"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FLOW_CHART_OFFPAGE_CONNECTOR = new ::org::apache::poi::sl::usermodel::ShapeType(u"FLOW_CHART_OFFPAGE_CONNECTOR"_j, 161, int32_t(160), int32_t(177), u"FlowChartOffpageConnector"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ACTION_BUTTON_BLANK = new ::org::apache::poi::sl::usermodel::ShapeType(u"ACTION_BUTTON_BLANK"_j, 162, int32_t(161), int32_t(189), u"ActionButtonBlank"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ACTION_BUTTON_HOME = new ::org::apache::poi::sl::usermodel::ShapeType(u"ACTION_BUTTON_HOME"_j, 163, int32_t(162), int32_t(190), u"ActionButtonHome"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ACTION_BUTTON_HELP = new ::org::apache::poi::sl::usermodel::ShapeType(u"ACTION_BUTTON_HELP"_j, 164, int32_t(163), int32_t(191), u"ActionButtonHelp"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ACTION_BUTTON_INFORMATION = new ::org::apache::poi::sl::usermodel::ShapeType(u"ACTION_BUTTON_INFORMATION"_j, 165, int32_t(164), int32_t(192), u"ActionButtonInformation"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ACTION_BUTTON_FORWARD_NEXT = new ::org::apache::poi::sl::usermodel::ShapeType(u"ACTION_BUTTON_FORWARD_NEXT"_j, 166, int32_t(165), int32_t(193), u"ActionButtonForwardNext"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ACTION_BUTTON_BACK_PREVIOUS = new ::org::apache::poi::sl::usermodel::ShapeType(u"ACTION_BUTTON_BACK_PREVIOUS"_j, 167, int32_t(166), int32_t(194), u"ActionButtonBackPrevious"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ACTION_BUTTON_END = new ::org::apache::poi::sl::usermodel::ShapeType(u"ACTION_BUTTON_END"_j, 168, int32_t(167), int32_t(195), u"ActionButtonEnd"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ACTION_BUTTON_BEGINNING = new ::org::apache::poi::sl::usermodel::ShapeType(u"ACTION_BUTTON_BEGINNING"_j, 169, int32_t(168), int32_t(196), u"ActionButtonBeginning"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ACTION_BUTTON_RETURN = new ::org::apache::poi::sl::usermodel::ShapeType(u"ACTION_BUTTON_RETURN"_j, 170, int32_t(169), int32_t(197), u"ActionButtonReturn"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ACTION_BUTTON_DOCUMENT = new ::org::apache::poi::sl::usermodel::ShapeType(u"ACTION_BUTTON_DOCUMENT"_j, 171, int32_t(170), int32_t(198), u"ActionButtonDocument"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ACTION_BUTTON_SOUND = new ::org::apache::poi::sl::usermodel::ShapeType(u"ACTION_BUTTON_SOUND"_j, 172, int32_t(171), int32_t(199), u"ActionButtonSound"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ACTION_BUTTON_MOVIE = new ::org::apache::poi::sl::usermodel::ShapeType(u"ACTION_BUTTON_MOVIE"_j, 173, int32_t(172), int32_t(200), u"ActionButtonMovie"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::GEAR_6 = new ::org::apache::poi::sl::usermodel::ShapeType(u"GEAR_6"_j, 174, int32_t(173), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::GEAR_9 = new ::org::apache::poi::sl::usermodel::ShapeType(u"GEAR_9"_j, 175, int32_t(174), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::FUNNEL = new ::org::apache::poi::sl::usermodel::ShapeType(u"FUNNEL"_j, 176, int32_t(175), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::MATH_PLUS = new ::org::apache::poi::sl::usermodel::ShapeType(u"MATH_PLUS"_j, 177, int32_t(176), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::MATH_MINUS = new ::org::apache::poi::sl::usermodel::ShapeType(u"MATH_MINUS"_j, 178, int32_t(177), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::MATH_MULTIPLY = new ::org::apache::poi::sl::usermodel::ShapeType(u"MATH_MULTIPLY"_j, 179, int32_t(178), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::MATH_DIVIDE = new ::org::apache::poi::sl::usermodel::ShapeType(u"MATH_DIVIDE"_j, 180, int32_t(179), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::MATH_EQUAL = new ::org::apache::poi::sl::usermodel::ShapeType(u"MATH_EQUAL"_j, 181, int32_t(180), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::MATH_NOT_EQUAL = new ::org::apache::poi::sl::usermodel::ShapeType(u"MATH_NOT_EQUAL"_j, 182, int32_t(181), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CORNER_TABS = new ::org::apache::poi::sl::usermodel::ShapeType(u"CORNER_TABS"_j, 183, int32_t(182), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::SQUARE_TABS = new ::org::apache::poi::sl::usermodel::ShapeType(u"SQUARE_TABS"_j, 184, int32_t(183), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::PLAQUE_TABS = new ::org::apache::poi::sl::usermodel::ShapeType(u"PLAQUE_TABS"_j, 185, int32_t(184), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CHART_X = new ::org::apache::poi::sl::usermodel::ShapeType(u"CHART_X"_j, 186, int32_t(185), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CHART_STAR = new ::org::apache::poi::sl::usermodel::ShapeType(u"CHART_STAR"_j, 187, int32_t(186), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CHART_PLUS = new ::org::apache::poi::sl::usermodel::ShapeType(u"CHART_PLUS"_j, 188, int32_t(187), -int32_t(1), nullptr);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::NOTCHED_CIRCULAR_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"NOTCHED_CIRCULAR_ARROW"_j, 189, -int32_t(1), int32_t(100), u"NotchedCircularArrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::THICK_ARROW = new ::org::apache::poi::sl::usermodel::ShapeType(u"THICK_ARROW"_j, 190, -int32_t(1), int32_t(14), u"ThickArrow"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::BALLOON = new ::org::apache::poi::sl::usermodel::ShapeType(u"BALLOON"_j, 191, -int32_t(1), int32_t(17), u"Balloon"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_SIMPLE = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_SIMPLE"_j, 192, -int32_t(1), int32_t(24), u"TextSimple"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_OCTAGON = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_OCTAGON"_j, 193, -int32_t(1), int32_t(25), u"TextOctagon"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_HEXAGON = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_HEXAGON"_j, 194, -int32_t(1), int32_t(26), u"TextHexagon"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_CURVE = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_CURVE"_j, 195, -int32_t(1), int32_t(27), u"TextCurve"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_WAVE = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_WAVE"_j, 196, -int32_t(1), int32_t(28), u"TextWave"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_RING = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_RING"_j, 197, -int32_t(1), int32_t(29), u"TextRing"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_ON_CURVE = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_ON_CURVE"_j, 198, -int32_t(1), int32_t(30), u"TextOnCurve"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_ON_RING = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_ON_RING"_j, 199, -int32_t(1), int32_t(31), u"TextOnRing"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_PLAIN_TEXT = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_PLAIN_TEXT"_j, 200, -int32_t(1), int32_t(136), u"TextPlainText"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_STOP = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_STOP"_j, 201, -int32_t(1), int32_t(137), u"TextStop"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_TRIANGLE = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_TRIANGLE"_j, 202, -int32_t(1), int32_t(138), u"TextTriangle"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_TRIANGLE_INVERTED = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_TRIANGLE_INVERTED"_j, 203, -int32_t(1), int32_t(139), u"TextTriangleInverted"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_CHEVRON = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_CHEVRON"_j, 204, -int32_t(1), int32_t(140), u"TextChevron"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_CHEVRON_INVERTED = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_CHEVRON_INVERTED"_j, 205, -int32_t(1), int32_t(141), u"TextChevronInverted"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_RING_INSIDE = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_RING_INSIDE"_j, 206, -int32_t(1), int32_t(142), u"TextRingInside"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_RING_OUTSIDE = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_RING_OUTSIDE"_j, 207, -int32_t(1), int32_t(143), u"TextRingOutside"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_ARCH_UP_CURVE = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_ARCH_UP_CURVE"_j, 208, -int32_t(1), int32_t(144), u"TextArchUpCurve"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_ARCH_DOWN_CURVE = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_ARCH_DOWN_CURVE"_j, 209, -int32_t(1), int32_t(145), u"TextArchDownCurve"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_CIRCLE_CURVE = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_CIRCLE_CURVE"_j, 210, -int32_t(1), int32_t(146), u"TextCircleCurve"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_BUTTON_CURVE = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_BUTTON_CURVE"_j, 211, -int32_t(1), int32_t(147), u"TextButtonCurve"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_ARCH_UP_POUR = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_ARCH_UP_POUR"_j, 212, -int32_t(1), int32_t(148), u"TextArchUpPour"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_ARCH_DOWN_POUR = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_ARCH_DOWN_POUR"_j, 213, -int32_t(1), int32_t(149), u"TextArchDownPour"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_CIRCLE_POUR = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_CIRCLE_POUR"_j, 214, -int32_t(1), int32_t(150), u"TextCirclePour"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_BUTTON_POUR = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_BUTTON_POUR"_j, 215, -int32_t(1), int32_t(151), u"TextButtonPour"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_CURVE_UP = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_CURVE_UP"_j, 216, -int32_t(1), int32_t(152), u"TextCurveUp"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_CURVE_DOWN = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_CURVE_DOWN"_j, 217, -int32_t(1), int32_t(153), u"TextCurveDown"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_CASCADE_UP = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_CASCADE_UP"_j, 218, -int32_t(1), int32_t(154), u"TextCascadeUp"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_CASCADE_DOWN = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_CASCADE_DOWN"_j, 219, -int32_t(1), int32_t(155), u"TextCascadeDown"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_WAVE_1 = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_WAVE_1"_j, 220, -int32_t(1), int32_t(156), u"TextWave1"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_WAVE_2 = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_WAVE_2"_j, 221, -int32_t(1), int32_t(157), u"TextWave2"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_WAVE_3 = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_WAVE_3"_j, 222, -int32_t(1), int32_t(158), u"TextWave3"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_WAVE_4 = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_WAVE_4"_j, 223, -int32_t(1), int32_t(159), u"TextWave4"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_INFLATE = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_INFLATE"_j, 224, -int32_t(1), int32_t(160), u"TextInflate"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_DEFLATE = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_DEFLATE"_j, 225, -int32_t(1), int32_t(161), u"TextDeflate"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_INFLATE_BOTTOM = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_INFLATE_BOTTOM"_j, 226, -int32_t(1), int32_t(162), u"TextInflateBottom"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_DEFLATE_BOTTOM = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_DEFLATE_BOTTOM"_j, 227, -int32_t(1), int32_t(163), u"TextDeflateBottom"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_INFLATE_TOP = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_INFLATE_TOP"_j, 228, -int32_t(1), int32_t(164), u"TextInflateTop"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_DEFLATE_TOP = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_DEFLATE_TOP"_j, 229, -int32_t(1), int32_t(165), u"TextDeflateTop"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_DEFLATE_INFLATE = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_DEFLATE_INFLATE"_j, 230, -int32_t(1), int32_t(166), u"TextDeflateInflate"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_DEFLATE_INFLATE_DEFLATE = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_DEFLATE_INFLATE_DEFLATE"_j, 231, -int32_t(1), int32_t(167), u"TextDeflateInflateDeflate"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_FADE_RIGHT = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_FADE_RIGHT"_j, 232, -int32_t(1), int32_t(168), u"TextFadeRight"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_FADE_LEFT = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_FADE_LEFT"_j, 233, -int32_t(1), int32_t(169), u"TextFadeLeft"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_FADE_UP = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_FADE_UP"_j, 234, -int32_t(1), int32_t(170), u"TextFadeUp"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_FADE_DOWN = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_FADE_DOWN"_j, 235, -int32_t(1), int32_t(171), u"TextFadeDown"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_SLANT_UP = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_SLANT_UP"_j, 236, -int32_t(1), int32_t(172), u"TextSlantUp"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_SLANT_DOWN = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_SLANT_DOWN"_j, 237, -int32_t(1), int32_t(173), u"TextSlantDown"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_CAN_UP = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_CAN_UP"_j, 238, -int32_t(1), int32_t(174), u"TextCanUp"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_CAN_DOWN = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_CAN_DOWN"_j, 239, -int32_t(1), int32_t(175), u"TextCanDown"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::CALLOUT_90 = new ::org::apache::poi::sl::usermodel::ShapeType(u"CALLOUT_90"_j, 240, -int32_t(1), int32_t(178), u"Callout90"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ACCENT_CALLOUT_90 = new ::org::apache::poi::sl::usermodel::ShapeType(u"ACCENT_CALLOUT_90"_j, 241, -int32_t(1), int32_t(179), u"AccentCallout90"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::BORDER_CALLOUT_90 = new ::org::apache::poi::sl::usermodel::ShapeType(u"BORDER_CALLOUT_90"_j, 242, -int32_t(1), int32_t(180), u"BorderCallout90"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::ACCENT_BORDER_CALLOUT_90 = new ::org::apache::poi::sl::usermodel::ShapeType(u"ACCENT_BORDER_CALLOUT_90"_j, 243, -int32_t(1), int32_t(181), u"AccentBorderCallout90"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::HOST_CONTROL = new ::org::apache::poi::sl::usermodel::ShapeType(u"HOST_CONTROL"_j, 244, -int32_t(1), int32_t(201), u"HostControl"_j);
org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::TEXT_BOX = new ::org::apache::poi::sl::usermodel::ShapeType(u"TEXT_BOX"_j, 245, -int32_t(1), int32_t(202), u"TextBox"_j);
void org::apache::poi::sl::usermodel::ShapeType::ctor(::java::lang::String* name, int ordinal, int32_t ooxmlId, int32_t nativeId, ::java::lang::String* nativeName)
{
    super::ctor(name, ordinal);
    this->ooxmlId = ooxmlId;
    this->nativeId = nativeId;
    this->nativeName = nativeName;
}

java::lang::String* org::apache::poi::sl::usermodel::ShapeType::getOoxmlName()
{
    if(this == SEAL)
        return npc(STAR_16)->getOoxmlName();

    if(ooxmlId == -int32_t(1)) {
        return (npc(name())->startsWith(u"TEXT"_j)) ? npc(RECT)->getOoxmlName() : static_cast< ::java::lang::String* >(nullptr);
    }
    auto sb = new ::java::lang::StringBuilder();
    auto toLower = true;
    for(auto ch : *npc(npc(name())->toCharArray_())) {
        if(ch == u'_') {
            toLower = false;
            continue;
        }
        npc(sb)->append(toLower ? ::java::lang::Character::toLowerCase(ch) : ::java::lang::Character::toUpperCase(ch));
        toLower = true;
    }
    return npc(sb)->toString();
}

org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::forId(int32_t id, bool isOoxmlId)
{
    clinit();
    if(!isOoxmlId && id == 4095) {
        return NOT_PRIMITIVE;
    }
    for(auto t : *npc(values())) {
        if((isOoxmlId && npc(t)->ooxmlId == id) || (!isOoxmlId && npc(t)->nativeId == id))
            return t;

    }
    throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unknown shape type: "_j)->append(id)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::usermodel::ShapeType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.ShapeType", 37);
    return c;
}

org::apache::poi::sl::usermodel::ShapeType* org::apache::poi::sl::usermodel::ShapeType::valueOf(::java::lang::String* a0)
{
    if(ACCENT_BORDER_CALLOUT_1->toString()->equals(a0))
        return ACCENT_BORDER_CALLOUT_1;
    if(ACCENT_BORDER_CALLOUT_2->toString()->equals(a0))
        return ACCENT_BORDER_CALLOUT_2;
    if(ACCENT_BORDER_CALLOUT_3->toString()->equals(a0))
        return ACCENT_BORDER_CALLOUT_3;
    if(ACCENT_BORDER_CALLOUT_90->toString()->equals(a0))
        return ACCENT_BORDER_CALLOUT_90;
    if(ACCENT_CALLOUT_1->toString()->equals(a0))
        return ACCENT_CALLOUT_1;
    if(ACCENT_CALLOUT_2->toString()->equals(a0))
        return ACCENT_CALLOUT_2;
    if(ACCENT_CALLOUT_3->toString()->equals(a0))
        return ACCENT_CALLOUT_3;
    if(ACCENT_CALLOUT_90->toString()->equals(a0))
        return ACCENT_CALLOUT_90;
    if(ACTION_BUTTON_BACK_PREVIOUS->toString()->equals(a0))
        return ACTION_BUTTON_BACK_PREVIOUS;
    if(ACTION_BUTTON_BEGINNING->toString()->equals(a0))
        return ACTION_BUTTON_BEGINNING;
    if(ACTION_BUTTON_BLANK->toString()->equals(a0))
        return ACTION_BUTTON_BLANK;
    if(ACTION_BUTTON_DOCUMENT->toString()->equals(a0))
        return ACTION_BUTTON_DOCUMENT;
    if(ACTION_BUTTON_END->toString()->equals(a0))
        return ACTION_BUTTON_END;
    if(ACTION_BUTTON_FORWARD_NEXT->toString()->equals(a0))
        return ACTION_BUTTON_FORWARD_NEXT;
    if(ACTION_BUTTON_HELP->toString()->equals(a0))
        return ACTION_BUTTON_HELP;
    if(ACTION_BUTTON_HOME->toString()->equals(a0))
        return ACTION_BUTTON_HOME;
    if(ACTION_BUTTON_INFORMATION->toString()->equals(a0))
        return ACTION_BUTTON_INFORMATION;
    if(ACTION_BUTTON_MOVIE->toString()->equals(a0))
        return ACTION_BUTTON_MOVIE;
    if(ACTION_BUTTON_RETURN->toString()->equals(a0))
        return ACTION_BUTTON_RETURN;
    if(ACTION_BUTTON_SOUND->toString()->equals(a0))
        return ACTION_BUTTON_SOUND;
    if(ARC->toString()->equals(a0))
        return ARC;
    if(BALLOON->toString()->equals(a0))
        return BALLOON;
    if(BENT_ARROW->toString()->equals(a0))
        return BENT_ARROW;
    if(BENT_CONNECTOR_2->toString()->equals(a0))
        return BENT_CONNECTOR_2;
    if(BENT_CONNECTOR_3->toString()->equals(a0))
        return BENT_CONNECTOR_3;
    if(BENT_CONNECTOR_4->toString()->equals(a0))
        return BENT_CONNECTOR_4;
    if(BENT_CONNECTOR_5->toString()->equals(a0))
        return BENT_CONNECTOR_5;
    if(BENT_UP_ARROW->toString()->equals(a0))
        return BENT_UP_ARROW;
    if(BEVEL->toString()->equals(a0))
        return BEVEL;
    if(BLOCK_ARC->toString()->equals(a0))
        return BLOCK_ARC;
    if(BORDER_CALLOUT_1->toString()->equals(a0))
        return BORDER_CALLOUT_1;
    if(BORDER_CALLOUT_2->toString()->equals(a0))
        return BORDER_CALLOUT_2;
    if(BORDER_CALLOUT_3->toString()->equals(a0))
        return BORDER_CALLOUT_3;
    if(BORDER_CALLOUT_90->toString()->equals(a0))
        return BORDER_CALLOUT_90;
    if(BRACE_PAIR->toString()->equals(a0))
        return BRACE_PAIR;
    if(BRACKET_PAIR->toString()->equals(a0))
        return BRACKET_PAIR;
    if(CALLOUT_1->toString()->equals(a0))
        return CALLOUT_1;
    if(CALLOUT_2->toString()->equals(a0))
        return CALLOUT_2;
    if(CALLOUT_3->toString()->equals(a0))
        return CALLOUT_3;
    if(CALLOUT_90->toString()->equals(a0))
        return CALLOUT_90;
    if(CAN->toString()->equals(a0))
        return CAN;
    if(CHART_PLUS->toString()->equals(a0))
        return CHART_PLUS;
    if(CHART_STAR->toString()->equals(a0))
        return CHART_STAR;
    if(CHART_X->toString()->equals(a0))
        return CHART_X;
    if(CHEVRON->toString()->equals(a0))
        return CHEVRON;
    if(CHORD->toString()->equals(a0))
        return CHORD;
    if(CIRCULAR_ARROW->toString()->equals(a0))
        return CIRCULAR_ARROW;
    if(CLOUD->toString()->equals(a0))
        return CLOUD;
    if(CLOUD_CALLOUT->toString()->equals(a0))
        return CLOUD_CALLOUT;
    if(CORNER->toString()->equals(a0))
        return CORNER;
    if(CORNER_TABS->toString()->equals(a0))
        return CORNER_TABS;
    if(CUBE->toString()->equals(a0))
        return CUBE;
    if(CURVED_CONNECTOR_2->toString()->equals(a0))
        return CURVED_CONNECTOR_2;
    if(CURVED_CONNECTOR_3->toString()->equals(a0))
        return CURVED_CONNECTOR_3;
    if(CURVED_CONNECTOR_4->toString()->equals(a0))
        return CURVED_CONNECTOR_4;
    if(CURVED_CONNECTOR_5->toString()->equals(a0))
        return CURVED_CONNECTOR_5;
    if(CURVED_DOWN_ARROW->toString()->equals(a0))
        return CURVED_DOWN_ARROW;
    if(CURVED_LEFT_ARROW->toString()->equals(a0))
        return CURVED_LEFT_ARROW;
    if(CURVED_RIGHT_ARROW->toString()->equals(a0))
        return CURVED_RIGHT_ARROW;
    if(CURVED_UP_ARROW->toString()->equals(a0))
        return CURVED_UP_ARROW;
    if(DECAGON->toString()->equals(a0))
        return DECAGON;
    if(DIAG_STRIPE->toString()->equals(a0))
        return DIAG_STRIPE;
    if(DIAMOND->toString()->equals(a0))
        return DIAMOND;
    if(DODECAGON->toString()->equals(a0))
        return DODECAGON;
    if(DONUT->toString()->equals(a0))
        return DONUT;
    if(DOUBLE_WAVE->toString()->equals(a0))
        return DOUBLE_WAVE;
    if(DOWN_ARROW->toString()->equals(a0))
        return DOWN_ARROW;
    if(DOWN_ARROW_CALLOUT->toString()->equals(a0))
        return DOWN_ARROW_CALLOUT;
    if(ELLIPSE->toString()->equals(a0))
        return ELLIPSE;
    if(ELLIPSE_RIBBON->toString()->equals(a0))
        return ELLIPSE_RIBBON;
    if(ELLIPSE_RIBBON_2->toString()->equals(a0))
        return ELLIPSE_RIBBON_2;
    if(FLOW_CHART_ALTERNATE_PROCESS->toString()->equals(a0))
        return FLOW_CHART_ALTERNATE_PROCESS;
    if(FLOW_CHART_COLLATE->toString()->equals(a0))
        return FLOW_CHART_COLLATE;
    if(FLOW_CHART_CONNECTOR->toString()->equals(a0))
        return FLOW_CHART_CONNECTOR;
    if(FLOW_CHART_DECISION->toString()->equals(a0))
        return FLOW_CHART_DECISION;
    if(FLOW_CHART_DELAY->toString()->equals(a0))
        return FLOW_CHART_DELAY;
    if(FLOW_CHART_DISPLAY->toString()->equals(a0))
        return FLOW_CHART_DISPLAY;
    if(FLOW_CHART_DOCUMENT->toString()->equals(a0))
        return FLOW_CHART_DOCUMENT;
    if(FLOW_CHART_EXTRACT->toString()->equals(a0))
        return FLOW_CHART_EXTRACT;
    if(FLOW_CHART_INPUT_OUTPUT->toString()->equals(a0))
        return FLOW_CHART_INPUT_OUTPUT;
    if(FLOW_CHART_INTERNAL_STORAGE->toString()->equals(a0))
        return FLOW_CHART_INTERNAL_STORAGE;
    if(FLOW_CHART_MAGNETIC_DISK->toString()->equals(a0))
        return FLOW_CHART_MAGNETIC_DISK;
    if(FLOW_CHART_MAGNETIC_DRUM->toString()->equals(a0))
        return FLOW_CHART_MAGNETIC_DRUM;
    if(FLOW_CHART_MAGNETIC_TAPE->toString()->equals(a0))
        return FLOW_CHART_MAGNETIC_TAPE;
    if(FLOW_CHART_MANUAL_INPUT->toString()->equals(a0))
        return FLOW_CHART_MANUAL_INPUT;
    if(FLOW_CHART_MANUAL_OPERATION->toString()->equals(a0))
        return FLOW_CHART_MANUAL_OPERATION;
    if(FLOW_CHART_MERGE->toString()->equals(a0))
        return FLOW_CHART_MERGE;
    if(FLOW_CHART_MULTIDOCUMENT->toString()->equals(a0))
        return FLOW_CHART_MULTIDOCUMENT;
    if(FLOW_CHART_OFFLINE_STORAGE->toString()->equals(a0))
        return FLOW_CHART_OFFLINE_STORAGE;
    if(FLOW_CHART_OFFPAGE_CONNECTOR->toString()->equals(a0))
        return FLOW_CHART_OFFPAGE_CONNECTOR;
    if(FLOW_CHART_ONLINE_STORAGE->toString()->equals(a0))
        return FLOW_CHART_ONLINE_STORAGE;
    if(FLOW_CHART_OR->toString()->equals(a0))
        return FLOW_CHART_OR;
    if(FLOW_CHART_PREDEFINED_PROCESS->toString()->equals(a0))
        return FLOW_CHART_PREDEFINED_PROCESS;
    if(FLOW_CHART_PREPARATION->toString()->equals(a0))
        return FLOW_CHART_PREPARATION;
    if(FLOW_CHART_PROCESS->toString()->equals(a0))
        return FLOW_CHART_PROCESS;
    if(FLOW_CHART_PUNCHED_CARD->toString()->equals(a0))
        return FLOW_CHART_PUNCHED_CARD;
    if(FLOW_CHART_PUNCHED_TAPE->toString()->equals(a0))
        return FLOW_CHART_PUNCHED_TAPE;
    if(FLOW_CHART_SORT->toString()->equals(a0))
        return FLOW_CHART_SORT;
    if(FLOW_CHART_SUMMING_JUNCTION->toString()->equals(a0))
        return FLOW_CHART_SUMMING_JUNCTION;
    if(FLOW_CHART_TERMINATOR->toString()->equals(a0))
        return FLOW_CHART_TERMINATOR;
    if(FOLDED_CORNER->toString()->equals(a0))
        return FOLDED_CORNER;
    if(FRAME->toString()->equals(a0))
        return FRAME;
    if(FUNNEL->toString()->equals(a0))
        return FUNNEL;
    if(GEAR_6->toString()->equals(a0))
        return GEAR_6;
    if(GEAR_9->toString()->equals(a0))
        return GEAR_9;
    if(HALF_FRAME->toString()->equals(a0))
        return HALF_FRAME;
    if(HEART->toString()->equals(a0))
        return HEART;
    if(HEPTAGON->toString()->equals(a0))
        return HEPTAGON;
    if(HEXAGON->toString()->equals(a0))
        return HEXAGON;
    if(HOME_PLATE->toString()->equals(a0))
        return HOME_PLATE;
    if(HORIZONTAL_SCROLL->toString()->equals(a0))
        return HORIZONTAL_SCROLL;
    if(HOST_CONTROL->toString()->equals(a0))
        return HOST_CONTROL;
    if(IRREGULAR_SEAL_1->toString()->equals(a0))
        return IRREGULAR_SEAL_1;
    if(IRREGULAR_SEAL_2->toString()->equals(a0))
        return IRREGULAR_SEAL_2;
    if(LEFT_ARROW->toString()->equals(a0))
        return LEFT_ARROW;
    if(LEFT_ARROW_CALLOUT->toString()->equals(a0))
        return LEFT_ARROW_CALLOUT;
    if(LEFT_BRACE->toString()->equals(a0))
        return LEFT_BRACE;
    if(LEFT_BRACKET->toString()->equals(a0))
        return LEFT_BRACKET;
    if(LEFT_CIRCULAR_ARROW->toString()->equals(a0))
        return LEFT_CIRCULAR_ARROW;
    if(LEFT_RIGHT_ARROW->toString()->equals(a0))
        return LEFT_RIGHT_ARROW;
    if(LEFT_RIGHT_ARROW_CALLOUT->toString()->equals(a0))
        return LEFT_RIGHT_ARROW_CALLOUT;
    if(LEFT_RIGHT_CIRCULAR_ARROW->toString()->equals(a0))
        return LEFT_RIGHT_CIRCULAR_ARROW;
    if(LEFT_RIGHT_RIBBON->toString()->equals(a0))
        return LEFT_RIGHT_RIBBON;
    if(LEFT_RIGHT_UP_ARROW->toString()->equals(a0))
        return LEFT_RIGHT_UP_ARROW;
    if(LEFT_UP_ARROW->toString()->equals(a0))
        return LEFT_UP_ARROW;
    if(LIGHTNING_BOLT->toString()->equals(a0))
        return LIGHTNING_BOLT;
    if(LINE->toString()->equals(a0))
        return LINE;
    if(LINE_INV->toString()->equals(a0))
        return LINE_INV;
    if(MATH_DIVIDE->toString()->equals(a0))
        return MATH_DIVIDE;
    if(MATH_EQUAL->toString()->equals(a0))
        return MATH_EQUAL;
    if(MATH_MINUS->toString()->equals(a0))
        return MATH_MINUS;
    if(MATH_MULTIPLY->toString()->equals(a0))
        return MATH_MULTIPLY;
    if(MATH_NOT_EQUAL->toString()->equals(a0))
        return MATH_NOT_EQUAL;
    if(MATH_PLUS->toString()->equals(a0))
        return MATH_PLUS;
    if(MOON->toString()->equals(a0))
        return MOON;
    if(NON_ISOSCELES_TRAPEZOID->toString()->equals(a0))
        return NON_ISOSCELES_TRAPEZOID;
    if(NOTCHED_CIRCULAR_ARROW->toString()->equals(a0))
        return NOTCHED_CIRCULAR_ARROW;
    if(NOTCHED_RIGHT_ARROW->toString()->equals(a0))
        return NOTCHED_RIGHT_ARROW;
    if(NOT_PRIMITIVE->toString()->equals(a0))
        return NOT_PRIMITIVE;
    if(NO_SMOKING->toString()->equals(a0))
        return NO_SMOKING;
    if(OCTAGON->toString()->equals(a0))
        return OCTAGON;
    if(PARALLELOGRAM->toString()->equals(a0))
        return PARALLELOGRAM;
    if(PENTAGON->toString()->equals(a0))
        return PENTAGON;
    if(PIE->toString()->equals(a0))
        return PIE;
    if(PIE_WEDGE->toString()->equals(a0))
        return PIE_WEDGE;
    if(PLAQUE->toString()->equals(a0))
        return PLAQUE;
    if(PLAQUE_TABS->toString()->equals(a0))
        return PLAQUE_TABS;
    if(PLUS->toString()->equals(a0))
        return PLUS;
    if(QUAD_ARROW->toString()->equals(a0))
        return QUAD_ARROW;
    if(QUAD_ARROW_CALLOUT->toString()->equals(a0))
        return QUAD_ARROW_CALLOUT;
    if(RECT->toString()->equals(a0))
        return RECT;
    if(RIBBON->toString()->equals(a0))
        return RIBBON;
    if(RIBBON_2->toString()->equals(a0))
        return RIBBON_2;
    if(RIGHT_ARROW->toString()->equals(a0))
        return RIGHT_ARROW;
    if(RIGHT_ARROW_CALLOUT->toString()->equals(a0))
        return RIGHT_ARROW_CALLOUT;
    if(RIGHT_BRACE->toString()->equals(a0))
        return RIGHT_BRACE;
    if(RIGHT_BRACKET->toString()->equals(a0))
        return RIGHT_BRACKET;
    if(ROUND_1_RECT->toString()->equals(a0))
        return ROUND_1_RECT;
    if(ROUND_2_DIAG_RECT->toString()->equals(a0))
        return ROUND_2_DIAG_RECT;
    if(ROUND_2_SAME_RECT->toString()->equals(a0))
        return ROUND_2_SAME_RECT;
    if(ROUND_RECT->toString()->equals(a0))
        return ROUND_RECT;
    if(RT_TRIANGLE->toString()->equals(a0))
        return RT_TRIANGLE;
    if(SEAL->toString()->equals(a0))
        return SEAL;
    if(SMILEY_FACE->toString()->equals(a0))
        return SMILEY_FACE;
    if(SNIP_1_RECT->toString()->equals(a0))
        return SNIP_1_RECT;
    if(SNIP_2_DIAG_RECT->toString()->equals(a0))
        return SNIP_2_DIAG_RECT;
    if(SNIP_2_SAME_RECT->toString()->equals(a0))
        return SNIP_2_SAME_RECT;
    if(SNIP_ROUND_RECT->toString()->equals(a0))
        return SNIP_ROUND_RECT;
    if(SQUARE_TABS->toString()->equals(a0))
        return SQUARE_TABS;
    if(STAR_10->toString()->equals(a0))
        return STAR_10;
    if(STAR_12->toString()->equals(a0))
        return STAR_12;
    if(STAR_16->toString()->equals(a0))
        return STAR_16;
    if(STAR_24->toString()->equals(a0))
        return STAR_24;
    if(STAR_32->toString()->equals(a0))
        return STAR_32;
    if(STAR_4->toString()->equals(a0))
        return STAR_4;
    if(STAR_5->toString()->equals(a0))
        return STAR_5;
    if(STAR_6->toString()->equals(a0))
        return STAR_6;
    if(STAR_7->toString()->equals(a0))
        return STAR_7;
    if(STAR_8->toString()->equals(a0))
        return STAR_8;
    if(STRAIGHT_CONNECTOR_1->toString()->equals(a0))
        return STRAIGHT_CONNECTOR_1;
    if(STRIPED_RIGHT_ARROW->toString()->equals(a0))
        return STRIPED_RIGHT_ARROW;
    if(SUN->toString()->equals(a0))
        return SUN;
    if(SWOOSH_ARROW->toString()->equals(a0))
        return SWOOSH_ARROW;
    if(TEARDROP->toString()->equals(a0))
        return TEARDROP;
    if(TEXT_ARCH_DOWN_CURVE->toString()->equals(a0))
        return TEXT_ARCH_DOWN_CURVE;
    if(TEXT_ARCH_DOWN_POUR->toString()->equals(a0))
        return TEXT_ARCH_DOWN_POUR;
    if(TEXT_ARCH_UP_CURVE->toString()->equals(a0))
        return TEXT_ARCH_UP_CURVE;
    if(TEXT_ARCH_UP_POUR->toString()->equals(a0))
        return TEXT_ARCH_UP_POUR;
    if(TEXT_BOX->toString()->equals(a0))
        return TEXT_BOX;
    if(TEXT_BUTTON_CURVE->toString()->equals(a0))
        return TEXT_BUTTON_CURVE;
    if(TEXT_BUTTON_POUR->toString()->equals(a0))
        return TEXT_BUTTON_POUR;
    if(TEXT_CAN_DOWN->toString()->equals(a0))
        return TEXT_CAN_DOWN;
    if(TEXT_CAN_UP->toString()->equals(a0))
        return TEXT_CAN_UP;
    if(TEXT_CASCADE_DOWN->toString()->equals(a0))
        return TEXT_CASCADE_DOWN;
    if(TEXT_CASCADE_UP->toString()->equals(a0))
        return TEXT_CASCADE_UP;
    if(TEXT_CHEVRON->toString()->equals(a0))
        return TEXT_CHEVRON;
    if(TEXT_CHEVRON_INVERTED->toString()->equals(a0))
        return TEXT_CHEVRON_INVERTED;
    if(TEXT_CIRCLE_CURVE->toString()->equals(a0))
        return TEXT_CIRCLE_CURVE;
    if(TEXT_CIRCLE_POUR->toString()->equals(a0))
        return TEXT_CIRCLE_POUR;
    if(TEXT_CURVE->toString()->equals(a0))
        return TEXT_CURVE;
    if(TEXT_CURVE_DOWN->toString()->equals(a0))
        return TEXT_CURVE_DOWN;
    if(TEXT_CURVE_UP->toString()->equals(a0))
        return TEXT_CURVE_UP;
    if(TEXT_DEFLATE->toString()->equals(a0))
        return TEXT_DEFLATE;
    if(TEXT_DEFLATE_BOTTOM->toString()->equals(a0))
        return TEXT_DEFLATE_BOTTOM;
    if(TEXT_DEFLATE_INFLATE->toString()->equals(a0))
        return TEXT_DEFLATE_INFLATE;
    if(TEXT_DEFLATE_INFLATE_DEFLATE->toString()->equals(a0))
        return TEXT_DEFLATE_INFLATE_DEFLATE;
    if(TEXT_DEFLATE_TOP->toString()->equals(a0))
        return TEXT_DEFLATE_TOP;
    if(TEXT_FADE_DOWN->toString()->equals(a0))
        return TEXT_FADE_DOWN;
    if(TEXT_FADE_LEFT->toString()->equals(a0))
        return TEXT_FADE_LEFT;
    if(TEXT_FADE_RIGHT->toString()->equals(a0))
        return TEXT_FADE_RIGHT;
    if(TEXT_FADE_UP->toString()->equals(a0))
        return TEXT_FADE_UP;
    if(TEXT_HEXAGON->toString()->equals(a0))
        return TEXT_HEXAGON;
    if(TEXT_INFLATE->toString()->equals(a0))
        return TEXT_INFLATE;
    if(TEXT_INFLATE_BOTTOM->toString()->equals(a0))
        return TEXT_INFLATE_BOTTOM;
    if(TEXT_INFLATE_TOP->toString()->equals(a0))
        return TEXT_INFLATE_TOP;
    if(TEXT_OCTAGON->toString()->equals(a0))
        return TEXT_OCTAGON;
    if(TEXT_ON_CURVE->toString()->equals(a0))
        return TEXT_ON_CURVE;
    if(TEXT_ON_RING->toString()->equals(a0))
        return TEXT_ON_RING;
    if(TEXT_PLAIN_TEXT->toString()->equals(a0))
        return TEXT_PLAIN_TEXT;
    if(TEXT_RING->toString()->equals(a0))
        return TEXT_RING;
    if(TEXT_RING_INSIDE->toString()->equals(a0))
        return TEXT_RING_INSIDE;
    if(TEXT_RING_OUTSIDE->toString()->equals(a0))
        return TEXT_RING_OUTSIDE;
    if(TEXT_SIMPLE->toString()->equals(a0))
        return TEXT_SIMPLE;
    if(TEXT_SLANT_DOWN->toString()->equals(a0))
        return TEXT_SLANT_DOWN;
    if(TEXT_SLANT_UP->toString()->equals(a0))
        return TEXT_SLANT_UP;
    if(TEXT_STOP->toString()->equals(a0))
        return TEXT_STOP;
    if(TEXT_TRIANGLE->toString()->equals(a0))
        return TEXT_TRIANGLE;
    if(TEXT_TRIANGLE_INVERTED->toString()->equals(a0))
        return TEXT_TRIANGLE_INVERTED;
    if(TEXT_WAVE->toString()->equals(a0))
        return TEXT_WAVE;
    if(TEXT_WAVE_1->toString()->equals(a0))
        return TEXT_WAVE_1;
    if(TEXT_WAVE_2->toString()->equals(a0))
        return TEXT_WAVE_2;
    if(TEXT_WAVE_3->toString()->equals(a0))
        return TEXT_WAVE_3;
    if(TEXT_WAVE_4->toString()->equals(a0))
        return TEXT_WAVE_4;
    if(THICK_ARROW->toString()->equals(a0))
        return THICK_ARROW;
    if(TRAPEZOID->toString()->equals(a0))
        return TRAPEZOID;
    if(TRIANGLE->toString()->equals(a0))
        return TRIANGLE;
    if(UP_ARROW->toString()->equals(a0))
        return UP_ARROW;
    if(UP_ARROW_CALLOUT->toString()->equals(a0))
        return UP_ARROW_CALLOUT;
    if(UP_DOWN_ARROW->toString()->equals(a0))
        return UP_DOWN_ARROW;
    if(UP_DOWN_ARROW_CALLOUT->toString()->equals(a0))
        return UP_DOWN_ARROW_CALLOUT;
    if(UTURN_ARROW->toString()->equals(a0))
        return UTURN_ARROW;
    if(VERTICAL_SCROLL->toString()->equals(a0))
        return VERTICAL_SCROLL;
    if(WAVE->toString()->equals(a0))
        return WAVE;
    if(WEDGE_ELLIPSE_CALLOUT->toString()->equals(a0))
        return WEDGE_ELLIPSE_CALLOUT;
    if(WEDGE_RECT_CALLOUT->toString()->equals(a0))
        return WEDGE_RECT_CALLOUT;
    if(WEDGE_ROUND_RECT_CALLOUT->toString()->equals(a0))
        return WEDGE_ROUND_RECT_CALLOUT;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::sl::usermodel::ShapeTypeArray* org::apache::poi::sl::usermodel::ShapeType::values()
{
    return new org::apache::poi::sl::usermodel::ShapeTypeArray({
        ACCENT_BORDER_CALLOUT_1,
        ACCENT_BORDER_CALLOUT_2,
        ACCENT_BORDER_CALLOUT_3,
        ACCENT_BORDER_CALLOUT_90,
        ACCENT_CALLOUT_1,
        ACCENT_CALLOUT_2,
        ACCENT_CALLOUT_3,
        ACCENT_CALLOUT_90,
        ACTION_BUTTON_BACK_PREVIOUS,
        ACTION_BUTTON_BEGINNING,
        ACTION_BUTTON_BLANK,
        ACTION_BUTTON_DOCUMENT,
        ACTION_BUTTON_END,
        ACTION_BUTTON_FORWARD_NEXT,
        ACTION_BUTTON_HELP,
        ACTION_BUTTON_HOME,
        ACTION_BUTTON_INFORMATION,
        ACTION_BUTTON_MOVIE,
        ACTION_BUTTON_RETURN,
        ACTION_BUTTON_SOUND,
        ARC,
        BALLOON,
        BENT_ARROW,
        BENT_CONNECTOR_2,
        BENT_CONNECTOR_3,
        BENT_CONNECTOR_4,
        BENT_CONNECTOR_5,
        BENT_UP_ARROW,
        BEVEL,
        BLOCK_ARC,
        BORDER_CALLOUT_1,
        BORDER_CALLOUT_2,
        BORDER_CALLOUT_3,
        BORDER_CALLOUT_90,
        BRACE_PAIR,
        BRACKET_PAIR,
        CALLOUT_1,
        CALLOUT_2,
        CALLOUT_3,
        CALLOUT_90,
        CAN,
        CHART_PLUS,
        CHART_STAR,
        CHART_X,
        CHEVRON,
        CHORD,
        CIRCULAR_ARROW,
        CLOUD,
        CLOUD_CALLOUT,
        CORNER,
        CORNER_TABS,
        CUBE,
        CURVED_CONNECTOR_2,
        CURVED_CONNECTOR_3,
        CURVED_CONNECTOR_4,
        CURVED_CONNECTOR_5,
        CURVED_DOWN_ARROW,
        CURVED_LEFT_ARROW,
        CURVED_RIGHT_ARROW,
        CURVED_UP_ARROW,
        DECAGON,
        DIAG_STRIPE,
        DIAMOND,
        DODECAGON,
        DONUT,
        DOUBLE_WAVE,
        DOWN_ARROW,
        DOWN_ARROW_CALLOUT,
        ELLIPSE,
        ELLIPSE_RIBBON,
        ELLIPSE_RIBBON_2,
        FLOW_CHART_ALTERNATE_PROCESS,
        FLOW_CHART_COLLATE,
        FLOW_CHART_CONNECTOR,
        FLOW_CHART_DECISION,
        FLOW_CHART_DELAY,
        FLOW_CHART_DISPLAY,
        FLOW_CHART_DOCUMENT,
        FLOW_CHART_EXTRACT,
        FLOW_CHART_INPUT_OUTPUT,
        FLOW_CHART_INTERNAL_STORAGE,
        FLOW_CHART_MAGNETIC_DISK,
        FLOW_CHART_MAGNETIC_DRUM,
        FLOW_CHART_MAGNETIC_TAPE,
        FLOW_CHART_MANUAL_INPUT,
        FLOW_CHART_MANUAL_OPERATION,
        FLOW_CHART_MERGE,
        FLOW_CHART_MULTIDOCUMENT,
        FLOW_CHART_OFFLINE_STORAGE,
        FLOW_CHART_OFFPAGE_CONNECTOR,
        FLOW_CHART_ONLINE_STORAGE,
        FLOW_CHART_OR,
        FLOW_CHART_PREDEFINED_PROCESS,
        FLOW_CHART_PREPARATION,
        FLOW_CHART_PROCESS,
        FLOW_CHART_PUNCHED_CARD,
        FLOW_CHART_PUNCHED_TAPE,
        FLOW_CHART_SORT,
        FLOW_CHART_SUMMING_JUNCTION,
        FLOW_CHART_TERMINATOR,
        FOLDED_CORNER,
        FRAME,
        FUNNEL,
        GEAR_6,
        GEAR_9,
        HALF_FRAME,
        HEART,
        HEPTAGON,
        HEXAGON,
        HOME_PLATE,
        HORIZONTAL_SCROLL,
        HOST_CONTROL,
        IRREGULAR_SEAL_1,
        IRREGULAR_SEAL_2,
        LEFT_ARROW,
        LEFT_ARROW_CALLOUT,
        LEFT_BRACE,
        LEFT_BRACKET,
        LEFT_CIRCULAR_ARROW,
        LEFT_RIGHT_ARROW,
        LEFT_RIGHT_ARROW_CALLOUT,
        LEFT_RIGHT_CIRCULAR_ARROW,
        LEFT_RIGHT_RIBBON,
        LEFT_RIGHT_UP_ARROW,
        LEFT_UP_ARROW,
        LIGHTNING_BOLT,
        LINE,
        LINE_INV,
        MATH_DIVIDE,
        MATH_EQUAL,
        MATH_MINUS,
        MATH_MULTIPLY,
        MATH_NOT_EQUAL,
        MATH_PLUS,
        MOON,
        NON_ISOSCELES_TRAPEZOID,
        NOTCHED_CIRCULAR_ARROW,
        NOTCHED_RIGHT_ARROW,
        NOT_PRIMITIVE,
        NO_SMOKING,
        OCTAGON,
        PARALLELOGRAM,
        PENTAGON,
        PIE,
        PIE_WEDGE,
        PLAQUE,
        PLAQUE_TABS,
        PLUS,
        QUAD_ARROW,
        QUAD_ARROW_CALLOUT,
        RECT,
        RIBBON,
        RIBBON_2,
        RIGHT_ARROW,
        RIGHT_ARROW_CALLOUT,
        RIGHT_BRACE,
        RIGHT_BRACKET,
        ROUND_1_RECT,
        ROUND_2_DIAG_RECT,
        ROUND_2_SAME_RECT,
        ROUND_RECT,
        RT_TRIANGLE,
        SEAL,
        SMILEY_FACE,
        SNIP_1_RECT,
        SNIP_2_DIAG_RECT,
        SNIP_2_SAME_RECT,
        SNIP_ROUND_RECT,
        SQUARE_TABS,
        STAR_10,
        STAR_12,
        STAR_16,
        STAR_24,
        STAR_32,
        STAR_4,
        STAR_5,
        STAR_6,
        STAR_7,
        STAR_8,
        STRAIGHT_CONNECTOR_1,
        STRIPED_RIGHT_ARROW,
        SUN,
        SWOOSH_ARROW,
        TEARDROP,
        TEXT_ARCH_DOWN_CURVE,
        TEXT_ARCH_DOWN_POUR,
        TEXT_ARCH_UP_CURVE,
        TEXT_ARCH_UP_POUR,
        TEXT_BOX,
        TEXT_BUTTON_CURVE,
        TEXT_BUTTON_POUR,
        TEXT_CAN_DOWN,
        TEXT_CAN_UP,
        TEXT_CASCADE_DOWN,
        TEXT_CASCADE_UP,
        TEXT_CHEVRON,
        TEXT_CHEVRON_INVERTED,
        TEXT_CIRCLE_CURVE,
        TEXT_CIRCLE_POUR,
        TEXT_CURVE,
        TEXT_CURVE_DOWN,
        TEXT_CURVE_UP,
        TEXT_DEFLATE,
        TEXT_DEFLATE_BOTTOM,
        TEXT_DEFLATE_INFLATE,
        TEXT_DEFLATE_INFLATE_DEFLATE,
        TEXT_DEFLATE_TOP,
        TEXT_FADE_DOWN,
        TEXT_FADE_LEFT,
        TEXT_FADE_RIGHT,
        TEXT_FADE_UP,
        TEXT_HEXAGON,
        TEXT_INFLATE,
        TEXT_INFLATE_BOTTOM,
        TEXT_INFLATE_TOP,
        TEXT_OCTAGON,
        TEXT_ON_CURVE,
        TEXT_ON_RING,
        TEXT_PLAIN_TEXT,
        TEXT_RING,
        TEXT_RING_INSIDE,
        TEXT_RING_OUTSIDE,
        TEXT_SIMPLE,
        TEXT_SLANT_DOWN,
        TEXT_SLANT_UP,
        TEXT_STOP,
        TEXT_TRIANGLE,
        TEXT_TRIANGLE_INVERTED,
        TEXT_WAVE,
        TEXT_WAVE_1,
        TEXT_WAVE_2,
        TEXT_WAVE_3,
        TEXT_WAVE_4,
        THICK_ARROW,
        TRAPEZOID,
        TRIANGLE,
        UP_ARROW,
        UP_ARROW_CALLOUT,
        UP_DOWN_ARROW,
        UP_DOWN_ARROW_CALLOUT,
        UTURN_ARROW,
        VERTICAL_SCROLL,
        WAVE,
        WEDGE_ELLIPSE_CALLOUT,
        WEDGE_RECT_CALLOUT,
        WEDGE_ROUND_RECT_CALLOUT,
    });
}

java::lang::Class* org::apache::poi::sl::usermodel::ShapeType::getClass0()
{
    return class_();
}

