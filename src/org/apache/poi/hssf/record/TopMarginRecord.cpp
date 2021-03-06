// Generated from /POI/java/org/apache/poi/hssf/record/TopMarginRecord.java
#include <org/apache/poi/hssf/record/TopMarginRecord.hpp>

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

poi::hssf::record::TopMarginRecord::TopMarginRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::TopMarginRecord::TopMarginRecord() 
    : TopMarginRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::TopMarginRecord::TopMarginRecord(RecordInputStream* in) 
    : TopMarginRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::TopMarginRecord::sid;

void poi::hssf::record::TopMarginRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::TopMarginRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_margin = npc(in)->readDouble();
}

java::lang::String* poi::hssf::record::TopMarginRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[TopMargin]\n"_j);
    npc(npc(npc(npc(buffer)->append(u"    .margin               = "_j))->append(u" ("_j))->append(getMargin()))->append(u" )\n"_j);
    npc(buffer)->append(u"[/TopMargin]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::TopMarginRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeDouble(field_1_margin);
}

int32_t poi::hssf::record::TopMarginRecord::getDataSize()
{
    return 8;
}

int16_t poi::hssf::record::TopMarginRecord::getSid()
{
    return sid;
}

double poi::hssf::record::TopMarginRecord::getMargin()
{
    return field_1_margin;
}

void poi::hssf::record::TopMarginRecord::setMargin(double field_1_margin)
{
    this->field_1_margin = field_1_margin;
}

java::lang::Object* poi::hssf::record::TopMarginRecord::clone()
{
    auto rec = new TopMarginRecord();
    npc(rec)->field_1_margin = this->field_1_margin;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::TopMarginRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.TopMarginRecord", 42);
    return c;
}

int32_t poi::hssf::record::TopMarginRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::TopMarginRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::TopMarginRecord::getClass0()
{
    return class_();
}

