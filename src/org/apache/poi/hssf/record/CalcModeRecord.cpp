// Generated from /POI/java/org/apache/poi/hssf/record/CalcModeRecord.java
#include <org/apache/poi/hssf/record/CalcModeRecord.hpp>

#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::CalcModeRecord::CalcModeRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::CalcModeRecord::CalcModeRecord() 
    : CalcModeRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::CalcModeRecord::CalcModeRecord(RecordInputStream* in) 
    : CalcModeRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::CalcModeRecord::sid;

constexpr int16_t org::apache::poi::hssf::record::CalcModeRecord::MANUAL;

constexpr int16_t org::apache::poi::hssf::record::CalcModeRecord::AUTOMATIC;

constexpr int16_t org::apache::poi::hssf::record::CalcModeRecord::AUTOMATIC_EXCEPT_TABLES;

void org::apache::poi::hssf::record::CalcModeRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::CalcModeRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_calcmode = npc(in)->readShort();
}

void org::apache::poi::hssf::record::CalcModeRecord::setCalcMode(int16_t calcmode)
{
    field_1_calcmode = calcmode;
}

int16_t org::apache::poi::hssf::record::CalcModeRecord::getCalcMode()
{
    return field_1_calcmode;
}

java::lang::String* org::apache::poi::hssf::record::CalcModeRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[CALCMODE]\n"_j);
    npc(npc(npc(buffer)->append(u"    .calcmode       = "_j))->append(::java::lang::Integer::toHexString(getCalcMode())))->append(u"\n"_j);
    npc(buffer)->append(u"[/CALCMODE]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::CalcModeRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getCalcMode());
}

int32_t org::apache::poi::hssf::record::CalcModeRecord::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::CalcModeRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::CalcModeRecord* org::apache::poi::hssf::record::CalcModeRecord::clone()
{
    auto rec = new CalcModeRecord();
    npc(rec)->field_1_calcmode = field_1_calcmode;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::CalcModeRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.CalcModeRecord", 41);
    return c;
}

int32_t org::apache::poi::hssf::record::CalcModeRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::CalcModeRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::CalcModeRecord::getClass0()
{
    return class_();
}

