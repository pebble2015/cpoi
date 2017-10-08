// Generated from /POI/java/org/apache/poi/ss/formula/FormulaParser.java
#include <org/apache/poi/ss/formula/FormulaParser_SimpleRangePart_Type.hpp>

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
typedef ::SubArray< ::poi::ss::formula::FormulaParser_SimpleRangePart_Type, ::java::lang::EnumArray > FormulaParser_SimpleRangePart_TypeArray;
        } // formula
    } // ss
} // poi

poi::ss::formula::FormulaParser_SimpleRangePart_Type::FormulaParser_SimpleRangePart_Type(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::FormulaParser_SimpleRangePart_Type::FormulaParser_SimpleRangePart_Type(::java::lang::String* name, int ordinal)
    : FormulaParser_SimpleRangePart_Type(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::formula::FormulaParser_SimpleRangePart_Type* poi::ss::formula::FormulaParser_SimpleRangePart_Type::CELL = new ::poi::ss::formula::FormulaParser_SimpleRangePart_Type(u"CELL"_j, 0);
poi::ss::formula::FormulaParser_SimpleRangePart_Type* poi::ss::formula::FormulaParser_SimpleRangePart_Type::ROW = new ::poi::ss::formula::FormulaParser_SimpleRangePart_Type(u"ROW"_j, 1);
poi::ss::formula::FormulaParser_SimpleRangePart_Type* poi::ss::formula::FormulaParser_SimpleRangePart_Type::COLUMN = new ::poi::ss::formula::FormulaParser_SimpleRangePart_Type(u"COLUMN"_j, 2);
poi::ss::formula::FormulaParser_SimpleRangePart_Type* poi::ss::formula::FormulaParser_SimpleRangePart_Type::get(bool hasLetters, bool hasDigits)
{
    clinit();
    if(hasLetters) {
        return hasDigits ? CELL : COLUMN;
    }
    if(!hasDigits) {
        throw new ::java::lang::IllegalArgumentException(u"must have either letters or numbers"_j);
    }
    return ROW;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::FormulaParser_SimpleRangePart_Type::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.FormulaParser.SimpleRangePart.Type", 60);
    return c;
}

poi::ss::formula::FormulaParser_SimpleRangePart_Type* poi::ss::formula::FormulaParser_SimpleRangePart_Type::valueOf(::java::lang::String* a0)
{
    if(CELL->toString()->equals(a0))
        return CELL;
    if(COLUMN->toString()->equals(a0))
        return COLUMN;
    if(ROW->toString()->equals(a0))
        return ROW;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::formula::FormulaParser_SimpleRangePart_TypeArray* poi::ss::formula::FormulaParser_SimpleRangePart_Type::values()
{
    return new poi::ss::formula::FormulaParser_SimpleRangePart_TypeArray({
        CELL,
        COLUMN,
        ROW,
    });
}

java::lang::Class* poi::ss::formula::FormulaParser_SimpleRangePart_Type::getClass0()
{
    return class_();
}

