// Generated from /POI/java/org/apache/poi/hssf/record/VCenterRecord.java
#include <org/apache/poi/hssf/record/VCenterRecord.hpp>

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

org::apache::poi::hssf::record::VCenterRecord::VCenterRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::VCenterRecord::VCenterRecord() 
    : VCenterRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::VCenterRecord::VCenterRecord(RecordInputStream* in) 
    : VCenterRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::VCenterRecord::sid;

void org::apache::poi::hssf::record::VCenterRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::VCenterRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_vcenter = npc(in)->readShort();
}

void org::apache::poi::hssf::record::VCenterRecord::setVCenter(bool hc)
{
    field_1_vcenter = hc ? int32_t(1) : int32_t(0);
}

bool org::apache::poi::hssf::record::VCenterRecord::getVCenter()
{
    return (field_1_vcenter == 1);
}

java::lang::String* org::apache::poi::hssf::record::VCenterRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[VCENTER]\n"_j);
    npc(npc(npc(buffer)->append(u"    .vcenter        = "_j))->append(getVCenter()))->append(u"\n"_j);
    npc(buffer)->append(u"[/VCENTER]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::VCenterRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_vcenter);
}

int32_t org::apache::poi::hssf::record::VCenterRecord::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::VCenterRecord::getSid()
{
    return sid;
}

java::lang::Object* org::apache::poi::hssf::record::VCenterRecord::clone()
{
    auto rec = new VCenterRecord();
    npc(rec)->field_1_vcenter = field_1_vcenter;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::VCenterRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.VCenterRecord", 40);
    return c;
}

int32_t org::apache::poi::hssf::record::VCenterRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::VCenterRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::VCenterRecord::getClass0()
{
    return class_();
}

