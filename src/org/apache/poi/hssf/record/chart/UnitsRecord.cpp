// Generated from /POI/java/org/apache/poi/hssf/record/chart/UnitsRecord.java
#include <org/apache/poi/hssf/record/chart/UnitsRecord.hpp>

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

poi::hssf::record::chart::UnitsRecord::UnitsRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::chart::UnitsRecord::UnitsRecord() 
    : UnitsRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::chart::UnitsRecord::UnitsRecord(::poi::hssf::record::RecordInputStream* in) 
    : UnitsRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::chart::UnitsRecord::sid;

void poi::hssf::record::chart::UnitsRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::chart::UnitsRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_units = npc(in)->readShort();
}

java::lang::String* poi::hssf::record::chart::UnitsRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[UNITS]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .units                = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getUnits())))->append(u" ("_j))->append(static_cast< int32_t >(getUnits())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(buffer)->append(u"[/UNITS]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::chart::UnitsRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_units);
}

int32_t poi::hssf::record::chart::UnitsRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::chart::UnitsRecord::getSid()
{
    return sid;
}

java::lang::Object* poi::hssf::record::chart::UnitsRecord::clone()
{
    auto rec = new UnitsRecord();
    npc(rec)->field_1_units = field_1_units;
    return rec;
}

int16_t poi::hssf::record::chart::UnitsRecord::getUnits()
{
    return field_1_units;
}

void poi::hssf::record::chart::UnitsRecord::setUnits(int16_t field_1_units)
{
    this->field_1_units = field_1_units;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::chart::UnitsRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.UnitsRecord", 44);
    return c;
}

int32_t poi::hssf::record::chart::UnitsRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::chart::UnitsRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::chart::UnitsRecord::getClass0()
{
    return class_();
}

