// Generated from /POI/java/org/apache/poi/sl/usermodel/StrokeStyle.java

#pragma once

#include <fwd-POI.hpp>
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
typedef ::SubArray< ::poi::sl::usermodel::StrokeStyle_LineCompound, ::java::lang::EnumArray > StrokeStyle_LineCompoundArray;
        } // usermodel
    } // sl
} // poi

struct default_init_tag;

class poi::sl::usermodel::StrokeStyle_LineCompound final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static StrokeStyle_LineCompound *SINGLE;
    static StrokeStyle_LineCompound *DOUBLE;
    static StrokeStyle_LineCompound *THICK_THIN;
    static StrokeStyle_LineCompound *THIN_THICK;
    static StrokeStyle_LineCompound *TRIPLE;

public:
    int32_t nativeId {  };
    int32_t ooxmlId {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId);

public:
    static StrokeStyle_LineCompound* fromNativeId(int32_t nativeId);
    static StrokeStyle_LineCompound* fromOoxmlId(int32_t ooxmlId);

    // Generated

private:
    StrokeStyle_LineCompound(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId);
protected:
    StrokeStyle_LineCompound(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static StrokeStyle_LineCompound* valueOf(::java::lang::String* a0);
    static StrokeStyle_LineCompoundArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class StrokeStyle;
    friend class StrokeStyle_LineCap;
    friend class StrokeStyle_LineDash;
};
