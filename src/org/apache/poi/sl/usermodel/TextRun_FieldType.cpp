// Generated from /POI/java/org/apache/poi/sl/usermodel/TextRun.java
#include <org/apache/poi/sl/usermodel/TextRun_FieldType.hpp>

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
typedef ::SubArray< ::poi::sl::usermodel::TextRun_FieldType, ::java::lang::EnumArray > TextRun_FieldTypeArray;
        } // usermodel
    } // sl
} // poi

poi::sl::usermodel::TextRun_FieldType::TextRun_FieldType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::usermodel::TextRun_FieldType::TextRun_FieldType(::java::lang::String* name, int ordinal)
    : TextRun_FieldType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::sl::usermodel::TextRun_FieldType* poi::sl::usermodel::TextRun_FieldType::SLIDE_NUMBER = new ::poi::sl::usermodel::TextRun_FieldType(u"SLIDE_NUMBER"_j, 0);
poi::sl::usermodel::TextRun_FieldType* poi::sl::usermodel::TextRun_FieldType::DATE_TIME = new ::poi::sl::usermodel::TextRun_FieldType(u"DATE_TIME"_j, 1);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::usermodel::TextRun_FieldType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.TextRun.FieldType", 45);
    return c;
}

poi::sl::usermodel::TextRun_FieldType* poi::sl::usermodel::TextRun_FieldType::valueOf(::java::lang::String* a0)
{
    if(DATE_TIME->toString()->equals(a0))
        return DATE_TIME;
    if(SLIDE_NUMBER->toString()->equals(a0))
        return SLIDE_NUMBER;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::sl::usermodel::TextRun_FieldTypeArray* poi::sl::usermodel::TextRun_FieldType::values()
{
    return new poi::sl::usermodel::TextRun_FieldTypeArray({
        DATE_TIME,
        SLIDE_NUMBER,
    });
}

java::lang::Class* poi::sl::usermodel::TextRun_FieldType::getClass0()
{
    return class_();
}

