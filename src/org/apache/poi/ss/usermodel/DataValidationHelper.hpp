// Generated from /POI/java/org/apache/poi/ss/usermodel/DataValidationHelper.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

struct org::apache::poi::ss::usermodel::DataValidationHelper
    : public virtual ::java::lang::Object
{
    virtual DataValidationConstraint* createFormulaListConstraint(::java::lang::String* listFormula) = 0;
    virtual DataValidationConstraint* createExplicitListConstraint(::java::lang::StringArray* listOfValues) = 0;
    virtual DataValidationConstraint* createNumericConstraint(int32_t validationType, int32_t operatorType, ::java::lang::String* formula1, ::java::lang::String* formula2) = 0;
    virtual DataValidationConstraint* createTextLengthConstraint(int32_t operatorType, ::java::lang::String* formula1, ::java::lang::String* formula2) = 0;
    virtual DataValidationConstraint* createDecimalConstraint(int32_t operatorType, ::java::lang::String* formula1, ::java::lang::String* formula2) = 0;
    virtual DataValidationConstraint* createIntegerConstraint(int32_t operatorType, ::java::lang::String* formula1, ::java::lang::String* formula2) = 0;
    virtual DataValidationConstraint* createDateConstraint(int32_t operatorType, ::java::lang::String* formula1, ::java::lang::String* formula2, ::java::lang::String* dateFormat) = 0;
    virtual DataValidationConstraint* createTimeConstraint(int32_t operatorType, ::java::lang::String* formula1, ::java::lang::String* formula2) = 0;
    virtual DataValidationConstraint* createCustomConstraint(::java::lang::String* formula) = 0;
    virtual DataValidation* createValidation(DataValidationConstraint* constraint, ::org::apache::poi::ss::util::CellRangeAddressList* cellRangeAddressList) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
