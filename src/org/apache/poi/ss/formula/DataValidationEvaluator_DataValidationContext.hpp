// Generated from /POI/java/org/apache/poi/ss/formula/DataValidationEvaluator.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::DataValidationEvaluator_DataValidationContext
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::org::apache::poi::ss::usermodel::DataValidation* dv {  };
    DataValidationEvaluator* dve {  };
    ::org::apache::poi::ss::util::CellRangeAddressBase* region {  };
    ::org::apache::poi::ss::util::CellReference* target {  };
protected:
    void ctor(::org::apache::poi::ss::usermodel::DataValidation* dv, DataValidationEvaluator* dve, ::org::apache::poi::ss::util::CellRangeAddressBase* region, ::org::apache::poi::ss::util::CellReference* target);

public:
    virtual ::org::apache::poi::ss::usermodel::DataValidation* getValidation();
    virtual DataValidationEvaluator* getEvaluator();
    virtual ::org::apache::poi::ss::util::CellRangeAddressBase* getRegion();
    virtual ::org::apache::poi::ss::util::CellReference* getTarget();
    virtual int32_t getOffsetColumns();
    virtual int32_t getOffsetRows();
    virtual int32_t getSheetIndex();
    virtual ::java::lang::String* getFormula1();
    virtual ::java::lang::String* getFormula2();
    virtual int32_t getOperator();

    // Generated
    DataValidationEvaluator_DataValidationContext(::org::apache::poi::ss::usermodel::DataValidation* dv, DataValidationEvaluator* dve, ::org::apache::poi::ss::util::CellRangeAddressBase* region, ::org::apache::poi::ss::util::CellReference* target);
protected:
    DataValidationEvaluator_DataValidationContext(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DataValidationEvaluator;
    friend class DataValidationEvaluator_ValidationEnum;
    friend class DataValidationEvaluator_ValidationEnum_1;
    friend class DataValidationEvaluator_ValidationEnum_2;
    friend class DataValidationEvaluator_ValidationEnum_3;
    friend class DataValidationEvaluator_ValidationEnum_4;
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
};
