// Generated from /POI/java/org/apache/poi/hssf/record/PrintHeadersRecord.java
#include <org/apache/poi/hssf/record/PrintHeadersRecord.hpp>

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

poi::hssf::record::PrintHeadersRecord::PrintHeadersRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::PrintHeadersRecord::PrintHeadersRecord() 
    : PrintHeadersRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::PrintHeadersRecord::PrintHeadersRecord(RecordInputStream* in) 
    : PrintHeadersRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::PrintHeadersRecord::sid;

void poi::hssf::record::PrintHeadersRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::PrintHeadersRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_print_headers = npc(in)->readShort();
}

void poi::hssf::record::PrintHeadersRecord::setPrintHeaders(bool p)
{
    if(p == true) {
        field_1_print_headers = 1;
    } else {
        field_1_print_headers = 0;
    }
}

bool poi::hssf::record::PrintHeadersRecord::getPrintHeaders()
{
    return (field_1_print_headers == 1);
}

java::lang::String* poi::hssf::record::PrintHeadersRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[PRINTHEADERS]\n"_j);
    npc(npc(npc(buffer)->append(u"    .printheaders   = "_j))->append(getPrintHeaders()))->append(u"\n"_j);
    npc(buffer)->append(u"[/PRINTHEADERS]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::PrintHeadersRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_print_headers);
}

int32_t poi::hssf::record::PrintHeadersRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::PrintHeadersRecord::getSid()
{
    return sid;
}

java::lang::Object* poi::hssf::record::PrintHeadersRecord::clone()
{
    auto rec = new PrintHeadersRecord();
    npc(rec)->field_1_print_headers = field_1_print_headers;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::PrintHeadersRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.PrintHeadersRecord", 45);
    return c;
}

int32_t poi::hssf::record::PrintHeadersRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::PrintHeadersRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::PrintHeadersRecord::getClass0()
{
    return class_();
}

