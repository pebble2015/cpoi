// Generated from /POI/java/org/apache/poi/ss/formula/DataValidationEvaluator.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator_ValidationEnum.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::DataValidationEvaluator_ValidationEnum_4 final
    : public DataValidationEvaluator_ValidationEnum
{

public:
    typedef DataValidationEvaluator_ValidationEnum super;
    bool isValidValue(::org::apache::poi::ss::usermodel::Cell* cell, DataValidationEvaluator_DataValidationContext* context) override;

    // Generated
    DataValidationEvaluator_ValidationEnum_4(::java::lang::String* name, int ordinal);
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DataValidationEvaluator;
    friend class DataValidationEvaluator_ValidationEnum;
    friend class DataValidationEvaluator_ValidationEnum_1;
    friend class DataValidationEvaluator_ValidationEnum_2;
    friend class DataValidationEvaluator_ValidationEnum_3;
    friend class DataValidationEvaluator_ValidationEnum_5;
    friend class DataValidationEvaluator_OperatorEnum;
    friend class DataValidationEvaluator_OperatorEnum_1;
    friend class DataValidationEvaluator_OperatorEnum_2;
    friend class DataValidationEvaluator_OperatorEnum_3;
    friend class DataValidationEvaluator_OperatorEnum_4;
    friend class DataValidationEvaluator_OperatorEnum_5;
    friend class DataValidationEvaluator_OperatorEnum_6;
    friend class DataValidationEvaluator_OperatorEnum_7;
    friend class DataValidationEvaluator_OperatorEnum_8;
    friend class DataValidationEvaluator_DataValidationContext;
};
