// Generated from /POI/java/org/apache/poi/hssf/record/MMSRecord.java
#include <org/apache/poi/hssf/record/MMSRecord.hpp>

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

org::apache::poi::hssf::record::MMSRecord::MMSRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::MMSRecord::MMSRecord() 
    : MMSRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::MMSRecord::MMSRecord(RecordInputStream* in) 
    : MMSRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::MMSRecord::sid;

void org::apache::poi::hssf::record::MMSRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::MMSRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    if(npc(in)->remaining() == 0) {
        return;
    }
    field_1_addMenuCount = npc(in)->readByte();
    field_2_delMenuCount = npc(in)->readByte();
}

void org::apache::poi::hssf::record::MMSRecord::setAddMenuCount(int8_t am)
{
    field_1_addMenuCount = am;
}

void org::apache::poi::hssf::record::MMSRecord::setDelMenuCount(int8_t dm)
{
    field_2_delMenuCount = dm;
}

int8_t org::apache::poi::hssf::record::MMSRecord::getAddMenuCount()
{
    return field_1_addMenuCount;
}

int8_t org::apache::poi::hssf::record::MMSRecord::getDelMenuCount()
{
    return field_2_delMenuCount;
}

java::lang::String* org::apache::poi::hssf::record::MMSRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[MMS]\n"_j);
    npc(npc(npc(buffer)->append(u"    .addMenu        = "_j))->append(::java::lang::Integer::toHexString(getAddMenuCount())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .delMenu        = "_j))->append(::java::lang::Integer::toHexString(getDelMenuCount())))->append(u"\n"_j);
    npc(buffer)->append(u"[/MMS]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::MMSRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(getAddMenuCount());
    npc(out)->writeByte(getDelMenuCount());
}

int32_t org::apache::poi::hssf::record::MMSRecord::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::MMSRecord::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::MMSRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.MMSRecord", 36);
    return c;
}

int32_t org::apache::poi::hssf::record::MMSRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::MMSRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::MMSRecord::getClass0()
{
    return class_();
}

