// Generated from /POI/java/org/apache/poi/hssf/record/RefModeRecord.java
#include <org/apache/poi/hssf/record/RefModeRecord.hpp>

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

poi::hssf::record::RefModeRecord::RefModeRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::RefModeRecord::RefModeRecord() 
    : RefModeRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::RefModeRecord::RefModeRecord(RecordInputStream* in) 
    : RefModeRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::RefModeRecord::sid;

constexpr int16_t poi::hssf::record::RefModeRecord::USE_A1_MODE;

constexpr int16_t poi::hssf::record::RefModeRecord::USE_R1C1_MODE;

void poi::hssf::record::RefModeRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::RefModeRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_mode = npc(in)->readShort();
}

void poi::hssf::record::RefModeRecord::setMode(int16_t mode)
{
    field_1_mode = mode;
}

int16_t poi::hssf::record::RefModeRecord::getMode()
{
    return field_1_mode;
}

java::lang::String* poi::hssf::record::RefModeRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[REFMODE]\n"_j);
    npc(npc(npc(buffer)->append(u"    .mode           = "_j))->append(::java::lang::Integer::toHexString(getMode())))->append(u"\n"_j);
    npc(buffer)->append(u"[/REFMODE]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::RefModeRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getMode());
}

int32_t poi::hssf::record::RefModeRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::RefModeRecord::getSid()
{
    return sid;
}

java::lang::Object* poi::hssf::record::RefModeRecord::clone()
{
    auto rec = new RefModeRecord();
    npc(rec)->field_1_mode = field_1_mode;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::RefModeRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.RefModeRecord", 40);
    return c;
}

int32_t poi::hssf::record::RefModeRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::RefModeRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::RefModeRecord::getClass0()
{
    return class_();
}

