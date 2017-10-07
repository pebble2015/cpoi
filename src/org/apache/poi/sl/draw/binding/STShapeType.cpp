// Generated from /POI/java/org/apache/poi/sl/draw/binding/STShapeType.java
#include <org/apache/poi/sl/draw/binding/STShapeType.hpp>

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
typedef ::SubArray< ::org::apache::poi::sl::draw::binding::STShapeType, ::java::lang::EnumArray > STShapeTypeArray;
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

org::apache::poi::sl::draw::binding::STShapeType::STShapeType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::STShapeType::STShapeType(::java::lang::String* name, int ordinal, ::java::lang::String* v) 
    : STShapeType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, v);
}

org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::LINE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"LINE"_j, 0, u"line"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::LINE_INV = new ::org::apache::poi::sl::draw::binding::STShapeType(u"LINE_INV"_j, 1, u"lineInv"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::TRIANGLE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"TRIANGLE"_j, 2, u"triangle"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::RT_TRIANGLE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"RT_TRIANGLE"_j, 3, u"rtTriangle"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::RECT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"RECT"_j, 4, u"rect"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::DIAMOND = new ::org::apache::poi::sl::draw::binding::STShapeType(u"DIAMOND"_j, 5, u"diamond"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::PARALLELOGRAM = new ::org::apache::poi::sl::draw::binding::STShapeType(u"PARALLELOGRAM"_j, 6, u"parallelogram"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::TRAPEZOID = new ::org::apache::poi::sl::draw::binding::STShapeType(u"TRAPEZOID"_j, 7, u"trapezoid"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::NON_ISOSCELES_TRAPEZOID = new ::org::apache::poi::sl::draw::binding::STShapeType(u"NON_ISOSCELES_TRAPEZOID"_j, 8, u"nonIsoscelesTrapezoid"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::PENTAGON = new ::org::apache::poi::sl::draw::binding::STShapeType(u"PENTAGON"_j, 9, u"pentagon"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::HEXAGON = new ::org::apache::poi::sl::draw::binding::STShapeType(u"HEXAGON"_j, 10, u"hexagon"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::HEPTAGON = new ::org::apache::poi::sl::draw::binding::STShapeType(u"HEPTAGON"_j, 11, u"heptagon"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::OCTAGON = new ::org::apache::poi::sl::draw::binding::STShapeType(u"OCTAGON"_j, 12, u"octagon"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::DECAGON = new ::org::apache::poi::sl::draw::binding::STShapeType(u"DECAGON"_j, 13, u"decagon"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::DODECAGON = new ::org::apache::poi::sl::draw::binding::STShapeType(u"DODECAGON"_j, 14, u"dodecagon"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::STAR_4 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"STAR_4"_j, 15, u"star4"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::STAR_5 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"STAR_5"_j, 16, u"star5"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::STAR_6 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"STAR_6"_j, 17, u"star6"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::STAR_7 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"STAR_7"_j, 18, u"star7"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::STAR_8 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"STAR_8"_j, 19, u"star8"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::STAR_10 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"STAR_10"_j, 20, u"star10"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::STAR_12 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"STAR_12"_j, 21, u"star12"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::STAR_16 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"STAR_16"_j, 22, u"star16"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::STAR_24 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"STAR_24"_j, 23, u"star24"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::STAR_32 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"STAR_32"_j, 24, u"star32"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ROUND_RECT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ROUND_RECT"_j, 25, u"roundRect"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ROUND_1_RECT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ROUND_1_RECT"_j, 26, u"round1Rect"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ROUND_2_SAME_RECT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ROUND_2_SAME_RECT"_j, 27, u"round2SameRect"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ROUND_2_DIAG_RECT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ROUND_2_DIAG_RECT"_j, 28, u"round2DiagRect"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::SNIP_ROUND_RECT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"SNIP_ROUND_RECT"_j, 29, u"snipRoundRect"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::SNIP_1_RECT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"SNIP_1_RECT"_j, 30, u"snip1Rect"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::SNIP_2_SAME_RECT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"SNIP_2_SAME_RECT"_j, 31, u"snip2SameRect"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::SNIP_2_DIAG_RECT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"SNIP_2_DIAG_RECT"_j, 32, u"snip2DiagRect"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::PLAQUE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"PLAQUE"_j, 33, u"plaque"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ELLIPSE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ELLIPSE"_j, 34, u"ellipse"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::TEARDROP = new ::org::apache::poi::sl::draw::binding::STShapeType(u"TEARDROP"_j, 35, u"teardrop"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::HOME_PLATE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"HOME_PLATE"_j, 36, u"homePlate"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CHEVRON = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CHEVRON"_j, 37, u"chevron"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::PIE_WEDGE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"PIE_WEDGE"_j, 38, u"pieWedge"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::PIE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"PIE"_j, 39, u"pie"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::BLOCK_ARC = new ::org::apache::poi::sl::draw::binding::STShapeType(u"BLOCK_ARC"_j, 40, u"blockArc"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::DONUT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"DONUT"_j, 41, u"donut"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::NO_SMOKING = new ::org::apache::poi::sl::draw::binding::STShapeType(u"NO_SMOKING"_j, 42, u"noSmoking"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::RIGHT_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"RIGHT_ARROW"_j, 43, u"rightArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::LEFT_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"LEFT_ARROW"_j, 44, u"leftArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::UP_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"UP_ARROW"_j, 45, u"upArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::DOWN_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"DOWN_ARROW"_j, 46, u"downArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::STRIPED_RIGHT_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"STRIPED_RIGHT_ARROW"_j, 47, u"stripedRightArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::NOTCHED_RIGHT_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"NOTCHED_RIGHT_ARROW"_j, 48, u"notchedRightArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::BENT_UP_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"BENT_UP_ARROW"_j, 49, u"bentUpArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::LEFT_RIGHT_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"LEFT_RIGHT_ARROW"_j, 50, u"leftRightArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::UP_DOWN_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"UP_DOWN_ARROW"_j, 51, u"upDownArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::LEFT_UP_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"LEFT_UP_ARROW"_j, 52, u"leftUpArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::LEFT_RIGHT_UP_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"LEFT_RIGHT_UP_ARROW"_j, 53, u"leftRightUpArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::QUAD_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"QUAD_ARROW"_j, 54, u"quadArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::LEFT_ARROW_CALLOUT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"LEFT_ARROW_CALLOUT"_j, 55, u"leftArrowCallout"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::RIGHT_ARROW_CALLOUT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"RIGHT_ARROW_CALLOUT"_j, 56, u"rightArrowCallout"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::UP_ARROW_CALLOUT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"UP_ARROW_CALLOUT"_j, 57, u"upArrowCallout"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::DOWN_ARROW_CALLOUT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"DOWN_ARROW_CALLOUT"_j, 58, u"downArrowCallout"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::LEFT_RIGHT_ARROW_CALLOUT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"LEFT_RIGHT_ARROW_CALLOUT"_j, 59, u"leftRightArrowCallout"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::UP_DOWN_ARROW_CALLOUT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"UP_DOWN_ARROW_CALLOUT"_j, 60, u"upDownArrowCallout"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::QUAD_ARROW_CALLOUT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"QUAD_ARROW_CALLOUT"_j, 61, u"quadArrowCallout"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::BENT_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"BENT_ARROW"_j, 62, u"bentArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::UTURN_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"UTURN_ARROW"_j, 63, u"uturnArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CIRCULAR_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CIRCULAR_ARROW"_j, 64, u"circularArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::LEFT_CIRCULAR_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"LEFT_CIRCULAR_ARROW"_j, 65, u"leftCircularArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::LEFT_RIGHT_CIRCULAR_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"LEFT_RIGHT_CIRCULAR_ARROW"_j, 66, u"leftRightCircularArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CURVED_RIGHT_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CURVED_RIGHT_ARROW"_j, 67, u"curvedRightArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CURVED_LEFT_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CURVED_LEFT_ARROW"_j, 68, u"curvedLeftArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CURVED_UP_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CURVED_UP_ARROW"_j, 69, u"curvedUpArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CURVED_DOWN_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CURVED_DOWN_ARROW"_j, 70, u"curvedDownArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::SWOOSH_ARROW = new ::org::apache::poi::sl::draw::binding::STShapeType(u"SWOOSH_ARROW"_j, 71, u"swooshArrow"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CUBE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CUBE"_j, 72, u"cube"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CAN = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CAN"_j, 73, u"can"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::LIGHTNING_BOLT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"LIGHTNING_BOLT"_j, 74, u"lightningBolt"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::HEART = new ::org::apache::poi::sl::draw::binding::STShapeType(u"HEART"_j, 75, u"heart"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::SUN = new ::org::apache::poi::sl::draw::binding::STShapeType(u"SUN"_j, 76, u"sun"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::MOON = new ::org::apache::poi::sl::draw::binding::STShapeType(u"MOON"_j, 77, u"moon"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::SMILEY_FACE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"SMILEY_FACE"_j, 78, u"smileyFace"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::IRREGULAR_SEAL_1 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"IRREGULAR_SEAL_1"_j, 79, u"irregularSeal1"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::IRREGULAR_SEAL_2 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"IRREGULAR_SEAL_2"_j, 80, u"irregularSeal2"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FOLDED_CORNER = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FOLDED_CORNER"_j, 81, u"foldedCorner"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::BEVEL = new ::org::apache::poi::sl::draw::binding::STShapeType(u"BEVEL"_j, 82, u"bevel"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FRAME = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FRAME"_j, 83, u"frame"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::HALF_FRAME = new ::org::apache::poi::sl::draw::binding::STShapeType(u"HALF_FRAME"_j, 84, u"halfFrame"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CORNER = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CORNER"_j, 85, u"corner"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::DIAG_STRIPE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"DIAG_STRIPE"_j, 86, u"diagStripe"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CHORD = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CHORD"_j, 87, u"chord"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ARC = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ARC"_j, 88, u"arc"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::LEFT_BRACKET = new ::org::apache::poi::sl::draw::binding::STShapeType(u"LEFT_BRACKET"_j, 89, u"leftBracket"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::RIGHT_BRACKET = new ::org::apache::poi::sl::draw::binding::STShapeType(u"RIGHT_BRACKET"_j, 90, u"rightBracket"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::LEFT_BRACE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"LEFT_BRACE"_j, 91, u"leftBrace"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::RIGHT_BRACE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"RIGHT_BRACE"_j, 92, u"rightBrace"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::BRACKET_PAIR = new ::org::apache::poi::sl::draw::binding::STShapeType(u"BRACKET_PAIR"_j, 93, u"bracketPair"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::BRACE_PAIR = new ::org::apache::poi::sl::draw::binding::STShapeType(u"BRACE_PAIR"_j, 94, u"bracePair"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::STRAIGHT_CONNECTOR_1 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"STRAIGHT_CONNECTOR_1"_j, 95, u"straightConnector1"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::BENT_CONNECTOR_2 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"BENT_CONNECTOR_2"_j, 96, u"bentConnector2"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::BENT_CONNECTOR_3 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"BENT_CONNECTOR_3"_j, 97, u"bentConnector3"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::BENT_CONNECTOR_4 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"BENT_CONNECTOR_4"_j, 98, u"bentConnector4"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::BENT_CONNECTOR_5 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"BENT_CONNECTOR_5"_j, 99, u"bentConnector5"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CURVED_CONNECTOR_2 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CURVED_CONNECTOR_2"_j, 100, u"curvedConnector2"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CURVED_CONNECTOR_3 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CURVED_CONNECTOR_3"_j, 101, u"curvedConnector3"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CURVED_CONNECTOR_4 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CURVED_CONNECTOR_4"_j, 102, u"curvedConnector4"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CURVED_CONNECTOR_5 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CURVED_CONNECTOR_5"_j, 103, u"curvedConnector5"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CALLOUT_1 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CALLOUT_1"_j, 104, u"callout1"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CALLOUT_2 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CALLOUT_2"_j, 105, u"callout2"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CALLOUT_3 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CALLOUT_3"_j, 106, u"callout3"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ACCENT_CALLOUT_1 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ACCENT_CALLOUT_1"_j, 107, u"accentCallout1"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ACCENT_CALLOUT_2 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ACCENT_CALLOUT_2"_j, 108, u"accentCallout2"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ACCENT_CALLOUT_3 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ACCENT_CALLOUT_3"_j, 109, u"accentCallout3"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::BORDER_CALLOUT_1 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"BORDER_CALLOUT_1"_j, 110, u"borderCallout1"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::BORDER_CALLOUT_2 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"BORDER_CALLOUT_2"_j, 111, u"borderCallout2"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::BORDER_CALLOUT_3 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"BORDER_CALLOUT_3"_j, 112, u"borderCallout3"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ACCENT_BORDER_CALLOUT_1 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ACCENT_BORDER_CALLOUT_1"_j, 113, u"accentBorderCallout1"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ACCENT_BORDER_CALLOUT_2 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ACCENT_BORDER_CALLOUT_2"_j, 114, u"accentBorderCallout2"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ACCENT_BORDER_CALLOUT_3 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ACCENT_BORDER_CALLOUT_3"_j, 115, u"accentBorderCallout3"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::WEDGE_RECT_CALLOUT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"WEDGE_RECT_CALLOUT"_j, 116, u"wedgeRectCallout"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::WEDGE_ROUND_RECT_CALLOUT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"WEDGE_ROUND_RECT_CALLOUT"_j, 117, u"wedgeRoundRectCallout"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::WEDGE_ELLIPSE_CALLOUT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"WEDGE_ELLIPSE_CALLOUT"_j, 118, u"wedgeEllipseCallout"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CLOUD_CALLOUT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CLOUD_CALLOUT"_j, 119, u"cloudCallout"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CLOUD = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CLOUD"_j, 120, u"cloud"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::RIBBON = new ::org::apache::poi::sl::draw::binding::STShapeType(u"RIBBON"_j, 121, u"ribbon"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::RIBBON_2 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"RIBBON_2"_j, 122, u"ribbon2"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ELLIPSE_RIBBON = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ELLIPSE_RIBBON"_j, 123, u"ellipseRibbon"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ELLIPSE_RIBBON_2 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ELLIPSE_RIBBON_2"_j, 124, u"ellipseRibbon2"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::LEFT_RIGHT_RIBBON = new ::org::apache::poi::sl::draw::binding::STShapeType(u"LEFT_RIGHT_RIBBON"_j, 125, u"leftRightRibbon"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::VERTICAL_SCROLL = new ::org::apache::poi::sl::draw::binding::STShapeType(u"VERTICAL_SCROLL"_j, 126, u"verticalScroll"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::HORIZONTAL_SCROLL = new ::org::apache::poi::sl::draw::binding::STShapeType(u"HORIZONTAL_SCROLL"_j, 127, u"horizontalScroll"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::WAVE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"WAVE"_j, 128, u"wave"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::DOUBLE_WAVE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"DOUBLE_WAVE"_j, 129, u"doubleWave"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::PLUS = new ::org::apache::poi::sl::draw::binding::STShapeType(u"PLUS"_j, 130, u"plus"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_PROCESS = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_PROCESS"_j, 131, u"flowChartProcess"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_DECISION = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_DECISION"_j, 132, u"flowChartDecision"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_INPUT_OUTPUT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_INPUT_OUTPUT"_j, 133, u"flowChartInputOutput"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_PREDEFINED_PROCESS = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_PREDEFINED_PROCESS"_j, 134, u"flowChartPredefinedProcess"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_INTERNAL_STORAGE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_INTERNAL_STORAGE"_j, 135, u"flowChartInternalStorage"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_DOCUMENT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_DOCUMENT"_j, 136, u"flowChartDocument"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_MULTIDOCUMENT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_MULTIDOCUMENT"_j, 137, u"flowChartMultidocument"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_TERMINATOR = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_TERMINATOR"_j, 138, u"flowChartTerminator"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_PREPARATION = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_PREPARATION"_j, 139, u"flowChartPreparation"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_MANUAL_INPUT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_MANUAL_INPUT"_j, 140, u"flowChartManualInput"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_MANUAL_OPERATION = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_MANUAL_OPERATION"_j, 141, u"flowChartManualOperation"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_CONNECTOR = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_CONNECTOR"_j, 142, u"flowChartConnector"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_PUNCHED_CARD = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_PUNCHED_CARD"_j, 143, u"flowChartPunchedCard"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_PUNCHED_TAPE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_PUNCHED_TAPE"_j, 144, u"flowChartPunchedTape"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_SUMMING_JUNCTION = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_SUMMING_JUNCTION"_j, 145, u"flowChartSummingJunction"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_OR = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_OR"_j, 146, u"flowChartOr"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_COLLATE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_COLLATE"_j, 147, u"flowChartCollate"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_SORT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_SORT"_j, 148, u"flowChartSort"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_EXTRACT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_EXTRACT"_j, 149, u"flowChartExtract"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_MERGE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_MERGE"_j, 150, u"flowChartMerge"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_OFFLINE_STORAGE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_OFFLINE_STORAGE"_j, 151, u"flowChartOfflineStorage"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_ONLINE_STORAGE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_ONLINE_STORAGE"_j, 152, u"flowChartOnlineStorage"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_MAGNETIC_TAPE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_MAGNETIC_TAPE"_j, 153, u"flowChartMagneticTape"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_MAGNETIC_DISK = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_MAGNETIC_DISK"_j, 154, u"flowChartMagneticDisk"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_MAGNETIC_DRUM = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_MAGNETIC_DRUM"_j, 155, u"flowChartMagneticDrum"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_DISPLAY = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_DISPLAY"_j, 156, u"flowChartDisplay"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_DELAY = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_DELAY"_j, 157, u"flowChartDelay"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_ALTERNATE_PROCESS = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_ALTERNATE_PROCESS"_j, 158, u"flowChartAlternateProcess"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FLOW_CHART_OFFPAGE_CONNECTOR = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FLOW_CHART_OFFPAGE_CONNECTOR"_j, 159, u"flowChartOffpageConnector"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ACTION_BUTTON_BLANK = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ACTION_BUTTON_BLANK"_j, 160, u"actionButtonBlank"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ACTION_BUTTON_HOME = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ACTION_BUTTON_HOME"_j, 161, u"actionButtonHome"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ACTION_BUTTON_HELP = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ACTION_BUTTON_HELP"_j, 162, u"actionButtonHelp"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ACTION_BUTTON_INFORMATION = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ACTION_BUTTON_INFORMATION"_j, 163, u"actionButtonInformation"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ACTION_BUTTON_FORWARD_NEXT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ACTION_BUTTON_FORWARD_NEXT"_j, 164, u"actionButtonForwardNext"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ACTION_BUTTON_BACK_PREVIOUS = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ACTION_BUTTON_BACK_PREVIOUS"_j, 165, u"actionButtonBackPrevious"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ACTION_BUTTON_END = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ACTION_BUTTON_END"_j, 166, u"actionButtonEnd"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ACTION_BUTTON_BEGINNING = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ACTION_BUTTON_BEGINNING"_j, 167, u"actionButtonBeginning"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ACTION_BUTTON_RETURN = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ACTION_BUTTON_RETURN"_j, 168, u"actionButtonReturn"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ACTION_BUTTON_DOCUMENT = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ACTION_BUTTON_DOCUMENT"_j, 169, u"actionButtonDocument"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ACTION_BUTTON_SOUND = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ACTION_BUTTON_SOUND"_j, 170, u"actionButtonSound"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::ACTION_BUTTON_MOVIE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"ACTION_BUTTON_MOVIE"_j, 171, u"actionButtonMovie"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::GEAR_6 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"GEAR_6"_j, 172, u"gear6"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::GEAR_9 = new ::org::apache::poi::sl::draw::binding::STShapeType(u"GEAR_9"_j, 173, u"gear9"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::FUNNEL = new ::org::apache::poi::sl::draw::binding::STShapeType(u"FUNNEL"_j, 174, u"funnel"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::MATH_PLUS = new ::org::apache::poi::sl::draw::binding::STShapeType(u"MATH_PLUS"_j, 175, u"mathPlus"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::MATH_MINUS = new ::org::apache::poi::sl::draw::binding::STShapeType(u"MATH_MINUS"_j, 176, u"mathMinus"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::MATH_MULTIPLY = new ::org::apache::poi::sl::draw::binding::STShapeType(u"MATH_MULTIPLY"_j, 177, u"mathMultiply"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::MATH_DIVIDE = new ::org::apache::poi::sl::draw::binding::STShapeType(u"MATH_DIVIDE"_j, 178, u"mathDivide"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::MATH_EQUAL = new ::org::apache::poi::sl::draw::binding::STShapeType(u"MATH_EQUAL"_j, 179, u"mathEqual"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::MATH_NOT_EQUAL = new ::org::apache::poi::sl::draw::binding::STShapeType(u"MATH_NOT_EQUAL"_j, 180, u"mathNotEqual"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CORNER_TABS = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CORNER_TABS"_j, 181, u"cornerTabs"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::SQUARE_TABS = new ::org::apache::poi::sl::draw::binding::STShapeType(u"SQUARE_TABS"_j, 182, u"squareTabs"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::PLAQUE_TABS = new ::org::apache::poi::sl::draw::binding::STShapeType(u"PLAQUE_TABS"_j, 183, u"plaqueTabs"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CHART_X = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CHART_X"_j, 184, u"chartX"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CHART_STAR = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CHART_STAR"_j, 185, u"chartStar"_j);
org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::CHART_PLUS = new ::org::apache::poi::sl::draw::binding::STShapeType(u"CHART_PLUS"_j, 186, u"chartPlus"_j);
void org::apache::poi::sl::draw::binding::STShapeType::ctor(::java::lang::String* name, int ordinal, ::java::lang::String* v)
{
    super::ctor(name, ordinal);
    value_ = v;
}

java::lang::String* org::apache::poi::sl::draw::binding::STShapeType::value()
{
    return value_;
}

org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::fromValue(::java::lang::String* v)
{
    clinit();
    for(auto c : *npc(STShapeType::values())) {
        if(npc(npc(c)->value_)->equals(static_cast< ::java::lang::Object* >(v))) {
            return c;
        }
    }
    throw new ::java::lang::IllegalArgumentException(v);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::STShapeType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.STShapeType", 42);
    return c;
}

org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::STShapeType::valueOf(::java::lang::String* a0)
{
    if(ACCENT_BORDER_CALLOUT_1->toString()->equals(a0))
        return ACCENT_BORDER_CALLOUT_1;
    if(ACCENT_BORDER_CALLOUT_2->toString()->equals(a0))
        return ACCENT_BORDER_CALLOUT_2;
    if(ACCENT_BORDER_CALLOUT_3->toString()->equals(a0))
        return ACCENT_BORDER_CALLOUT_3;
    if(ACCENT_CALLOUT_1->toString()->equals(a0))
        return ACCENT_CALLOUT_1;
    if(ACCENT_CALLOUT_2->toString()->equals(a0))
        return ACCENT_CALLOUT_2;
    if(ACCENT_CALLOUT_3->toString()->equals(a0))
        return ACCENT_CALLOUT_3;
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
    if(NOTCHED_RIGHT_ARROW->toString()->equals(a0))
        return NOTCHED_RIGHT_ARROW;
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

org::apache::poi::sl::draw::binding::STShapeTypeArray* org::apache::poi::sl::draw::binding::STShapeType::values()
{
    return new org::apache::poi::sl::draw::binding::STShapeTypeArray({
        ACCENT_BORDER_CALLOUT_1,
        ACCENT_BORDER_CALLOUT_2,
        ACCENT_BORDER_CALLOUT_3,
        ACCENT_CALLOUT_1,
        ACCENT_CALLOUT_2,
        ACCENT_CALLOUT_3,
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
        BRACE_PAIR,
        BRACKET_PAIR,
        CALLOUT_1,
        CALLOUT_2,
        CALLOUT_3,
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
        NOTCHED_RIGHT_ARROW,
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

java::lang::Class* org::apache::poi::sl::draw::binding::STShapeType::getClass0()
{
    return class_();
}

