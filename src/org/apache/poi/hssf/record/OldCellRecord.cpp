// Generated from /POI/java/org/apache/poi/hssf/record/OldCellRecord.java
#include <org/apache/poi/hssf/record/OldCellRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/HexDump.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::OldCellRecord::OldCellRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::OldCellRecord::OldCellRecord(RecordInputStream* in, bool isBiff2) 
    : OldCellRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,isBiff2);
}

void org::apache::poi::hssf::record::OldCellRecord::ctor(RecordInputStream* in, bool isBiff2)
{
    super::ctor();
    this->sid = npc(in)->getSid();
    this->isBiff2_ = isBiff2;
    field_1_row = npc(in)->readUShort();
    field_2_column = npc(in)->readShort();
    if(isBiff2) {
        field_3_cell_attrs = npc(in)->readUShort() << int32_t(8);
        field_3_cell_attrs += npc(in)->readUByte();
    } else {
        field_3_xf_index = npc(in)->readShort();
    }
}

int32_t org::apache::poi::hssf::record::OldCellRecord::getRow()
{
    return field_1_row;
}

int16_t org::apache::poi::hssf::record::OldCellRecord::getColumn()
{
    return field_2_column;
}

int16_t org::apache::poi::hssf::record::OldCellRecord::getXFIndex()
{
    return field_3_xf_index;
}

int32_t org::apache::poi::hssf::record::OldCellRecord::getCellAttrs()
{
    return field_3_cell_attrs;
}

bool org::apache::poi::hssf::record::OldCellRecord::isBiff2()
{
    return isBiff2_;
}

int16_t org::apache::poi::hssf::record::OldCellRecord::getSid()
{
    return sid;
}

java::lang::String* org::apache::poi::hssf::record::OldCellRecord::toString()
{
    auto sb = new ::java::lang::StringBuilder();
    auto recordName = getRecordName();
    npc(npc(npc(sb)->append(u"["_j))->append(recordName))->append(u"]\n"_j);
    npc(npc(npc(sb)->append(u"    .row    = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(getRow())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .col    = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(getColumn())))->append(u"\n"_j);
    if(isBiff2()) {
        npc(npc(npc(sb)->append(u"    .cellattrs = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(getCellAttrs())))->append(u"\n"_j);
    } else {
        npc(npc(npc(sb)->append(u"    .xfindex   = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(getXFIndex())))->append(u"\n"_j);
    }
    appendValueText(sb);
    npc(sb)->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"[/"_j))->append(recordName))->append(u"]\n"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::OldCellRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.OldCellRecord", 40);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::OldCellRecord::getClass0()
{
    return class_();
}

