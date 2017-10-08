// Generated from /POI/java/org/apache/poi/hssf/util/HSSFRegionUtil.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hssf::util::HSSFRegionUtil final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static void setBorderLeft(int32_t border, ::poi::ss::util::CellRangeAddress* region, ::poi::hssf::usermodel::HSSFSheet* sheet, ::poi::hssf::usermodel::HSSFWorkbook* workbook);
    static void setLeftBorderColor(int32_t color, ::poi::ss::util::CellRangeAddress* region, ::poi::hssf::usermodel::HSSFSheet* sheet, ::poi::hssf::usermodel::HSSFWorkbook* workbook);
    static void setBorderRight(int32_t border, ::poi::ss::util::CellRangeAddress* region, ::poi::hssf::usermodel::HSSFSheet* sheet, ::poi::hssf::usermodel::HSSFWorkbook* workbook);
    static void setRightBorderColor(int32_t color, ::poi::ss::util::CellRangeAddress* region, ::poi::hssf::usermodel::HSSFSheet* sheet, ::poi::hssf::usermodel::HSSFWorkbook* workbook);
    static void setBorderBottom(int32_t border, ::poi::ss::util::CellRangeAddress* region, ::poi::hssf::usermodel::HSSFSheet* sheet, ::poi::hssf::usermodel::HSSFWorkbook* workbook);
    static void setBottomBorderColor(int32_t color, ::poi::ss::util::CellRangeAddress* region, ::poi::hssf::usermodel::HSSFSheet* sheet, ::poi::hssf::usermodel::HSSFWorkbook* workbook);
    static void setBorderTop(int32_t border, ::poi::ss::util::CellRangeAddress* region, ::poi::hssf::usermodel::HSSFSheet* sheet, ::poi::hssf::usermodel::HSSFWorkbook* workbook);
    static void setTopBorderColor(int32_t color, ::poi::ss::util::CellRangeAddress* region, ::poi::hssf::usermodel::HSSFSheet* sheet, ::poi::hssf::usermodel::HSSFWorkbook* workbook);

    // Generated

private:
    HSSFRegionUtil();
protected:
    HSSFRegionUtil(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
