// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/dummyrecord/LastCellOfRowDummyRecord.java
#include <org/apache/poi/hssf/eventusermodel/dummyrecord/LastCellOfRowDummyRecord.hpp>

#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

poi::hssf::eventusermodel::dummyrecord::LastCellOfRowDummyRecord::LastCellOfRowDummyRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::eventusermodel::dummyrecord::LastCellOfRowDummyRecord::LastCellOfRowDummyRecord(int32_t row, int32_t lastColumnNumber) 
    : LastCellOfRowDummyRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(row,lastColumnNumber);
}

void poi::hssf::eventusermodel::dummyrecord::LastCellOfRowDummyRecord::ctor(int32_t row, int32_t lastColumnNumber)
{
    super::ctor();
    this->row = row;
    this->lastColumnNumber = lastColumnNumber;
}

int32_t poi::hssf::eventusermodel::dummyrecord::LastCellOfRowDummyRecord::getRow()
{
    return row;
}

int32_t poi::hssf::eventusermodel::dummyrecord::LastCellOfRowDummyRecord::getLastColumnNumber()
{
    return lastColumnNumber;
}

java::lang::String* poi::hssf::eventusermodel::dummyrecord::LastCellOfRowDummyRecord::toString()
{
    return ::java::lang::StringBuilder().append(u"End-of-Row for Row="_j)->append(row)
        ->append(u" at Column="_j)
        ->append(lastColumnNumber)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::eventusermodel::dummyrecord::LastCellOfRowDummyRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.eventusermodel.dummyrecord.LastCellOfRowDummyRecord", 71);
    return c;
}

java::lang::Class* poi::hssf::eventusermodel::dummyrecord::LastCellOfRowDummyRecord::getClass0()
{
    return class_();
}

