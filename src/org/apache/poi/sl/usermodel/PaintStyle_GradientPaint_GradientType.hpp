// Generated from /POI/java/org/apache/poi/sl/usermodel/PaintStyle.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
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
        namespace usermodel
        {
typedef ::SubArray< ::poi::sl::usermodel::PaintStyle_GradientPaint_GradientType, ::java::lang::EnumArray > PaintStyle_GradientPaint_GradientTypeArray;
        } // usermodel
    } // sl
} // poi

struct default_init_tag;

class poi::sl::usermodel::PaintStyle_GradientPaint_GradientType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static PaintStyle_GradientPaint_GradientType *linear;
    static PaintStyle_GradientPaint_GradientType *circular;
    static PaintStyle_GradientPaint_GradientType *shape;

    // Generated

public:
    PaintStyle_GradientPaint_GradientType(::java::lang::String* name, int ordinal);
protected:
    PaintStyle_GradientPaint_GradientType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static PaintStyle_GradientPaint_GradientType* valueOf(::java::lang::String* a0);
    static PaintStyle_GradientPaint_GradientTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class PaintStyle;
    friend class PaintStyle_PaintModifier;
    friend class PaintStyle_SolidPaint;
    friend class PaintStyle_GradientPaint;
    friend class PaintStyle_TexturePaint;
};
