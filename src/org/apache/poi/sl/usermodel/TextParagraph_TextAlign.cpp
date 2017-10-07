// Generated from /POI/java/org/apache/poi/sl/usermodel/TextParagraph.java
#include <org/apache/poi/sl/usermodel/TextParagraph_TextAlign.hpp>

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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace sl
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::sl::usermodel::TextParagraph_TextAlign, ::java::lang::EnumArray > TextParagraph_TextAlignArray;
                } // usermodel
            } // sl
        } // poi
    } // apache
} // org

org::apache::poi::sl::usermodel::TextParagraph_TextAlign::TextParagraph_TextAlign(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::usermodel::TextParagraph_TextAlign::TextParagraph_TextAlign(::java::lang::String* name, int ordinal)
    : TextParagraph_TextAlign(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

org::apache::poi::sl::usermodel::TextParagraph_TextAlign* org::apache::poi::sl::usermodel::TextParagraph_TextAlign::LEFT = new ::org::apache::poi::sl::usermodel::TextParagraph_TextAlign(u"LEFT"_j, 0);
org::apache::poi::sl::usermodel::TextParagraph_TextAlign* org::apache::poi::sl::usermodel::TextParagraph_TextAlign::CENTER = new ::org::apache::poi::sl::usermodel::TextParagraph_TextAlign(u"CENTER"_j, 1);
org::apache::poi::sl::usermodel::TextParagraph_TextAlign* org::apache::poi::sl::usermodel::TextParagraph_TextAlign::RIGHT = new ::org::apache::poi::sl::usermodel::TextParagraph_TextAlign(u"RIGHT"_j, 2);
org::apache::poi::sl::usermodel::TextParagraph_TextAlign* org::apache::poi::sl::usermodel::TextParagraph_TextAlign::JUSTIFY = new ::org::apache::poi::sl::usermodel::TextParagraph_TextAlign(u"JUSTIFY"_j, 3);
org::apache::poi::sl::usermodel::TextParagraph_TextAlign* org::apache::poi::sl::usermodel::TextParagraph_TextAlign::JUSTIFY_LOW = new ::org::apache::poi::sl::usermodel::TextParagraph_TextAlign(u"JUSTIFY_LOW"_j, 4);
org::apache::poi::sl::usermodel::TextParagraph_TextAlign* org::apache::poi::sl::usermodel::TextParagraph_TextAlign::DIST = new ::org::apache::poi::sl::usermodel::TextParagraph_TextAlign(u"DIST"_j, 5);
org::apache::poi::sl::usermodel::TextParagraph_TextAlign* org::apache::poi::sl::usermodel::TextParagraph_TextAlign::THAI_DIST = new ::org::apache::poi::sl::usermodel::TextParagraph_TextAlign(u"THAI_DIST"_j, 6);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::usermodel::TextParagraph_TextAlign::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.TextParagraph.TextAlign", 51);
    return c;
}

org::apache::poi::sl::usermodel::TextParagraph_TextAlign* org::apache::poi::sl::usermodel::TextParagraph_TextAlign::valueOf(::java::lang::String* a0)
{
    if(CENTER->toString()->equals(a0))
        return CENTER;
    if(DIST->toString()->equals(a0))
        return DIST;
    if(JUSTIFY->toString()->equals(a0))
        return JUSTIFY;
    if(JUSTIFY_LOW->toString()->equals(a0))
        return JUSTIFY_LOW;
    if(LEFT->toString()->equals(a0))
        return LEFT;
    if(RIGHT->toString()->equals(a0))
        return RIGHT;
    if(THAI_DIST->toString()->equals(a0))
        return THAI_DIST;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::sl::usermodel::TextParagraph_TextAlignArray* org::apache::poi::sl::usermodel::TextParagraph_TextAlign::values()
{
    return new org::apache::poi::sl::usermodel::TextParagraph_TextAlignArray({
        CENTER,
        DIST,
        JUSTIFY,
        JUSTIFY_LOW,
        LEFT,
        RIGHT,
        THAI_DIST,
    });
}

java::lang::Class* org::apache::poi::sl::usermodel::TextParagraph_TextAlign::getClass0()
{
    return class_();
}

