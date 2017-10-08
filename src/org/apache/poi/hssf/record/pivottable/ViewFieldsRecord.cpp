// Generated from /POI/java/org/apache/poi/hssf/record/pivottable/ViewFieldsRecord.java
#include <org/apache/poi/hssf/record/pivottable/ViewFieldsRecord.hpp>

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

poi::hssf::record::pivottable::ViewFieldsRecord::ViewFieldsRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::pivottable::ViewFieldsRecord::ViewFieldsRecord(::poi::hssf::record::RecordInputStream* in) 
    : ViewFieldsRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::pivottable::ViewFieldsRecord::sid;

constexpr int32_t poi::hssf::record::pivottable::ViewFieldsRecord::STRING_NOT_PRESENT_LEN;

constexpr int32_t poi::hssf::record::pivottable::ViewFieldsRecord::BASE_SIZE;

void poi::hssf::record::pivottable::ViewFieldsRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    _sxaxis = npc(in)->readShort();
    _cSub = npc(in)->readShort();
    _grbitSub = npc(in)->readShort();
    _cItm = npc(in)->readShort();
    auto cchName = npc(in)->readUShort();
    if(cchName != STRING_NOT_PRESENT_LEN) {
        int32_t flag = npc(in)->readByte();
        if((flag & int32_t(1)) != 0) {
            _name = npc(in)->readUnicodeLEString(cchName);
        } else {
            _name = npc(in)->readCompressedUnicode(cchName);
        }
    }
}

void poi::hssf::record::pivottable::ViewFieldsRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_sxaxis);
    npc(out)->writeShort(_cSub);
    npc(out)->writeShort(_grbitSub);
    npc(out)->writeShort(_cItm);
    if(_name != nullptr) {
        ::poi::util::StringUtil::writeUnicodeString(out, _name);
    } else {
        npc(out)->writeShort(STRING_NOT_PRESENT_LEN);
    }
}

int32_t poi::hssf::record::pivottable::ViewFieldsRecord::getDataSize()
{
    if(_name == nullptr) {
        return BASE_SIZE;
    }
    return BASE_SIZE + int32_t(1) + npc(_name)->length() * (::poi::util::StringUtil::hasMultibyte(_name) ? int32_t(2) : int32_t(1));
}

int16_t poi::hssf::record::pivottable::ViewFieldsRecord::getSid()
{
    return sid;
}

java::lang::String* poi::hssf::record::pivottable::ViewFieldsRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[SXVD]\n"_j);
    npc(npc(npc(buffer)->append(u"    .sxaxis    = "_j))->append(::poi::util::HexDump::shortToHex(_sxaxis)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .cSub      = "_j))->append(::poi::util::HexDump::shortToHex(_cSub)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .grbitSub  = "_j))->append(::poi::util::HexDump::shortToHex(_grbitSub)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .cItm      = "_j))->append(::poi::util::HexDump::shortToHex(_cItm)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .name      = "_j))->append(_name))->append(u'\u000a');
    npc(buffer)->append(u"[/SXVD]\n"_j);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::pivottable::ViewFieldsRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.pivottable.ViewFieldsRecord", 54);
    return c;
}

int32_t poi::hssf::record::pivottable::ViewFieldsRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::pivottable::ViewFieldsRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::pivottable::ViewFieldsRecord::getClass0()
{
    return class_();
}

