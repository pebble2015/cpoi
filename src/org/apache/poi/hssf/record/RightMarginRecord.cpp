// Generated from /POI/java/org/apache/poi/hssf/record/RightMarginRecord.java
#include <org/apache/poi/hssf/record/RightMarginRecord.hpp>

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

org::apache::poi::hssf::record::RightMarginRecord::RightMarginRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::RightMarginRecord::RightMarginRecord() 
    : RightMarginRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::RightMarginRecord::RightMarginRecord(RecordInputStream* in) 
    : RightMarginRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::RightMarginRecord::sid;

void org::apache::poi::hssf::record::RightMarginRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::RightMarginRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_margin = npc(in)->readDouble();
}

java::lang::String* org::apache::poi::hssf::record::RightMarginRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[RightMargin]\n"_j);
    npc(npc(npc(npc(buffer)->append(u"    .margin               = "_j))->append(u" ("_j))->append(getMargin()))->append(u" )\n"_j);
    npc(buffer)->append(u"[/RightMargin]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::RightMarginRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeDouble(field_1_margin);
}

int32_t org::apache::poi::hssf::record::RightMarginRecord::getDataSize()
{
    return 8;
}

int16_t org::apache::poi::hssf::record::RightMarginRecord::getSid()
{
    return sid;
}

double org::apache::poi::hssf::record::RightMarginRecord::getMargin()
{
    return field_1_margin;
}

void org::apache::poi::hssf::record::RightMarginRecord::setMargin(double field_1_margin)
{
    this->field_1_margin = field_1_margin;
}

java::lang::Object* org::apache::poi::hssf::record::RightMarginRecord::clone()
{
    auto rec = new RightMarginRecord();
    npc(rec)->field_1_margin = this->field_1_margin;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::RightMarginRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.RightMarginRecord", 44);
    return c;
}

int32_t org::apache::poi::hssf::record::RightMarginRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::RightMarginRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::RightMarginRecord::getClass0()
{
    return class_();
}

