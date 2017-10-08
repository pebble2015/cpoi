// Generated from /POI/java/org/apache/poi/hssf/record/RecalcIdRecord.java
#include <org/apache/poi/hssf/record/RecalcIdRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::RecalcIdRecord::RecalcIdRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::RecalcIdRecord::RecalcIdRecord() 
    : RecalcIdRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::RecalcIdRecord::RecalcIdRecord(RecordInputStream* in) 
    : RecalcIdRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::RecalcIdRecord::sid;

void poi::hssf::record::RecalcIdRecord::ctor()
{
    super::ctor();
    _reserved0 = 0;
    _engineId = 0;
}

void poi::hssf::record::RecalcIdRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    npc(in)->readUShort();
    _reserved0 = npc(in)->readUShort();
    _engineId = npc(in)->readInt();
}

bool poi::hssf::record::RecalcIdRecord::isNeeded()
{
    return true;
}

void poi::hssf::record::RecalcIdRecord::setEngineId(int32_t val)
{
    _engineId = val;
}

int32_t poi::hssf::record::RecalcIdRecord::getEngineId()
{
    return _engineId;
}

java::lang::String* poi::hssf::record::RecalcIdRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[RECALCID]\n"_j);
    npc(npc(npc(buffer)->append(u"    .reserved = "_j))->append(::poi::util::HexDump::shortToHex(_reserved0)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .engineId = "_j))->append(::poi::util::HexDump::intToHex(_engineId)))->append(u"\n"_j);
    npc(buffer)->append(u"[/RECALCID]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::RecalcIdRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(sid);
    npc(out)->writeShort(_reserved0);
    npc(out)->writeInt(_engineId);
}

int32_t poi::hssf::record::RecalcIdRecord::getDataSize()
{
    return 8;
}

int16_t poi::hssf::record::RecalcIdRecord::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::RecalcIdRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.RecalcIdRecord", 41);
    return c;
}

int32_t poi::hssf::record::RecalcIdRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::RecalcIdRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::RecalcIdRecord::getClass0()
{
    return class_();
}

