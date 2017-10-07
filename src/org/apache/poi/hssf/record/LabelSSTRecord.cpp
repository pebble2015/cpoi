// Generated from /POI/java/org/apache/poi/hssf/record/LabelSSTRecord.java
#include <org/apache/poi/hssf/record/LabelSSTRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::LabelSSTRecord::LabelSSTRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::LabelSSTRecord::LabelSSTRecord() 
    : LabelSSTRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::LabelSSTRecord::LabelSSTRecord(RecordInputStream* in) 
    : LabelSSTRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::LabelSSTRecord::sid;

void org::apache::poi::hssf::record::LabelSSTRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::LabelSSTRecord::ctor(RecordInputStream* in)
{
    super::ctor(in);
    field_4_sst_index = npc(in)->readInt();
}

void org::apache::poi::hssf::record::LabelSSTRecord::setSSTIndex(int32_t index)
{
    field_4_sst_index = index;
}

int32_t org::apache::poi::hssf::record::LabelSSTRecord::getSSTIndex()
{
    return field_4_sst_index;
}

java::lang::String* org::apache::poi::hssf::record::LabelSSTRecord::getRecordName()
{
    return u"LABELSST"_j;
}

void org::apache::poi::hssf::record::LabelSSTRecord::appendValueText(::java::lang::StringBuilder* sb)
{
    npc(sb)->append(u"  .sstIndex = "_j);
    npc(sb)->append(::org::apache::poi::util::HexDump::shortToHex(getSSTIndex()));
}

void org::apache::poi::hssf::record::LabelSSTRecord::serializeValue(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeInt(getSSTIndex());
}

int32_t org::apache::poi::hssf::record::LabelSSTRecord::getValueDataSize()
{
    return 4;
}

int16_t org::apache::poi::hssf::record::LabelSSTRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::LabelSSTRecord* org::apache::poi::hssf::record::LabelSSTRecord::clone()
{
    auto rec = new LabelSSTRecord();
    copyBaseFields(rec);
    npc(rec)->field_4_sst_index = field_4_sst_index;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::LabelSSTRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.LabelSSTRecord", 41);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::LabelSSTRecord::getClass0()
{
    return class_();
}

