// Generated from /POI/java/org/apache/poi/hssf/record/pivottable/ViewDefinitionRecord.java
#include <org/apache/poi/hssf/record/pivottable/ViewDefinitionRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::pivottable::ViewDefinitionRecord::ViewDefinitionRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::pivottable::ViewDefinitionRecord::ViewDefinitionRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : ViewDefinitionRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::pivottable::ViewDefinitionRecord::sid;

void org::apache::poi::hssf::record::pivottable::ViewDefinitionRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    rwFirst = npc(in)->readUShort();
    rwLast = npc(in)->readUShort();
    colFirst = npc(in)->readUShort();
    colLast = npc(in)->readUShort();
    rwFirstHead = npc(in)->readUShort();
    rwFirstData = npc(in)->readUShort();
    colFirstData = npc(in)->readUShort();
    iCache = npc(in)->readUShort();
    reserved = npc(in)->readUShort();
    sxaxis4Data = npc(in)->readUShort();
    ipos4Data = npc(in)->readUShort();
    cDim = npc(in)->readUShort();
    cDimRw = npc(in)->readUShort();
    cDimCol = npc(in)->readUShort();
    cDimPg = npc(in)->readUShort();
    cDimData = npc(in)->readUShort();
    cRw = npc(in)->readUShort();
    cCol = npc(in)->readUShort();
    grbit = npc(in)->readUShort();
    itblAutoFmt = npc(in)->readUShort();
    auto cchName = npc(in)->readUShort();
    auto cchData = npc(in)->readUShort();
    name = ::org::apache::poi::util::StringUtil::readUnicodeString(in, cchName);
    dataField = ::org::apache::poi::util::StringUtil::readUnicodeString(in, cchData);
}

void org::apache::poi::hssf::record::pivottable::ViewDefinitionRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(rwFirst);
    npc(out)->writeShort(rwLast);
    npc(out)->writeShort(colFirst);
    npc(out)->writeShort(colLast);
    npc(out)->writeShort(rwFirstHead);
    npc(out)->writeShort(rwFirstData);
    npc(out)->writeShort(colFirstData);
    npc(out)->writeShort(iCache);
    npc(out)->writeShort(reserved);
    npc(out)->writeShort(sxaxis4Data);
    npc(out)->writeShort(ipos4Data);
    npc(out)->writeShort(cDim);
    npc(out)->writeShort(cDimRw);
    npc(out)->writeShort(cDimCol);
    npc(out)->writeShort(cDimPg);
    npc(out)->writeShort(cDimData);
    npc(out)->writeShort(cRw);
    npc(out)->writeShort(cCol);
    npc(out)->writeShort(grbit);
    npc(out)->writeShort(itblAutoFmt);
    npc(out)->writeShort(npc(name)->length());
    npc(out)->writeShort(npc(dataField)->length());
    ::org::apache::poi::util::StringUtil::writeUnicodeStringFlagAndData(out, name);
    ::org::apache::poi::util::StringUtil::writeUnicodeStringFlagAndData(out, dataField);
}

int32_t org::apache::poi::hssf::record::pivottable::ViewDefinitionRecord::getDataSize()
{
    return int32_t(40) + ::org::apache::poi::util::StringUtil::getEncodedSize(name) + ::org::apache::poi::util::StringUtil::getEncodedSize(dataField);
}

int16_t org::apache::poi::hssf::record::pivottable::ViewDefinitionRecord::getSid()
{
    return sid;
}

java::lang::String* org::apache::poi::hssf::record::pivottable::ViewDefinitionRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[SXVIEW]\n"_j);
    npc(npc(npc(buffer)->append(u"    .rwFirst      ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(rwFirst)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .rwLast       ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(rwLast)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .colFirst     ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(colFirst)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .colLast      ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(colLast)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .rwFirstHead  ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(rwFirstHead)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .rwFirstData  ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(rwFirstData)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .colFirstData ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(colFirstData)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .iCache       ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(iCache)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .reserved     ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(reserved)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .sxaxis4Data  ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(sxaxis4Data)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .ipos4Data    ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(ipos4Data)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .cDim         ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(cDim)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .cDimRw       ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(cDimRw)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .cDimCol      ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(cDimCol)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .cDimPg       ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(cDimPg)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .cDimData     ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(cDimData)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .cRw          ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(cRw)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .cCol         ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(cCol)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .grbit        ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(grbit)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .itblAutoFmt  ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(itblAutoFmt)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .name         ="_j))->append(name))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .dataField    ="_j))->append(dataField))->append(u'\u000a');
    npc(buffer)->append(u"[/SXVIEW]\n"_j);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::pivottable::ViewDefinitionRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.pivottable.ViewDefinitionRecord", 58);
    return c;
}

int32_t org::apache::poi::hssf::record::pivottable::ViewDefinitionRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::pivottable::ViewDefinitionRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::pivottable::ViewDefinitionRecord::getClass0()
{
    return class_();
}

