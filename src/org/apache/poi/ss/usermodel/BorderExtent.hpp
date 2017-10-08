// Generated from /POI/java/org/apache/poi/ss/usermodel/BorderExtent.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
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
    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::BorderExtent, ::java::lang::EnumArray > BorderExtentArray;
        } // usermodel
    } // ss
} // poi

struct default_init_tag;

class poi::ss::usermodel::BorderExtent final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static BorderExtent *NONE;
    static BorderExtent *ALL;
    static BorderExtent *INSIDE;
    static BorderExtent *OUTSIDE;
    static BorderExtent *TOP;
    static BorderExtent *BOTTOM;
    static BorderExtent *LEFT;
    static BorderExtent *RIGHT;
    static BorderExtent *HORIZONTAL;
    static BorderExtent *INSIDE_HORIZONTAL;
    static BorderExtent *OUTSIDE_HORIZONTAL;
    static BorderExtent *VERTICAL;
    static BorderExtent *INSIDE_VERTICAL;
    static BorderExtent *OUTSIDE_VERTICAL;

    // Generated

public:
    BorderExtent(::java::lang::String* name, int ordinal);
protected:
    BorderExtent(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static BorderExtent* valueOf(::java::lang::String* a0);
    static BorderExtentArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
