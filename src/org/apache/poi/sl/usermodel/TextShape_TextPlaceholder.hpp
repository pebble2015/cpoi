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
typedef ::SubArray< ::poi::sl::usermodel::TextShape_TextPlaceholder, ::java::lang::EnumArray > TextShape_TextPlaceholderArray;
        } // usermodel
    } // sl
} // poi

struct default_init_tag;

class poi::sl::usermodel::TextShape_TextPlaceholder final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static TextShape_TextPlaceholder *TITLE;
    static TextShape_TextPlaceholder *BODY;
    static TextShape_TextPlaceholder *CENTER_TITLE;
    static TextShape_TextPlaceholder *CENTER_BODY;
    static TextShape_TextPlaceholder *HALF_BODY;
    static TextShape_TextPlaceholder *QUARTER_BODY;
    static TextShape_TextPlaceholder *NOTES;
    static TextShape_TextPlaceholder *OTHER;

    // Generated

public:
    TextShape_TextPlaceholder(::java::lang::String* name, int ordinal);
protected:
    TextShape_TextPlaceholder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static TextShape_TextPlaceholder* valueOf(::java::lang::String* a0);
    static TextShape_TextPlaceholderArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class TextShape;
    friend class TextShape_TextDirection;
    friend class TextShape_TextAutofit;
};
