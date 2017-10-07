// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/DataSources.java
#include <org/apache/poi/ss/usermodel/charts/DataSources_fromNumericCellRange_1.hpp>

#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/ss/usermodel/CellValue.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::usermodel::charts::DataSources_fromNumericCellRange_1::DataSources_fromNumericCellRange_1(::org::apache::poi::ss::usermodel::Sheet* sheet, ::org::apache::poi::ss::util::CellRangeAddress* cellRangeAddress)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor(sheet, cellRangeAddress);
}

java::lang::Number* org::apache::poi::ss::usermodel::charts::DataSources_fromNumericCellRange_1::getPointAt(int32_t index)
{
    auto cellValue = getCellValueAt(index);
    if(cellValue != nullptr && npc(cellValue)->getCellTypeEnum() == ::org::apache::poi::ss::usermodel::CellType::NUMERIC) {
        return ::java::lang::Double::valueOf(npc(cellValue)->getNumberValue());
    } else {
        return nullptr;
    }
}

bool org::apache::poi::ss::usermodel::charts::DataSources_fromNumericCellRange_1::isNumeric()
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::charts::DataSources_fromNumericCellRange_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::ss::usermodel::charts::DataSources_fromNumericCellRange_1::getClass0()
{
    return class_();
}

