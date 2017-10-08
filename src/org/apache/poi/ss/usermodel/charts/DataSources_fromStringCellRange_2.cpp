// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/DataSources.java
#include <org/apache/poi/ss/usermodel/charts/DataSources_fromStringCellRange_2.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/ss/usermodel/CellValue.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::usermodel::charts::DataSources_fromStringCellRange_2::DataSources_fromStringCellRange_2(::poi::ss::usermodel::Sheet* sheet, ::poi::ss::util::CellRangeAddress* cellRangeAddress)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor(sheet, cellRangeAddress);
}

java::lang::String* poi::ss::usermodel::charts::DataSources_fromStringCellRange_2::getPointAt(int32_t index)
{
    auto cellValue = getCellValueAt(index);
    if(cellValue != nullptr && npc(cellValue)->getCellTypeEnum() == ::poi::ss::usermodel::CellType::STRING) {
        return npc(cellValue)->getStringValue();
    } else {
        return nullptr;
    }
}

bool poi::ss::usermodel::charts::DataSources_fromStringCellRange_2::isNumeric()
{
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::charts::DataSources_fromStringCellRange_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::usermodel::charts::DataSources_fromStringCellRange_2::getClass0()
{
    return class_();
}

