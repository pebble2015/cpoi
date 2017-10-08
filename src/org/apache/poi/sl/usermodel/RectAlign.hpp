// Generated from /POI/java/org/apache/poi/sl/usermodel/RectAlign.java

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
typedef ::SubArray< ::poi::sl::usermodel::RectAlign, ::java::lang::EnumArray > RectAlignArray;
        } // usermodel
    } // sl
} // poi

struct default_init_tag;

class poi::sl::usermodel::RectAlign final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static RectAlign *TOP_LEFT;
    static RectAlign *TOP;
    static RectAlign *TOP_RIGHT;
    static RectAlign *LEFT;
    static RectAlign *CENTER;
    static RectAlign *RIGHT;
    static RectAlign *BOTTOM_LEFT;
    static RectAlign *BOTTOM;
    static RectAlign *BOTTOM_RIGHT;

private:
    ::java::lang::String* dir {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, ::java::lang::String* dir);

public:
    ::java::lang::String* toString() override;

    // Generated

private:
    RectAlign(::java::lang::String* name, int ordinal, ::java::lang::String* dir);
protected:
    RectAlign(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static RectAlign* valueOf(::java::lang::String* a0);
    static RectAlignArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
