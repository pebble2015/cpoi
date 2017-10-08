// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFFontFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/FontFormatting.hpp>
#include <org/apache/poi/hssf/util/HSSFColor.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFFontFormatting final
    : public virtual ::java::lang::Object
    , public ::poi::ss::usermodel::FontFormatting
{

public:
    typedef ::java::lang::Object super;
    static constexpr int8_t U_NONE { int8_t(0) };
    static constexpr int8_t U_SINGLE { int8_t(1) };
    static constexpr int8_t U_DOUBLE { int8_t(2) };
    static constexpr int8_t U_SINGLE_ACCOUNTING { int8_t(33) };
    static constexpr int8_t U_DOUBLE_ACCOUNTING { int8_t(34) };

private:
    ::poi::hssf::record::cf::FontFormatting* fontFormatting {  };
    HSSFWorkbook* workbook {  };
protected:
    void ctor(::poi::hssf::record::CFRuleBase* cfRuleRecord, HSSFWorkbook* workbook);

public: /* protected */
    ::poi::hssf::record::cf::FontFormatting* getFontFormattingBlock();

public:
    int16_t getEscapementType() override;
    int16_t getFontColorIndex() override;
    ::poi::hssf::util::HSSFColor* getFontColor() override;
    void setFontColor(::poi::ss::usermodel::Color* color) override;
    int32_t getFontHeight() override;
    int16_t getFontWeight();

public: /* protected */
    ::int8_tArray* getRawRecord();

public:
    int16_t getUnderlineType() override;
    bool isBold() override;
    bool isEscapementTypeModified();
    bool isFontCancellationModified();
    bool isFontOutlineModified();
    bool isFontShadowModified();
    bool isFontStyleModified();
    bool isItalic() override;
    bool isOutlineOn();
    bool isShadowOn();
    bool isStruckout() override;
    bool isUnderlineTypeModified();
    bool isFontWeightModified();
    void setFontStyle(bool italic, bool bold) override;
    void resetFontStyle() override;
    void setEscapementType(int16_t escapementType) override;
    void setEscapementTypeModified(bool modified);
    void setFontCancellationModified(bool modified);
    void setFontColorIndex(int16_t fci) override;
    void setFontHeight(int32_t height) override;
    void setFontOutlineModified(bool modified);
    void setFontShadowModified(bool modified);
    void setFontStyleModified(bool modified);
    void setOutline(bool on);
    void setShadow(bool on);
    void setStrikeout(bool strike);
    void setUnderlineType(int16_t underlineType) override;
    void setUnderlineTypeModified(bool modified);

    // Generated

public: /* protected */
    HSSFFontFormatting(::poi::hssf::record::CFRuleBase* cfRuleRecord, HSSFWorkbook* workbook);
protected:
    HSSFFontFormatting(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
