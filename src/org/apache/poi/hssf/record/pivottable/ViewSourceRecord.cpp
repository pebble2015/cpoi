// Generated from /POI/java/org/apache/poi/hssf/record/pivottable/ViewSourceRecord.java
#include <org/apache/poi/hssf/record/pivottable/ViewSourceRecord.hpp>

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

org::apache::poi::hssf::record::pivottable::ViewSourceRecord::ViewSourceRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::pivottable::ViewSourceRecord::ViewSourceRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : ViewSourceRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::pivottable::ViewSourceRecord::sid;

void org::apache::poi::hssf::record::pivottable::ViewSourceRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    vs = npc(in)->readShort();
}

void org::apache::poi::hssf::record::pivottable::ViewSourceRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(vs);
}

int32_t org::apache::poi::hssf::record::pivottable::ViewSourceRecord::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::pivottable::ViewSourceRecord::getSid()
{
    return sid;
}

java::lang::String* org::apache::poi::hssf::record::pivottable::ViewSourceRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[SXVS]\n"_j);
    npc(npc(npc(buffer)->append(u"    .vs      ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(vs)))->append(u'\u000a');
    npc(buffer)->append(u"[/SXVS]\n"_j);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::pivottable::ViewSourceRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.pivottable.ViewSourceRecord", 54);
    return c;
}

int32_t org::apache::poi::hssf::record::pivottable::ViewSourceRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::pivottable::ViewSourceRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::pivottable::ViewSourceRecord::getClass0()
{
    return class_();
}

