// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/AxisCrosses.java
#include <org/apache/poi/ss/usermodel/charts/AxisCrosses.hpp>

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
typedef ::SubArray< ::poi::ss::usermodel::charts::AxisCrosses, ::java::lang::EnumArray > AxisCrossesArray;
            } // charts
        } // usermodel
    } // ss
} // poi

poi::ss::usermodel::charts::AxisCrosses::AxisCrosses(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::charts::AxisCrosses::AxisCrosses(::java::lang::String* name, int ordinal)
    : AxisCrosses(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::usermodel::charts::AxisCrosses* poi::ss::usermodel::charts::AxisCrosses::AUTO_ZERO = new ::poi::ss::usermodel::charts::AxisCrosses(u"AUTO_ZERO"_j, 0);
poi::ss::usermodel::charts::AxisCrosses* poi::ss::usermodel::charts::AxisCrosses::MIN = new ::poi::ss::usermodel::charts::AxisCrosses(u"MIN"_j, 1);
poi::ss::usermodel::charts::AxisCrosses* poi::ss::usermodel::charts::AxisCrosses::MAX = new ::poi::ss::usermodel::charts::AxisCrosses(u"MAX"_j, 2);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::charts::AxisCrosses::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.charts.AxisCrosses", 46);
    return c;
}

poi::ss::usermodel::charts::AxisCrosses* poi::ss::usermodel::charts::AxisCrosses::valueOf(::java::lang::String* a0)
{
    if(AUTO_ZERO->toString()->equals(a0))
        return AUTO_ZERO;
    if(MAX->toString()->equals(a0))
        return MAX;
    if(MIN->toString()->equals(a0))
        return MIN;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::charts::AxisCrossesArray* poi::ss::usermodel::charts::AxisCrosses::values()
{
    return new poi::ss::usermodel::charts::AxisCrossesArray({
        AUTO_ZERO,
        MAX,
        MIN,
    });
}

java::lang::Class* poi::ss::usermodel::charts::AxisCrosses::getClass0()
{
    return class_();
}

