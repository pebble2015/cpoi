// Generated from /POI/java/org/apache/poi/hssf/record/LbsDataSubRecord.java
#include <org/apache/poi/hssf/record/LbsDataSubRecord.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Byte.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/LbsDataSubRecord_LbsDropData.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace ptg
            {
typedef ::SubArray< ::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
            } // ptg
        } // formula
    } // ss
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::LbsDataSubRecord::LbsDataSubRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::LbsDataSubRecord::LbsDataSubRecord(::poi::util::LittleEndianInput* in, int32_t cbFContinued, int32_t cmoOt) 
    : LbsDataSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,cbFContinued,cmoOt);
}

poi::hssf::record::LbsDataSubRecord::LbsDataSubRecord() 
    : LbsDataSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t poi::hssf::record::LbsDataSubRecord::sid;

void poi::hssf::record::LbsDataSubRecord::ctor(::poi::util::LittleEndianInput* in, int32_t cbFContinued, int32_t cmoOt)
{
    super::ctor();
    _cbFContinued = cbFContinued;
    auto encodedTokenLen = npc(in)->readUShort();
    if(encodedTokenLen > 0) {
        auto formulaSize = npc(in)->readUShort();
        _unknownPreFormulaInt = npc(in)->readInt();
        auto ptgs = ::poi::ss::formula::ptg::Ptg::readTokens(formulaSize, in);
        if(npc(ptgs)->length != 1) {
            throw new ::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Read "_j)->append(npc(ptgs)->length)
                ->append(u" tokens but expected exactly 1"_j)->toString());
        }
        _linkPtg = (*ptgs)[int32_t(0)];
        switch (encodedTokenLen - formulaSize - int32_t(6)) {
        case int32_t(1):
            _unknownPostFormulaByte = ::java::lang::Byte::valueOf(npc(in)->readByte());
            break;
        case int32_t(0):
            _unknownPostFormulaByte = nullptr;
            break;
        default:
            throw new ::poi::util::RecordFormatException(u"Unexpected leftover bytes"_j);
        }

    }
    _cLines = npc(in)->readUShort();
    _iSel = npc(in)->readUShort();
    _flags = npc(in)->readUShort();
    _idEdit = npc(in)->readUShort();
    if(cmoOt == 20) {
        _dropData = new LbsDataSubRecord_LbsDropData(in);
    }
    if((_flags & int32_t(2)) != 0) {
        _rgLines = new ::java::lang::StringArray(_cLines);
        for (auto i = int32_t(0); i < _cLines; i++) {
            _rgLines->set(i, ::poi::util::StringUtil::readUnicodeString(in));
        }
    }
    if(((_flags >> int32_t(4)) & int32_t(2)) != 0) {
        _bsels = new ::boolArray(_cLines);
        for (auto i = int32_t(0); i < _cLines; i++) {
            (*_bsels)[i] = npc(in)->readByte() == 1;
        }
    }
}

void poi::hssf::record::LbsDataSubRecord::ctor()
{
    super::ctor();
}

poi::hssf::record::LbsDataSubRecord* poi::hssf::record::LbsDataSubRecord::newAutoFilterInstance()
{
    clinit();
    auto lbs = new LbsDataSubRecord();
    npc(lbs)->_cbFContinued = 8174;
    npc(lbs)->_iSel = 0;
    npc(lbs)->_flags = 769;
    npc(lbs)->_dropData = new LbsDataSubRecord_LbsDropData();
    npc(npc(lbs)->_dropData)->_wStyle = LbsDataSubRecord_LbsDropData::STYLE_COMBO_SIMPLE_DROPDOWN;
    npc(npc(lbs)->_dropData)->_cLine = 8;
    return lbs;
}

bool poi::hssf::record::LbsDataSubRecord::isTerminating()
{
    return true;
}

