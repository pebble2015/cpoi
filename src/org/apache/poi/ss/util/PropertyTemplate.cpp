// Generated from /POI/java/org/apache/poi/ss/util/PropertyTemplate.java
#include <org/apache/poi/ss/util/PropertyTemplate.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/util/Collection.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/usermodel/BorderExtent.hpp>
#include <org/apache/poi/ss/usermodel/BorderStyle.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/Row.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <org/apache/poi/ss/util/CellAddress.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/CellUtil.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::util::PropertyTemplate::PropertyTemplate(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::util::PropertyTemplate::PropertyTemplate() 
    : PropertyTemplate(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::util::PropertyTemplate::PropertyTemplate(PropertyTemplate* template_) 
    : PropertyTemplate(*static_cast< ::default_init_tag* >(0))
{
    ctor(template_);
}

void org::apache::poi::ss::util::PropertyTemplate::ctor()
{
    super::ctor();
    _propertyTemplate = new ::java::util::HashMap();
}

void org::apache::poi::ss::util::PropertyTemplate::ctor(PropertyTemplate* template_)
{
    ctor();
    for (auto _i = npc(npc(npc(template_)->getTemplate())->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            npc(_propertyTemplate)->put(new CellAddress(java_cast< CellAddress* >(npc(entry)->getKey())), cloneCellProperties(java_cast< ::java::util::Map* >(npc(entry)->getValue())));
        }
    }
}

java::util::Map* org::apache::poi::ss::util::PropertyTemplate::getTemplate()
{
    return _propertyTemplate;
}

java::util::Map* org::apache::poi::ss::util::PropertyTemplate::cloneCellProperties(::java::util::Map* properties)
{
    clinit();
    ::java::util::Map* newProperties = new ::java::util::HashMap();
    for (auto _i = npc(npc(properties)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            npc(newProperties)->put(java_cast< ::java::lang::String* >(npc(entry)->getKey()), java_cast< ::java::lang::Object* >(npc(entry)->getValue()));
        }
    }
    return newProperties;
}

void org::apache::poi::ss::util::PropertyTemplate::drawBorders(CellRangeAddress* range, ::org::apache::poi::ss::usermodel::BorderStyle* borderType, ::org::apache::poi::ss::usermodel::BorderExtent* extent)
{
    {
        auto v = extent;
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::NONE)) {
            removeBorders(range);
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::ALL)) {
            drawHorizontalBorders(range, borderType, ::org::apache::poi::ss::usermodel::BorderExtent::ALL);
            drawVerticalBorders(range, borderType, ::org::apache::poi::ss::usermodel::BorderExtent::ALL);
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE)) {
            drawHorizontalBorders(range, borderType, ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE);
            drawVerticalBorders(range, borderType, ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE);
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::OUTSIDE)) {
            drawOutsideBorders(range, borderType, ::org::apache::poi::ss::usermodel::BorderExtent::ALL);
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::TOP)) {
            drawTopBorder(range, borderType);
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::BOTTOM)) {
            drawBottomBorder(range, borderType);
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::LEFT)) {
            drawLeftBorder(range, borderType);
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::RIGHT)) {
            drawRightBorder(range, borderType);
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::HORIZONTAL)) {
            drawHorizontalBorders(range, borderType, ::org::apache::poi::ss::usermodel::BorderExtent::ALL);
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE_HORIZONTAL)) {
            drawHorizontalBorders(range, borderType, ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE);
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::OUTSIDE_HORIZONTAL)) {
            drawOutsideBorders(range, borderType, ::org::apache::poi::ss::usermodel::BorderExtent::HORIZONTAL);
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::VERTICAL)) {
            drawVerticalBorders(range, borderType, ::org::apache::poi::ss::usermodel::BorderExtent::ALL);
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE_VERTICAL)) {
            drawVerticalBorders(range, borderType, ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE);
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::OUTSIDE_VERTICAL)) {
            drawOutsideBorders(range, borderType, ::org::apache::poi::ss::usermodel::BorderExtent::VERTICAL);
            goto end_switch0;;
        }
