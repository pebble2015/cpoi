// Generated from /POI/java/org/apache/poi/hssf/util/HSSFRegionUtil.java
#include <org/apache/poi/hssf/util/HSSFRegionUtil.hpp>

#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/ss/util/RegionUtil.hpp>

org::apache::poi::hssf::util::HSSFRegionUtil::HSSFRegionUtil(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::util::HSSFRegionUtil::HSSFRegionUtil() 
    : HSSFRegionUtil(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::hssf::util::HSSFRegionUtil::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::util::HSSFRegionUtil::setBorderLeft(int32_t border, ::org::apache::poi::ss::util::CellRangeAddress* region, ::org::apache::poi::hssf::usermodel::HSSFSheet* sheet, ::org::apache::poi::hssf::usermodel::HSSFWorkbook* workbook)
{
    clinit();
    ::org::apache::poi::ss::util::RegionUtil::setBorderLeft(border, region, static_cast< ::org::apache::poi::ss::usermodel::Sheet* >(sheet));
}

void org::apache::poi::hssf::util::HSSFRegionUtil::setLeftBorderColor(int32_t color, ::org::apache::poi::ss::util::CellRangeAddress* region, ::org::apache::poi::hssf::usermodel::HSSFSheet* sheet, ::org::apache::poi::hssf::usermodel::HSSFWorkbook* workbook)
{
    clinit();
    ::org::apache::poi::ss::util::RegionUtil::setLeftBorderColor(color, region, sheet);
}

void org::apache::poi::hssf::util::HSSFRegionUtil::setBorderRight(int32_t border, ::org::apache::poi::ss::util::CellRangeAddress* region, ::org::apache::poi::hssf::usermodel::HSSFSheet* sheet, ::org::apache::poi::hssf::usermodel::HSSFWorkbook* workbook)
{
    clinit();
    ::org::apache::poi::ss::util::RegionUtil::setBorderRight(border, region, static_cast< ::org::apache::poi::ss::usermodel::Sheet* >(sheet));
}

void org::apache::poi::hssf::util::HSSFRegionUtil::setRightBorderColor(int32_t color, ::org::apache::poi::ss::util::CellRangeAddress* region, ::org::apache::poi::hssf::usermodel::HSSFSheet* sheet, ::org::apache::poi::hssf::usermodel::HSSFWorkbook* workbook)
{
    clinit();
    ::org::apache::poi::ss::util::RegionUtil::setRightBorderColor(color, region, sheet);
}

void org::apache::poi::hssf::util::HSSFRegionUtil::setBorderBottom(int32_t border, ::org::apache::poi::ss::util::CellRangeAddress* region, ::org::apache::poi::hssf::usermodel::HSSFSheet* sheet, ::org::apache::poi::hssf::usermodel::HSSFWorkbook* workbook)
{
    clinit();
    ::org::apache::poi::ss::util::RegionUtil::setBorderBottom(border, region, static_cast< ::org::apache::poi::ss::usermodel::Sheet* >(sheet));
}

void org::apache::poi::hssf::util::HSSFRegionUtil::setBottomBorderColor(int32_t color, ::org::apache::poi::ss::util::CellRangeAddress* region, ::org::apache::poi::hssf::usermodel::HSSFSheet* sheet, ::org::apache::poi::hssf::usermodel::HSSFWorkbook* workbook)
{
    clinit();
    ::org::apache::poi::ss::util::RegionUtil::setBottomBorderColor(color, region, sheet);
}

void org::apache::poi::hssf::util::HSSFRegionUtil::setBorderTop(int32_t border, ::org::apache::poi::ss::util::CellRangeAddress* region, ::org::apache::poi::hssf::usermodel::HSSFSheet* sheet, ::org::apache::poi::hssf::usermodel::HSSFWorkbook* workbook)
{
    clinit();
    ::org::apache::poi::ss::util::RegionUtil::setBorderTop(border, region, static_cast< ::org::apache::poi::ss::usermodel::Sheet* >(sheet));
}

void org::apache::poi::hssf::util::HSSFRegionUtil::setTopBorderColor(int32_t color, ::org::apache::poi::ss::util::CellRangeAddress* region, ::org::apache::poi::hssf::usermodel::HSSFSheet* sheet, ::org::apache::poi::hssf::usermodel::HSSFWorkbook* workbook)
{
    clinit();
    ::org::apache::poi::ss::util::RegionUtil::setTopBorderColor(color, region, sheet);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::util::HSSFRegionUtil::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.util.HSSFRegionUtil", 39);
    return c;
}

java::lang::Class* org::apache::poi::hssf::util::HSSFRegionUtil::getClass0()
{
    return class_();
}

