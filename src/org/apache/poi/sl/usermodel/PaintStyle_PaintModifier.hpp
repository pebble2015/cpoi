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
typedef ::SubArray< ::org::apache::poi::sl::usermodel::PaintStyle_PaintModifier, ::java::lang::EnumArray > PaintStyle_PaintModifierArray;
                } // usermodel
            } // sl
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::sl::usermodel::PaintStyle_PaintModifier final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static PaintStyle_PaintModifier *NONE;
    static PaintStyle_PaintModifier *NORM;
    static PaintStyle_PaintModifier *LIGHTEN;
    static PaintStyle_PaintModifier *LIGHTEN_LESS;
    static PaintStyle_PaintModifier *DARKEN;
    static PaintStyle_PaintModifier *DARKEN_LESS;

    // Generated

public:
    PaintStyle_PaintModifier(::java::lang::String* name, int ordinal);
protected:
    PaintStyle_PaintModifier(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static PaintStyle_PaintModifier* valueOf(::java::lang::String* a0);
    static PaintStyle_PaintModifierArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class PaintStyle;
    friend class PaintStyle_SolidPaint;
    friend class PaintStyle_GradientPaint;
    friend class PaintStyle_GradientPaint_GradientType;
    friend class PaintStyle_TexturePaint;
};
