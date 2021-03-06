// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFConditionalFormattingThreshold.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/ConditionalFormattingThreshold.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFConditionalFormattingThreshold final
    : public virtual ::java::lang::Object
    , public ::poi::ss::usermodel::ConditionalFormattingThreshold
{

public:
    typedef ::java::lang::Object super;

private:
    ::poi::hssf::record::cf::Threshold* threshold {  };
    HSSFSheet* sheet {  };
    HSSFWorkbook* workbook {  };
protected:
    void ctor(::poi::hssf::record::cf::Threshold* threshold, HSSFSheet* sheet);

public: /* protected */
    ::poi::hssf::record::cf::Threshold* getThreshold();

public:
    ::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType* getRangeType() override;
    void setRangeType(::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType* type) override;
    ::java::lang::String* getFormula() override;
    void setFormula(::java::lang::String* formula) override;
    ::java::lang::Double* getValue() override;
    void setValue(::java::lang::Double* value) override;

    // Generated

public: /* protected */
    HSSFConditionalFormattingThreshold(::poi::hssf::record::cf::Threshold* threshold, HSSFSheet* sheet);
protected:
    HSSFConditionalFormattingThreshold(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
