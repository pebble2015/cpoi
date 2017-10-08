// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/dummyrecord/MissingCellDummyRecord.java
#include <org/apache/poi/hssf/eventusermodel/dummyrecord/MissingCellDummyRecord.hpp>

poi::hssf::eventusermodel::dummyrecord::MissingCellDummyRecord::MissingCellDummyRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::eventusermodel::dummyrecord::MissingCellDummyRecord::MissingCellDummyRecord(int32_t row, int32_t column) 
    : MissingCellDummyRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(row,column);
}

void poi::hssf::eventusermodel::dummyrecord::MissingCellDummyRecord::ctor(int32_t row, int32_t column)
{
    super::ctor();
    this->row = row;
    this->column = column;
}

int32_t poi::hssf::eventusermodel::dummyrecord::MissingCellDummyRecord::getRow()
{
    return row;
}

int32_t poi::hssf::eventusermodel::dummyrecord::MissingCellDummyRecord::getColumn()
{
    return column;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::eventusermodel::dummyrecord::MissingCellDummyRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.eventusermodel.dummyrecord.MissingCellDummyRecord", 69);
    return c;
}

java::lang::Class* poi::hssf::eventusermodel::dummyrecord::MissingCellDummyRecord::getClass0()
{
    return class_();
}

