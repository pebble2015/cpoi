// Generated from /POI/java/org/apache/poi/hssf/record/OldSheetRecord.java
#include <org/apache/poi/hssf/record/OldSheetRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/CodepageRecord.hpp>
#include <org/apache/poi/hssf/record/OldStringRecord.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::OldSheetRecord::OldSheetRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::OldSheetRecord::OldSheetRecord(RecordInputStream* in) 
    : OldSheetRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::OldSheetRecord::sid;

void org::apache::poi::hssf::record::OldSheetRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_position_of_BOF = npc(in)->readInt();
    field_2_visibility = npc(in)->readUByte();
    field_3_type = npc(in)->readUByte();
    auto field_4_sheetname_length = npc(in)->readUByte();
    field_5_sheetname = new ::int8_tArray(field_4_sheetname_length);
    npc(in)->read(field_5_sheetname, 0, field_4_sheetname_length);
}

void org::apache::poi::hssf::record::OldSheetRecord::setCodePage(CodepageRecord* codepage)
{
    this->codepage = codepage;
}

int16_t org::apache::poi::hssf::record::OldSheetRecord::getSid()
{
    return sid;
}

int32_t org::apache::poi::hssf::record::OldSheetRecord::getPositionOfBof()
{
    return field_1_position_of_BOF;
}

java::lang::String* org::apache::poi::hssf::record::OldSheetRecord::getSheetname()
{
    return OldStringRecord::getString(field_5_sheetname, codepage);
}

java::lang::String* org::apache::poi::hssf::record::OldSheetRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[BOUNDSHEET]\n"_j);
    npc(npc(npc(buffer)->append(u"    .bof        = "_j))->append(::org::apache::poi::util::HexDump::intToHex(getPositionOfBof())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .visibility = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(field_2_visibility)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .type       = "_j))->append(::org::apache::poi::util::HexDump::byteToHex(field_3_type)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .sheetname  = "_j))->append(getSheetname()))->append(u"\n"_j);
    npc(buffer)->append(u"[/BOUNDSHEET]\n"_j);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::OldSheetRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.OldSheetRecord", 41);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::OldSheetRecord::getClass0()
{
    return class_();
}

