// Generated from /POI/java/org/apache/poi/hssf/record/BookBoolRecord.java
#include <org/apache/poi/hssf/record/BookBoolRecord.hpp>

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

poi::hssf::record::BookBoolRecord::BookBoolRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::BookBoolRecord::BookBoolRecord() 
    : BookBoolRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::BookBoolRecord::BookBoolRecord(RecordInputStream* in) 
    : BookBoolRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::BookBoolRecord::sid;

void poi::hssf::record::BookBoolRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::BookBoolRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_save_link_values = npc(in)->readShort();
}

void poi::hssf::record::BookBoolRecord::setSaveLinkValues(int16_t flag)
{
    field_1_save_link_values = flag;
}

int16_t poi::hssf::record::BookBoolRecord::getSaveLinkValues()
{
    return field_1_save_link_values;
}

java::lang::String* poi::hssf::record::BookBoolRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[BOOKBOOL]\n"_j);
    npc(npc(npc(buffer)->append(u"    .savelinkvalues  = "_j))->append(::java::lang::Integer::toHexString(getSaveLinkValues())))->append(u"\n"_j);
    npc(buffer)->append(u"[/BOOKBOOL]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::BookBoolRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_save_link_values);
}

int32_t poi::hssf::record::BookBoolRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::BookBoolRecord::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::BookBoolRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.BookBoolRecord", 41);
    return c;
}

int32_t poi::hssf::record::BookBoolRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::BookBoolRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::BookBoolRecord::getClass0()
{
    return class_();
}