int32_t poi::hssf::record::LbsDataSubRecord::getDataSize()
{
    auto result = int32_t(2);
    if(_linkPtg != nullptr) {
        result += 2;
        result += 4;
        result += npc(_linkPtg)->getSize();
        if(_unknownPostFormulaByte != nullptr) {
            result += 1;
        }
    }
    result += int32_t(4) * int32_t(2);
    if(_dropData != nullptr) {
        result += npc(_dropData)->getDataSize();
    }
    if(_rgLines != nullptr) {
        for(auto str : *npc(_rgLines)) {
            result += ::poi::util::StringUtil::getEncodedSize(str);
        }
    }
    if(_bsels != nullptr) {
        result += npc(_bsels)->length;
    }
    return result;
}

void poi::hssf::record::LbsDataSubRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(sid);
    npc(out)->writeShort(_cbFContinued);
    if(_linkPtg == nullptr) {
        npc(out)->writeShort(0);
    } else {
        auto formulaSize = npc(_linkPtg)->getSize();
        auto linkSize = formulaSize + int32_t(6);
        if(_unknownPostFormulaByte != nullptr) {
            linkSize++;
        }
        npc(out)->writeShort(linkSize);
        npc(out)->writeShort(formulaSize);
        npc(out)->writeInt(_unknownPreFormulaInt);
        npc(_linkPtg)->write(out);
        if(_unknownPostFormulaByte != nullptr) {
            npc(out)->writeByte(npc(_unknownPostFormulaByte)->intValue());
        }
    }
    npc(out)->writeShort(_cLines);
    npc(out)->writeShort(_iSel);
    npc(out)->writeShort(_flags);
    npc(out)->writeShort(_idEdit);
    if(_dropData != nullptr) {
        npc(_dropData)->serialize(out);
    }
    if(_rgLines != nullptr) {
        for(auto str : *npc(_rgLines)) {
            ::poi::util::StringUtil::writeUnicodeString(out, str);
        }
    }
    if(_bsels != nullptr) {
        for(auto val : *npc(_bsels)) {
            npc(out)->writeByte(val ? int32_t(1) : int32_t(0));
        }
    }
}

poi::hssf::record::LbsDataSubRecord* poi::hssf::record::LbsDataSubRecord::clone()
{
    return this;
}

java::lang::String* poi::hssf::record::LbsDataSubRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(256));
    npc(sb)->append(u"[ftLbsData]\n"_j);
    npc(npc(npc(sb)->append(u"    .unknownShort1 ="_j))->append(::poi::util::HexDump::shortToHex(_cbFContinued)))->append(u"\n"_j);
    npc(npc(sb)->append(u"    .formula        = "_j))->append(u'\u000a');
    if(_linkPtg != nullptr) {
        npc(npc(npc(sb)->append(static_cast< ::java::lang::Object* >(_linkPtg)))->append(npc(_linkPtg)->getRVAType()))->append(u'\u000a');
    }
    npc(npc(npc(sb)->append(u"    .nEntryCount   ="_j))->append(::poi::util::HexDump::shortToHex(_cLines)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .selEntryIx    ="_j))->append(::poi::util::HexDump::shortToHex(_iSel)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .style         ="_j))->append(::poi::util::HexDump::shortToHex(_flags)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .unknownShort10="_j))->append(::poi::util::HexDump::shortToHex(_idEdit)))->append(u"\n"_j);
    if(_dropData != nullptr) {
        npc(npc(sb)->append(u'\u000a'))->append(static_cast< ::java::lang::Object* >(_dropData));
    }
    npc(sb)->append(u"[/ftLbsData]\n"_j);
    return npc(sb)->toString();
}

poi::ss::formula::ptg::Ptg* poi::hssf::record::LbsDataSubRecord::getFormula()
{
    return _linkPtg;
}

int32_t poi::hssf::record::LbsDataSubRecord::getNumberOfItems()
{
    return _cLines;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::LbsDataSubRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.LbsDataSubRecord", 43);
    return c;
}

int8_tArray* poi::hssf::record::LbsDataSubRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::LbsDataSubRecord::getClass0()
{
    return class_();
}

