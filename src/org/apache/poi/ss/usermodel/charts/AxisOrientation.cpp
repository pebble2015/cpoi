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

namespace poi
{
    namespace ss
    {
        namespace usermodel
        {
            namespace charts
            {
typedef ::SubArray< ::poi::ss::usermodel::charts::AxisOrientation, ::java::lang::EnumArray > AxisOrientationArray;
            } // charts
        } // usermodel
    } // ss
} // poi

poi::ss::usermodel::charts::AxisOrientation::AxisOrientation(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::charts::AxisOrientation::AxisOrientation(::java::lang::String* name, int ordinal)
    : AxisOrientation(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::usermodel::charts::AxisOrientation* poi::ss::usermodel::charts::AxisOrientation::MAX_MIN = new ::poi::ss::usermodel::charts::AxisOrientation(u"MAX_MIN"_j, 0);
poi::ss::usermodel::charts::AxisOrientation* poi::ss::usermodel::charts::AxisOrientation::MIN_MAX = new ::poi::ss::usermodel::charts::AxisOrientation(u"MIN_MAX"_j, 1);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::charts::AxisOrientation::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.charts.AxisOrientation", 50);
    return c;
}

poi::ss::usermodel::charts::AxisOrientation* poi::ss::usermodel::charts::AxisOrientation::valueOf(::java::lang::String* a0)
{
    if(MAX_MIN->toString()->equals(a0))
        return MAX_MIN;
    if(MIN_MAX->toString()->equals(a0))
        return MIN_MAX;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::charts::AxisOrientationArray* poi::ss::usermodel::charts::AxisOrientation::values()
{
    return new poi::ss::usermodel::charts::AxisOrientationArray({
        MAX_MIN,
        MIN_MAX,
    });
}

java::lang::Class* poi::ss::usermodel::charts::AxisOrientation::getClass0()
{
    return class_();
}

