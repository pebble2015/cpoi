// Generated from /POI/java/org/apache/poi/sl/usermodel/TextShape.java
#include <org/apache/poi/sl/usermodel/TextShape_TextPlaceholder.hpp>

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
typedef ::SubArray< ::org::apache::poi::sl::usermodel::TextShape_TextPlaceholder, ::java::lang::EnumArray > TextShape_TextPlaceholderArray;
                } // usermodel
            } // sl
        } // poi
    } // apache
} // org

org::apache::poi::sl::usermodel::TextShape_TextPlaceholder::TextShape_TextPlaceholder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::usermodel::TextShape_TextPlaceholder::TextShape_TextPlaceholder(::java::lang::String* name, int ordinal)
    : TextShape_TextPlaceholder(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

org::apache::poi::sl::usermodel::TextShape_TextPlaceholder* org::apache::poi::sl::usermodel::TextShape_TextPlaceholder::TITLE = new ::org::apache::poi::sl::usermodel::TextShape_TextPlaceholder(u"TITLE"_j, 0);
org::apache::poi::sl::usermodel::TextShape_TextPlaceholder* org::apache::poi::sl::usermodel::TextShape_TextPlaceholder::BODY = new ::org::apache::poi::sl::usermodel::TextShape_TextPlaceholder(u"BODY"_j, 1);
org::apache::poi::sl::usermodel::TextShape_TextPlaceholder* org::apache::poi::sl::usermodel::TextShape_TextPlaceholder::CENTER_TITLE = new ::org::apache::poi::sl::usermodel::TextShape_TextPlaceholder(u"CENTER_TITLE"_j, 2);
org::apache::poi::sl::usermodel::TextShape_TextPlaceholder* org::apache::poi::sl::usermodel::TextShape_TextPlaceholder::CENTER_BODY = new ::org::apache::poi::sl::usermodel::TextShape_TextPlaceholder(u"CENTER_BODY"_j, 3);
org::apache::poi::sl::usermodel::TextShape_TextPlaceholder* org::apache::poi::sl::usermodel::TextShape_TextPlaceholder::HALF_BODY = new ::org::apache::poi::sl::usermodel::TextShape_TextPlaceholder(u"HALF_BODY"_j, 4);
org::apache::poi::sl::usermodel::TextShape_TextPlaceholder* org::apache::poi::sl::usermodel::TextShape_TextPlaceholder::QUARTER_BODY = new ::org::apache::poi::sl::usermodel::TextShape_TextPlaceholder(u"QUARTER_BODY"_j, 5);
org::apache::poi::sl::usermodel::TextShape_TextPlaceholder* org::apache::poi::sl::usermodel::TextShape_TextPlaceholder::NOTES = new ::org::apache::poi::sl::usermodel::TextShape_TextPlaceholder(u"NOTES"_j, 6);
org::apache::poi::sl::usermodel::TextShape_TextPlaceholder* org::apache::poi::sl::usermodel::TextShape_TextPlaceholder::OTHER = new ::org::apache::poi::sl::usermodel::TextShape_TextPlaceholder(u"OTHER"_j, 7);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::usermodel::TextShape_TextPlaceholder::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.TextShape.TextPlaceholder", 53);
    return c;
}

org::apache::poi::sl::usermodel::TextShape_TextPlaceholder* org::apache::poi::sl::usermodel::TextShape_TextPlaceholder::valueOf(::java::lang::String* a0)
{
    if(BODY->toString()->equals(a0))
        return BODY;
    if(CENTER_BODY->toString()->equals(a0))
        return CENTER_BODY;
    if(CENTER_TITLE->toString()->equals(a0))
        return CENTER_TITLE;
    if(HALF_BODY->toString()->equals(a0))
        return HALF_BODY;
    if(NOTES->toString()->equals(a0))
        return NOTES;
    if(OTHER->toString()->equals(a0))
        return OTHER;
    if(QUARTER_BODY->toString()->equals(a0))
        return QUARTER_BODY;
    if(TITLE->toString()->equals(a0))
        return TITLE;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::sl::usermodel::TextShape_TextPlaceholderArray* org::apache::poi::sl::usermodel::TextShape_TextPlaceholder::values()
{
    return new org::apache::poi::sl::usermodel::TextShape_TextPlaceholderArray({
        BODY,
        CENTER_BODY,
        CENTER_TITLE,
        HALF_BODY,
        NOTES,
        OTHER,
        QUARTER_BODY,
        TITLE,
    });
}

java::lang::Class* org::apache::poi::sl::usermodel::TextShape_TextPlaceholder::getClass0()
{
    return class_();
}

