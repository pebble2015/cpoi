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
typedef ::SubArray< ::org::apache::poi::ss::usermodel::charts::LayoutMode, ::java::lang::EnumArray > LayoutModeArray;
                    } // charts
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

org::apache::poi::ss::usermodel::charts::LayoutMode::LayoutMode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::charts::LayoutMode::LayoutMode(::java::lang::String* name, int ordinal)
    : LayoutMode(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

org::apache::poi::ss::usermodel::charts::LayoutMode* org::apache::poi::ss::usermodel::charts::LayoutMode::EDGE = new ::org::apache::poi::ss::usermodel::charts::LayoutMode(u"EDGE"_j, 0);
org::apache::poi::ss::usermodel::charts::LayoutMode* org::apache::poi::ss::usermodel::charts::LayoutMode::FACTOR = new ::org::apache::poi::ss::usermodel::charts::LayoutMode(u"FACTOR"_j, 1);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::charts::LayoutMode::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.charts.LayoutMode", 45);
    return c;
}

org::apache::poi::ss::usermodel::charts::LayoutMode* org::apache::poi::ss::usermodel::charts::LayoutMode::valueOf(::java::lang::String* a0)
{
    if(EDGE->toString()->equals(a0))
        return EDGE;
    if(FACTOR->toString()->equals(a0))
        return FACTOR;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::usermodel::charts::LayoutModeArray* org::apache::poi::ss::usermodel::charts::LayoutMode::values()
{
    return new org::apache::poi::ss::usermodel::charts::LayoutModeArray({
        EDGE,
        FACTOR,
    });
}

java::lang::Class* org::apache::poi::ss::usermodel::charts::LayoutMode::getClass0()
{
    return class_();
}

