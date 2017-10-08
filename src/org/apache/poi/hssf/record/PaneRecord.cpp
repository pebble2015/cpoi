// Generated from /POI/java/org/apache/poi/hssf/record/PaneRecord.java
#include <org/apache/poi/hssf/record/PaneRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::PaneRecord::PaneRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::PaneRecord::PaneRecord() 
    : PaneRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::PaneRecord::PaneRecord(RecordInputStream* in) 
    : PaneRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::PaneRecord::sid;

constexpr int16_t poi::hssf::record::PaneRecord::ACTIVE_PANE_LOWER_RIGHT;

constexpr int16_t poi::hssf::record::PaneRecord::ACTIVE_PANE_UPPER_RIGHT;

constexpr int16_t poi::hssf::record::PaneRecord::ACTIVE_PANE_LOWER_LEFT;

constexpr int16_t poi::hssf::record::PaneRecord::ACTIVE_PANE_UPPER_LEFT;

void poi::hssf::record::PaneRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::PaneRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_x = npc(in)->readShort();
    field_2_y = npc(in)->readShort();
    field_3_topRow = npc(in)->readShort();
    field_4_leftColumn = npc(in)->readShort();
    field_5_activePane = npc(in)->readShort();
}

java::lang::String* poi::hssf::record::PaneRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[PANE]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .x                    = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getX())))->append(u" ("_j))->append(static_cast< int32_t >(getX())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .y                    = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getY())))->append(u" ("_j))->append(static_cast< int32_t >(getY())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .topRow               = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getTopRow())))->append(u" ("_j))->append(static_cast< int32_t >(getTopRow())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .leftColumn           = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getLeftColumn())))->append(u" ("_j))->append(static_cast< int32_t >(getLeftColumn())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .activePane           = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getActivePane())))->append(u" ("_j))->append(static_cast< int32_t >(getActivePane())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(buffer)->append(u"[/PANE]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::PaneRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_x);
    npc(out)->writeShort(field_2_y);
    npc(out)->writeShort(field_3_topRow);
    npc(out)->writeShort(field_4_leftColumn);
    npc(out)->writeShort(field_5_activePane);
}

int32_t poi::hssf::record::PaneRecord::getDataSize()
{
    return int32_t(2) + int32_t(2) + int32_t(2)+ int32_t(2)+ int32_t(2);
}

int16_t poi::hssf::record::PaneRecord::getSid()
{
    return sid;
}

java::lang::Object* poi::hssf::record::PaneRecord::clone()
{
    auto rec = new PaneRecord();
    npc(rec)->field_1_x = field_1_x;
    npc(rec)->field_2_y = field_2_y;
    npc(rec)->field_3_topRow = field_3_topRow;
    npc(rec)->field_4_leftColumn = field_4_leftColumn;
    npc(rec)->field_5_activePane = field_5_activePane;
    return rec;
}

int16_t poi::hssf::record::PaneRecord::getX()
{
    return field_1_x;
}

void poi::hssf::record::PaneRecord::setX(int16_t field_1_x)
{
    this->field_1_x = field_1_x;
}

int16_t poi::hssf::record::PaneRecord::getY()
{
    return field_2_y;
}

void poi::hssf::record::PaneRecord::setY(int16_t field_2_y)
{
    this->field_2_y = field_2_y;
}

int16_t poi::hssf::record::PaneRecord::getTopRow()
{
    return field_3_topRow;
}

void poi::hssf::record::PaneRecord::setTopRow(int16_t field_3_topRow)
{
    this->field_3_topRow = field_3_topRow;
}

int16_t poi::hssf::record::PaneRecord::getLeftColumn()
{
    return field_4_leftColumn;
}

void poi::hssf::record::PaneRecord::setLeftColumn(int16_t field_4_leftColumn)
{
    this->field_4_leftColumn = field_4_leftColumn;
}

int16_t poi::hssf::record::PaneRecord::getActivePane()
{
    return field_5_activePane;
}

void poi::hssf::record::PaneRecord::setActivePane(int16_t field_5_activePane)
{
    this->field_5_activePane = field_5_activePane;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::PaneRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.PaneRecord", 37);
    return c;
}

int32_t poi::hssf::record::PaneRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::PaneRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::PaneRecord::getClass0()
{
    return class_();
}

