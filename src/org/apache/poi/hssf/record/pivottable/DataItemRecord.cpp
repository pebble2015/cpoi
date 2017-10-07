// Generated from /POI/java/org/apache/poi/hssf/record/pivottable/DataItemRecord.java
#include <org/apache/poi/hssf/record/pivottable/DataItemRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::pivottable::DataItemRecord::DataItemRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::pivottable::DataItemRecord::DataItemRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : DataItemRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::pivottable::DataItemRecord::sid;

void org::apache::poi::hssf::record::pivottable::DataItemRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    isxvdData = npc(in)->readUShort();
    iiftab = npc(in)->readUShort();
    df = npc(in)->readUShort();
    isxvd = npc(in)->readUShort();
    isxvi = npc(in)->readUShort();
    ifmt = npc(in)->readUShort();
    name = npc(in)->readString();
}

void org::apache::poi::hssf::record::pivottable::DataItemRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(isxvdData);
    npc(out)->writeShort(iiftab);
    npc(out)->writeShort(df);
    npc(out)->writeShort(isxvd);
    npc(out)->writeShort(isxvi);
    npc(out)->writeShort(ifmt);
    ::org::apache::poi::util::StringUtil::writeUnicodeString(out, name);
}

int32_t org::apache::poi::hssf::record::pivottable::DataItemRecord::getDataSize()
{
    return int32_t(2) + int32_t(2) + int32_t(2)+ int32_t(2)+ int32_t(2)+ int32_t(2)+ ::org::apache::poi::util::StringUtil::getEncodedSize(name);
}

int16_t org::apache::poi::hssf::record::pivottable::DataItemRecord::getSid()
{
    return sid;
}

java::lang::String* org::apache::poi::hssf::record::pivottable::DataItemRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[SXDI]\n"_j);
    npc(npc(npc(buffer)->append(u"  .isxvdData = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(isxvdData)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"  .iiftab = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(iiftab)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"  .df = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(df)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"  .isxvd = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(isxvd)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"  .isxvi = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(isxvi)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"  .ifmt = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(ifmt)))->append(u"\n"_j);
    npc(buffer)->append(u"[/SXDI]\n"_j);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::pivottable::DataItemRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.pivottable.DataItemRecord", 52);
    return c;
}

int32_t org::apache::poi::hssf::record::pivottable::DataItemRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::pivottable::DataItemRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::pivottable::DataItemRecord::getClass0()
{
    return class_();
}

