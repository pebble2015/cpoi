// Generated from /POI/java/org/apache/poi/hssf/record/SCLRecord.java
#include <org/apache/poi/hssf/record/SCLRecord.hpp>

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

poi::hssf::record::SCLRecord::SCLRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::SCLRecord::SCLRecord() 
    : SCLRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::SCLRecord::SCLRecord(RecordInputStream* in) 
    : SCLRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::SCLRecord::sid;

void poi::hssf::record::SCLRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::SCLRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_numerator = npc(in)->readShort();
    field_2_denominator = npc(in)->readShort();
}

java::lang::String* poi::hssf::record::SCLRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[SCL]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .numerator            = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getNumerator())))->append(u" ("_j))->append(static_cast< int32_t >(getNumerator())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .denominator          = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getDenominator())))->append(u" ("_j))->append(static_cast< int32_t >(getDenominator())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(buffer)->append(u"[/SCL]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::SCLRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_numerator);
    npc(out)->writeShort(field_2_denominator);
}

int32_t poi::hssf::record::SCLRecord::getDataSize()
{
    return int32_t(2) + int32_t(2);
}

int16_t poi::hssf::record::SCLRecord::getSid()
{
    return sid;
}

java::lang::Object* poi::hssf::record::SCLRecord::clone()
{
    auto rec = new SCLRecord();
    npc(rec)->field_1_numerator = field_1_numerator;
    npc(rec)->field_2_denominator = field_2_denominator;
    return rec;
}

int16_t poi::hssf::record::SCLRecord::getNumerator()
{
    return field_1_numerator;
}

void poi::hssf::record::SCLRecord::setNumerator(int16_t field_1_numerator)
{
    this->field_1_numerator = field_1_numerator;
}

int16_t poi::hssf::record::SCLRecord::getDenominator()
{
    return field_2_denominator;
}

void poi::hssf::record::SCLRecord::setDenominator(int16_t field_2_denominator)
{
    this->field_2_denominator = field_2_denominator;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::SCLRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.SCLRecord", 36);
    return c;
}

int32_t poi::hssf::record::SCLRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::SCLRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::SCLRecord::getClass0()
{
    return class_();
}

