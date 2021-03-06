// Generated from /POI/java/org/apache/poi/ss/util/SheetUtil.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/font/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::util::SheetUtil
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr char16_t defaultChar { u'0' };
    static constexpr double fontHeightMultiple { 2.0 };
    static ::poi::ss::usermodel::FormulaEvaluator* dummyEvaluator_;
    static ::java::awt::font::FontRenderContext* fontRenderContext_;

public:
    static double getCellWidth(::poi::ss::usermodel::Cell* cell, int32_t defaultCharWidth, ::poi::ss::usermodel::DataFormatter* formatter, bool useMergedCells);

private:
    static double getCellWidth(int32_t defaultCharWidth, int32_t colspan, ::poi::ss::usermodel::CellStyle* style, double minWidth, ::java::text::AttributedString* str);

public:
    static double getColumnWidth(::poi::ss::usermodel::Sheet* sheet, int32_t column, bool useMergedCells);
    static double getColumnWidth(::poi::ss::usermodel::Sheet* sheet, int32_t column, bool useMergedCells, int32_t firstRow, int32_t lastRow);
    static int32_t getDefaultCharWidth(::poi::ss::usermodel::Workbook* wb);

private:
    static double getColumnWidthForRow(::poi::ss::usermodel::Row* row, int32_t column, int32_t defaultCharWidth, ::poi::ss::usermodel::DataFormatter* formatter, bool useMergedCells);

public:
    static bool canComputeColumnWidth(::poi::ss::usermodel::Font* font);

private:
    static void copyAttributes(::poi::ss::usermodel::Font* font, ::java::text::AttributedString* str, int32_t startIdx, int32_t endIdx);

public:
    static bool containsCell(CellRangeAddress* cr, int32_t rowIx, int32_t colIx);
    static ::poi::ss::usermodel::Cell* getCell(::poi::ss::usermodel::Sheet* sheet, int32_t rowIx, int32_t colIx);
    static ::poi::ss::usermodel::Cell* getCellWithMerges(::poi::ss::usermodel::Sheet* sheet, int32_t rowIx, int32_t colIx);

    // Generated
    SheetUtil();
protected:
    SheetUtil(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::ss::usermodel::FormulaEvaluator*& dummyEvaluator();
    static ::java::awt::font::FontRenderContext*& fontRenderContext();
    virtual ::java::lang::Class* getClass0();
    friend class SheetUtil_1;
};
