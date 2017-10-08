// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/DataSources.java
#include <org/apache/poi/ss/usermodel/charts/DataSources.hpp>

#include <org/apache/poi/ss/usermodel/charts/DataSources_fromNumericCellRange_1.hpp>
#include <org/apache/poi/ss/usermodel/charts/DataSources_fromStringCellRange_2.hpp>
#include <org/apache/poi/ss/usermodel/charts/DataSources_ArrayDataSource.hpp>
#include <ObjectArray.hpp>

poi::ss::usermodel::charts::DataSources::DataSources(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::charts::DataSources::DataSources() 
    : DataSources(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::ss::usermodel::charts::DataSources::ctor()
{
    super::ctor();
}

/* <T> */poi::ss::usermodel::charts::ChartDataSource* poi::ss::usermodel::charts::DataSources::fromArray_(::java::lang::ObjectArray* elements)
{
    clinit();
    return new DataSources_ArrayDataSource(elements);
}

poi::ss::usermodel::charts::ChartDataSource* poi::ss::usermodel::charts::DataSources::fromNumericCellRange(::poi::ss::usermodel::Sheet* sheet, ::poi::ss::util::CellRangeAddress* cellRangeAddress)
{
    clinit();
    return new DataSources_fromNumericCellRange_1(sheet, cellRangeAddress);
}

poi::ss::usermodel::charts::ChartDataSource* poi::ss::usermodel::charts::DataSources::fromStringCellRange(::poi::ss::usermodel::Sheet* sheet, ::poi::ss::util::CellRangeAddress* cellRangeAddress)
{
    clinit();
    return new DataSources_fromStringCellRange_2(sheet, cellRangeAddress);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::charts::DataSources::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.charts.DataSources", 46);
    return c;
}

java::lang::Class* poi::ss::usermodel::charts::DataSources::getClass0()
{
    return class_();
}

