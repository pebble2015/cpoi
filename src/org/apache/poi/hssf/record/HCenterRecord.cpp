// Generated from /POI/java/org/apache/poi/hssf/record/HCenterRecord.java
#include <org/apache/poi/hssf/record/HCenterRecord.hpp>

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

org::apache::poi::hssf::record::HCenterRecord::HCenterRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::HCenterRecord::HCenterRecord() 
    : HCenterRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::HCenterRecord::HCenterRecord(RecordInputStream* in) 
    : HCenterRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::HCenterRecord::sid;

void org::apache::poi::hssf::record::HCenterRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::HCenterRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_hcenter = npc(in)->readShort();
}

void org::apache::poi::hssf::record::HCenterRecord::setHCenter(bool hc)
{
    if(hc == true) {
        field_1_hcenter = 1;
    } else {
        field_1_hcenter = 0;
    }
}

bool org::apache::poi::hssf::record::HCenterRecord::getHCenter()
{
    return (field_1_hcenter == 1);
}

java::lang::String* org::apache::poi::hssf::record::HCenterRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[HCENTER]\n"_j);
    npc(npc(npc(buffer)->append(u"    .hcenter        = "_j))->append(getHCenter()))->append(u"\n"_j);
    npc(buffer)->append(u"[/HCENTER]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::HCenterRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_hcenter);
}

int32_t org::apache::poi::hssf::record::HCenterRecord::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::HCenterRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::HCenterRecord* org::apache::poi::hssf::record::HCenterRecord::clone()
{
    auto rec = new HCenterRecord();
    npc(rec)->field_1_hcenter = field_1_hcenter;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::HCenterRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.HCenterRecord", 40);
    return c;
}

int32_t org::apache::poi::hssf::record::HCenterRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::HCenterRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::HCenterRecord::getClass0()
{
    return class_();
}

