// Generated from /POI/java/org/apache/poi/hssf/record/BottomMarginRecord.java
#include <org/apache/poi/hssf/record/BottomMarginRecord.hpp>

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

poi::hssf::record::BottomMarginRecord::BottomMarginRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::BottomMarginRecord::BottomMarginRecord() 
    : BottomMarginRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::BottomMarginRecord::BottomMarginRecord(RecordInputStream* in) 
    : BottomMarginRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::BottomMarginRecord::sid;

void poi::hssf::record::BottomMarginRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::BottomMarginRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_margin = npc(in)->readDouble();
}

java::lang::String* poi::hssf::record::BottomMarginRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[BottomMargin]\n"_j);
    npc(npc(npc(npc(buffer)->append(u"    .margin               = "_j))->append(u" ("_j))->append(getMargin()))->append(u" )\n"_j);
    npc(buffer)->append(u"[/BottomMargin]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::BottomMarginRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeDouble(field_1_margin);
}

int32_t poi::hssf::record::BottomMarginRecord::getDataSize()
{
    return 8;
}

int16_t poi::hssf::record::BottomMarginRecord::getSid()
{
    return sid;
}

double poi::hssf::record::BottomMarginRecord::getMargin()
{
    return field_1_margin;
}

void poi::hssf::record::BottomMarginRecord::setMargin(double field_1_margin)
{
    this->field_1_margin = field_1_margin;
}

poi::hssf::record::BottomMarginRecord* poi::hssf::record::BottomMarginRecord::clone()
{
    auto rec = new BottomMarginRecord();
    npc(rec)->field_1_margin = this->field_1_margin;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::BottomMarginRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.BottomMarginRecord", 45);
    return c;
}

int32_t poi::hssf::record::BottomMarginRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::BottomMarginRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::BottomMarginRecord::getClass0()
{
    return class_();
}

