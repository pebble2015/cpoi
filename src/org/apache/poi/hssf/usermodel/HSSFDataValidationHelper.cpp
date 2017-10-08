// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFDataValidationHelper.java
#include <org/apache/poi/hssf/usermodel/HSSFDataValidationHelper.hpp>

#include <org/apache/poi/hssf/usermodel/DVConstraint.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFDataValidation.hpp>
#include <org/apache/poi/ss/usermodel/DataValidationConstraint_ValidationType.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

poi::hssf::usermodel::HSSFDataValidationHelper::HSSFDataValidationHelper(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFDataValidationHelper::HSSFDataValidationHelper(HSSFSheet* sheet) 
    : HSSFDataValidationHelper(*static_cast< ::default_init_tag* >(0))
{
    ctor(sheet);
}

void poi::hssf::usermodel::HSSFDataValidationHelper::ctor(HSSFSheet* sheet)
{
    super::ctor();
}

poi::ss::usermodel::DataValidationConstraint* poi::hssf::usermodel::HSSFDataValidationHelper::createDateConstraint(int32_t operatorType, ::java::lang::String* formula1, ::java::lang::String* formula2, ::java::lang::String* dateFormat)
{
    return DVConstraint::createDateConstraint(operatorType, formula1, formula2, dateFormat);
}

poi::ss::usermodel::DataValidationConstraint* poi::hssf::usermodel::HSSFDataValidationHelper::createExplicitListConstraint(::java::lang::StringArray* listOfValues)
{
    return DVConstraint::createExplicitListConstraint(listOfValues);
}

poi::ss::usermodel::DataValidationConstraint* poi::hssf::usermodel::HSSFDataValidationHelper::createFormulaListConstraint(::java::lang::String* listFormula)
{
    return DVConstraint::createFormulaListConstraint(listFormula);
}

poi::ss::usermodel::DataValidationConstraint* poi::hssf::usermodel::HSSFDataValidationHelper::createNumericConstraint(int32_t validationType, int32_t operatorType, ::java::lang::String* formula1, ::java::lang::String* formula2)
{
    return DVConstraint::createNumericConstraint(validationType, operatorType, formula1, formula2);
}

poi::ss::usermodel::DataValidationConstraint* poi::hssf::usermodel::HSSFDataValidationHelper::createIntegerConstraint(int32_t operatorType, ::java::lang::String* formula1, ::java::lang::String* formula2)
{
    return DVConstraint::createNumericConstraint(::poi::ss::usermodel::DataValidationConstraint_ValidationType::INTEGER, operatorType, formula1, formula2);
}

poi::ss::usermodel::DataValidationConstraint* poi::hssf::usermodel::HSSFDataValidationHelper::createDecimalConstraint(int32_t operatorType, ::java::lang::String* formula1, ::java::lang::String* formula2)
{
    return DVConstraint::createNumericConstraint(::poi::ss::usermodel::DataValidationConstraint_ValidationType::DECIMAL, operatorType, formula1, formula2);
}

poi::ss::usermodel::DataValidationConstraint* poi::hssf::usermodel::HSSFDataValidationHelper::createTextLengthConstraint(int32_t operatorType, ::java::lang::String* formula1, ::java::lang::String* formula2)
{
    return DVConstraint::createNumericConstraint(::poi::ss::usermodel::DataValidationConstraint_ValidationType::TEXT_LENGTH, operatorType, formula1, formula2);
}

poi::ss::usermodel::DataValidationConstraint* poi::hssf::usermodel::HSSFDataValidationHelper::createTimeConstraint(int32_t operatorType, ::java::lang::String* formula1, ::java::lang::String* formula2)
{
    return DVConstraint::createTimeConstraint(operatorType, formula1, formula2);
}

poi::ss::usermodel::DataValidationConstraint* poi::hssf::usermodel::HSSFDataValidationHelper::createCustomConstraint(::java::lang::String* formula)
{
    return DVConstraint::createCustomFormulaConstraint(formula);
}

poi::ss::usermodel::DataValidation* poi::hssf::usermodel::HSSFDataValidationHelper::createValidation(::poi::ss::usermodel::DataValidationConstraint* constraint, ::poi::ss::util::CellRangeAddressList* cellRangeAddressList)
{
    return new HSSFDataValidation(cellRangeAddressList, constraint);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFDataValidationHelper::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFDataValidationHelper", 54);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFDataValidationHelper::getClass0()
{
    return class_();
}

