// Generated from /POI/java/org/apache/poi/sl/draw/binding/STTextShapeType.java
#include <org/apache/poi/sl/draw/binding/STTextShapeType.hpp>

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
typedef ::SubArray< ::org::apache::poi::sl::draw::binding::STTextShapeType, ::java::lang::EnumArray > STTextShapeTypeArray;
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

org::apache::poi::sl::draw::binding::STTextShapeType::STTextShapeType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::STTextShapeType::STTextShapeType(::java::lang::String* name, int ordinal, ::java::lang::String* v) 
    : STTextShapeType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, v);
}

org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_NO_SHAPE = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_NO_SHAPE"_j, 0, u"textNoShape"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_PLAIN = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_PLAIN"_j, 1, u"textPlain"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_STOP = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_STOP"_j, 2, u"textStop"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_TRIANGLE = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_TRIANGLE"_j, 3, u"textTriangle"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_TRIANGLE_INVERTED = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_TRIANGLE_INVERTED"_j, 4, u"textTriangleInverted"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_CHEVRON = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_CHEVRON"_j, 5, u"textChevron"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_CHEVRON_INVERTED = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_CHEVRON_INVERTED"_j, 6, u"textChevronInverted"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_RING_INSIDE = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_RING_INSIDE"_j, 7, u"textRingInside"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_RING_OUTSIDE = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_RING_OUTSIDE"_j, 8, u"textRingOutside"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_ARCH_UP = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_ARCH_UP"_j, 9, u"textArchUp"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_ARCH_DOWN = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_ARCH_DOWN"_j, 10, u"textArchDown"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_CIRCLE = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_CIRCLE"_j, 11, u"textCircle"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_BUTTON = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_BUTTON"_j, 12, u"textButton"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_ARCH_UP_POUR = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_ARCH_UP_POUR"_j, 13, u"textArchUpPour"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_ARCH_DOWN_POUR = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_ARCH_DOWN_POUR"_j, 14, u"textArchDownPour"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_CIRCLE_POUR = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_CIRCLE_POUR"_j, 15, u"textCirclePour"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_BUTTON_POUR = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_BUTTON_POUR"_j, 16, u"textButtonPour"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_CURVE_UP = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_CURVE_UP"_j, 17, u"textCurveUp"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_CURVE_DOWN = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_CURVE_DOWN"_j, 18, u"textCurveDown"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_CAN_UP = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_CAN_UP"_j, 19, u"textCanUp"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_CAN_DOWN = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_CAN_DOWN"_j, 20, u"textCanDown"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_WAVE_1 = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_WAVE_1"_j, 21, u"textWave1"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_WAVE_2 = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_WAVE_2"_j, 22, u"textWave2"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_DOUBLE_WAVE_1 = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_DOUBLE_WAVE_1"_j, 23, u"textDoubleWave1"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_WAVE_4 = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_WAVE_4"_j, 24, u"textWave4"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_INFLATE = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_INFLATE"_j, 25, u"textInflate"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_DEFLATE = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_DEFLATE"_j, 26, u"textDeflate"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_INFLATE_BOTTOM = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_INFLATE_BOTTOM"_j, 27, u"textInflateBottom"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_DEFLATE_BOTTOM = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_DEFLATE_BOTTOM"_j, 28, u"textDeflateBottom"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_INFLATE_TOP = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_INFLATE_TOP"_j, 29, u"textInflateTop"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_DEFLATE_TOP = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_DEFLATE_TOP"_j, 30, u"textDeflateTop"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_DEFLATE_INFLATE = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_DEFLATE_INFLATE"_j, 31, u"textDeflateInflate"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_DEFLATE_INFLATE_DEFLATE = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_DEFLATE_INFLATE_DEFLATE"_j, 32, u"textDeflateInflateDeflate"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_FADE_RIGHT = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_FADE_RIGHT"_j, 33, u"textFadeRight"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_FADE_LEFT = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_FADE_LEFT"_j, 34, u"textFadeLeft"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_FADE_UP = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_FADE_UP"_j, 35, u"textFadeUp"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_FADE_DOWN = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_FADE_DOWN"_j, 36, u"textFadeDown"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_SLANT_UP = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_SLANT_UP"_j, 37, u"textSlantUp"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_SLANT_DOWN = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_SLANT_DOWN"_j, 38, u"textSlantDown"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_CASCADE_UP = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_CASCADE_UP"_j, 39, u"textCascadeUp"_j);
org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::TEXT_CASCADE_DOWN = new ::org::apache::poi::sl::draw::binding::STTextShapeType(u"TEXT_CASCADE_DOWN"_j, 40, u"textCascadeDown"_j);
void org::apache::poi::sl::draw::binding::STTextShapeType::ctor(::java::lang::String* name, int ordinal, ::java::lang::String* v)
{
    super::ctor(name, ordinal);
    value_ = v;
}

java::lang::String* org::apache::poi::sl::draw::binding::STTextShapeType::value()
{
    return value_;
}

