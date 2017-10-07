// Generated from /POI/java/org/apache/poi/hssf/record/chart/FontIndexRecord.java
#include <org/apache/poi/hssf/record/chart/FontIndexRecord.hpp>

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

org::apache::poi::hssf::record::chart::FontIndexRecord::FontIndexRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::FontIndexRecord::FontIndexRecord() 
    : FontIndexRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::FontIndexRecord::FontIndexRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : FontIndexRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::FontIndexRecord::sid;

void org::apache::poi::hssf::record::chart::FontIndexRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::FontIndexRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_fontIndex = npc(in)->readShort();
}

java::lang::String* org::apache::poi::hssf::record::chart::FontIndexRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[FONTX]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .fontIndex            = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getFontIndex())))->append(u" ("_j))->append(static_cast< int32_t >(getFontIndex())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(buffer)->append(u"[/FONTX]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::chart::FontIndexRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_fontIndex);
}

int32_t org::apache::poi::hssf::record::chart::FontIndexRecord::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::chart::FontIndexRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::chart::FontIndexRecord* org::apache::poi::hssf::record::chart::FontIndexRecord::clone()
{
    auto rec = new FontIndexRecord();
    npc(rec)->field_1_fontIndex = field_1_fontIndex;
    return rec;
}

int16_t org::apache::poi::hssf::record::chart::FontIndexRecord::getFontIndex()
{
    return field_1_fontIndex;
}

void org::apache::poi::hssf::record::chart::FontIndexRecord::setFontIndex(int16_t field_1_fontIndex)
{
    this->field_1_fontIndex = field_1_fontIndex;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::FontIndexRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.FontIndexRecord", 48);
    return c;
}

int32_t org::apache::poi::hssf::record::chart::FontIndexRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::FontIndexRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::FontIndexRecord::getClass0()
{
    return class_();
}

