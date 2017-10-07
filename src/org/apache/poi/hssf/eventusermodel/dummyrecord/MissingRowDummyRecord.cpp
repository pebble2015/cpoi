// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/dummyrecord/MissingRowDummyRecord.java
#include <org/apache/poi/hssf/eventusermodel/dummyrecord/MissingRowDummyRecord.hpp>

org::apache::poi::hssf::eventusermodel::dummyrecord::MissingRowDummyRecord::MissingRowDummyRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::eventusermodel::dummyrecord::MissingRowDummyRecord::MissingRowDummyRecord(int32_t rowNumber) 
    : MissingRowDummyRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(rowNumber);
}

void org::apache::poi::hssf::eventusermodel::dummyrecord::MissingRowDummyRecord::ctor(int32_t rowNumber)
{
    super::ctor();
    this->rowNumber = rowNumber;
}

int32_t org::apache::poi::hssf::eventusermodel::dummyrecord::MissingRowDummyRecord::getRowNumber()
{
    return rowNumber;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::eventusermodel::dummyrecord::MissingRowDummyRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.eventusermodel.dummyrecord.MissingRowDummyRecord", 68);
    return c;
}

java::lang::Class* org::apache::poi::hssf::eventusermodel::dummyrecord::MissingRowDummyRecord::getClass0()
{
    return class_();
}

