// Generated from /POI/java/org/apache/poi/ss/util/RegionUtil.java
#include <org/apache/poi/ss/util/RegionUtil.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/usermodel/Row.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/CellUtil.hpp>
#include <org/apache/poi/ss/util/RegionUtil_CellPropertySetter.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::util::RegionUtil::RegionUtil(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::util::RegionUtil::RegionUtil() 
    : RegionUtil(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ss::util::RegionUtil::ctor()
{
    super::ctor();
}

void org::apache::poi::ss::util::RegionUtil::setBorderLeft(int32_t border, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet)
{
    clinit();
    auto rowStart = npc(region)->getFirstRow();
    auto rowEnd = npc(region)->getLastRow();
    auto column = npc(region)->getFirstColumn();
    auto cps = new RegionUtil_CellPropertySetter(CellUtil::BORDER_LEFT(), border);
    for (auto i = rowStart; i <= rowEnd; i++) {
        npc(cps)->setProperty(CellUtil::getRow(i, sheet), column);
    }
}

void org::apache::poi::ss::util::RegionUtil::setBorderLeft(::org::apache::poi::ss::usermodel::BorderStyle* border, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet)
{
    clinit();
    auto rowStart = npc(region)->getFirstRow();
    auto rowEnd = npc(region)->getLastRow();
    auto column = npc(region)->getFirstColumn();
    auto cps = new RegionUtil_CellPropertySetter(CellUtil::BORDER_LEFT(), border);
    for (auto i = rowStart; i <= rowEnd; i++) {
        npc(cps)->setProperty(CellUtil::getRow(i, sheet), column);
    }
}

void org::apache::poi::ss::util::RegionUtil::setLeftBorderColor(int32_t color, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet)
{
    clinit();
    auto rowStart = npc(region)->getFirstRow();
    auto rowEnd = npc(region)->getLastRow();
    auto column = npc(region)->getFirstColumn();
    auto cps = new RegionUtil_CellPropertySetter(CellUtil::LEFT_BORDER_COLOR(), color);
    for (auto i = rowStart; i <= rowEnd; i++) {
        npc(cps)->setProperty(CellUtil::getRow(i, sheet), column);
    }
}

void org::apache::poi::ss::util::RegionUtil::setBorderRight(int32_t border, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet)
{
    clinit();
    auto rowStart = npc(region)->getFirstRow();
    auto rowEnd = npc(region)->getLastRow();
    auto column = npc(region)->getLastColumn();
    auto cps = new RegionUtil_CellPropertySetter(CellUtil::BORDER_RIGHT(), border);
    for (auto i = rowStart; i <= rowEnd; i++) {
        npc(cps)->setProperty(CellUtil::getRow(i, sheet), column);
    }
}

void org::apache::poi::ss::util::RegionUtil::setBorderRight(::org::apache::poi::ss::usermodel::BorderStyle* border, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet)
{
    clinit();
    auto rowStart = npc(region)->getFirstRow();
    auto rowEnd = npc(region)->getLastRow();
    auto column = npc(region)->getLastColumn();
    auto cps = new RegionUtil_CellPropertySetter(CellUtil::BORDER_RIGHT(), border);
    for (auto i = rowStart; i <= rowEnd; i++) {
        npc(cps)->setProperty(CellUtil::getRow(i, sheet), column);
    }
}

void org::apache::poi::ss::util::RegionUtil::setRightBorderColor(int32_t color, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet)
{
    clinit();
    auto rowStart = npc(region)->getFirstRow();
    auto rowEnd = npc(region)->getLastRow();
    auto column = npc(region)->getLastColumn();
    auto cps = new RegionUtil_CellPropertySetter(CellUtil::RIGHT_BORDER_COLOR(), color);
    for (auto i = rowStart; i <= rowEnd; i++) {
        npc(cps)->setProperty(CellUtil::getRow(i, sheet), column);
    }
}

void org::apache::poi::ss::util::RegionUtil::setBorderBottom(int32_t border, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet)
{
    clinit();
    auto colStart = npc(region)->getFirstColumn();
    auto colEnd = npc(region)->getLastColumn();
    auto rowIndex = npc(region)->getLastRow();
    auto cps = new RegionUtil_CellPropertySetter(CellUtil::BORDER_BOTTOM(), border);
    auto row = CellUtil::getRow(rowIndex, sheet);
    for (auto i = colStart; i <= colEnd; i++) {
        npc(cps)->setProperty(row, i);
    }
}

void org::apache::poi::ss::util::RegionUtil::setBorderBottom(::org::apache::poi::ss::usermodel::BorderStyle* border, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet)
{
    clinit();
    auto colStart = npc(region)->getFirstColumn();
    auto colEnd = npc(region)->getLastColumn();
    auto rowIndex = npc(region)->getLastRow();
    auto cps = new RegionUtil_CellPropertySetter(CellUtil::BORDER_BOTTOM(), border);
    auto row = CellUtil::getRow(rowIndex, sheet);
    for (auto i = colStart; i <= colEnd; i++) {
        npc(cps)->setProperty(row, i);
    }
}

void org::apache::poi::ss::util::RegionUtil::setBottomBorderColor(int32_t color, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet)
{
    clinit();
    auto colStart = npc(region)->getFirstColumn();
    auto colEnd = npc(region)->getLastColumn();
    auto rowIndex = npc(region)->getLastRow();
    auto cps = new RegionUtil_CellPropertySetter(CellUtil::BOTTOM_BORDER_COLOR(), color);
    auto row = CellUtil::getRow(rowIndex, sheet);
    for (auto i = colStart; i <= colEnd; i++) {
        npc(cps)->setProperty(row, i);
    }
}

void org::apache::poi::ss::util::RegionUtil::setBorderTop(int32_t border, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet)
{
    clinit();
    auto colStart = npc(region)->getFirstColumn();
    auto colEnd = npc(region)->getLastColumn();
    auto rowIndex = npc(region)->getFirstRow();
    auto cps = new RegionUtil_CellPropertySetter(CellUtil::BORDER_TOP(), border);
    auto row = CellUtil::getRow(rowIndex, sheet);
    for (auto i = colStart; i <= colEnd; i++) {
        npc(cps)->setProperty(row, i);
    }
}

void org::apache::poi::ss::util::RegionUtil::setBorderTop(::org::apache::poi::ss::usermodel::BorderStyle* border, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet)
{
    clinit();
    auto colStart = npc(region)->getFirstColumn();
    auto colEnd = npc(region)->getLastColumn();
    auto rowIndex = npc(region)->getFirstRow();
    auto cps = new RegionUtil_CellPropertySetter(CellUtil::BORDER_TOP(), border);
    auto row = CellUtil::getRow(rowIndex, sheet);
    for (auto i = colStart; i <= colEnd; i++) {
        npc(cps)->setProperty(row, i);
    }
}

void org::apache::poi::ss::util::RegionUtil::setTopBorderColor(int32_t color, CellRangeAddress* region, ::org::apache::poi::ss::usermodel::Sheet* sheet)
{
    clinit();
    auto colStart = npc(region)->getFirstColumn();
    auto colEnd = npc(region)->getLastColumn();
    auto rowIndex = npc(region)->getFirstRow();
    auto cps = new RegionUtil_CellPropertySetter(CellUtil::TOP_BORDER_COLOR(), color);
    auto row = CellUtil::getRow(rowIndex, sheet);
    for (auto i = colStart; i <= colEnd; i++) {
        npc(cps)->setProperty(row, i);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::util::RegionUtil::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.RegionUtil", 33);
    return c;
}

java::lang::Class* org::apache::poi::ss::util::RegionUtil::getClass0()
{
    return class_();
}