org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::fromValue(::java::lang::String* v)
{
    clinit();
    for(auto c : *npc(STTextShapeType::values())) {
        if(npc(npc(c)->value_)->equals(static_cast< ::java::lang::Object* >(v))) {
            return c;
        }
    }
    throw new ::java::lang::IllegalArgumentException(v);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::STTextShapeType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.STTextShapeType", 46);
    return c;
}

org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::STTextShapeType::valueOf(::java::lang::String* a0)
{
    if(TEXT_ARCH_DOWN->toString()->equals(a0))
        return TEXT_ARCH_DOWN;
    if(TEXT_ARCH_DOWN_POUR->toString()->equals(a0))
        return TEXT_ARCH_DOWN_POUR;
    if(TEXT_ARCH_UP->toString()->equals(a0))
        return TEXT_ARCH_UP;
    if(TEXT_ARCH_UP_POUR->toString()->equals(a0))
        return TEXT_ARCH_UP_POUR;
    if(TEXT_BUTTON->toString()->equals(a0))
        return TEXT_BUTTON;
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
    if(TEXT_CIRCLE->toString()->equals(a0))
        return TEXT_CIRCLE;
    if(TEXT_CIRCLE_POUR->toString()->equals(a0))
        return TEXT_CIRCLE_POUR;
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
    if(TEXT_DOUBLE_WAVE_1->toString()->equals(a0))
        return TEXT_DOUBLE_WAVE_1;
    if(TEXT_FADE_DOWN->toString()->equals(a0))
        return TEXT_FADE_DOWN;
    if(TEXT_FADE_LEFT->toString()->equals(a0))
        return TEXT_FADE_LEFT;
    if(TEXT_FADE_RIGHT->toString()->equals(a0))
        return TEXT_FADE_RIGHT;
    if(TEXT_FADE_UP->toString()->equals(a0))
        return TEXT_FADE_UP;
    if(TEXT_INFLATE->toString()->equals(a0))
        return TEXT_INFLATE;
    if(TEXT_INFLATE_BOTTOM->toString()->equals(a0))
        return TEXT_INFLATE_BOTTOM;
    if(TEXT_INFLATE_TOP->toString()->equals(a0))
        return TEXT_INFLATE_TOP;
    if(TEXT_NO_SHAPE->toString()->equals(a0))
        return TEXT_NO_SHAPE;
    if(TEXT_PLAIN->toString()->equals(a0))
        return TEXT_PLAIN;
    if(TEXT_RING_INSIDE->toString()->equals(a0))
        return TEXT_RING_INSIDE;
    if(TEXT_RING_OUTSIDE->toString()->equals(a0))
        return TEXT_RING_OUTSIDE;
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
    if(TEXT_WAVE_1->toString()->equals(a0))
        return TEXT_WAVE_1;
    if(TEXT_WAVE_2->toString()->equals(a0))
        return TEXT_WAVE_2;
    if(TEXT_WAVE_4->toString()->equals(a0))
        return TEXT_WAVE_4;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::sl::draw::binding::STTextShapeTypeArray* org::apache::poi::sl::draw::binding::STTextShapeType::values()
{
    return new org::apache::poi::sl::draw::binding::STTextShapeTypeArray({
        TEXT_ARCH_DOWN,
        TEXT_ARCH_DOWN_POUR,
        TEXT_ARCH_UP,
        TEXT_ARCH_UP_POUR,
        TEXT_BUTTON,
        TEXT_BUTTON_POUR,
        TEXT_CAN_DOWN,
        TEXT_CAN_UP,
        TEXT_CASCADE_DOWN,
        TEXT_CASCADE_UP,
        TEXT_CHEVRON,
        TEXT_CHEVRON_INVERTED,
        TEXT_CIRCLE,
        TEXT_CIRCLE_POUR,
        TEXT_CURVE_DOWN,
        TEXT_CURVE_UP,
        TEXT_DEFLATE,
        TEXT_DEFLATE_BOTTOM,
        TEXT_DEFLATE_INFLATE,
        TEXT_DEFLATE_INFLATE_DEFLATE,
        TEXT_DEFLATE_TOP,
        TEXT_DOUBLE_WAVE_1,
        TEXT_FADE_DOWN,
        TEXT_FADE_LEFT,
        TEXT_FADE_RIGHT,
        TEXT_FADE_UP,
        TEXT_INFLATE,
        TEXT_INFLATE_BOTTOM,
        TEXT_INFLATE_TOP,
        TEXT_NO_SHAPE,
        TEXT_PLAIN,
        TEXT_RING_INSIDE,
        TEXT_RING_OUTSIDE,
        TEXT_SLANT_DOWN,
        TEXT_SLANT_UP,
        TEXT_STOP,
        TEXT_TRIANGLE,
        TEXT_TRIANGLE_INVERTED,
        TEXT_WAVE_1,
        TEXT_WAVE_2,
        TEXT_WAVE_4,
    });
}

java::lang::Class* org::apache::poi::sl::draw::binding::STTextShapeType::getClass0()
{
    return class_();
}

