// Generated from /POI/java/org/apache/poi/ss/usermodel/IgnoredErrorType.java
#include <org/apache/poi/ss/usermodel/IgnoredErrorType.hpp>

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
typedef ::SubArray< ::poi::ss::usermodel::IgnoredErrorType, ::java::lang::EnumArray > IgnoredErrorTypeArray;
        } // usermodel
    } // ss
} // poi

poi::ss::usermodel::IgnoredErrorType::IgnoredErrorType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::IgnoredErrorType::IgnoredErrorType(::java::lang::String* name, int ordinal)
    : IgnoredErrorType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::usermodel::IgnoredErrorType* poi::ss::usermodel::IgnoredErrorType::CALCULATED_COLUMN = new ::poi::ss::usermodel::IgnoredErrorType(u"CALCULATED_COLUMN"_j, 0);
poi::ss::usermodel::IgnoredErrorType* poi::ss::usermodel::IgnoredErrorType::EMPTY_CELL_REFERENCE = new ::poi::ss::usermodel::IgnoredErrorType(u"EMPTY_CELL_REFERENCE"_j, 1);
poi::ss::usermodel::IgnoredErrorType* poi::ss::usermodel::IgnoredErrorType::EVALUATION_ERROR = new ::poi::ss::usermodel::IgnoredErrorType(u"EVALUATION_ERROR"_j, 2);
poi::ss::usermodel::IgnoredErrorType* poi::ss::usermodel::IgnoredErrorType::FORMULA = new ::poi::ss::usermodel::IgnoredErrorType(u"FORMULA"_j, 3);
poi::ss::usermodel::IgnoredErrorType* poi::ss::usermodel::IgnoredErrorType::FORMULA_RANGE = new ::poi::ss::usermodel::IgnoredErrorType(u"FORMULA_RANGE"_j, 4);
poi::ss::usermodel::IgnoredErrorType* poi::ss::usermodel::IgnoredErrorType::LIST_DATA_VALIDATION = new ::poi::ss::usermodel::IgnoredErrorType(u"LIST_DATA_VALIDATION"_j, 5);
poi::ss::usermodel::IgnoredErrorType* poi::ss::usermodel::IgnoredErrorType::NUMBER_STORED_AS_TEXT = new ::poi::ss::usermodel::IgnoredErrorType(u"NUMBER_STORED_AS_TEXT"_j, 6);
poi::ss::usermodel::IgnoredErrorType* poi::ss::usermodel::IgnoredErrorType::TWO_DIGIT_TEXT_YEAR = new ::poi::ss::usermodel::IgnoredErrorType(u"TWO_DIGIT_TEXT_YEAR"_j, 7);
poi::ss::usermodel::IgnoredErrorType* poi::ss::usermodel::IgnoredErrorType::UNLOCKED_FORMULA = new ::poi::ss::usermodel::IgnoredErrorType(u"UNLOCKED_FORMULA"_j, 8);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::IgnoredErrorType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.IgnoredErrorType", 44);
    return c;
}

poi::ss::usermodel::IgnoredErrorType* poi::ss::usermodel::IgnoredErrorType::valueOf(::java::lang::String* a0)
{
    if(CALCULATED_COLUMN->toString()->equals(a0))
        return CALCULATED_COLUMN;
    if(EMPTY_CELL_REFERENCE->toString()->equals(a0))
        return EMPTY_CELL_REFERENCE;
    if(EVALUATION_ERROR->toString()->equals(a0))
        return EVALUATION_ERROR;
    if(FORMULA->toString()->equals(a0))
        return FORMULA;
    if(FORMULA_RANGE->toString()->equals(a0))
        return FORMULA_RANGE;
    if(LIST_DATA_VALIDATION->toString()->equals(a0))
        return LIST_DATA_VALIDATION;
    if(NUMBER_STORED_AS_TEXT->toString()->equals(a0))
        return NUMBER_STORED_AS_TEXT;
    if(TWO_DIGIT_TEXT_YEAR->toString()->equals(a0))
        return TWO_DIGIT_TEXT_YEAR;
    if(UNLOCKED_FORMULA->toString()->equals(a0))
        return UNLOCKED_FORMULA;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::IgnoredErrorTypeArray* poi::ss::usermodel::IgnoredErrorType::values()
{
    return new poi::ss::usermodel::IgnoredErrorTypeArray({
        CALCULATED_COLUMN,
        EMPTY_CELL_REFERENCE,
        EVALUATION_ERROR,
        FORMULA,
        FORMULA_RANGE,
        LIST_DATA_VALIDATION,
        NUMBER_STORED_AS_TEXT,
        TWO_DIGIT_TEXT_YEAR,
        UNLOCKED_FORMULA,
    });
}

java::lang::Class* poi::ss::usermodel::IgnoredErrorType::getClass0()
{
    return class_();
}

