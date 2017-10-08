// Generated from /POI/java/org/apache/poi/hssf/record/UncalcedRecord.java
#include <org/apache/poi/hssf/record/UncalcedRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::UncalcedRecord::UncalcedRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::UncalcedRecord::UncalcedRecord() 
    : UncalcedRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::UncalcedRecord::UncalcedRecord(RecordInputStream* in) 
    : UncalcedRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::UncalcedRecord::sid;

void poi::hssf::record::UncalcedRecord::ctor()
{
    super::ctor();
    _reserved = 0;
}

int16_t poi::hssf::record::UncalcedRecord::getSid()
{
    return sid;
}

void poi::hssf::record::UncalcedRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    _reserved = npc(in)->readShort();
}

java::lang::String* poi::hssf::record::UncalcedRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[UNCALCED]\n"_j);
    npc(npc(npc(buffer)->append(u"    _reserved: "_j))->append(static_cast< int32_t >(_reserved)))->append(u'\u000a');
    npc(buffer)->append(u"[/UNCALCED]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::UncalcedRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_reserved);
}

int32_t poi::hssf::record::UncalcedRecord::getDataSize()
{
    return 2;
}

int32_t poi::hssf::record::UncalcedRecord::getStaticRecordSize()
{
    clinit();
    return 6;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::UncalcedRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.UncalcedRecord", 41);
    return c;
}

int32_t poi::hssf::record::UncalcedRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::UncalcedRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::UncalcedRecord::getClass0()
{
    return class_();
}

