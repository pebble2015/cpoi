// Generated from /POI/java/org/apache/poi/hssf/usermodel/HeaderFooter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
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
    namespace hssf
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::hssf::usermodel::HeaderFooter_MarkupTag, ::java::lang::EnumArray > HeaderFooter_MarkupTagArray;
        } // usermodel
    } // hssf
} // poi

struct default_init_tag;

class poi::hssf::usermodel::HeaderFooter_MarkupTag final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static HeaderFooter_MarkupTag *SHEET_NAME_FIELD;
    static HeaderFooter_MarkupTag *DATE_FIELD;
    static HeaderFooter_MarkupTag *FILE_FIELD;
    static HeaderFooter_MarkupTag *FULL_FILE_FIELD;
    static HeaderFooter_MarkupTag *PAGE_FIELD;
    static HeaderFooter_MarkupTag *TIME_FIELD;
    static HeaderFooter_MarkupTag *NUM_PAGES_FIELD;
    static HeaderFooter_MarkupTag *PICTURE_FIELD;
    static HeaderFooter_MarkupTag *BOLD_FIELD;
    static HeaderFooter_MarkupTag *ITALIC_FIELD;
    static HeaderFooter_MarkupTag *STRIKETHROUGH_FIELD;
    static HeaderFooter_MarkupTag *SUBSCRIPT_FIELD;
    static HeaderFooter_MarkupTag *SUPERSCRIPT_FIELD;
    static HeaderFooter_MarkupTag *UNDERLINE_FIELD;
    static HeaderFooter_MarkupTag *DOUBLE_UNDERLINE_FIELD;

private:
    ::java::lang::String* _representation {  };
    bool _occursInPairs {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, ::java::lang::String* sequence, bool occursInPairs);

public:
    ::java::lang::String* getRepresentation();
    bool occursPairs();

    // Generated

private:
    HeaderFooter_MarkupTag(::java::lang::String* name, int ordinal, ::java::lang::String* sequence, bool occursInPairs);
protected:
    HeaderFooter_MarkupTag(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static HeaderFooter_MarkupTag* valueOf(::java::lang::String* a0);
    static HeaderFooter_MarkupTagArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class HeaderFooter;
};
