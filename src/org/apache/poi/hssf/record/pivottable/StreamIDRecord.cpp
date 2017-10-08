// Generated from /POI/java/org/apache/poi/hssf/record/pivottable/StreamIDRecord.java
#include <org/apache/poi/hssf/record/pivottable/StreamIDRecord.hpp>

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

poi::hssf::record::pivottable::StreamIDRecord::StreamIDRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::pivottable::StreamIDRecord::StreamIDRecord(::poi::hssf::record::RecordInputStream* in) 
    : StreamIDRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::pivottable::StreamIDRecord::sid;

void poi::hssf::record::pivottable::StreamIDRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    idstm = npc(in)->readShort();
}

void poi::hssf::record::pivottable::StreamIDRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(idstm);
}

int32_t poi::hssf::record::pivottable::StreamIDRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::pivottable::StreamIDRecord::getSid()
{
    return sid;
}

java::lang::String* poi::hssf::record::pivottable::StreamIDRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[SXIDSTM]\n"_j);
    npc(npc(npc(buffer)->append(u"    .idstm      ="_j))->append(::poi::util::HexDump::shortToHex(idstm)))->append(u'\u000a');
    npc(buffer)->append(u"[/SXIDSTM]\n"_j);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::pivottable::StreamIDRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.pivottable.StreamIDRecord", 52);
    return c;
}

int32_t poi::hssf::record::pivottable::StreamIDRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::pivottable::StreamIDRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::pivottable::StreamIDRecord::getClass0()
{
    return class_();
}

