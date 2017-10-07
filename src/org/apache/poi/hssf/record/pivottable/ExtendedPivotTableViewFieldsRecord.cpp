// Generated from /POI/java/org/apache/poi/hssf/record/pivottable/ExtendedPivotTableViewFieldsRecord.java
#include <org/apache/poi/hssf/record/pivottable/ExtendedPivotTableViewFieldsRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::pivottable::ExtendedPivotTableViewFieldsRecord::ExtendedPivotTableViewFieldsRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::pivottable::ExtendedPivotTableViewFieldsRecord::ExtendedPivotTableViewFieldsRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : ExtendedPivotTableViewFieldsRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::pivottable::ExtendedPivotTableViewFieldsRecord::sid;

constexpr int32_t org::apache::poi::hssf::record::pivottable::ExtendedPivotTableViewFieldsRecord::STRING_NOT_PRESENT_LEN;

void org::apache::poi::hssf::record::pivottable::ExtendedPivotTableViewFieldsRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    _grbit1 = npc(in)->readInt();
    _grbit2 = npc(in)->readUByte();
    _citmShow = npc(in)->readUByte();
    _isxdiSort = npc(in)->readUShort();
    _isxdiShow = npc(in)->readUShort();
    switch (npc(in)->remaining()) {
    case int32_t(0):
        _reserved1 = 0;
        _reserved2 = 0;
        _subtotalName = nullptr;
        return;
    case int32_t(10):
        break;
    default:
        throw new ::org::apache::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Unexpected remaining size ("_j)->append(npc(in)->remaining())
            ->append(u")"_j)->toString());
    }

    auto cchSubName = npc(in)->readUShort();
    _reserved1 = npc(in)->readInt();
    _reserved2 = npc(in)->readInt();
    if(cchSubName != STRING_NOT_PRESENT_LEN) {
        _subtotalName = npc(in)->readUnicodeLEString(cchSubName);
    }
}

void org::apache::poi::hssf::record::pivottable::ExtendedPivotTableViewFieldsRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeInt(_grbit1);
    npc(out)->writeByte(_grbit2);
    npc(out)->writeByte(_citmShow);
    npc(out)->writeShort(_isxdiSort);
    npc(out)->writeShort(_isxdiShow);
    if(_subtotalName == nullptr) {
        npc(out)->writeShort(STRING_NOT_PRESENT_LEN);
    } else {
        npc(out)->writeShort(npc(_subtotalName)->length());
    }
    npc(out)->writeInt(_reserved1);
    npc(out)->writeInt(_reserved2);
    if(_subtotalName != nullptr) {
        ::org::apache::poi::util::StringUtil::putUnicodeLE(_subtotalName, out);
    }
}

int32_t org::apache::poi::hssf::record::pivottable::ExtendedPivotTableViewFieldsRecord::getDataSize()
{
    return int32_t(4) + int32_t(1) + int32_t(1)+ int32_t(2)+ int32_t(2)+ int32_t(2)+ int32_t(4)+ int32_t(4)+ (_subtotalName == nullptr ? int32_t(0) : (int32_t(2) * npc(_subtotalName)->length()));
}

int16_t org::apache::poi::hssf::record::pivottable::ExtendedPivotTableViewFieldsRecord::getSid()
{
    return sid;
}

java::lang::String* org::apache::poi::hssf::record::pivottable::ExtendedPivotTableViewFieldsRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[SXVDEX]\n"_j);
    npc(npc(npc(buffer)->append(u"    .grbit1 ="_j))->append(::org::apache::poi::util::HexDump::intToHex(_grbit1)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .grbit2 ="_j))->append(::org::apache::poi::util::HexDump::byteToHex(_grbit2)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .citmShow ="_j))->append(::org::apache::poi::util::HexDump::byteToHex(_citmShow)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .isxdiSort ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(_isxdiSort)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .isxdiShow ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(_isxdiShow)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .subtotalName ="_j))->append(_subtotalName))->append(u"\n"_j);
    npc(buffer)->append(u"[/SXVDEX]\n"_j);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::pivottable::ExtendedPivotTableViewFieldsRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.pivottable.ExtendedPivotTableViewFieldsRecord", 72);
    return c;
}

int32_t org::apache::poi::hssf::record::pivottable::ExtendedPivotTableViewFieldsRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::pivottable::ExtendedPivotTableViewFieldsRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::pivottable::ExtendedPivotTableViewFieldsRecord::getClass0()
{
    return class_();
}

