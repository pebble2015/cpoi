// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/AxisPosition.java
#include <org/apache/poi/ss/usermodel/charts/AxisPosition.hpp>

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
typedef ::SubArray< ::poi::ss::usermodel::charts::AxisPosition, ::java::lang::EnumArray > AxisPositionArray;
            } // charts
        } // usermodel
    } // ss
} // poi

poi::ss::usermodel::charts::AxisPosition::AxisPosition(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::charts::AxisPosition::AxisPosition(::java::lang::String* name, int ordinal)
    : AxisPosition(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::usermodel::charts::AxisPosition* poi::ss::usermodel::charts::AxisPosition::BOTTOM = new ::poi::ss::usermodel::charts::AxisPosition(u"BOTTOM"_j, 0);
poi::ss::usermodel::charts::AxisPosition* poi::ss::usermodel::charts::AxisPosition::LEFT = new ::poi::ss::usermodel::charts::AxisPosition(u"LEFT"_j, 1);
poi::ss::usermodel::charts::AxisPosition* poi::ss::usermodel::charts::AxisPosition::RIGHT = new ::poi::ss::usermodel::charts::AxisPosition(u"RIGHT"_j, 2);
poi::ss::usermodel::charts::AxisPosition* poi::ss::usermodel::charts::AxisPosition::TOP = new ::poi::ss::usermodel::charts::AxisPosition(u"TOP"_j, 3);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::charts::AxisPosition::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.charts.AxisPosition", 47);
    return c;
}

poi::ss::usermodel::charts::AxisPosition* poi::ss::usermodel::charts::AxisPosition::valueOf(::java::lang::String* a0)
{
    if(BOTTOM->toString()->equals(a0))
        return BOTTOM;
    if(LEFT->toString()->equals(a0))
        return LEFT;
    if(RIGHT->toString()->equals(a0))
        return RIGHT;
    if(TOP->toString()->equals(a0))
        return TOP;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::charts::AxisPositionArray* poi::ss::usermodel::charts::AxisPosition::values()
{
    return new poi::ss::usermodel::charts::AxisPositionArray({
        BOTTOM,
        LEFT,
        RIGHT,
        TOP,
    });
}

java::lang::Class* poi::ss::usermodel::charts::AxisPosition::getClass0()
{
    return class_();
}

