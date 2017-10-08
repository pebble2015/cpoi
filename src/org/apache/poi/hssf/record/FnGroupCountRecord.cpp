// Generated from /POI/java/org/apache/poi/hssf/record/FnGroupCountRecord.java
#include <org/apache/poi/hssf/record/FnGroupCountRecord.hpp>

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

poi::hssf::record::FnGroupCountRecord::FnGroupCountRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::FnGroupCountRecord::FnGroupCountRecord() 
    : FnGroupCountRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::FnGroupCountRecord::FnGroupCountRecord(RecordInputStream* in) 
    : FnGroupCountRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::FnGroupCountRecord::sid;

constexpr int16_t poi::hssf::record::FnGroupCountRecord::COUNT;

void poi::hssf::record::FnGroupCountRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::FnGroupCountRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_count = npc(in)->readShort();
}

void poi::hssf::record::FnGroupCountRecord::setCount(int16_t count)
{
    field_1_count = count;
}

int16_t poi::hssf::record::FnGroupCountRecord::getCount()
{
    return field_1_count;
}

java::lang::String* poi::hssf::record::FnGroupCountRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[FNGROUPCOUNT]\n"_j);
    npc(npc(npc(buffer)->append(u"    .count            = "_j))->append(static_cast< int32_t >(getCount())))->append(u"\n"_j);
    npc(buffer)->append(u"[/FNGROUPCOUNT]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::FnGroupCountRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getCount());
}

int32_t poi::hssf::record::FnGroupCountRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::FnGroupCountRecord::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::FnGroupCountRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.FnGroupCountRecord", 45);
    return c;
}

int32_t poi::hssf::record::FnGroupCountRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::FnGroupCountRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::FnGroupCountRecord::getClass0()
{
    return class_();
}

