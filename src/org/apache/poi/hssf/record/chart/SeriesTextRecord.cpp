// Generated from /POI/java/org/apache/poi/hssf/record/chart/SeriesTextRecord.java
#include <org/apache/poi/hssf/record/chart/SeriesTextRecord.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
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

org::apache::poi::hssf::record::chart::SeriesTextRecord::SeriesTextRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::SeriesTextRecord::SeriesTextRecord() 
    : SeriesTextRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::SeriesTextRecord::SeriesTextRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : SeriesTextRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::SeriesTextRecord::sid;

constexpr int32_t org::apache::poi::hssf::record::chart::SeriesTextRecord::MAX_LEN;

void org::apache::poi::hssf::record::chart::SeriesTextRecord::ctor()
{
    super::ctor();
    field_4_text = u""_j;
    is16bit = false;
}

void org::apache::poi::hssf::record::chart::SeriesTextRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_id = npc(in)->readUShort();
    auto field_2_textLength = npc(in)->readUByte();
    is16bit = (npc(in)->readUByte() & int32_t(1)) != 0;
    if(is16bit) {
        field_4_text = npc(in)->readUnicodeLEString(field_2_textLength);
    } else {
        field_4_text = npc(in)->readCompressedUnicode(field_2_textLength);
    }
}

java::lang::String* org::apache::poi::hssf::record::chart::SeriesTextRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(u"[SERIESTEXT]\n"_j);
    npc(npc(npc(sb)->append(u"  .id     ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(getId())))->append(u'\u000a');
    npc(npc(npc(sb)->append(u"  .textLen="_j))->append(npc(field_4_text)->length()))->append(u'\u000a');
    npc(npc(npc(sb)->append(u"  .is16bit="_j))->append(is16bit))->append(u'\u000a');
    npc(npc(npc(npc(npc(sb)->append(u"  .text   ="_j))->append(u" ("_j))->append(getText()))->append(u" )"_j))->append(u'\u000a');
    npc(sb)->append(u"[/SERIESTEXT]\n"_j);
    return npc(sb)->toString();
}

void org::apache::poi::hssf::record::chart::SeriesTextRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_id);
    npc(out)->writeByte(npc(field_4_text)->length());
    if(is16bit) {
        npc(out)->writeByte(1);
        ::org::apache::poi::util::StringUtil::putUnicodeLE(field_4_text, out);
    } else {
        npc(out)->writeByte(0);
        ::org::apache::poi::util::StringUtil::putCompressedUnicode(field_4_text, out);
    }
}

int32_t org::apache::poi::hssf::record::chart::SeriesTextRecord::getDataSize()
{
    return int32_t(2) + int32_t(1) + int32_t(1)+ npc(field_4_text)->length() * (is16bit ? int32_t(2) : int32_t(1));
}

int16_t org::apache::poi::hssf::record::chart::SeriesTextRecord::getSid()
{
    return sid;
}

java::lang::Object* org::apache::poi::hssf::record::chart::SeriesTextRecord::clone()
{
    auto rec = new SeriesTextRecord();
    npc(rec)->field_1_id = field_1_id;
    npc(rec)->is16bit = is16bit;
    npc(rec)->field_4_text = field_4_text;
    return rec;
}

int32_t org::apache::poi::hssf::record::chart::SeriesTextRecord::getId()
{
    return field_1_id;
}

void org::apache::poi::hssf::record::chart::SeriesTextRecord::setId(int32_t id)
{
    field_1_id = id;
}

java::lang::String* org::apache::poi::hssf::record::chart::SeriesTextRecord::getText()
{
    return field_4_text;
}

void org::apache::poi::hssf::record::chart::SeriesTextRecord::setText(::java::lang::String* text)
{
    if(npc(text)->length() > MAX_LEN) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Text is too long ("_j)->append(npc(text)->length())
            ->append(u">"_j)
            ->append(MAX_LEN)
            ->append(u")"_j)->toString());
    }
    field_4_text = text;
    is16bit = ::org::apache::poi::util::StringUtil::hasMultibyte(text);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::SeriesTextRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.SeriesTextRecord", 49);
    return c;
}

int32_t org::apache::poi::hssf::record::chart::SeriesTextRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::SeriesTextRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::SeriesTextRecord::getClass0()
{
    return class_();
}

