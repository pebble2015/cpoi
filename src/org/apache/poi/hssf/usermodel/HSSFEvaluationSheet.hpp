// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFEvaluationSheet.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/EvaluationSheet.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFEvaluationSheet final
    : public virtual ::java::lang::Object
    , public ::org::apache::poi::ss::formula::EvaluationSheet
{

public:
    typedef ::java::lang::Object super;

private:
    HSSFSheet* _hs {  };
protected:
    void ctor(HSSFSheet* hs);

public:
    HSSFSheet* getHSSFSheet();
    ::org::apache::poi::ss::formula::EvaluationCell* getCell(int32_t rowIndex, int32_t columnIndex) override;
    void clearAllCachedResultValues() override;

    // Generated
    HSSFEvaluationSheet(HSSFSheet* hs);
protected:
    HSSFEvaluationSheet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
