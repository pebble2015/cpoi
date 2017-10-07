// Generated from /POI/java/org/apache/poi/ss/formula/DataValidationEvaluator.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::DataValidationEvaluator
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::Map* validations {  };
    ::org::apache::poi::ss::usermodel::Workbook* workbook {  };
    WorkbookEvaluator* workbookEvaluator {  };
protected:
    void ctor(::org::apache::poi::ss::usermodel::Workbook* wb, WorkbookEvaluatorProvider* provider);

public: /* protected */
    virtual WorkbookEvaluator* getWorkbookEvaluator();

public:
    virtual void clearAllCachedValues();

private:
    ::java::util::List* getValidations(::org::apache::poi::ss::usermodel::Sheet* sheet);

public:
    virtual ::org::apache::poi::ss::usermodel::DataValidation* getValidationForCell(::org::apache::poi::ss::util::CellReference* cell);
    virtual DataValidationEvaluator_DataValidationContext* getValidationContextForCell(::org::apache::poi::ss::util::CellReference* cell);
    virtual ::java::util::List* getValidationValuesForCell(::org::apache::poi::ss::util::CellReference* cell);

public: /* protected */
    static ::java::util::List* getValidationValuesForConstraint(DataValidationEvaluator_DataValidationContext* context);

public:
    virtual bool isValidCell(::org::apache::poi::ss::util::CellReference* cellRef);
    static bool isType(::org::apache::poi::ss::usermodel::Cell* cell, ::org::apache::poi::ss::usermodel::CellType* type);

    // Generated
    DataValidationEvaluator(::org::apache::poi::ss::usermodel::Workbook* wb, WorkbookEvaluatorProvider* provider);
protected:
    DataValidationEvaluator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
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
    friend class DataValidationEvaluator_DataValidationContext;
};
