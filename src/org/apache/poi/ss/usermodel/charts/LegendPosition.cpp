// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/LegendPosition.java
#include <org/apache/poi/ss/usermodel/charts/LegendPosition.hpp>

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
typedef ::SubArray< ::poi::ss::usermodel::charts::LegendPosition, ::java::lang::EnumArray > LegendPositionArray;
            } // charts
        } // usermodel
    } // ss
} // poi

poi::ss::usermodel::charts::LegendPosition::LegendPosition(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::charts::LegendPosition::LegendPosition(::java::lang::String* name, int ordinal)
    : LegendPosition(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::usermodel::charts::LegendPosition* poi::ss::usermodel::charts::LegendPosition::BOTTOM = new ::poi::ss::usermodel::charts::LegendPosition(u"BOTTOM"_j, 0);
poi::ss::usermodel::charts::LegendPosition* poi::ss::usermodel::charts::LegendPosition::LEFT = new ::poi::ss::usermodel::charts::LegendPosition(u"LEFT"_j, 1);
poi::ss::usermodel::charts::LegendPosition* poi::ss::usermodel::charts::LegendPosition::RIGHT = new ::poi::ss::usermodel::charts::LegendPosition(u"RIGHT"_j, 2);
poi::ss::usermodel::charts::LegendPosition* poi::ss::usermodel::charts::LegendPosition::TOP = new ::poi::ss::usermodel::charts::LegendPosition(u"TOP"_j, 3);
poi::ss::usermodel::charts::LegendPosition* poi::ss::usermodel::charts::LegendPosition::TOP_RIGHT = new ::poi::ss::usermodel::charts::LegendPosition(u"TOP_RIGHT"_j, 4);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::charts::LegendPosition::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.charts.LegendPosition", 49);
    return c;
}

poi::ss::usermodel::charts::LegendPosition* poi::ss::usermodel::charts::LegendPosition::valueOf(::java::lang::String* a0)
{
    if(BOTTOM->toString()->equals(a0))
        return BOTTOM;
    if(LEFT->toString()->equals(a0))
        return LEFT;
    if(RIGHT->toString()->equals(a0))
        return RIGHT;
    if(TOP->toString()->equals(a0))
        return TOP;
    if(TOP_RIGHT->toString()->equals(a0))
        return TOP_RIGHT;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::charts::LegendPositionArray* poi::ss::usermodel::charts::LegendPosition::values()
{
    return new poi::ss::usermodel::charts::LegendPositionArray({
        BOTTOM,
        LEFT,
        RIGHT,
        TOP,
        TOP_RIGHT,
    });
}

java::lang::Class* poi::ss::usermodel::charts::LegendPosition::getClass0()
{
    return class_();
}

