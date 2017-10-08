// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/LayoutMode.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
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
            namespace charts
            {
typedef ::SubArray< ::poi::ss::usermodel::charts::LayoutMode, ::java::lang::EnumArray > LayoutModeArray;
            } // charts
        } // usermodel
    } // ss
} // poi

struct default_init_tag;

class poi::ss::usermodel::charts::LayoutMode final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static LayoutMode *EDGE;
    static LayoutMode *FACTOR;

    // Generated

public:
    LayoutMode(::java::lang::String* name, int ordinal);
protected:
    LayoutMode(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static LayoutMode* valueOf(::java::lang::String* a0);
    static LayoutModeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
