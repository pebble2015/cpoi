// Generated from /POI/java/org/apache/poi/hssf/record/GridsetRecord.java
#include <org/apache/poi/hssf/record/GridsetRecord.hpp>

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

org::apache::poi::hssf::record::GridsetRecord::GridsetRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::GridsetRecord::GridsetRecord() 
    : GridsetRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::GridsetRecord::GridsetRecord(RecordInputStream* in) 
    : GridsetRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::GridsetRecord::sid;

void org::apache::poi::hssf::record::GridsetRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::GridsetRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_gridset_flag = npc(in)->readShort();
}

void org::apache::poi::hssf::record::GridsetRecord::setGridset(bool gridset)
{
    if(gridset == true) {
        field_1_gridset_flag = 1;
    } else {
        field_1_gridset_flag = 0;
    }
}

bool org::apache::poi::hssf::record::GridsetRecord::getGridset()
{
    return (field_1_gridset_flag == 1);
}

java::lang::String* org::apache::poi::hssf::record::GridsetRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[GRIDSET]\n"_j);
    npc(npc(npc(buffer)->append(u"    .gridset        = "_j))->append(getGridset()))->append(u"\n"_j);
    npc(buffer)->append(u"[/GRIDSET]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::GridsetRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_gridset_flag);
}

int32_t org::apache::poi::hssf::record::GridsetRecord::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::GridsetRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::GridsetRecord* org::apache::poi::hssf::record::GridsetRecord::clone()
{
    auto rec = new GridsetRecord();
    npc(rec)->field_1_gridset_flag = field_1_gridset_flag;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::GridsetRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.GridsetRecord", 40);
    return c;
}

int32_t org::apache::poi::hssf::record::GridsetRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::GridsetRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::GridsetRecord::getClass0()
{
    return class_();
}

