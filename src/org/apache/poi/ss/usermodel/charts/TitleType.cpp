// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/TitleType.java
#include <org/apache/poi/ss/usermodel/charts/TitleType.hpp>

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
    namespace ss
    {
        namespace usermodel
        {
            namespace charts
            {
typedef ::SubArray< ::poi::ss::usermodel::charts::TitleType, ::java::lang::EnumArray > TitleTypeArray;
            } // charts
        } // usermodel
    } // ss
} // poi

poi::ss::usermodel::charts::TitleType::TitleType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::charts::TitleType::TitleType(::java::lang::String* name, int ordinal)
    : TitleType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::usermodel::charts::TitleType* poi::ss::usermodel::charts::TitleType::STRING = new ::poi::ss::usermodel::charts::TitleType(u"STRING"_j, 0);
poi::ss::usermodel::charts::TitleType* poi::ss::usermodel::charts::TitleType::CELL_REFERENCE = new ::poi::ss::usermodel::charts::TitleType(u"CELL_REFERENCE"_j, 1);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::charts::TitleType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.charts.TitleType", 44);
    return c;
}

poi::ss::usermodel::charts::TitleType* poi::ss::usermodel::charts::TitleType::valueOf(::java::lang::String* a0)
{
    if(CELL_REFERENCE->toString()->equals(a0))
        return CELL_REFERENCE;
    if(STRING->toString()->equals(a0))
        return STRING;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::charts::TitleTypeArray* poi::ss::usermodel::charts::TitleType::values()
{
    return new poi::ss::usermodel::charts::TitleTypeArray({
        CELL_REFERENCE,
        STRING,
    });
}

java::lang::Class* poi::ss::usermodel::charts::TitleType::getClass0()
{
    return class_();
}