end_switch0:;
    }

}

void org::apache::poi::ss::util::PropertyTemplate::drawBorders(CellRangeAddress* range, ::org::apache::poi::ss::usermodel::BorderStyle* borderType, int16_t color, ::org::apache::poi::ss::usermodel::BorderExtent* extent)
{
    drawBorders(range, borderType, extent);
    if(borderType != ::org::apache::poi::ss::usermodel::BorderStyle::NONE) {
        drawBorderColors(range, color, extent);
    }
}

void org::apache::poi::ss::util::PropertyTemplate::drawTopBorder(CellRangeAddress* range, ::org::apache::poi::ss::usermodel::BorderStyle* borderType)
{
    auto row = npc(range)->getFirstRow();
    auto firstCol = npc(range)->getFirstColumn();
    auto lastCol = npc(range)->getLastColumn();
    for (auto i = firstCol; i <= lastCol; i++) {
        addProperty(row, i, CellUtil::BORDER_TOP(), static_cast< ::java::lang::Object* >(borderType));
        if(borderType == ::org::apache::poi::ss::usermodel::BorderStyle::NONE && row > 0) {
            addProperty(row - int32_t(1), i, CellUtil::BORDER_BOTTOM(), static_cast< ::java::lang::Object* >(borderType));
        }
    }
}

void org::apache::poi::ss::util::PropertyTemplate::drawBottomBorder(CellRangeAddress* range, ::org::apache::poi::ss::usermodel::BorderStyle* borderType)
{
    auto row = npc(range)->getLastRow();
    auto firstCol = npc(range)->getFirstColumn();
    auto lastCol = npc(range)->getLastColumn();
    for (auto i = firstCol; i <= lastCol; i++) {
        addProperty(row, i, CellUtil::BORDER_BOTTOM(), static_cast< ::java::lang::Object* >(borderType));
        if(borderType == ::org::apache::poi::ss::usermodel::BorderStyle::NONE && row < npc(::org::apache::poi::ss::SpreadsheetVersion::EXCEL2007)->getMaxRows() - int32_t(1)) {
            addProperty(row + int32_t(1), i, CellUtil::BORDER_TOP(), static_cast< ::java::lang::Object* >(borderType));
        }
    }
}

void org::apache::poi::ss::util::PropertyTemplate::drawLeftBorder(CellRangeAddress* range, ::org::apache::poi::ss::usermodel::BorderStyle* borderType)
{
    auto firstRow = npc(range)->getFirstRow();
    auto lastRow = npc(range)->getLastRow();
    auto col = npc(range)->getFirstColumn();
    for (auto i = firstRow; i <= lastRow; i++) {
        addProperty(i, col, CellUtil::BORDER_LEFT(), static_cast< ::java::lang::Object* >(borderType));
        if(borderType == ::org::apache::poi::ss::usermodel::BorderStyle::NONE && col > 0) {
            addProperty(i, col - int32_t(1), CellUtil::BORDER_RIGHT(), static_cast< ::java::lang::Object* >(borderType));
        }
    }
}

void org::apache::poi::ss::util::PropertyTemplate::drawRightBorder(CellRangeAddress* range, ::org::apache::poi::ss::usermodel::BorderStyle* borderType)
{
    auto firstRow = npc(range)->getFirstRow();
    auto lastRow = npc(range)->getLastRow();
    auto col = npc(range)->getLastColumn();
    for (auto i = firstRow; i <= lastRow; i++) {
        addProperty(i, col, CellUtil::BORDER_RIGHT(), static_cast< ::java::lang::Object* >(borderType));
        if(borderType == ::org::apache::poi::ss::usermodel::BorderStyle::NONE && col < npc(::org::apache::poi::ss::SpreadsheetVersion::EXCEL2007)->getMaxColumns() - int32_t(1)) {
            addProperty(i, col + int32_t(1), CellUtil::BORDER_LEFT(), static_cast< ::java::lang::Object* >(borderType));
        }
    }
}

