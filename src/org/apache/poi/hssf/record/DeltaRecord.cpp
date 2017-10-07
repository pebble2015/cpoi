// Generated from /POI/java/org/apache/poi/hssf/record/DeltaRecord.java
#include <org/apache/poi/hssf/record/DeltaRecord.hpp>

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

org::apache::poi::hssf::record::DeltaRecord::DeltaRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::DeltaRecord::DeltaRecord(double maxChange) 
    : DeltaRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(maxChange);
}

org::apache::poi::hssf::record::DeltaRecord::DeltaRecord(RecordInputStream* in) 
    : DeltaRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::DeltaRecord::sid;

constexpr double org::apache::poi::hssf::record::DeltaRecord::DEFAULT_VALUE;

void org::apache::poi::hssf::record::DeltaRecord::ctor(double maxChange)
{
    super::ctor();
    field_1_max_change = maxChange;
}

void org::apache::poi::hssf::record::DeltaRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_max_change = npc(in)->readDouble();
}

double org::apache::poi::hssf::record::DeltaRecord::getMaxChange()
{
    return field_1_max_change;
}

java::lang::String* org::apache::poi::hssf::record::DeltaRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[DELTA]\n"_j);
    npc(npc(npc(buffer)->append(u"    .maxchange = "_j))->append(getMaxChange()))->append(u"\n"_j);
    npc(buffer)->append(u"[/DELTA]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::DeltaRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeDouble(getMaxChange());
}

int32_t org::apache::poi::hssf::record::DeltaRecord::getDataSize()
{
    return 8;
}

int16_t org::apache::poi::hssf::record::DeltaRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::DeltaRecord* org::apache::poi::hssf::record::DeltaRecord::clone()
{
    return this;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::DeltaRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.DeltaRecord", 38);
    return c;
}

int32_t org::apache::poi::hssf::record::DeltaRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::DeltaRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::DeltaRecord::getClass0()
{
    return class_();
}

