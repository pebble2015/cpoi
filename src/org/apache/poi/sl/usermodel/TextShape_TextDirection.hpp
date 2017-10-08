// Generated from /POI/java/org/apache/poi/sl/usermodel/TextShape.java

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
typedef ::SubArray< ::poi::sl::usermodel::TextShape_TextDirection, ::java::lang::EnumArray > TextShape_TextDirectionArray;
        } // usermodel
    } // sl
} // poi

struct default_init_tag;

class poi::sl::usermodel::TextShape_TextDirection final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static TextShape_TextDirection *HORIZONTAL;
    static TextShape_TextDirection *VERTICAL;
    static TextShape_TextDirection *VERTICAL_270;
    static TextShape_TextDirection *STACKED;

    // Generated

public:
    TextShape_TextDirection(::java::lang::String* name, int ordinal);
protected:
    TextShape_TextDirection(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static TextShape_TextDirection* valueOf(::java::lang::String* a0);
    static TextShape_TextDirectionArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class TextShape;
    friend class TextShape_TextAutofit;
    friend class TextShape_TextPlaceholder;
};
