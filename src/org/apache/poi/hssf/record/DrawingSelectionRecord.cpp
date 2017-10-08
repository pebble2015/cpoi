// Generated from /POI/java/org/apache/poi/hssf/record/DrawingSelectionRecord.java
#include <org/apache/poi/hssf/record/DrawingSelectionRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/DrawingSelectionRecord_OfficeArtRecordHeader.hpp>
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

poi::hssf::record::DrawingSelectionRecord::DrawingSelectionRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::DrawingSelectionRecord::DrawingSelectionRecord(RecordInputStream* in) 
    : DrawingSelectionRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::DrawingSelectionRecord::sid;

void poi::hssf::record::DrawingSelectionRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    _header = new DrawingSelectionRecord_OfficeArtRecordHeader(in);
    _cpsp = npc(in)->readInt();
    _dgslk = npc(in)->readInt();
    _spidFocus = npc(in)->readInt();
    auto nShapes = npc(in)->available() / int32_t(4);
    auto shapeIds = new ::int32_tArray(nShapes);
    for (auto i = int32_t(0); i < nShapes; i++) {
        (*shapeIds)[i] = npc(in)->readInt();
    }
    _shapeIds = shapeIds;
}

int16_t poi::hssf::record::DrawingSelectionRecord::getSid()
{
    return sid;
}

int32_t poi::hssf::record::DrawingSelectionRecord::getDataSize()
{
    return DrawingSelectionRecord_OfficeArtRecordHeader::ENCODED_SIZE + int32_t(12) + npc(_shapeIds)->length * int32_t(4);
}

void poi::hssf::record::DrawingSelectionRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(_header)->serialize(out);
    npc(out)->writeInt(_cpsp);
    npc(out)->writeInt(_dgslk);
    npc(out)->writeInt(_spidFocus);
    for (auto i = int32_t(0); i < npc(_shapeIds)->length; i++) {
        npc(out)->writeInt((*_shapeIds)[i]);
    }
}

poi::hssf::record::DrawingSelectionRecord* poi::hssf::record::DrawingSelectionRecord::clone()
{
    return this;
}

java::lang::String* poi::hssf::record::DrawingSelectionRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(u"[MSODRAWINGSELECTION]\n"_j);
    npc(npc(npc(sb)->append(u"    .rh       =("_j))->append(npc(_header)->debugFormatAsString()))->append(u")\n"_j);
    npc(npc(npc(sb)->append(u"    .cpsp     ="_j))->append(::poi::util::HexDump::intToHex(_cpsp)))->append(u'\u000a');
    npc(npc(npc(sb)->append(u"    .dgslk    ="_j))->append(::poi::util::HexDump::intToHex(_dgslk)))->append(u'\u000a');
    npc(npc(npc(sb)->append(u"    .spidFocus="_j))->append(::poi::util::HexDump::intToHex(_spidFocus)))->append(u'\u000a');
    npc(sb)->append(u"    .shapeIds =("_j);
    for (auto i = int32_t(0); i < npc(_shapeIds)->length; i++) {
        if(i > 0) {
            npc(sb)->append(u", "_j);
        }
        npc(sb)->append(::poi::util::HexDump::intToHex((*_shapeIds)[i]));
    }
    npc(sb)->append(u")\n"_j);
    npc(sb)->append(u"[/MSODRAWINGSELECTION]\n"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::DrawingSelectionRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.DrawingSelectionRecord", 49);
    return c;
}

int32_t poi::hssf::record::DrawingSelectionRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::DrawingSelectionRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::DrawingSelectionRecord::getClass0()
{
    return class_();
}

