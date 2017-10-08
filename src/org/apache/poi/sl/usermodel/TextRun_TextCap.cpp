// Generated from /POI/java/org/apache/poi/sl/usermodel/TextRun.java
#include <org/apache/poi/sl/usermodel/TextRun_TextCap.hpp>

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
typedef ::SubArray< ::poi::sl::usermodel::TextRun_TextCap, ::java::lang::EnumArray > TextRun_TextCapArray;
        } // usermodel
    } // sl
} // poi

poi::sl::usermodel::TextRun_TextCap::TextRun_TextCap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::usermodel::TextRun_TextCap::TextRun_TextCap(::java::lang::String* name, int ordinal)
    : TextRun_TextCap(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::sl::usermodel::TextRun_TextCap* poi::sl::usermodel::TextRun_TextCap::NONE = new ::poi::sl::usermodel::TextRun_TextCap(u"NONE"_j, 0);
poi::sl::usermodel::TextRun_TextCap* poi::sl::usermodel::TextRun_TextCap::SMALL = new ::poi::sl::usermodel::TextRun_TextCap(u"SMALL"_j, 1);
poi::sl::usermodel::TextRun_TextCap* poi::sl::usermodel::TextRun_TextCap::ALL = new ::poi::sl::usermodel::TextRun_TextCap(u"ALL"_j, 2);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::usermodel::TextRun_TextCap::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.TextRun.TextCap", 43);
    return c;
}

poi::sl::usermodel::TextRun_TextCap* poi::sl::usermodel::TextRun_TextCap::valueOf(::java::lang::String* a0)
{
    if(ALL->toString()->equals(a0))
        return ALL;
    if(NONE->toString()->equals(a0))
        return NONE;
    if(SMALL->toString()->equals(a0))
        return SMALL;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::sl::usermodel::TextRun_TextCapArray* poi::sl::usermodel::TextRun_TextCap::values()
{
    return new poi::sl::usermodel::TextRun_TextCapArray({
        ALL,
        NONE,
        SMALL,
    });
}

java::lang::Class* poi::sl::usermodel::TextRun_TextCap::getClass0()
{
    return class_();
}

