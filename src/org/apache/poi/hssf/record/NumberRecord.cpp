// Generated from /POI/java/org/apache/poi/hssf/record/NumberRecord.java
#include <org/apache/poi/hssf/record/NumberRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/ss/util/NumberToTextConverter.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::NumberRecord::NumberRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::NumberRecord::NumberRecord() 
    : NumberRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::NumberRecord::NumberRecord(RecordInputStream* in) 
    : NumberRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::NumberRecord::sid;

void poi::hssf::record::NumberRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::NumberRecord::ctor(RecordInputStream* in)
{
    super::ctor(in);
    field_4_value = npc(in)->readDouble();
}

void poi::hssf::record::NumberRecord::setValue(double value)
{
    field_4_value = value;
}

double poi::hssf::record::NumberRecord::getValue()
{
    return field_4_value;
}

java::lang::String* poi::hssf::record::NumberRecord::getRecordName()
{
    return u"NUMBER"_j;
}

void poi::hssf::record::NumberRecord::appendValueText(::java::lang::StringBuilder* sb)
{
    npc(npc(sb)->append(u"  .value= "_j))->append(::poi::ss::util::NumberToTextConverter::toText(field_4_value));
}

void poi::hssf::record::NumberRecord::serializeValue(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeDouble(getValue());
}

int32_t poi::hssf::record::NumberRecord::getValueDataSize()
{
    return 8;
}

int16_t poi::hssf::record::NumberRecord::getSid()
{
    return sid;
}

poi::hssf::record::NumberRecord* poi::hssf::record::NumberRecord::clone()
{
    auto rec = new NumberRecord();
    copyBaseFields(rec);
    npc(rec)->field_4_value = field_4_value;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::NumberRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.NumberRecord", 39);
    return c;
}

java::lang::Class* poi::hssf::record::NumberRecord::getClass0()
{
    return class_();
}

