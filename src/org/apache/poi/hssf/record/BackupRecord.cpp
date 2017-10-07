// Generated from /POI/java/org/apache/poi/hssf/record/BackupRecord.java
#include <org/apache/poi/hssf/record/BackupRecord.hpp>

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

org::apache::poi::hssf::record::BackupRecord::BackupRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::BackupRecord::BackupRecord() 
    : BackupRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::BackupRecord::BackupRecord(RecordInputStream* in) 
    : BackupRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::BackupRecord::sid;

void org::apache::poi::hssf::record::BackupRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::BackupRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_backup = npc(in)->readShort();
}

void org::apache::poi::hssf::record::BackupRecord::setBackup(int16_t backup)
{
    field_1_backup = backup;
}

int16_t org::apache::poi::hssf::record::BackupRecord::getBackup()
{
    return field_1_backup;
}

java::lang::String* org::apache::poi::hssf::record::BackupRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[BACKUP]\n"_j);
    npc(npc(npc(buffer)->append(u"    .backup          = "_j))->append(::java::lang::Integer::toHexString(getBackup())))->append(u"\n"_j);
    npc(buffer)->append(u"[/BACKUP]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::BackupRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getBackup());
}

int32_t org::apache::poi::hssf::record::BackupRecord::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::BackupRecord::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::BackupRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.BackupRecord", 39);
    return c;
}

int32_t org::apache::poi::hssf::record::BackupRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::BackupRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::BackupRecord::getClass0()
{
    return class_();
}

