// Generated from /POI/java/org/apache/poi/hssf/record/DefaultRowHeightRecord.java
#include <org/apache/poi/hssf/record/DefaultRowHeightRecord.hpp>

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

poi::hssf::record::DefaultRowHeightRecord::DefaultRowHeightRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::DefaultRowHeightRecord::DefaultRowHeightRecord() 
    : DefaultRowHeightRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::DefaultRowHeightRecord::DefaultRowHeightRecord(RecordInputStream* in) 
    : DefaultRowHeightRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::DefaultRowHeightRecord::sid;

constexpr int16_t poi::hssf::record::DefaultRowHeightRecord::DEFAULT_ROW_HEIGHT;

void poi::hssf::record::DefaultRowHeightRecord::ctor()
{
    super::ctor();
    field_1_option_flags = 0;
    field_2_row_height = DEFAULT_ROW_HEIGHT;
}

void poi::hssf::record::DefaultRowHeightRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_option_flags = npc(in)->readShort();
    field_2_row_height = npc(in)->readShort();
}

void poi::hssf::record::DefaultRowHeightRecord::setOptionFlags(int16_t flags)
{
    field_1_option_flags = flags;
}

void poi::hssf::record::DefaultRowHeightRecord::setRowHeight(int16_t height)
{
    field_2_row_height = height;
}

int16_t poi::hssf::record::DefaultRowHeightRecord::getOptionFlags()
{
    return field_1_option_flags;
}

int16_t poi::hssf::record::DefaultRowHeightRecord::getRowHeight()
{
    return field_2_row_height;
}

java::lang::String* poi::hssf::record::DefaultRowHeightRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[DEFAULTROWHEIGHT]\n"_j);
    npc(npc(npc(buffer)->append(u"    .optionflags    = "_j))->append(::java::lang::Integer::toHexString(getOptionFlags())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .rowheight      = "_j))->append(::java::lang::Integer::toHexString(getRowHeight())))->append(u"\n"_j);
    npc(buffer)->append(u"[/DEFAULTROWHEIGHT]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::DefaultRowHeightRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getOptionFlags());
    npc(out)->writeShort(getRowHeight());
}

int32_t poi::hssf::record::DefaultRowHeightRecord::getDataSize()
{
    return 4;
}

int16_t poi::hssf::record::DefaultRowHeightRecord::getSid()
{
    return sid;
}

poi::hssf::record::DefaultRowHeightRecord* poi::hssf::record::DefaultRowHeightRecord::clone()
{
    auto rec = new DefaultRowHeightRecord();
    npc(rec)->field_1_option_flags = field_1_option_flags;
    npc(rec)->field_2_row_height = field_2_row_height;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::DefaultRowHeightRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.DefaultRowHeightRecord", 49);
    return c;
}

int32_t poi::hssf::record::DefaultRowHeightRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::DefaultRowHeightRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::DefaultRowHeightRecord::getClass0()
{
    return class_();
}