void org::apache::poi::ss::util::PropertyTemplate::drawOutsideBorders(CellRangeAddress* range, ::org::apache::poi::ss::usermodel::BorderStyle* borderType, ::org::apache::poi::ss::usermodel::BorderExtent* extent)
{
    {
        auto v = extent;
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::ALL) || (v == ::org::apache::poi::ss::usermodel::BorderExtent::HORIZONTAL) || (v == ::org::apache::poi::ss::usermodel::BorderExtent::VERTICAL)) {
            if(extent == ::org::apache::poi::ss::usermodel::BorderExtent::ALL || extent == ::org::apache::poi::ss::usermodel::BorderExtent::HORIZONTAL) {
                drawTopBorder(range, borderType);
                drawBottomBorder(range, borderType);
            }
            if(extent == ::org::apache::poi::ss::usermodel::BorderExtent::ALL || extent == ::org::apache::poi::ss::usermodel::BorderExtent::VERTICAL) {
                drawLeftBorder(range, borderType);
                drawRightBorder(range, borderType);
            }
            goto end_switch1;;
        }
        if((((v != ::org::apache::poi::ss::usermodel::BorderExtent::ALL) && (v != ::org::apache::poi::ss::usermodel::BorderExtent::HORIZONTAL) && (v != ::org::apache::poi::ss::usermodel::BorderExtent::VERTICAL)))) {
            throw new ::java::lang::IllegalArgumentException(u"Unsupported PropertyTemplate.Extent, valid Extents are ALL, HORIZONTAL, and VERTICAL"_j);
        }
end_switch1:;
    }

}

void org::apache::poi::ss::util::PropertyTemplate::drawHorizontalBorders(CellRangeAddress* range, ::org::apache::poi::ss::usermodel::BorderStyle* borderType, ::org::apache::poi::ss::usermodel::BorderExtent* extent)
{
    {
        int32_t firstRow;
        int32_t lastRow;
        int32_t firstCol;
        int32_t lastCol;
        {
            auto v = extent;
            if((v == ::org::apache::poi::ss::usermodel::BorderExtent::ALL) || (v == ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE)) {
                auto firstRow = npc(range)->getFirstRow();
                auto lastRow = npc(range)->getLastRow();
                auto firstCol = npc(range)->getFirstColumn();
                auto lastCol = npc(range)->getLastColumn();
                for (auto i = firstRow; i <= lastRow; i++) {
                    auto row = new CellRangeAddress(i, i, firstCol, lastCol);
                    if(extent == ::org::apache::poi::ss::usermodel::BorderExtent::ALL || i > firstRow) {
                        drawTopBorder(row, borderType);
                    }
                    if(extent == ::org::apache::poi::ss::usermodel::BorderExtent::ALL || i < lastRow) {
                        drawBottomBorder(row, borderType);
                    }
                }
                goto end_switch2;;
            }
            if((((v != ::org::apache::poi::ss::usermodel::BorderExtent::ALL) && (v != ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE)))) {
                throw new ::java::lang::IllegalArgumentException(u"Unsupported PropertyTemplate.Extent, valid Extents are ALL and INSIDE"_j);
            }
end_switch2:;
        }
    }

}

void org::apache::poi::ss::util::PropertyTemplate::drawVerticalBorders(CellRangeAddress* range, ::org::apache::poi::ss::usermodel::BorderStyle* borderType, ::org::apache::poi::ss::usermodel::BorderExtent* extent)
{
    {
        int32_t firstRow;
        int32_t lastRow;
        int32_t firstCol;
        int32_t lastCol;
        {
            auto v = extent;
            if((v == ::org::apache::poi::ss::usermodel::BorderExtent::ALL) || (v == ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE)) {
                auto firstRow = npc(range)->getFirstRow();
                auto lastRow = npc(range)->getLastRow();
                auto firstCol = npc(range)->getFirstColumn();
                auto lastCol = npc(range)->getLastColumn();
                for (auto i = firstCol; i <= lastCol; i++) {
                    auto row = new CellRangeAddress(firstRow, lastRow, i, i);
                    if(extent == ::org::apache::poi::ss::usermodel::BorderExtent::ALL || i > firstCol) {
                        drawLeftBorder(row, borderType);
                    }
                    if(extent == ::org::apache::poi::ss::usermodel::BorderExtent::ALL || i < lastCol) {
                        drawRightBorder(row, borderType);
                    }
                }
                goto end_switch3;;
            }
            if((((v != ::org::apache::poi::ss::usermodel::BorderExtent::ALL) && (v != ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE)))) {
                throw new ::java::lang::IllegalArgumentException(u"Unsupported PropertyTemplate.Extent, valid Extents are ALL and INSIDE"_j);
            }
end_switch3:;
        }
    }

}

