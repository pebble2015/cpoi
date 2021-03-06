// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFCellStyle.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/CellStyle.hpp>
#include <org/apache/poi/hssf/util/HSSFColor.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFCellStyle final
    : public virtual ::java::lang::Object
    , public ::poi::ss::usermodel::CellStyle
{

public:
    typedef ::java::lang::Object super;

private:
    ::poi::hssf::record::ExtendedFormatRecord* _format {  };
    int16_t _index {  };
    ::poi::hssf::model::InternalWorkbook* _workbook {  };
protected:
    void ctor(int16_t index, ::poi::hssf::record::ExtendedFormatRecord* rec, HSSFWorkbook* workbook);
    void ctor(int16_t index, ::poi::hssf::record::ExtendedFormatRecord* rec, ::poi::hssf::model::InternalWorkbook* workbook);

public:
    int16_t getIndex() override;
    HSSFCellStyle* getParentStyle();
    void setDataFormat(int16_t fmt) override;
    int16_t getDataFormat() override;

private:
    static ::java::lang::ThreadLocal* lastDateFormat_;
    static ::java::lang::ThreadLocal* lastFormats_;
    static ::java::lang::ThreadLocal* getDataFormatStringCache_;

public:
    ::java::lang::String* getDataFormatString() override;
    ::java::lang::String* getDataFormatString(::poi::ss::usermodel::Workbook* workbook);
    ::java::lang::String* getDataFormatString(::poi::hssf::model::InternalWorkbook* workbook);
    void setFont(::poi::ss::usermodel::Font* font) override;
    void setFont(HSSFFont* font);
    int16_t getFontIndex() override;
    HSSFFont* getFont(::poi::ss::usermodel::Workbook* parentWorkbook);
    void setHidden(bool hidden) override;
    bool getHidden() override;
    void setLocked(bool locked) override;
    bool getLocked() override;
    void setQuotePrefixed(bool quotePrefix) override;
    bool getQuotePrefixed() override;
    void setAlignment(::poi::ss::usermodel::HorizontalAlignment* align) override;
    int16_t getAlignment() override;
    ::poi::ss::usermodel::HorizontalAlignment* getAlignmentEnum() override;
    void setWrapText(bool wrapped) override;
    bool getWrapText() override;
    void setVerticalAlignment(::poi::ss::usermodel::VerticalAlignment* align) override;
    int16_t getVerticalAlignment() override;
    ::poi::ss::usermodel::VerticalAlignment* getVerticalAlignmentEnum() override;
    void setRotation(int16_t rotation) override;
    int16_t getRotation() override;
    void setIndention(int16_t indent) override;
    int16_t getIndention() override;
    void setBorderLeft(::poi::ss::usermodel::BorderStyle* border) override;
    int16_t getBorderLeft() override;
    ::poi::ss::usermodel::BorderStyle* getBorderLeftEnum() override;
    void setBorderRight(::poi::ss::usermodel::BorderStyle* border) override;
    int16_t getBorderRight() override;
    ::poi::ss::usermodel::BorderStyle* getBorderRightEnum() override;
    void setBorderTop(::poi::ss::usermodel::BorderStyle* border) override;
    int16_t getBorderTop() override;
    ::poi::ss::usermodel::BorderStyle* getBorderTopEnum() override;
    void setBorderBottom(::poi::ss::usermodel::BorderStyle* border) override;
    int16_t getBorderBottom() override;
    ::poi::ss::usermodel::BorderStyle* getBorderBottomEnum() override;
    void setLeftBorderColor(int16_t color) override;
    int16_t getLeftBorderColor() override;
    void setRightBorderColor(int16_t color) override;
    int16_t getRightBorderColor() override;
    void setTopBorderColor(int16_t color) override;
    int16_t getTopBorderColor() override;
    void setBottomBorderColor(int16_t color) override;
    int16_t getBottomBorderColor() override;
    void setFillPattern(::poi::ss::usermodel::FillPatternType* fp) override;
    int16_t getFillPattern() override;
    ::poi::ss::usermodel::FillPatternType* getFillPatternEnum() override;

private:
    void checkDefaultBackgroundFills();

public:
    void setFillBackgroundColor(int16_t bg) override;
    int16_t getFillBackgroundColor() override;
    ::poi::hssf::util::HSSFColor* getFillBackgroundColorColor() override;
    void setFillForegroundColor(int16_t bg) override;
    int16_t getFillForegroundColor() override;
    ::poi::hssf::util::HSSFColor* getFillForegroundColorColor() override;
    ::java::lang::String* getUserStyleName();
    void setUserStyleName(::java::lang::String* styleName);
    void setShrinkToFit(bool shrinkToFit) override;
    bool getShrinkToFit() override;
    int16_t getReadingOrder();
    void setReadingOrder(int16_t order);
    void verifyBelongsToWorkbook(HSSFWorkbook* wb);
    void cloneStyleFrom(::poi::ss::usermodel::CellStyle* source) override;
    void cloneStyleFrom(HSSFCellStyle* source);
    int32_t hashCode() override;
    bool equals(::java::lang::Object* obj) override;

    // Generated

public: /* protected */
    HSSFCellStyle(int16_t index, ::poi::hssf::record::ExtendedFormatRecord* rec, HSSFWorkbook* workbook);
    HSSFCellStyle(int16_t index, ::poi::hssf::record::ExtendedFormatRecord* rec, ::poi::hssf::model::InternalWorkbook* workbook);
protected:
    HSSFCellStyle(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::lang::ThreadLocal*& lastDateFormat();
    static ::java::lang::ThreadLocal*& lastFormats();
    static ::java::lang::ThreadLocal*& getDataFormatStringCache();
    virtual ::java::lang::Class* getClass0();
    friend class HSSFCellStyle_1;
};
