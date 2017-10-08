// Generated from /POI/java/org/apache/poi/hssf/usermodel/HeaderFooter.java
#include <org/apache/poi/hssf/usermodel/HeaderFooter_MarkupTag.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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

poi::hssf::usermodel::HeaderFooter_MarkupTag::HeaderFooter_MarkupTag(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HeaderFooter_MarkupTag::HeaderFooter_MarkupTag(::java::lang::String* name, int ordinal, ::java::lang::String* sequence, bool occursInPairs) 
    : HeaderFooter_MarkupTag(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, sequence,occursInPairs);
}

poi::hssf::usermodel::HeaderFooter_MarkupTag* poi::hssf::usermodel::HeaderFooter_MarkupTag::SHEET_NAME_FIELD = new ::poi::hssf::usermodel::HeaderFooter_MarkupTag(u"SHEET_NAME_FIELD"_j, 0, u"&A"_j, false);
poi::hssf::usermodel::HeaderFooter_MarkupTag* poi::hssf::usermodel::HeaderFooter_MarkupTag::DATE_FIELD = new ::poi::hssf::usermodel::HeaderFooter_MarkupTag(u"DATE_FIELD"_j, 1, u"&D"_j, false);
poi::hssf::usermodel::HeaderFooter_MarkupTag* poi::hssf::usermodel::HeaderFooter_MarkupTag::FILE_FIELD = new ::poi::hssf::usermodel::HeaderFooter_MarkupTag(u"FILE_FIELD"_j, 2, u"&F"_j, false);
poi::hssf::usermodel::HeaderFooter_MarkupTag* poi::hssf::usermodel::HeaderFooter_MarkupTag::FULL_FILE_FIELD = new ::poi::hssf::usermodel::HeaderFooter_MarkupTag(u"FULL_FILE_FIELD"_j, 3, u"&Z"_j, false);
poi::hssf::usermodel::HeaderFooter_MarkupTag* poi::hssf::usermodel::HeaderFooter_MarkupTag::PAGE_FIELD = new ::poi::hssf::usermodel::HeaderFooter_MarkupTag(u"PAGE_FIELD"_j, 4, u"&P"_j, false);
poi::hssf::usermodel::HeaderFooter_MarkupTag* poi::hssf::usermodel::HeaderFooter_MarkupTag::TIME_FIELD = new ::poi::hssf::usermodel::HeaderFooter_MarkupTag(u"TIME_FIELD"_j, 5, u"&T"_j, false);
poi::hssf::usermodel::HeaderFooter_MarkupTag* poi::hssf::usermodel::HeaderFooter_MarkupTag::NUM_PAGES_FIELD = new ::poi::hssf::usermodel::HeaderFooter_MarkupTag(u"NUM_PAGES_FIELD"_j, 6, u"&N"_j, false);
poi::hssf::usermodel::HeaderFooter_MarkupTag* poi::hssf::usermodel::HeaderFooter_MarkupTag::PICTURE_FIELD = new ::poi::hssf::usermodel::HeaderFooter_MarkupTag(u"PICTURE_FIELD"_j, 7, u"&G"_j, false);
poi::hssf::usermodel::HeaderFooter_MarkupTag* poi::hssf::usermodel::HeaderFooter_MarkupTag::BOLD_FIELD = new ::poi::hssf::usermodel::HeaderFooter_MarkupTag(u"BOLD_FIELD"_j, 8, u"&B"_j, true);
poi::hssf::usermodel::HeaderFooter_MarkupTag* poi::hssf::usermodel::HeaderFooter_MarkupTag::ITALIC_FIELD = new ::poi::hssf::usermodel::HeaderFooter_MarkupTag(u"ITALIC_FIELD"_j, 9, u"&I"_j, true);
poi::hssf::usermodel::HeaderFooter_MarkupTag* poi::hssf::usermodel::HeaderFooter_MarkupTag::STRIKETHROUGH_FIELD = new ::poi::hssf::usermodel::HeaderFooter_MarkupTag(u"STRIKETHROUGH_FIELD"_j, 10, u"&S"_j, true);
poi::hssf::usermodel::HeaderFooter_MarkupTag* poi::hssf::usermodel::HeaderFooter_MarkupTag::SUBSCRIPT_FIELD = new ::poi::hssf::usermodel::HeaderFooter_MarkupTag(u"SUBSCRIPT_FIELD"_j, 11, u"&Y"_j, true);
poi::hssf::usermodel::HeaderFooter_MarkupTag* poi::hssf::usermodel::HeaderFooter_MarkupTag::SUPERSCRIPT_FIELD = new ::poi::hssf::usermodel::HeaderFooter_MarkupTag(u"SUPERSCRIPT_FIELD"_j, 12, u"&X"_j, true);
poi::hssf::usermodel::HeaderFooter_MarkupTag* poi::hssf::usermodel::HeaderFooter_MarkupTag::UNDERLINE_FIELD = new ::poi::hssf::usermodel::HeaderFooter_MarkupTag(u"UNDERLINE_FIELD"_j, 13, u"&U"_j, true);
poi::hssf::usermodel::HeaderFooter_MarkupTag* poi::hssf::usermodel::HeaderFooter_MarkupTag::DOUBLE_UNDERLINE_FIELD = new ::poi::hssf::usermodel::HeaderFooter_MarkupTag(u"DOUBLE_UNDERLINE_FIELD"_j, 14, u"&E"_j, true);
void poi::hssf::usermodel::HeaderFooter_MarkupTag::ctor(::java::lang::String* name, int ordinal, ::java::lang::String* sequence, bool occursInPairs)
{
    super::ctor(name, ordinal);
    _representation = sequence;
    _occursInPairs = occursInPairs;
}