void org::apache::poi::ss::util::PropertyTemplate::removeBorders(CellRangeAddress* range)
{
    ::java::util::Set* properties = new ::java::util::HashSet();
    npc(properties)->add(static_cast< ::java::lang::Object* >(CellUtil::BORDER_TOP()));
    npc(properties)->add(static_cast< ::java::lang::Object* >(CellUtil::BORDER_BOTTOM()));
    npc(properties)->add(static_cast< ::java::lang::Object* >(CellUtil::BORDER_LEFT()));
    npc(properties)->add(static_cast< ::java::lang::Object* >(CellUtil::BORDER_RIGHT()));
    for (auto row = npc(range)->getFirstRow(); row <= npc(range)->getLastRow(); row++) {
        for (auto col = npc(range)->getFirstColumn(); col <= npc(range)->getLastColumn(); col++) {
            removeProperties(row, col, properties);
        }
    }
    removeBorderColors(range);
}

void org::apache::poi::ss::util::PropertyTemplate::applyBorders(::org::apache::poi::ss::usermodel::Sheet* sheet)
{
    auto wb = npc(sheet)->getWorkbook();
    for (auto _i = npc(npc(_propertyTemplate)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            auto cellAddress = java_cast< CellAddress* >(npc(entry)->getKey());
            if(npc(cellAddress)->getRow() < npc(npc(wb)->getSpreadsheetVersion())->getMaxRows() && npc(cellAddress)->getColumn() < npc(npc(wb)->getSpreadsheetVersion())->getMaxColumns()) {
                auto properties = java_cast< ::java::util::Map* >(npc(entry)->getValue());
                auto row = CellUtil::getRow(npc(cellAddress)->getRow(), sheet);
                auto cell = CellUtil::getCell(row, npc(cellAddress)->getColumn());
                CellUtil::setCellStyleProperties(cell, properties);
            }
        }
    }
}

void org::apache::poi::ss::util::PropertyTemplate::drawBorderColors(CellRangeAddress* range, int16_t color, ::org::apache::poi::ss::usermodel::BorderExtent* extent)
{
    {
        auto v = extent;
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::NONE)) {
            removeBorderColors(range);
            goto end_switch4;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::ALL)) {
            drawHorizontalBorderColors(range, color, ::org::apache::poi::ss::usermodel::BorderExtent::ALL);
            drawVerticalBorderColors(range, color, ::org::apache::poi::ss::usermodel::BorderExtent::ALL);
            goto end_switch4;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE)) {
            drawHorizontalBorderColors(range, color, ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE);
            drawVerticalBorderColors(range, color, ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE);
            goto end_switch4;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::OUTSIDE)) {
            drawOutsideBorderColors(range, color, ::org::apache::poi::ss::usermodel::BorderExtent::ALL);
            goto end_switch4;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::TOP)) {
            drawTopBorderColor(range, color);
            goto end_switch4;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::BOTTOM)) {
            drawBottomBorderColor(range, color);
            goto end_switch4;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::LEFT)) {
            drawLeftBorderColor(range, color);
            goto end_switch4;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::RIGHT)) {
            drawRightBorderColor(range, color);
            goto end_switch4;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::HORIZONTAL)) {
            drawHorizontalBorderColors(range, color, ::org::apache::poi::ss::usermodel::BorderExtent::ALL);
            goto end_switch4;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE_HORIZONTAL)) {
            drawHorizontalBorderColors(range, color, ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE);
            goto end_switch4;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::OUTSIDE_HORIZONTAL)) {
            drawOutsideBorderColors(range, color, ::org::apache::poi::ss::usermodel::BorderExtent::HORIZONTAL);
            goto end_switch4;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::VERTICAL)) {
            drawVerticalBorderColors(range, color, ::org::apache::poi::ss::usermodel::BorderExtent::ALL);
            goto end_switch4;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE_VERTICAL)) {
            drawVerticalBorderColors(range, color, ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE);
            goto end_switch4;;
        }
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::OUTSIDE_VERTICAL)) {
            drawOutsideBorderColors(range, color, ::org::apache::poi::ss::usermodel::BorderExtent::VERTICAL);
            goto end_switch4;;
        }
