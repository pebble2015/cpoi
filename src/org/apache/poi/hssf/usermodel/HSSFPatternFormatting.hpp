// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFPatternFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/PatternFormatting.hpp>
#include <org/apache/poi/hssf/util/HSSFColor.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFPatternFormatting
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::ss::usermodel::PatternFormatting
{

public:
    typedef ::java::lang::Object super;

private:
    HSSFWorkbook* workbook {  };
    ::org::apache::poi::hssf::record::CFRuleBase* cfRuleRecord {  };
    ::org::apache::poi::hssf::record::cf::PatternFormatting* patternFormatting {  };
protected:
    void ctor(::org::apache::poi::hssf::record::CFRuleBase* cfRuleRecord, HSSFWorkbook* workbook);

public: /* protected */
    virtual ::org::apache::poi::hssf::record::cf::PatternFormatting* getPatternFormattingBlock();

public:
    ::org::apache::poi::hssf::util::HSSFColor* getFillBackgroundColorColor() override;
    ::org::apache::poi::hssf::util::HSSFColor* getFillForegroundColorColor() override;
    int16_t getFillBackgroundColor() override;
    int16_t getFillForegroundColor() override;
    int16_t getFillPattern() override;
    void setFillBackgroundColor(::org::apache::poi::ss::usermodel::Color* bg) override;
    void setFillForegroundColor(::org::apache::poi::ss::usermodel::Color* fg) override;
    void setFillBackgroundColor(int16_t bg) override;
    void setFillForegroundColor(int16_t fg) override;
    void setFillPattern(int16_t fp) override;

    // Generated

public: /* protected */
    HSSFPatternFormatting(::org::apache::poi::hssf::record::CFRuleBase* cfRuleRecord, HSSFWorkbook* workbook);
protected:
    HSSFPatternFormatting(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
