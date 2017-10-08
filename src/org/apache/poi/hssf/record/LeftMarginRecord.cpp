// Generated from /POI/java/org/apache/poi/hssf/record/LeftMarginRecord.java
#include <org/apache/poi/hssf/record/LeftMarginRecord.hpp>

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

poi::hssf::record::LeftMarginRecord::LeftMarginRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::LeftMarginRecord::LeftMarginRecord() 
    : LeftMarginRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::LeftMarginRecord::LeftMarginRecord(RecordInputStream* in) 
    : LeftMarginRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::LeftMarginRecord::sid;

void poi::hssf::record::LeftMarginRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::LeftMarginRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_margin = npc(in)->readDouble();
}

java::lang::String* poi::hssf::record::LeftMarginRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[LeftMargin]\n"_j);
    npc(npc(npc(npc(buffer)->append(u"    .margin               = "_j))->append(u" ("_j))->append(getMargin()))->append(u" )\n"_j);
    npc(buffer)->append(u"[/LeftMargin]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::LeftMarginRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeDouble(field_1_margin);
}

int32_t poi::hssf::record::LeftMarginRecord::getDataSize()
{
    return 8;
}

int16_t poi::hssf::record::LeftMarginRecord::getSid()
{
    return sid;
}

double poi::hssf::record::LeftMarginRecord::getMargin()
{
    return field_1_margin;
}

void poi::hssf::record::LeftMarginRecord::setMargin(double field_1_margin)
{
    this->field_1_margin = field_1_margin;
}

poi::hssf::record::LeftMarginRecord* poi::hssf::record::LeftMarginRecord::clone()
{
    auto rec = new LeftMarginRecord();
    npc(rec)->field_1_margin = this->field_1_margin;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::LeftMarginRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.LeftMarginRecord", 43);
    return c;
}

int32_t poi::hssf::record::LeftMarginRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::LeftMarginRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::LeftMarginRecord::getClass0()
{
    return class_();
}