end_switch4:;
    }

}

void org::apache::poi::ss::util::PropertyTemplate::drawTopBorderColor(CellRangeAddress* range, int16_t color)
{
    auto row = npc(range)->getFirstRow();
    auto firstCol = npc(range)->getFirstColumn();
    auto lastCol = npc(range)->getLastColumn();
    for (auto i = firstCol; i <= lastCol; i++) {
        if(getBorderStyle(row, i, CellUtil::BORDER_TOP()) == ::org::apache::poi::ss::usermodel::BorderStyle::NONE) {
            drawTopBorder(new CellRangeAddress(row, row, i, i), ::org::apache::poi::ss::usermodel::BorderStyle::THIN);
        }
        addProperty(row, i, CellUtil::TOP_BORDER_COLOR(), color);
    }
}

void org::apache::poi::ss::util::PropertyTemplate::drawBottomBorderColor(CellRangeAddress* range, int16_t color)
{
    auto row = npc(range)->getLastRow();
    auto firstCol = npc(range)->getFirstColumn();
    auto lastCol = npc(range)->getLastColumn();
    for (auto i = firstCol; i <= lastCol; i++) {
        if(getBorderStyle(row, i, CellUtil::BORDER_BOTTOM()) == ::org::apache::poi::ss::usermodel::BorderStyle::NONE) {
            drawBottomBorder(new CellRangeAddress(row, row, i, i), ::org::apache::poi::ss::usermodel::BorderStyle::THIN);
        }
        addProperty(row, i, CellUtil::BOTTOM_BORDER_COLOR(), color);
    }
}

void org::apache::poi::ss::util::PropertyTemplate::drawLeftBorderColor(CellRangeAddress* range, int16_t color)
{
    auto firstRow = npc(range)->getFirstRow();
    auto lastRow = npc(range)->getLastRow();
    auto col = npc(range)->getFirstColumn();
    for (auto i = firstRow; i <= lastRow; i++) {
        if(getBorderStyle(i, col, CellUtil::BORDER_LEFT()) == ::org::apache::poi::ss::usermodel::BorderStyle::NONE) {
            drawLeftBorder(new CellRangeAddress(i, i, col, col), ::org::apache::poi::ss::usermodel::BorderStyle::THIN);
        }
        addProperty(i, col, CellUtil::LEFT_BORDER_COLOR(), color);
    }
}

void org::apache::poi::ss::util::PropertyTemplate::drawRightBorderColor(CellRangeAddress* range, int16_t color)
{
    auto firstRow = npc(range)->getFirstRow();
    auto lastRow = npc(range)->getLastRow();
    auto col = npc(range)->getLastColumn();
    for (auto i = firstRow; i <= lastRow; i++) {
        if(getBorderStyle(i, col, CellUtil::BORDER_RIGHT()) == ::org::apache::poi::ss::usermodel::BorderStyle::NONE) {
            drawRightBorder(new CellRangeAddress(i, i, col, col), ::org::apache::poi::ss::usermodel::BorderStyle::THIN);
        }
        addProperty(i, col, CellUtil::RIGHT_BORDER_COLOR(), color);
    }
}

