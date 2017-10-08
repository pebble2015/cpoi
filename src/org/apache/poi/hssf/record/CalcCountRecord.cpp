// Generated from /POI/java/org/apache/poi/hssf/record/CalcCountRecord.java
#include <org/apache/poi/hssf/record/CalcCountRecord.hpp>

#include <java/lang/Integer.hpp>
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

poi::hssf::record::CalcCountRecord::CalcCountRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::CalcCountRecord::CalcCountRecord() 
    : CalcCountRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::CalcCountRecord::CalcCountRecord(RecordInputStream* in) 
    : CalcCountRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::CalcCountRecord::sid;

void poi::hssf::record::CalcCountRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::CalcCountRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_iterations = npc(in)->readShort();
}

void poi::hssf::record::CalcCountRecord::setIterations(int16_t iterations)
{
    field_1_iterations = iterations;
}

int16_t poi::hssf::record::CalcCountRecord::getIterations()
{
    return field_1_iterations;
}

java::lang::String* poi::hssf::record::CalcCountRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[CALCCOUNT]\n"_j);
    npc(npc(npc(buffer)->append(u"    .iterations     = "_j))->append(::java::lang::Integer::toHexString(getIterations())))->append(u"\n"_j);
    npc(buffer)->append(u"[/CALCCOUNT]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::CalcCountRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getIterations());
}

int32_t poi::hssf::record::CalcCountRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::CalcCountRecord::getSid()
{
    return sid;
}

poi::hssf::record::CalcCountRecord* poi::hssf::record::CalcCountRecord::clone()
{
    auto rec = new CalcCountRecord();
    npc(rec)->field_1_iterations = field_1_iterations;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::CalcCountRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.CalcCountRecord", 42);
    return c;
}

int32_t poi::hssf::record::CalcCountRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::CalcCountRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::CalcCountRecord::getClass0()
{
    return class_();
}

