// Generated from /POI/java/org/apache/poi/ss/util/CellRangeAddressBase.java
#include <org/apache/poi/ss/util/CellRangeAddressBase_CellPosition.hpp>

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
        namespace util
        {
typedef ::SubArray< ::poi::ss::util::CellRangeAddressBase_CellPosition, ::java::lang::EnumArray > CellRangeAddressBase_CellPositionArray;
        } // util
    } // ss
} // poi

poi::ss::util::CellRangeAddressBase_CellPosition::CellRangeAddressBase_CellPosition(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::util::CellRangeAddressBase_CellPosition::CellRangeAddressBase_CellPosition(::java::lang::String* name, int ordinal)
    : CellRangeAddressBase_CellPosition(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::util::CellRangeAddressBase_CellPosition* poi::ss::util::CellRangeAddressBase_CellPosition::TOP = new ::poi::ss::util::CellRangeAddressBase_CellPosition(u"TOP"_j, 0);
poi::ss::util::CellRangeAddressBase_CellPosition* poi::ss::util::CellRangeAddressBase_CellPosition::BOTTOM = new ::poi::ss::util::CellRangeAddressBase_CellPosition(u"BOTTOM"_j, 1);
poi::ss::util::CellRangeAddressBase_CellPosition* poi::ss::util::CellRangeAddressBase_CellPosition::LEFT = new ::poi::ss::util::CellRangeAddressBase_CellPosition(u"LEFT"_j, 2);
poi::ss::util::CellRangeAddressBase_CellPosition* poi::ss::util::CellRangeAddressBase_CellPosition::RIGHT = new ::poi::ss::util::CellRangeAddressBase_CellPosition(u"RIGHT"_j, 3);
poi::ss::util::CellRangeAddressBase_CellPosition* poi::ss::util::CellRangeAddressBase_CellPosition::INSIDE = new ::poi::ss::util::CellRangeAddressBase_CellPosition(u"INSIDE"_j, 4);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::util::CellRangeAddressBase_CellPosition::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.CellRangeAddressBase.CellPosition", 56);
    return c;
}

poi::ss::util::CellRangeAddressBase_CellPosition* poi::ss::util::CellRangeAddressBase_CellPosition::valueOf(::java::lang::String* a0)
{
    if(BOTTOM->toString()->equals(a0))
        return BOTTOM;
    if(INSIDE->toString()->equals(a0))
        return INSIDE;
    if(LEFT->toString()->equals(a0))
        return LEFT;
    if(RIGHT->toString()->equals(a0))
        return RIGHT;
    if(TOP->toString()->equals(a0))
        return TOP;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::util::CellRangeAddressBase_CellPositionArray* poi::ss::util::CellRangeAddressBase_CellPosition::values()
{
    return new poi::ss::util::CellRangeAddressBase_CellPositionArray({
        BOTTOM,
        INSIDE,
        LEFT,
        RIGHT,
        TOP,
    });
}

java::lang::Class* poi::ss::util::CellRangeAddressBase_CellPosition::getClass0()
{
    return class_();
}

