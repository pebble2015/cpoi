// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/AxisTickMark.java
#include <org/apache/poi/ss/usermodel/charts/AxisTickMark.hpp>

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
typedef ::SubArray< ::poi::ss::usermodel::charts::AxisTickMark, ::java::lang::EnumArray > AxisTickMarkArray;
            } // charts
        } // usermodel
    } // ss
} // poi

poi::ss::usermodel::charts::AxisTickMark::AxisTickMark(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::charts::AxisTickMark::AxisTickMark(::java::lang::String* name, int ordinal)
    : AxisTickMark(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::usermodel::charts::AxisTickMark* poi::ss::usermodel::charts::AxisTickMark::NONE = new ::poi::ss::usermodel::charts::AxisTickMark(u"NONE"_j, 0);
poi::ss::usermodel::charts::AxisTickMark* poi::ss::usermodel::charts::AxisTickMark::CROSS = new ::poi::ss::usermodel::charts::AxisTickMark(u"CROSS"_j, 1);
poi::ss::usermodel::charts::AxisTickMark* poi::ss::usermodel::charts::AxisTickMark::IN = new ::poi::ss::usermodel::charts::AxisTickMark(u"IN"_j, 2);
poi::ss::usermodel::charts::AxisTickMark* poi::ss::usermodel::charts::AxisTickMark::OUT = new ::poi::ss::usermodel::charts::AxisTickMark(u"OUT"_j, 3);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::charts::AxisTickMark::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.charts.AxisTickMark", 47);
    return c;
}

poi::ss::usermodel::charts::AxisTickMark* poi::ss::usermodel::charts::AxisTickMark::valueOf(::java::lang::String* a0)
{
    if(CROSS->toString()->equals(a0))
        return CROSS;
    if(IN->toString()->equals(a0))
        return IN;
    if(NONE->toString()->equals(a0))
        return NONE;
    if(OUT->toString()->equals(a0))
        return OUT;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::charts::AxisTickMarkArray* poi::ss::usermodel::charts::AxisTickMark::values()
{
    return new poi::ss::usermodel::charts::AxisTickMarkArray({
        CROSS,
        IN,
        NONE,
        OUT,
    });
}

java::lang::Class* poi::ss::usermodel::charts::AxisTickMark::getClass0()
{
    return class_();
}

