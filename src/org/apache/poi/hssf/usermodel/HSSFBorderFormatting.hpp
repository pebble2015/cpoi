// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFBorderFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/BorderFormatting.hpp>
#include <org/apache/poi/hssf/util/HSSFColor.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFBorderFormatting final
    : public virtual ::java::lang::Object
    , public ::org::apache::poi::ss::usermodel::BorderFormatting
{

public:
    typedef ::java::lang::Object super;

private:
    HSSFWorkbook* workbook {  };
    ::org::apache::poi::hssf::record::CFRuleBase* cfRuleRecord {  };
    ::org::apache::poi::hssf::record::cf::BorderFormatting* borderFormatting {  };
protected:
    void ctor(::org::apache::poi::hssf::record::CFRuleBase* cfRuleRecord, HSSFWorkbook* workbook);

public: /* protected */
    ::org::apache::poi::hssf::record::cf::BorderFormatting* getBorderFormattingBlock();

public:
    int16_t getBorderBottom() override;
    ::org::apache::poi::ss::usermodel::BorderStyle* getBorderBottomEnum() override;
    int16_t getBorderDiagonal() override;
    ::org::apache::poi::ss::usermodel::BorderStyle* getBorderDiagonalEnum() override;
    int16_t getBorderLeft() override;
    ::org::apache::poi::ss::usermodel::BorderStyle* getBorderLeftEnum() override;
    int16_t getBorderRight() override;
    ::org::apache::poi::ss::usermodel::BorderStyle* getBorderRightEnum() override;
    int16_t getBorderTop() override;
    ::org::apache::poi::ss::usermodel::BorderStyle* getBorderTopEnum() override;
    int16_t getBottomBorderColor() override;
    ::org::apache::poi::hssf::util::HSSFColor* getBottomBorderColorColor() override;
    int16_t getDiagonalBorderColor() override;
    ::org::apache::poi::hssf::util::HSSFColor* getDiagonalBorderColorColor() override;
    int16_t getLeftBorderColor() override;
    ::org::apache::poi::hssf::util::HSSFColor* getLeftBorderColorColor() override;
    int16_t getRightBorderColor() override;
    ::org::apache::poi::hssf::util::HSSFColor* getRightBorderColorColor() override;
    int16_t getTopBorderColor() override;
    ::org::apache::poi::hssf::util::HSSFColor* getTopBorderColorColor() override;
    bool isBackwardDiagonalOn();
    bool isForwardDiagonalOn();
    void setBackwardDiagonalOn(bool on);
    void setForwardDiagonalOn(bool on);
    void setBorderBottom(int16_t border) override;
    void setBorderBottom(::org::apache::poi::ss::usermodel::BorderStyle* border) override;
    void setBorderDiagonal(int16_t border) override;
    void setBorderDiagonal(::org::apache::poi::ss::usermodel::BorderStyle* border) override;
    void setBorderLeft(int16_t border) override;
    void setBorderLeft(::org::apache::poi::ss::usermodel::BorderStyle* border) override;
    void setBorderRight(int16_t border) override;
    void setBorderRight(::org::apache::poi::ss::usermodel::BorderStyle* border) override;
    void setBorderTop(int16_t border) override;
    void setBorderTop(::org::apache::poi::ss::usermodel::BorderStyle* border) override;
    void setBottomBorderColor(int16_t color) override;
    void setBottomBorderColor(::org::apache::poi::ss::usermodel::Color* color) override;
    void setDiagonalBorderColor(int16_t color) override;
    void setDiagonalBorderColor(::org::apache::poi::ss::usermodel::Color* color) override;
    void setLeftBorderColor(int16_t color) override;
    void setLeftBorderColor(::org::apache::poi::ss::usermodel::Color* color) override;
    void setRightBorderColor(int16_t color) override;
    void setRightBorderColor(::org::apache::poi::ss::usermodel::Color* color) override;
    void setTopBorderColor(int16_t color) override;
    void setTopBorderColor(::org::apache::poi::ss::usermodel::Color* color) override;
    ::org::apache::poi::ss::usermodel::BorderStyle* getBorderVerticalEnum() override;
    ::org::apache::poi::ss::usermodel::BorderStyle* getBorderHorizontalEnum() override;
    int16_t getVerticalBorderColor() override;
    ::org::apache::poi::ss::usermodel::Color* getVerticalBorderColorColor() override;
    int16_t getHorizontalBorderColor() override;
    ::org::apache::poi::ss::usermodel::Color* getHorizontalBorderColorColor() override;
    void setBorderHorizontal(::org::apache::poi::ss::usermodel::BorderStyle* border) override;
    void setBorderVertical(::org::apache::poi::ss::usermodel::BorderStyle* border) override;
    void setHorizontalBorderColor(int16_t color) override;
    void setHorizontalBorderColor(::org::apache::poi::ss::usermodel::Color* color) override;
    void setVerticalBorderColor(int16_t color) override;
    void setVerticalBorderColor(::org::apache::poi::ss::usermodel::Color* color) override;

    // Generated

public: /* protected */
    HSSFBorderFormatting(::org::apache::poi::hssf::record::CFRuleBase* cfRuleRecord, HSSFWorkbook* workbook);
protected:
    HSSFBorderFormatting(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
