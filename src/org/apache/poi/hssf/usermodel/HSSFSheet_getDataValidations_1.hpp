// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFSheet.java

#pragma once

#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFSheet_getDataValidations_1
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::hssf::record::aggregates::RecordAggregate_RecordVisitor
{

public:
    typedef ::java::lang::Object super;

private:
    HSSFEvaluationWorkbook* book {  };

public:
    void visitRecord(::org::apache::poi::hssf::record::Record* r) override;

    // Generated
    HSSFSheet_getDataValidations_1(HSSFSheet *HSSFSheet_this, ::java::util::List* hssfValidations);
    static ::java::lang::Class *class_();

private:
    void init();
    HSSFSheet *HSSFSheet_this;
    ::java::util::List* hssfValidations;
    virtual ::java::lang::Class* getClass0();
    friend class HSSFSheet;
};
