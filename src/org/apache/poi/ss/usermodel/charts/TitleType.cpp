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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace usermodel
                {
                    namespace charts
                    {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::charts::TitleType, ::java::lang::EnumArray > TitleTypeArray;
                    } // charts
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

org::apache::poi::ss::usermodel::charts::TitleType::TitleType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::charts::TitleType::TitleType(::java::lang::String* name, int ordinal)
    : TitleType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

org::apache::poi::ss::usermodel::charts::TitleType* org::apache::poi::ss::usermodel::charts::TitleType::STRING = new ::org::apache::poi::ss::usermodel::charts::TitleType(u"STRING"_j, 0);
org::apache::poi::ss::usermodel::charts::TitleType* org::apache::poi::ss::usermodel::charts::TitleType::CELL_REFERENCE = new ::org::apache::poi::ss::usermodel::charts::TitleType(u"CELL_REFERENCE"_j, 1);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::charts::TitleType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.charts.TitleType", 44);
    return c;
}

org::apache::poi::ss::usermodel::charts::TitleType* org::apache::poi::ss::usermodel::charts::TitleType::valueOf(::java::lang::String* a0)
{
    if(CELL_REFERENCE->toString()->equals(a0))
        return CELL_REFERENCE;
    if(STRING->toString()->equals(a0))
        return STRING;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::usermodel::charts::TitleTypeArray* org::apache::poi::ss::usermodel::charts::TitleType::values()
{
    return new org::apache::poi::ss::usermodel::charts::TitleTypeArray({
        CELL_REFERENCE,
        STRING,
    });
}

java::lang::Class* org::apache::poi::ss::usermodel::charts::TitleType::getClass0()
{
    return class_();
}

