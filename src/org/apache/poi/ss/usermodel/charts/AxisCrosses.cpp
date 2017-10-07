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
typedef ::SubArray< ::org::apache::poi::ss::usermodel::charts::AxisCrosses, ::java::lang::EnumArray > AxisCrossesArray;
                    } // charts
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

org::apache::poi::ss::usermodel::charts::AxisCrosses::AxisCrosses(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::charts::AxisCrosses::AxisCrosses(::java::lang::String* name, int ordinal)
    : AxisCrosses(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

org::apache::poi::ss::usermodel::charts::AxisCrosses* org::apache::poi::ss::usermodel::charts::AxisCrosses::AUTO_ZERO = new ::org::apache::poi::ss::usermodel::charts::AxisCrosses(u"AUTO_ZERO"_j, 0);
org::apache::poi::ss::usermodel::charts::AxisCrosses* org::apache::poi::ss::usermodel::charts::AxisCrosses::MIN = new ::org::apache::poi::ss::usermodel::charts::AxisCrosses(u"MIN"_j, 1);
org::apache::poi::ss::usermodel::charts::AxisCrosses* org::apache::poi::ss::usermodel::charts::AxisCrosses::MAX = new ::org::apache::poi::ss::usermodel::charts::AxisCrosses(u"MAX"_j, 2);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::charts::AxisCrosses::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.charts.AxisCrosses", 46);
    return c;
}

org::apache::poi::ss::usermodel::charts::AxisCrosses* org::apache::poi::ss::usermodel::charts::AxisCrosses::valueOf(::java::lang::String* a0)
{
    if(AUTO_ZERO->toString()->equals(a0))
        return AUTO_ZERO;
    if(MAX->toString()->equals(a0))
        return MAX;
    if(MIN->toString()->equals(a0))
        return MIN;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::usermodel::charts::AxisCrossesArray* org::apache::poi::ss::usermodel::charts::AxisCrosses::values()
{
    return new org::apache::poi::ss::usermodel::charts::AxisCrossesArray({
        AUTO_ZERO,
        MAX,
        MIN,
    });
}

java::lang::Class* org::apache::poi::ss::usermodel::charts::AxisCrosses::getClass0()
{
    return class_();
}

