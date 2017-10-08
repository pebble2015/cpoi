// Generated from /POI/java/org/apache/poi/sl/usermodel/TextShape.java
#include <org/apache/poi/sl/usermodel/TextShape_TextDirection.hpp>

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
typedef ::SubArray< ::poi::sl::usermodel::TextShape_TextDirection, ::java::lang::EnumArray > TextShape_TextDirectionArray;
        } // usermodel
    } // sl
} // poi

poi::sl::usermodel::TextShape_TextDirection::TextShape_TextDirection(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::usermodel::TextShape_TextDirection::TextShape_TextDirection(::java::lang::String* name, int ordinal)
    : TextShape_TextDirection(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::sl::usermodel::TextShape_TextDirection* poi::sl::usermodel::TextShape_TextDirection::HORIZONTAL = new ::poi::sl::usermodel::TextShape_TextDirection(u"HORIZONTAL"_j, 0);
poi::sl::usermodel::TextShape_TextDirection* poi::sl::usermodel::TextShape_TextDirection::VERTICAL = new ::poi::sl::usermodel::TextShape_TextDirection(u"VERTICAL"_j, 1);
poi::sl::usermodel::TextShape_TextDirection* poi::sl::usermodel::TextShape_TextDirection::VERTICAL_270 = new ::poi::sl::usermodel::TextShape_TextDirection(u"VERTICAL_270"_j, 2);
poi::sl::usermodel::TextShape_TextDirection* poi::sl::usermodel::TextShape_TextDirection::STACKED = new ::poi::sl::usermodel::TextShape_TextDirection(u"STACKED"_j, 3);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::usermodel::TextShape_TextDirection::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.TextShape.TextDirection", 51);
    return c;
}

poi::sl::usermodel::TextShape_TextDirection* poi::sl::usermodel::TextShape_TextDirection::valueOf(::java::lang::String* a0)
{
    if(HORIZONTAL->toString()->equals(a0))
        return HORIZONTAL;
    if(STACKED->toString()->equals(a0))
        return STACKED;
    if(VERTICAL->toString()->equals(a0))
        return VERTICAL;
    if(VERTICAL_270->toString()->equals(a0))
        return VERTICAL_270;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::sl::usermodel::TextShape_TextDirectionArray* poi::sl::usermodel::TextShape_TextDirection::values()
{
    return new poi::sl::usermodel::TextShape_TextDirectionArray({
        HORIZONTAL,
        STACKED,
        VERTICAL,
        VERTICAL_270,
    });
}

java::lang::Class* poi::sl::usermodel::TextShape_TextDirection::getClass0()
{
    return class_();
}

