// Generated from /POI/java/org/apache/poi/ss/formula/FormulaShifter.java
#include <org/apache/poi/ss/formula/FormulaShifter_ShiftMode.hpp>

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
        namespace formula
        {
typedef ::SubArray< ::poi::ss::formula::FormulaShifter_ShiftMode, ::java::lang::EnumArray > FormulaShifter_ShiftModeArray;
        } // formula
    } // ss
} // poi

poi::ss::formula::FormulaShifter_ShiftMode::FormulaShifter_ShiftMode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::FormulaShifter_ShiftMode::FormulaShifter_ShiftMode(::java::lang::String* name, int ordinal)
    : FormulaShifter_ShiftMode(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::formula::FormulaShifter_ShiftMode* poi::ss::formula::FormulaShifter_ShiftMode::RowMove = new ::poi::ss::formula::FormulaShifter_ShiftMode(u"RowMove"_j, 0);
poi::ss::formula::FormulaShifter_ShiftMode* poi::ss::formula::FormulaShifter_ShiftMode::RowCopy = new ::poi::ss::formula::FormulaShifter_ShiftMode(u"RowCopy"_j, 1);
poi::ss::formula::FormulaShifter_ShiftMode* poi::ss::formula::FormulaShifter_ShiftMode::SheetMove = new ::poi::ss::formula::FormulaShifter_ShiftMode(u"SheetMove"_j, 2);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::FormulaShifter_ShiftMode::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.FormulaShifter.ShiftMode", 50);
    return c;
}

poi::ss::formula::FormulaShifter_ShiftMode* poi::ss::formula::FormulaShifter_ShiftMode::valueOf(::java::lang::String* a0)
{
    if(RowCopy->toString()->equals(a0))
        return RowCopy;
    if(RowMove->toString()->equals(a0))
        return RowMove;
    if(SheetMove->toString()->equals(a0))
        return SheetMove;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::formula::FormulaShifter_ShiftModeArray* poi::ss::formula::FormulaShifter_ShiftMode::values()
{
    return new poi::ss::formula::FormulaShifter_ShiftModeArray({
        RowCopy,
        RowMove,
        SheetMove,
    });
}

java::lang::Class* poi::ss::formula::FormulaShifter_ShiftMode::getClass0()
{
    return class_();
}

