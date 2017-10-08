// Generated from /POI/java/org/apache/poi/sl/usermodel/LineDecoration.java

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
typedef ::SubArray< ::poi::sl::usermodel::LineDecoration_DecorationSize, ::java::lang::EnumArray > LineDecoration_DecorationSizeArray;
        } // usermodel
    } // sl
} // poi

struct default_init_tag;

class poi::sl::usermodel::LineDecoration_DecorationSize final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static LineDecoration_DecorationSize *SMALL;
    static LineDecoration_DecorationSize *MEDIUM;
    static LineDecoration_DecorationSize *LARGE;

public:
    int32_t nativeId {  };
    int32_t ooxmlId {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId);

public:
    static LineDecoration_DecorationSize* fromNativeId(int32_t nativeId);
    static LineDecoration_DecorationSize* fromOoxmlId(int32_t ooxmlId);

    // Generated

private:
    LineDecoration_DecorationSize(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId);
protected:
    LineDecoration_DecorationSize(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static LineDecoration_DecorationSize* valueOf(::java::lang::String* a0);
    static LineDecoration_DecorationSizeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class LineDecoration;
    friend class LineDecoration_DecorationShape;
};
