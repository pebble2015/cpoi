// Generated from /POI/java/org/apache/poi/sl/usermodel/VerticalAlignment.java

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
typedef ::SubArray< ::poi::sl::usermodel::VerticalAlignment, ::java::lang::EnumArray > VerticalAlignmentArray;
        } // usermodel
    } // sl
} // poi

struct default_init_tag;

class poi::sl::usermodel::VerticalAlignment final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static VerticalAlignment *TOP;
    static VerticalAlignment *MIDDLE;
    static VerticalAlignment *BOTTOM;
    static VerticalAlignment *JUSTIFIED;
    static VerticalAlignment *DISTRIBUTED;

    // Generated

public:
    VerticalAlignment(::java::lang::String* name, int ordinal);
protected:
    VerticalAlignment(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static VerticalAlignment* valueOf(::java::lang::String* a0);
    static VerticalAlignmentArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
