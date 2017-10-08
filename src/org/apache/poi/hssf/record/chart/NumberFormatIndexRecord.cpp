// Generated from /POI/java/org/apache/poi/hssf/record/chart/NumberFormatIndexRecord.java
#include <org/apache/poi/hssf/record/chart/NumberFormatIndexRecord.hpp>

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

poi::hssf::record::chart::NumberFormatIndexRecord::NumberFormatIndexRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::chart::NumberFormatIndexRecord::NumberFormatIndexRecord() 
    : NumberFormatIndexRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::chart::NumberFormatIndexRecord::NumberFormatIndexRecord(::poi::hssf::record::RecordInputStream* in) 
    : NumberFormatIndexRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::chart::NumberFormatIndexRecord::sid;

void poi::hssf::record::chart::NumberFormatIndexRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::chart::NumberFormatIndexRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_formatIndex = npc(in)->readShort();
}

java::lang::String* poi::hssf::record::chart::NumberFormatIndexRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[IFMT]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .formatIndex          = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getFormatIndex())))->append(u" ("_j))->append(static_cast< int32_t >(getFormatIndex())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(buffer)->append(u"[/IFMT]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::chart::NumberFormatIndexRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_formatIndex);
}

int32_t poi::hssf::record::chart::NumberFormatIndexRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::chart::NumberFormatIndexRecord::getSid()
{
    return sid;
}

poi::hssf::record::chart::NumberFormatIndexRecord* poi::hssf::record::chart::NumberFormatIndexRecord::clone()
{
    auto rec = new NumberFormatIndexRecord();
    npc(rec)->field_1_formatIndex = field_1_formatIndex;
    return rec;
}

int16_t poi::hssf::record::chart::NumberFormatIndexRecord::getFormatIndex()
{
    return field_1_formatIndex;
}

void poi::hssf::record::chart::NumberFormatIndexRecord::setFormatIndex(int16_t field_1_formatIndex)
{
    this->field_1_formatIndex = field_1_formatIndex;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::chart::NumberFormatIndexRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.NumberFormatIndexRecord", 56);
    return c;
}

int32_t poi::hssf::record::chart::NumberFormatIndexRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::chart::NumberFormatIndexRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::chart::NumberFormatIndexRecord::getClass0()
{
    return class_();
}

