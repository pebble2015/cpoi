// Generated from /POI/java/org/apache/poi/hssf/record/ObjectProtectRecord.java
#include <org/apache/poi/hssf/record/ObjectProtectRecord.hpp>

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

poi::hssf::record::ObjectProtectRecord::ObjectProtectRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::ObjectProtectRecord::ObjectProtectRecord() 
    : ObjectProtectRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::ObjectProtectRecord::ObjectProtectRecord(RecordInputStream* in) 
    : ObjectProtectRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::ObjectProtectRecord::sid;

void poi::hssf::record::ObjectProtectRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::ObjectProtectRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_protect = npc(in)->readShort();
}

void poi::hssf::record::ObjectProtectRecord::setProtect(bool protect)
{
    if(protect) {
        field_1_protect = 1;
    } else {
        field_1_protect = 0;
    }
}

bool poi::hssf::record::ObjectProtectRecord::getProtect()
{
    return (field_1_protect == 1);
}

java::lang::String* poi::hssf::record::ObjectProtectRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[SCENARIOPROTECT]\n"_j);
    npc(npc(npc(buffer)->append(u"    .protect         = "_j))->append(getProtect()))->append(u"\n"_j);
    npc(buffer)->append(u"[/SCENARIOPROTECT]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::ObjectProtectRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_protect);
}

int32_t poi::hssf::record::ObjectProtectRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::ObjectProtectRecord::getSid()
{
    return sid;
}

poi::hssf::record::ObjectProtectRecord* poi::hssf::record::ObjectProtectRecord::clone()
{
    auto rec = new ObjectProtectRecord();
    npc(rec)->field_1_protect = field_1_protect;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::ObjectProtectRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.ObjectProtectRecord", 46);
    return c;
}

int32_t poi::hssf::record::ObjectProtectRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::ObjectProtectRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::ObjectProtectRecord::getClass0()
{
    return class_();
}

