// Generated from /POI/java/org/apache/poi/hssf/record/cont/ContinuableRecord.java
#include <org/apache/poi/hssf/record/cont/ContinuableRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/cont/ContinuableRecordOutput.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::cont::ContinuableRecord::ContinuableRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::cont::ContinuableRecord::ContinuableRecord() 
    : ContinuableRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hssf::record::cont::ContinuableRecord::ctor()
{
    super::ctor();
}

int32_t poi::hssf::record::cont::ContinuableRecord::getRecordSize()
{
    auto out = ContinuableRecordOutput::createForCountingOnly();
    serialize(out);
    npc(out)->terminate();
    return npc(out)->getTotalSize();
}

int32_t poi::hssf::record::cont::ContinuableRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    ::poi::util::LittleEndianOutput* leo = new ::poi::util::LittleEndianByteArrayOutputStream(data, offset);
    auto out = new ContinuableRecordOutput(leo, getSid());
    serialize(out);
    npc(out)->terminate();
    return npc(out)->getTotalSize();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::cont::ContinuableRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.cont.ContinuableRecord", 49);
    return c;
}

int8_tArray* poi::hssf::record::cont::ContinuableRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::cont::ContinuableRecord::getClass0()
{
    return class_();
}

