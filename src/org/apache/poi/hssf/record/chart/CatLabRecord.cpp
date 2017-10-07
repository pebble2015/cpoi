// Generated from /POI/java/org/apache/poi/hssf/record/chart/CatLabRecord.java
#include <org/apache/poi/hssf/record/chart/CatLabRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/Short.hpp>
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

org::apache::poi::hssf::record::chart::CatLabRecord::CatLabRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::CatLabRecord::CatLabRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : CatLabRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::CatLabRecord::sid;

void org::apache::poi::hssf::record::chart::CatLabRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    rt = npc(in)->readShort();
    grbitFrt = npc(in)->readShort();
    wOffset = npc(in)->readShort();
    at = npc(in)->readShort();
    grbit = npc(in)->readShort();
    if(npc(in)->available() == 0) {
        unused = nullptr;
    } else {
        unused = ::java::lang::Short::valueOf(npc(in)->readShort());
    }
}

int32_t org::apache::poi::hssf::record::chart::CatLabRecord::getDataSize()
{
    return int32_t(2) + int32_t(2) + int32_t(2)+ int32_t(2)+ int32_t(2)+ (unused == nullptr ? int32_t(0) : int32_t(2));
}

int16_t org::apache::poi::hssf::record::chart::CatLabRecord::getSid()
{
    return sid;
}

void org::apache::poi::hssf::record::chart::CatLabRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(rt);
    npc(out)->writeShort(grbitFrt);
    npc(out)->writeShort(wOffset);
    npc(out)->writeShort(at);
    npc(out)->writeShort(grbit);
    if(unused != nullptr)
        npc(out)->writeShort((npc(unused))->shortValue());

}

java::lang::String* org::apache::poi::hssf::record::chart::CatLabRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[CATLAB]\n"_j);
    npc(npc(npc(buffer)->append(u"    .rt      ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(rt)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .grbitFrt="_j))->append(::org::apache::poi::util::HexDump::shortToHex(grbitFrt)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .wOffset ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(wOffset)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .at      ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(at)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .grbit   ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(grbit)))->append(u'\u000a');
    if(unused != nullptr)
        npc(npc(npc(buffer)->append(u"    .unused  ="_j))->append(::org::apache::poi::util::HexDump::shortToHex((npc(unused))->shortValue())))->append(u'\u000a');

    npc(buffer)->append(u"[/CATLAB]\n"_j);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::CatLabRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.CatLabRecord", 45);
    return c;
}

int32_t org::apache::poi::hssf::record::chart::CatLabRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::CatLabRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::CatLabRecord::getClass0()
{
    return class_();
}