void org::apache::poi::ss::util::PropertyTemplate::drawOutsideBorderColors(CellRangeAddress* range, int16_t color, ::org::apache::poi::ss::usermodel::BorderExtent* extent)
{
    {
        auto v = extent;
        if((v == ::org::apache::poi::ss::usermodel::BorderExtent::ALL) || (v == ::org::apache::poi::ss::usermodel::BorderExtent::HORIZONTAL) || (v == ::org::apache::poi::ss::usermodel::BorderExtent::VERTICAL)) {
            if(extent == ::org::apache::poi::ss::usermodel::BorderExtent::ALL || extent == ::org::apache::poi::ss::usermodel::BorderExtent::HORIZONTAL) {
                drawTopBorderColor(range, color);
                drawBottomBorderColor(range, color);
            }
            if(extent == ::org::apache::poi::ss::usermodel::BorderExtent::ALL || extent == ::org::apache::poi::ss::usermodel::BorderExtent::VERTICAL) {
                drawLeftBorderColor(range, color);
                drawRightBorderColor(range, color);
            }
            goto end_switch5;;
        }
        if((((v != ::org::apache::poi::ss::usermodel::BorderExtent::ALL) && (v != ::org::apache::poi::ss::usermodel::BorderExtent::HORIZONTAL) && (v != ::org::apache::poi::ss::usermodel::BorderExtent::VERTICAL)))) {
            throw new ::java::lang::IllegalArgumentException(u"Unsupported PropertyTemplate.Extent, valid Extents are ALL, HORIZONTAL, and VERTICAL"_j);
        }
end_switch5:;
    }

}

void org::apache::poi::ss::util::PropertyTemplate::drawHorizontalBorderColors(CellRangeAddress* range, int16_t color, ::org::apache::poi::ss::usermodel::BorderExtent* extent)
{
    {
        int32_t firstRow;
        int32_t lastRow;
        int32_t firstCol;
        int32_t lastCol;
        {
            auto v = extent;
            if((v == ::org::apache::poi::ss::usermodel::BorderExtent::ALL) || (v == ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE)) {
                auto firstRow = npc(range)->getFirstRow();
                auto lastRow = npc(range)->getLastRow();
                auto firstCol = npc(range)->getFirstColumn();
                auto lastCol = npc(range)->getLastColumn();
                for (auto i = firstRow; i <= lastRow; i++) {
                    auto row = new CellRangeAddress(i, i, firstCol, lastCol);
                    if(extent == ::org::apache::poi::ss::usermodel::BorderExtent::ALL || i > firstRow) {
                        drawTopBorderColor(row, color);
                    }
                    if(extent == ::org::apache::poi::ss::usermodel::BorderExtent::ALL || i < lastRow) {
                        drawBottomBorderColor(row, color);
                    }
                }
                goto end_switch6;;
            }
            if((((v != ::org::apache::poi::ss::usermodel::BorderExtent::ALL) && (v != ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE)))) {
                throw new ::java::lang::IllegalArgumentException(u"Unsupported PropertyTemplate.Extent, valid Extents are ALL and INSIDE"_j);
            }
end_switch6:;
        }
    }

}

void org::apache::poi::ss::util::PropertyTemplate::drawVerticalBorderColors(CellRangeAddress* range, int16_t color, ::org::apache::poi::ss::usermodel::BorderExtent* extent)
{
    {
        int32_t firstRow;
        int32_t lastRow;
        int32_t firstCol;
        int32_t lastCol;
        {
            auto v = extent;
            if((v == ::org::apache::poi::ss::usermodel::BorderExtent::ALL) || (v == ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE)) {
                auto firstRow = npc(range)->getFirstRow();
                auto lastRow = npc(range)->getLastRow();
                auto firstCol = npc(range)->getFirstColumn();
                auto lastCol = npc(range)->getLastColumn();
                for (auto i = firstCol; i <= lastCol; i++) {
                    auto row = new CellRangeAddress(firstRow, lastRow, i, i);
                    if(extent == ::org::apache::poi::ss::usermodel::BorderExtent::ALL || i > firstCol) {
                        drawLeftBorderColor(row, color);
                    }
                    if(extent == ::org::apache::poi::ss::usermodel::BorderExtent::ALL || i < lastCol) {
                        drawRightBorderColor(row, color);
                    }
                }
                goto end_switch7;;
            }
            if((((v != ::org::apache::poi::ss::usermodel::BorderExtent::ALL) && (v != ::org::apache::poi::ss::usermodel::BorderExtent::INSIDE)))) {
                throw new ::java::lang::IllegalArgumentException(u"Unsupported PropertyTemplate.Extent, valid Extents are ALL and INSIDE"_j);
            }
end_switch7:;
        }
    }

}

