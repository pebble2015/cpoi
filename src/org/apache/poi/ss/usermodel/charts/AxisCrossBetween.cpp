// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/AxisCrossBetween.java
#include <org/apache/poi/ss/usermodel/charts/AxisCrossBetween.hpp>

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
typedef ::SubArray< ::org::apache::poi::ss::usermodel::charts::AxisCrossBetween, ::java::lang::EnumArray > AxisCrossBetweenArray;
                    } // charts
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

org::apache::poi::ss::usermodel::charts::AxisCrossBetween::AxisCrossBetween(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::charts::AxisCrossBetween::AxisCrossBetween(::java::lang::String* name, int ordinal)
    : AxisCrossBetween(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

org::apache::poi::ss::usermodel::charts::AxisCrossBetween* org::apache::poi::ss::usermodel::charts::AxisCrossBetween::BETWEEN = new ::org::apache::poi::ss::usermodel::charts::AxisCrossBetween(u"BETWEEN"_j, 0);
org::apache::poi::ss::usermodel::charts::AxisCrossBetween* org::apache::poi::ss::usermodel::charts::AxisCrossBetween::MIDPOINT_CATEGORY = new ::org::apache::poi::ss::usermodel::charts::AxisCrossBetween(u"MIDPOINT_CATEGORY"_j, 1);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::charts::AxisCrossBetween::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.charts.AxisCrossBetween", 51);
    return c;
}

org::apache::poi::ss::usermodel::charts::AxisCrossBetween* org::apache::poi::ss::usermodel::charts::AxisCrossBetween::valueOf(::java::lang::String* a0)
{
    if(BETWEEN->toString()->equals(a0))
        return BETWEEN;
    if(MIDPOINT_CATEGORY->toString()->equals(a0))
        return MIDPOINT_CATEGORY;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::usermodel::charts::AxisCrossBetweenArray* org::apache::poi::ss::usermodel::charts::AxisCrossBetween::values()
{
    return new org::apache::poi::ss::usermodel::charts::AxisCrossBetweenArray({
        BETWEEN,
        MIDPOINT_CATEGORY,
    });
}

java::lang::Class* org::apache::poi::ss::usermodel::charts::AxisCrossBetween::getClass0()
{
    return class_();
}

