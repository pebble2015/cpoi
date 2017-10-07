// Generated from /POI/java/org/apache/poi/hssf/record/chart/ObjectLinkRecord.java
#include <org/apache/poi/hssf/record/chart/ObjectLinkRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/System.hpp>
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

org::apache::poi::hssf::record::chart::ObjectLinkRecord::ObjectLinkRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::ObjectLinkRecord::ObjectLinkRecord() 
    : ObjectLinkRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::ObjectLinkRecord::ObjectLinkRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : ObjectLinkRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::ObjectLinkRecord::sid;

constexpr int16_t org::apache::poi::hssf::record::chart::ObjectLinkRecord::ANCHOR_ID_CHART_TITLE;

constexpr int16_t org::apache::poi::hssf::record::chart::ObjectLinkRecord::ANCHOR_ID_Y_AXIS;

constexpr int16_t org::apache::poi::hssf::record::chart::ObjectLinkRecord::ANCHOR_ID_X_AXIS;

constexpr int16_t org::apache::poi::hssf::record::chart::ObjectLinkRecord::ANCHOR_ID_SERIES_OR_POINT;

constexpr int16_t org::apache::poi::hssf::record::chart::ObjectLinkRecord::ANCHOR_ID_Z_AXIS;

void org::apache::poi::hssf::record::chart::ObjectLinkRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::ObjectLinkRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_anchorId = npc(in)->readShort();
    field_2_link1 = npc(in)->readShort();
    field_3_link2 = npc(in)->readShort();
}

java::lang::String* org::apache::poi::hssf::record::chart::ObjectLinkRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[OBJECTLINK]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .anchorId             = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getAnchorId())))->append(u" ("_j))->append(static_cast< int32_t >(getAnchorId())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .link1                = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getLink1())))->append(u" ("_j))->append(static_cast< int32_t >(getLink1())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .link2                = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getLink2())))->append(u" ("_j))->append(static_cast< int32_t >(getLink2())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(buffer)->append(u"[/OBJECTLINK]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::chart::ObjectLinkRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_anchorId);
    npc(out)->writeShort(field_2_link1);
    npc(out)->writeShort(field_3_link2);
}

int32_t org::apache::poi::hssf::record::chart::ObjectLinkRecord::getDataSize()
{
    return int32_t(2) + int32_t(2) + int32_t(2);
}

int16_t org::apache::poi::hssf::record::chart::ObjectLinkRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::chart::ObjectLinkRecord* org::apache::poi::hssf::record::chart::ObjectLinkRecord::clone()
{
    auto rec = new ObjectLinkRecord();
    npc(rec)->field_1_anchorId = field_1_anchorId;
    npc(rec)->field_2_link1 = field_2_link1;
    npc(rec)->field_3_link2 = field_3_link2;
    return rec;
}

int16_t org::apache::poi::hssf::record::chart::ObjectLinkRecord::getAnchorId()
{
    return field_1_anchorId;
}

void org::apache::poi::hssf::record::chart::ObjectLinkRecord::setAnchorId(int16_t field_1_anchorId)
{
    this->field_1_anchorId = field_1_anchorId;
}

int16_t org::apache::poi::hssf::record::chart::ObjectLinkRecord::getLink1()
{
    return field_2_link1;
}

void org::apache::poi::hssf::record::chart::ObjectLinkRecord::setLink1(int16_t field_2_link1)
{
    this->field_2_link1 = field_2_link1;
}

int16_t org::apache::poi::hssf::record::chart::ObjectLinkRecord::getLink2()
{
    return field_3_link2;
}

void org::apache::poi::hssf::record::chart::ObjectLinkRecord::setLink2(int16_t field_3_link2)
{
    this->field_3_link2 = field_3_link2;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::ObjectLinkRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.ObjectLinkRecord", 49);
    return c;
}

int32_t org::apache::poi::hssf::record::chart::ObjectLinkRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::ObjectLinkRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::ObjectLinkRecord::getClass0()
{
    return class_();
}

