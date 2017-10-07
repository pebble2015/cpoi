// Generated from /POI/java/org/apache/poi/hssf/record/DrawingSelectionRecord.java
#include <org/apache/poi/hssf/record/DrawingSelectionRecord_OfficeArtRecordHeader.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::DrawingSelectionRecord_OfficeArtRecordHeader::DrawingSelectionRecord_OfficeArtRecordHeader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::DrawingSelectionRecord_OfficeArtRecordHeader::DrawingSelectionRecord_OfficeArtRecordHeader(::org::apache::poi::util::LittleEndianInput* in) 
    : DrawingSelectionRecord_OfficeArtRecordHeader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int32_t org::apache::poi::hssf::record::DrawingSelectionRecord_OfficeArtRecordHeader::ENCODED_SIZE;

void org::apache::poi::hssf::record::DrawingSelectionRecord_OfficeArtRecordHeader::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    super::ctor();
    _verAndInstance = npc(in)->readUShort();
    _type = npc(in)->readUShort();
    _length = npc(in)->readInt();
}

void org::apache::poi::hssf::record::DrawingSelectionRecord_OfficeArtRecordHeader::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_verAndInstance);
    npc(out)->writeShort(_type);
    npc(out)->writeInt(_length);
}

java::lang::String* org::apache::poi::hssf::record::DrawingSelectionRecord_OfficeArtRecordHeader::debugFormatAsString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(32));
    npc(npc(sb)->append(u"ver+inst="_j))->append(::org::apache::poi::util::HexDump::shortToHex(_verAndInstance));
    npc(npc(sb)->append(u" type="_j))->append(::org::apache::poi::util::HexDump::shortToHex(_type));
    npc(npc(sb)->append(u" len="_j))->append(::org::apache::poi::util::HexDump::intToHex(_length));
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::DrawingSelectionRecord_OfficeArtRecordHeader::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.DrawingSelectionRecord.OfficeArtRecordHeader", 71);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::DrawingSelectionRecord_OfficeArtRecordHeader::getClass0()
{
    return class_();
}

