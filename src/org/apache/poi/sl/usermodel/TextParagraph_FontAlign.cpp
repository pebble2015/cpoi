// Generated from /POI/java/org/apache/poi/sl/usermodel/TextParagraph.java
#include <org/apache/poi/sl/usermodel/TextParagraph_FontAlign.hpp>

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
    namespace sl
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::sl::usermodel::TextParagraph_FontAlign, ::java::lang::EnumArray > TextParagraph_FontAlignArray;
        } // usermodel
    } // sl
} // poi

poi::sl::usermodel::TextParagraph_FontAlign::TextParagraph_FontAlign(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::usermodel::TextParagraph_FontAlign::TextParagraph_FontAlign(::java::lang::String* name, int ordinal)
    : TextParagraph_FontAlign(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::sl::usermodel::TextParagraph_FontAlign* poi::sl::usermodel::TextParagraph_FontAlign::AUTO = new ::poi::sl::usermodel::TextParagraph_FontAlign(u"AUTO"_j, 0);
poi::sl::usermodel::TextParagraph_FontAlign* poi::sl::usermodel::TextParagraph_FontAlign::TOP = new ::poi::sl::usermodel::TextParagraph_FontAlign(u"TOP"_j, 1);
poi::sl::usermodel::TextParagraph_FontAlign* poi::sl::usermodel::TextParagraph_FontAlign::CENTER = new ::poi::sl::usermodel::TextParagraph_FontAlign(u"CENTER"_j, 2);
poi::sl::usermodel::TextParagraph_FontAlign* poi::sl::usermodel::TextParagraph_FontAlign::BASELINE = new ::poi::sl::usermodel::TextParagraph_FontAlign(u"BASELINE"_j, 3);
poi::sl::usermodel::TextParagraph_FontAlign* poi::sl::usermodel::TextParagraph_FontAlign::BOTTOM = new ::poi::sl::usermodel::TextParagraph_FontAlign(u"BOTTOM"_j, 4);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::usermodel::TextParagraph_FontAlign::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.TextParagraph.FontAlign", 51);
    return c;
}

poi::sl::usermodel::TextParagraph_FontAlign* poi::sl::usermodel::TextParagraph_FontAlign::valueOf(::java::lang::String* a0)
{
    if(AUTO->toString()->equals(a0))
        return AUTO;
    if(BASELINE->toString()->equals(a0))
        return BASELINE;
    if(BOTTOM->toString()->equals(a0))
        return BOTTOM;
    if(CENTER->toString()->equals(a0))
        return CENTER;
    if(TOP->toString()->equals(a0))
        return TOP;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::sl::usermodel::TextParagraph_FontAlignArray* poi::sl::usermodel::TextParagraph_FontAlign::values()
{
    return new poi::sl::usermodel::TextParagraph_FontAlignArray({
        AUTO,
        BASELINE,
        BOTTOM,
        CENTER,
        TOP,
    });
}

java::lang::Class* poi::sl::usermodel::TextParagraph_FontAlign::getClass0()
{
    return class_();
}

