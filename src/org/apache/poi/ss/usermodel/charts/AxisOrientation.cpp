// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/AxisOrientation.java
#include <org/apache/poi/ss/usermodel/charts/AxisOrientation.hpp>

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
typedef ::SubArray< ::org::apache::poi::ss::usermodel::charts::AxisOrientation, ::java::lang::EnumArray > AxisOrientationArray;
                    } // charts
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

org::apache::poi::ss::usermodel::charts::AxisOrientation::AxisOrientation(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::charts::AxisOrientation::AxisOrientation(::java::lang::String* name, int ordinal)
    : AxisOrientation(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

org::apache::poi::ss::usermodel::charts::AxisOrientation* org::apache::poi::ss::usermodel::charts::AxisOrientation::MAX_MIN = new ::org::apache::poi::ss::usermodel::charts::AxisOrientation(u"MAX_MIN"_j, 0);
org::apache::poi::ss::usermodel::charts::AxisOrientation* org::apache::poi::ss::usermodel::charts::AxisOrientation::MIN_MAX = new ::org::apache::poi::ss::usermodel::charts::AxisOrientation(u"MIN_MAX"_j, 1);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::charts::AxisOrientation::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.charts.AxisOrientation", 50);
    return c;
}

org::apache::poi::ss::usermodel::charts::AxisOrientation* org::apache::poi::ss::usermodel::charts::AxisOrientation::valueOf(::java::lang::String* a0)
{
    if(MAX_MIN->toString()->equals(a0))
        return MAX_MIN;
    if(MIN_MAX->toString()->equals(a0))
        return MIN_MAX;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::usermodel::charts::AxisOrientationArray* org::apache::poi::ss::usermodel::charts::AxisOrientation::values()
{
    return new org::apache::poi::ss::usermodel::charts::AxisOrientationArray({
        MAX_MIN,
        MIN_MAX,
    });
}

java::lang::Class* org::apache::poi::ss::usermodel::charts::AxisOrientation::getClass0()
{
    return class_();
}

