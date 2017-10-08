// Generated from /POI/java/org/apache/poi/sl/usermodel/TextParagraph.java

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
typedef ::SubArray< ::poi::sl::usermodel::TextParagraph_FontAlign, ::java::lang::EnumArray > TextParagraph_FontAlignArray;
        } // usermodel
    } // sl
} // poi

struct default_init_tag;

class poi::sl::usermodel::TextParagraph_FontAlign final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static TextParagraph_FontAlign *AUTO;
    static TextParagraph_FontAlign *TOP;
    static TextParagraph_FontAlign *CENTER;
    static TextParagraph_FontAlign *BASELINE;
    static TextParagraph_FontAlign *BOTTOM;

    // Generated

public:
    TextParagraph_FontAlign(::java::lang::String* name, int ordinal);
protected:
    TextParagraph_FontAlign(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static TextParagraph_FontAlign* valueOf(::java::lang::String* a0);
    static TextParagraph_FontAlignArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class TextParagraph;
    friend class TextParagraph_TextAlign;
    friend class TextParagraph_BulletStyle;
};
