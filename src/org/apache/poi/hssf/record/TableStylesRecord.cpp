// Generated from /POI/java/org/apache/poi/hssf/record/TableStylesRecord.java
#include <org/apache/poi/hssf/record/TableStylesRecord.hpp>

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

org::apache::poi::hssf::record::TableStylesRecord::TableStylesRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::TableStylesRecord::TableStylesRecord(RecordInputStream* in) 
    : TableStylesRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void org::apache::poi::hssf::record::TableStylesRecord::init()
{
    unused = new ::int8_tArray(int32_t(8));
}

constexpr int16_t org::apache::poi::hssf::record::TableStylesRecord::sid;

void org::apache::poi::hssf::record::TableStylesRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    init();
    rt = npc(in)->readUShort();
    grbitFrt = npc(in)->readUShort();
    npc(in)->readFully(unused);
    cts = npc(in)->readInt();
    auto cchDefListStyle = npc(in)->readUShort();
    auto cchDefPivotStyle = npc(in)->readUShort();
    rgchDefListStyle = npc(in)->readUnicodeLEString(cchDefListStyle);
    rgchDefPivotStyle = npc(in)->readUnicodeLEString(cchDefPivotStyle);
}

void org::apache::poi::hssf::record::TableStylesRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(rt);
    npc(out)->writeShort(grbitFrt);
    npc(out)->write(unused);
    npc(out)->writeInt(cts);
    npc(out)->writeShort(npc(rgchDefListStyle)->length());
    npc(out)->writeShort(npc(rgchDefPivotStyle)->length());
    ::org::apache::poi::util::StringUtil::putUnicodeLE(rgchDefListStyle, out);
    ::org::apache::poi::util::StringUtil::putUnicodeLE(rgchDefPivotStyle, out);
}

int32_t org::apache::poi::hssf::record::TableStylesRecord::getDataSize()
{
    return int32_t(2) + int32_t(2) + int32_t(8)+ int32_t(4)+ int32_t(2)+ int32_t(2)+ (int32_t(2) * npc(rgchDefListStyle)->length())+ (int32_t(2) * npc(rgchDefPivotStyle)->length());
}

int16_t org::apache::poi::hssf::record::TableStylesRecord::getSid()
{
    return sid;
}

java::lang::String* org::apache::poi::hssf::record::TableStylesRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[TABLESTYLES]\n"_j);
    npc(npc(npc(buffer)->append(u"    .rt      ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(rt)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .grbitFrt="_j))->append(::org::apache::poi::util::HexDump::shortToHex(grbitFrt)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .unused  ="_j))->append(::org::apache::poi::util::HexDump::toHex(unused)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .cts="_j))->append(::org::apache::poi::util::HexDump::intToHex(cts)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .rgchDefListStyle="_j))->append(rgchDefListStyle))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .rgchDefPivotStyle="_j))->append(rgchDefPivotStyle))->append(u'\u000a');
    npc(buffer)->append(u"[/TABLESTYLES]\n"_j);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::TableStylesRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.TableStylesRecord", 44);
    return c;
}

int32_t org::apache::poi::hssf::record::TableStylesRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::TableStylesRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::TableStylesRecord::getClass0()
{
    return class_();
}