java::lang::String* poi::hssf::usermodel::HeaderFooter_MarkupTag::getRepresentation()
{
    return _representation;
}

bool poi::hssf::usermodel::HeaderFooter_MarkupTag::occursPairs()
{
    return _occursInPairs;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HeaderFooter_MarkupTag::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HeaderFooter.MarkupTag", 52);
    return c;
}

poi::hssf::usermodel::HeaderFooter_MarkupTag* poi::hssf::usermodel::HeaderFooter_MarkupTag::valueOf(::java::lang::String* a0)
{
    if(BOLD_FIELD->toString()->equals(a0))
        return BOLD_FIELD;
    if(DATE_FIELD->toString()->equals(a0))
        return DATE_FIELD;
    if(DOUBLE_UNDERLINE_FIELD->toString()->equals(a0))
        return DOUBLE_UNDERLINE_FIELD;
    if(FILE_FIELD->toString()->equals(a0))
        return FILE_FIELD;
    if(FULL_FILE_FIELD->toString()->equals(a0))
        return FULL_FILE_FIELD;
    if(ITALIC_FIELD->toString()->equals(a0))
        return ITALIC_FIELD;
    if(NUM_PAGES_FIELD->toString()->equals(a0))
        return NUM_PAGES_FIELD;
    if(PAGE_FIELD->toString()->equals(a0))
        return PAGE_FIELD;
    if(PICTURE_FIELD->toString()->equals(a0))
        return PICTURE_FIELD;
    if(SHEET_NAME_FIELD->toString()->equals(a0))
        return SHEET_NAME_FIELD;
    if(STRIKETHROUGH_FIELD->toString()->equals(a0))
        return STRIKETHROUGH_FIELD;
    if(SUBSCRIPT_FIELD->toString()->equals(a0))
        return SUBSCRIPT_FIELD;
    if(SUPERSCRIPT_FIELD->toString()->equals(a0))
        return SUPERSCRIPT_FIELD;
    if(TIME_FIELD->toString()->equals(a0))
        return TIME_FIELD;
    if(UNDERLINE_FIELD->toString()->equals(a0))
        return UNDERLINE_FIELD;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::hssf::usermodel::HeaderFooter_MarkupTagArray* poi::hssf::usermodel::HeaderFooter_MarkupTag::values()
{
    return new poi::hssf::usermodel::HeaderFooter_MarkupTagArray({
        BOLD_FIELD,
        DATE_FIELD,
        DOUBLE_UNDERLINE_FIELD,
        FILE_FIELD,
        FULL_FILE_FIELD,
        ITALIC_FIELD,
        NUM_PAGES_FIELD,
        PAGE_FIELD,
        PICTURE_FIELD,
        SHEET_NAME_FIELD,
        STRIKETHROUGH_FIELD,
        SUBSCRIPT_FIELD,
        SUPERSCRIPT_FIELD,
        TIME_FIELD,
        UNDERLINE_FIELD,
    });
}

java::lang::Class* poi::hssf::usermodel::HeaderFooter_MarkupTag::getClass0()
{
    return class_();
}

