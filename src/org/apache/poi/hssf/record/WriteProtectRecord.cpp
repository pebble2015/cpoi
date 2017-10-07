// Generated from /POI/java/org/apache/poi/hssf/record/WriteProtectRecord.java
#include <org/apache/poi/hssf/record/WriteProtectRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::WriteProtectRecord::WriteProtectRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::WriteProtectRecord::WriteProtectRecord() 
    : WriteProtectRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::WriteProtectRecord::WriteProtectRecord(RecordInputStream* in) 
    : WriteProtectRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::WriteProtectRecord::sid;

void org::apache::poi::hssf::record::WriteProtectRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::WriteProtectRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    if(npc(in)->remaining() == 2) {
        npc(in)->readShort();
    }
}

java::lang::String* org::apache::poi::hssf::record::WriteProtectRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[WRITEPROTECT]\n"_j);
    npc(buffer)->append(u"[/WRITEPROTECT]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::WriteProtectRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
}

int32_t org::apache::poi::hssf::record::WriteProtectRecord::getDataSize()
{
    return 0;
}

int16_t org::apache::poi::hssf::record::WriteProtectRecord::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::WriteProtectRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.WriteProtectRecord", 45);
    return c;
}

int32_t org::apache::poi::hssf::record::WriteProtectRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::WriteProtectRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::WriteProtectRecord::getClass0()
{
    return class_();
}

