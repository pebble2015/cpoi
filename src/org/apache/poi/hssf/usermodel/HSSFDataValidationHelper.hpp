// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFDataValidationHelper.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/DataValidationHelper.hpp>

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

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFDataValidationHelper
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::ss::usermodel::DataValidationHelper
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor(HSSFSheet* sheet);

public:
    ::org::apache::poi::ss::usermodel::DataValidationConstraint* createDateConstraint(int32_t operatorType, ::java::lang::String* formula1, ::java::lang::String* formula2, ::java::lang::String* dateFormat) override;
    ::org::apache::poi::ss::usermodel::DataValidationConstraint* createExplicitListConstraint(::java::lang::StringArray* listOfValues) override;
    ::org::apache::poi::ss::usermodel::DataValidationConstraint* createFormulaListConstraint(::java::lang::String* listFormula) override;
    ::org::apache::poi::ss::usermodel::DataValidationConstraint* createNumericConstraint(int32_t validationType, int32_t operatorType, ::java::lang::String* formula1, ::java::lang::String* formula2) override;
    ::org::apache::poi::ss::usermodel::DataValidationConstraint* createIntegerConstraint(int32_t operatorType, ::java::lang::String* formula1, ::java::lang::String* formula2) override;
    ::org::apache::poi::ss::usermodel::DataValidationConstraint* createDecimalConstraint(int32_t operatorType, ::java::lang::String* formula1, ::java::lang::String* formula2) override;
    ::org::apache::poi::ss::usermodel::DataValidationConstraint* createTextLengthConstraint(int32_t operatorType, ::java::lang::String* formula1, ::java::lang::String* formula2) override;
    ::org::apache::poi::ss::usermodel::DataValidationConstraint* createTimeConstraint(int32_t operatorType, ::java::lang::String* formula1, ::java::lang::String* formula2) override;
    ::org::apache::poi::ss::usermodel::DataValidationConstraint* createCustomConstraint(::java::lang::String* formula) override;
    ::org::apache::poi::ss::usermodel::DataValidation* createValidation(::org::apache::poi::ss::usermodel::DataValidationConstraint* constraint, ::org::apache::poi::ss::util::CellRangeAddressList* cellRangeAddressList) override;

    // Generated
    HSSFDataValidationHelper(HSSFSheet* sheet);
protected:
    HSSFDataValidationHelper(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
