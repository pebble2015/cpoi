// Generated from /POI/java/org/apache/poi/hssf/record/LbsDataSubRecord.java
#include <org/apache/poi/hssf/record/LbsDataSubRecord_LbsDropData.hpp>

#include <java/lang/Byte.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/StringUtil.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::LbsDataSubRecord_LbsDropData::LbsDataSubRecord_LbsDropData(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::LbsDataSubRecord_LbsDropData::LbsDataSubRecord_LbsDropData() 
    : LbsDataSubRecord_LbsDropData(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::LbsDataSubRecord_LbsDropData::LbsDataSubRecord_LbsDropData(::poi::util::LittleEndianInput* in) 
    : LbsDataSubRecord_LbsDropData(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int32_t poi::hssf::record::LbsDataSubRecord_LbsDropData::STYLE_COMBO_DROPDOWN;

constexpr int32_t poi::hssf::record::LbsDataSubRecord_LbsDropData::STYLE_COMBO_EDIT_DROPDOWN;

constexpr int32_t poi::hssf::record::LbsDataSubRecord_LbsDropData::STYLE_COMBO_SIMPLE_DROPDOWN;

void poi::hssf::record::LbsDataSubRecord_LbsDropData::ctor()
{
    super::ctor();
    _str = u""_j;
    _unused = ::java::lang::Byte::valueOf(int32_t(0));
}

void poi::hssf::record::LbsDataSubRecord_LbsDropData::ctor(::poi::util::LittleEndianInput* in)
{
    super::ctor();
    _wStyle = npc(in)->readUShort();
    _cLine = npc(in)->readUShort();
    _dxMin = npc(in)->readUShort();
    _str = ::poi::util::StringUtil::readUnicodeString(in);
    if(::poi::util::StringUtil::getEncodedSize(_str) % int32_t(2) != 0) {
        _unused = ::java::lang::Byte::valueOf(npc(in)->readByte());
    }
}

void poi::hssf::record::LbsDataSubRecord_LbsDropData::setStyle(int32_t style)
{
    _wStyle = style;
}

void poi::hssf::record::LbsDataSubRecord_LbsDropData::setNumLines(int32_t num)
{
    _cLine = num;
}

void poi::hssf::record::LbsDataSubRecord_LbsDropData::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_wStyle);
    npc(out)->writeShort(_cLine);
    npc(out)->writeShort(_dxMin);
    ::poi::util::StringUtil::writeUnicodeString(out, _str);
    if(_unused != nullptr) {
        npc(out)->writeByte((npc(_unused))->byteValue());
    }
}

int32_t poi::hssf::record::LbsDataSubRecord_LbsDropData::getDataSize()
{
    auto size = int32_t(6);
    size += ::poi::util::StringUtil::getEncodedSize(_str);
    if(_unused != nullptr) {
        size++;
    }
    return size;
}

java::lang::String* poi::hssf::record::LbsDataSubRecord_LbsDropData::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(u"[LbsDropData]\n"_j);
    npc(npc(npc(sb)->append(u"  ._wStyle:  "_j))->append(_wStyle))->append(u'\u000a');
    npc(npc(npc(sb)->append(u"  ._cLine:  "_j))->append(_cLine))->append(u'\u000a');
    npc(npc(npc(sb)->append(u"  ._dxMin:  "_j))->append(_dxMin))->append(u'\u000a');
    npc(npc(npc(sb)->append(u"  ._str:  "_j))->append(_str))->append(u'\u000a');
    if(_unused != nullptr) {
        npc(npc(npc(sb)->append(u"  ._unused:  "_j))->append(static_cast< ::java::lang::Object* >(_unused)))->append(u'\u000a');
    }
    npc(sb)->append(u"[/LbsDropData]\n"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::LbsDataSubRecord_LbsDropData::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.LbsDataSubRecord.LbsDropData", 55);
    return c;
}

java::lang::Class* poi::hssf::record::LbsDataSubRecord_LbsDropData::getClass0()
{
    return class_();
}