void org::apache::poi::ss::util::PropertyTemplate::removeBorderColors(CellRangeAddress* range)
{
    ::java::util::Set* properties = new ::java::util::HashSet();
    npc(properties)->add(static_cast< ::java::lang::Object* >(CellUtil::TOP_BORDER_COLOR()));
    npc(properties)->add(static_cast< ::java::lang::Object* >(CellUtil::BOTTOM_BORDER_COLOR()));
    npc(properties)->add(static_cast< ::java::lang::Object* >(CellUtil::LEFT_BORDER_COLOR()));
    npc(properties)->add(static_cast< ::java::lang::Object* >(CellUtil::RIGHT_BORDER_COLOR()));
    for (auto row = npc(range)->getFirstRow(); row <= npc(range)->getLastRow(); row++) {
        for (auto col = npc(range)->getFirstColumn(); col <= npc(range)->getLastColumn(); col++) {
            removeProperties(row, col, properties);
        }
    }
}

void org::apache::poi::ss::util::PropertyTemplate::addProperty(int32_t row, int32_t col, ::java::lang::String* property, int16_t value)
{
    addProperty(row, col, property, static_cast< ::java::lang::Object* >(::java::lang::Short::valueOf(value)));
}

void org::apache::poi::ss::util::PropertyTemplate::addProperty(int32_t row, int32_t col, ::java::lang::String* property, ::java::lang::Object* value)
{
    auto cell = new CellAddress(row, col);
    auto cellProperties = java_cast< ::java::util::Map* >(npc(_propertyTemplate)->get(cell));
    if(cellProperties == nullptr) {
        cellProperties = new ::java::util::HashMap();
    }
    npc(cellProperties)->put(property, value);
    npc(_propertyTemplate)->put(cell, cellProperties);
}

void org::apache::poi::ss::util::PropertyTemplate::removeProperties(int32_t row, int32_t col, ::java::util::Set* properties)
{
    auto cell = new CellAddress(row, col);
    auto cellProperties = java_cast< ::java::util::Map* >(npc(_propertyTemplate)->get(cell));
    if(cellProperties != nullptr) {
        npc(npc(cellProperties)->keySet())->removeAll(static_cast< ::java::util::Collection* >(properties));
        if(npc(cellProperties)->isEmpty()) {
            npc(_propertyTemplate)->remove(cell);
        } else {
            npc(_propertyTemplate)->put(cell, cellProperties);
        }
    }
}

int32_t org::apache::poi::ss::util::PropertyTemplate::getNumBorders(CellAddress* cell)
{
    auto cellProperties = java_cast< ::java::util::Map* >(npc(_propertyTemplate)->get(cell));
    if(cellProperties == nullptr) {
        return 0;
    }
    auto count = int32_t(0);
    for (auto _i = npc(npc(cellProperties)->keySet())->iterator(); _i->hasNext(); ) {
        ::java::lang::String* property = java_cast< ::java::lang::String* >(_i->next());
        {
            if(npc(property)->equals(static_cast< ::java::lang::Object* >(CellUtil::BORDER_TOP())))
                count += 1;

            if(npc(property)->equals(static_cast< ::java::lang::Object* >(CellUtil::BORDER_BOTTOM())))
                count += 1;

            if(npc(property)->equals(static_cast< ::java::lang::Object* >(CellUtil::BORDER_LEFT())))
                count += 1;

            if(npc(property)->equals(static_cast< ::java::lang::Object* >(CellUtil::BORDER_RIGHT())))
                count += 1;

        }
    }
    return count;
}

