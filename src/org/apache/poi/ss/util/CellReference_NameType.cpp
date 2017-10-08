// Generated from /POI/java/org/apache/poi/ss/util/CellReference.java
#include <org/apache/poi/ss/util/CellReference_NameType.hpp>

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
typedef ::SubArray< ::poi::ss::util::CellReference_NameType, ::java::lang::EnumArray > CellReference_NameTypeArray;
        } // util
    } // ss
} // poi

poi::ss::util::CellReference_NameType::CellReference_NameType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::util::CellReference_NameType::CellReference_NameType(::java::lang::String* name, int ordinal)
    : CellReference_NameType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::util::CellReference_NameType* poi::ss::util::CellReference_NameType::CELL = new ::poi::ss::util::CellReference_NameType(u"CELL"_j, 0);
poi::ss::util::CellReference_NameType* poi::ss::util::CellReference_NameType::NAMED_RANGE = new ::poi::ss::util::CellReference_NameType(u"NAMED_RANGE"_j, 1);
poi::ss::util::CellReference_NameType* poi::ss::util::CellReference_NameType::COLUMN = new ::poi::ss::util::CellReference_NameType(u"COLUMN"_j, 2);
poi::ss::util::CellReference_NameType* poi::ss::util::CellReference_NameType::ROW = new ::poi::ss::util::CellReference_NameType(u"ROW"_j, 3);
poi::ss::util::CellReference_NameType* poi::ss::util::CellReference_NameType::BAD_CELL_OR_NAMED_RANGE = new ::poi::ss::util::CellReference_NameType(u"BAD_CELL_OR_NAMED_RANGE"_j, 4);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::util::CellReference_NameType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.CellReference.NameType", 45);
    return c;
}

poi::ss::util::CellReference_NameType* poi::ss::util::CellReference_NameType::valueOf(::java::lang::String* a0)
{
    if(BAD_CELL_OR_NAMED_RANGE->toString()->equals(a0))
        return BAD_CELL_OR_NAMED_RANGE;
    if(CELL->toString()->equals(a0))
        return CELL;
    if(COLUMN->toString()->equals(a0))
        return COLUMN;
    if(NAMED_RANGE->toString()->equals(a0))
        return NAMED_RANGE;
    if(ROW->toString()->equals(a0))
        return ROW;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::util::CellReference_NameTypeArray* poi::ss::util::CellReference_NameType::values()
{
    return new poi::ss::util::CellReference_NameTypeArray({
        BAD_CELL_OR_NAMED_RANGE,
        CELL,
        COLUMN,
        NAMED_RANGE,
        ROW,
    });
}

java::lang::Class* poi::ss::util::CellReference_NameType::getClass0()
{
    return class_();
}

