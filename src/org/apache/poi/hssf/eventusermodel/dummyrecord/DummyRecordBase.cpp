// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/dummyrecord/DummyRecordBase.java
#include <org/apache/poi/hssf/eventusermodel/dummyrecord/DummyRecordBase.hpp>

#include <java/lang/String.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <Array.hpp>

poi::hssf::eventusermodel::dummyrecord::DummyRecordBase::DummyRecordBase(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::eventusermodel::dummyrecord::DummyRecordBase::DummyRecordBase() 
    : DummyRecordBase(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hssf::eventusermodel::dummyrecord::DummyRecordBase::ctor()
{
    super::ctor();
}

int16_t poi::hssf::eventusermodel::dummyrecord::DummyRecordBase::getSid()
{
    return -int32_t(1);
}

int32_t poi::hssf::eventusermodel::dummyrecord::DummyRecordBase::serialize(int32_t offset, ::int8_tArray* data)
{
    throw new ::poi::util::RecordFormatException(u"Cannot serialize a dummy record"_j);
}

int32_t poi::hssf::eventusermodel::dummyrecord::DummyRecordBase::getRecordSize()
{
    throw new ::poi::util::RecordFormatException(u"Cannot serialize a dummy record"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::eventusermodel::dummyrecord::DummyRecordBase::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.eventusermodel.dummyrecord.DummyRecordBase", 62);
    return c;
}

int8_tArray* poi::hssf::eventusermodel::dummyrecord::DummyRecordBase::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::eventusermodel::dummyrecord::DummyRecordBase::getClass0()
{
    return class_();
}