int32_t org::apache::poi::ss::util::PropertyTemplate::getNumBorders(int32_t row, int32_t col)
{
    return getNumBorders(new CellAddress(row, col));
}

int32_t org::apache::poi::ss::util::PropertyTemplate::getNumBorderColors(CellAddress* cell)
{
    auto cellProperties = java_cast< ::java::util::Map* >(npc(_propertyTemplate)->get(cell));
    if(cellProperties == nullptr) {
        return 0;
    }
    auto count = int32_t(0);
    for (auto _i = npc(npc(cellProperties)->keySet())->iterator(); _i->hasNext(); ) {
        ::java::lang::String* property = java_cast< ::java::lang::String* >(_i->next());
        {
            if(npc(property)->equals(static_cast< ::java::lang::Object* >(CellUtil::TOP_BORDER_COLOR())))
                count += 1;

            if(npc(property)->equals(static_cast< ::java::lang::Object* >(CellUtil::BOTTOM_BORDER_COLOR())))
                count += 1;

            if(npc(property)->equals(static_cast< ::java::lang::Object* >(CellUtil::LEFT_BORDER_COLOR())))
                count += 1;

            if(npc(property)->equals(static_cast< ::java::lang::Object* >(CellUtil::RIGHT_BORDER_COLOR())))
                count += 1;

        }
    }
    return count;
}

int32_t org::apache::poi::ss::util::PropertyTemplate::getNumBorderColors(int32_t row, int32_t col)
{
    return getNumBorderColors(new CellAddress(row, col));
}

org::apache::poi::ss::usermodel::BorderStyle* org::apache::poi::ss::util::PropertyTemplate::getBorderStyle(CellAddress* cell, ::java::lang::String* property)
{
    auto value = ::org::apache::poi::ss::usermodel::BorderStyle::NONE;
    auto cellProperties = java_cast< ::java::util::Map* >(npc(_propertyTemplate)->get(cell));
    if(cellProperties != nullptr) {
        auto obj = java_cast< ::java::lang::Object* >(npc(cellProperties)->get(property));
        if(dynamic_cast< ::org::apache::poi::ss::usermodel::BorderStyle* >(obj) != nullptr) {
            value = java_cast< ::org::apache::poi::ss::usermodel::BorderStyle* >(obj);
        }
    }
    return value;
}

org::apache::poi::ss::usermodel::BorderStyle* org::apache::poi::ss::util::PropertyTemplate::getBorderStyle(int32_t row, int32_t col, ::java::lang::String* property)
{
    return getBorderStyle(new CellAddress(row, col), property);
}

int16_t org::apache::poi::ss::util::PropertyTemplate::getTemplateProperty(CellAddress* cell, ::java::lang::String* property)
{
    int16_t value = int32_t(0);
    auto cellProperties = java_cast< ::java::util::Map* >(npc(_propertyTemplate)->get(cell));
    if(cellProperties != nullptr) {
        auto obj = java_cast< ::java::lang::Object* >(npc(cellProperties)->get(property));
        if(obj != nullptr) {
            value = getShort(obj);
        }
    }
    return value;
}

int16_t org::apache::poi::ss::util::PropertyTemplate::getTemplateProperty(int32_t row, int32_t col, ::java::lang::String* property)
{
    return getTemplateProperty(new CellAddress(row, col), property);
}

int16_t org::apache::poi::ss::util::PropertyTemplate::getShort(::java::lang::Object* value)
{
    clinit();
    if(dynamic_cast< ::java::lang::Short* >(value) != nullptr) {
        return npc((java_cast< ::java::lang::Short* >(value)))->shortValue();
    }
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::util::PropertyTemplate::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.PropertyTemplate", 39);
    return c;
}

java::lang::Class* org::apache::poi::ss::util::PropertyTemplate::getClass0()
{
    return class_();
}

