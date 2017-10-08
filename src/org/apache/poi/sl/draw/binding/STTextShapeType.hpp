// Generated from /POI/java/org/apache/poi/sl/draw/binding/STTextShapeType.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Enum.hpp>

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
    namespace sl
    {
        namespace draw
        {
            namespace binding
            {
typedef ::SubArray< ::poi::sl::draw::binding::STTextShapeType, ::java::lang::EnumArray > STTextShapeTypeArray;
            } // binding
        } // draw
    } // sl
} // poi

struct default_init_tag;

class poi::sl::draw::binding::STTextShapeType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static STTextShapeType *TEXT_NO_SHAPE;
    static STTextShapeType *TEXT_PLAIN;
    static STTextShapeType *TEXT_STOP;
    static STTextShapeType *TEXT_TRIANGLE;
    static STTextShapeType *TEXT_TRIANGLE_INVERTED;
    static STTextShapeType *TEXT_CHEVRON;
    static STTextShapeType *TEXT_CHEVRON_INVERTED;
    static STTextShapeType *TEXT_RING_INSIDE;
    static STTextShapeType *TEXT_RING_OUTSIDE;
    static STTextShapeType *TEXT_ARCH_UP;
    static STTextShapeType *TEXT_ARCH_DOWN;
    static STTextShapeType *TEXT_CIRCLE;
    static STTextShapeType *TEXT_BUTTON;
    static STTextShapeType *TEXT_ARCH_UP_POUR;
    static STTextShapeType *TEXT_ARCH_DOWN_POUR;
    static STTextShapeType *TEXT_CIRCLE_POUR;
    static STTextShapeType *TEXT_BUTTON_POUR;
    static STTextShapeType *TEXT_CURVE_UP;
    static STTextShapeType *TEXT_CURVE_DOWN;
    static STTextShapeType *TEXT_CAN_UP;
    static STTextShapeType *TEXT_CAN_DOWN;
    static STTextShapeType *TEXT_WAVE_1;
    static STTextShapeType *TEXT_WAVE_2;
    static STTextShapeType *TEXT_DOUBLE_WAVE_1;
    static STTextShapeType *TEXT_WAVE_4;
    static STTextShapeType *TEXT_INFLATE;
    static STTextShapeType *TEXT_DEFLATE;
    static STTextShapeType *TEXT_INFLATE_BOTTOM;
    static STTextShapeType *TEXT_DEFLATE_BOTTOM;
    static STTextShapeType *TEXT_INFLATE_TOP;
    static STTextShapeType *TEXT_DEFLATE_TOP;
    static STTextShapeType *TEXT_DEFLATE_INFLATE;
    static STTextShapeType *TEXT_DEFLATE_INFLATE_DEFLATE;
    static STTextShapeType *TEXT_FADE_RIGHT;
    static STTextShapeType *TEXT_FADE_LEFT;
    static STTextShapeType *TEXT_FADE_UP;
    static STTextShapeType *TEXT_FADE_DOWN;
    static STTextShapeType *TEXT_SLANT_UP;
    static STTextShapeType *TEXT_SLANT_DOWN;
    static STTextShapeType *TEXT_CASCADE_UP;
    static STTextShapeType *TEXT_CASCADE_DOWN;

private:
    ::java::lang::String* value_ {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, ::java::lang::String* v);

public:
    ::java::lang::String* value();
    static STTextShapeType* fromValue(::java::lang::String* v);

    // Generated

private:
    STTextShapeType(::java::lang::String* name, int ordinal, ::java::lang::String* v);
protected:
    STTextShapeType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static STTextShapeType* valueOf(::java::lang::String* a0);
    static STTextShapeTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
