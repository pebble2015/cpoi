// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/LayoutMode.java
#include <org/apache/poi/ss/usermodel/charts/LayoutMode.hpp>

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
typedef ::SubArray< ::poi::ss::usermodel::charts::LayoutMode, ::java::lang::EnumArray > LayoutModeArray;
            } // charts
        } // usermodel
    } // ss
} // poi

poi::ss::usermodel::charts::LayoutMode::LayoutMode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::charts::LayoutMode::LayoutMode(::java::lang::String* name, int ordinal)
    : LayoutMode(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::usermodel::charts::LayoutMode* poi::ss::usermodel::charts::LayoutMode::EDGE = new ::poi::ss::usermodel::charts::LayoutMode(u"EDGE"_j, 0);
poi::ss::usermodel::charts::LayoutMode* poi::ss::usermodel::charts::LayoutMode::FACTOR = new ::poi::ss::usermodel::charts::LayoutMode(u"FACTOR"_j, 1);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::charts::LayoutMode::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.charts.LayoutMode", 45);
    return c;
}

poi::ss::usermodel::charts::LayoutMode* poi::ss::usermodel::charts::LayoutMode::valueOf(::java::lang::String* a0)
{
    if(EDGE->toString()->equals(a0))
        return EDGE;
    if(FACTOR->toString()->equals(a0))
        return FACTOR;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::charts::LayoutModeArray* poi::ss::usermodel::charts::LayoutMode::values()
{
    return new poi::ss::usermodel::charts::LayoutModeArray({
        EDGE,
        FACTOR,
    });
}

java::lang::Class* poi::ss::usermodel::charts::LayoutMode::getClass0()
{
    return class_();
}

