// Generated from /POI/java/org/apache/poi/hssf/record/DefaultColWidthRecord.java
#include <org/apache/poi/hssf/record/DefaultColWidthRecord.hpp>

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

org::apache::poi::hssf::record::DefaultColWidthRecord::DefaultColWidthRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::DefaultColWidthRecord::DefaultColWidthRecord() 
    : DefaultColWidthRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::DefaultColWidthRecord::DefaultColWidthRecord(RecordInputStream* in) 
    : DefaultColWidthRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::DefaultColWidthRecord::sid;

constexpr int32_t org::apache::poi::hssf::record::DefaultColWidthRecord::DEFAULT_COLUMN_WIDTH;

void org::apache::poi::hssf::record::DefaultColWidthRecord::ctor()
{
    super::ctor();
    field_1_col_width = DEFAULT_COLUMN_WIDTH;
}

void org::apache::poi::hssf::record::DefaultColWidthRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_col_width = npc(in)->readUShort();
}

void org::apache::poi::hssf::record::DefaultColWidthRecord::setColWidth(int32_t width)
{
    field_1_col_width = width;
}

int32_t org::apache::poi::hssf::record::DefaultColWidthRecord::getColWidth()
{
    return field_1_col_width;
}

java::lang::String* org::apache::poi::hssf::record::DefaultColWidthRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[DEFAULTCOLWIDTH]\n"_j);
    npc(npc(npc(buffer)->append(u"    .colwidth      = "_j))->append(::java::lang::Integer::toHexString(getColWidth())))->append(u"\n"_j);
    npc(buffer)->append(u"[/DEFAULTCOLWIDTH]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::DefaultColWidthRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getColWidth());
}

int32_t org::apache::poi::hssf::record::DefaultColWidthRecord::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::DefaultColWidthRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::DefaultColWidthRecord* org::apache::poi::hssf::record::DefaultColWidthRecord::clone()
{
    auto rec = new DefaultColWidthRecord();
    npc(rec)->field_1_col_width = field_1_col_width;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::DefaultColWidthRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.DefaultColWidthRecord", 48);
    return c;
}

int32_t org::apache::poi::hssf::record::DefaultColWidthRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::DefaultColWidthRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::DefaultColWidthRecord::getClass0()
{
    return class_();
}

