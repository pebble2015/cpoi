// Generated from /POI/java/org/apache/poi/hssf/record/TextObjectRecord.java
#include <org/apache/poi/hssf/record/TextObjectRecord.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Byte.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/cont/ContinuableRecordOutput.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFRichTextString.hpp>
#include <org/apache/poi/ss/formula/ptg/OperandPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
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

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::TextObjectRecord::TextObjectRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::TextObjectRecord::TextObjectRecord() 
    : TextObjectRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::TextObjectRecord::TextObjectRecord(RecordInputStream* in) 
    : TextObjectRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::TextObjectRecord::sid;

constexpr int32_t poi::hssf::record::TextObjectRecord::FORMAT_RUN_ENCODED_SIZE;

poi::util::BitField*& poi::hssf::record::TextObjectRecord::HorizontalTextAlignment()
{
    clinit();
    return HorizontalTextAlignment_;
}
poi::util::BitField* poi::hssf::record::TextObjectRecord::HorizontalTextAlignment_;

poi::util::BitField*& poi::hssf::record::TextObjectRecord::VerticalTextAlignment()
{
    clinit();
    return VerticalTextAlignment_;
}
poi::util::BitField* poi::hssf::record::TextObjectRecord::VerticalTextAlignment_;

poi::util::BitField*& poi::hssf::record::TextObjectRecord::textLocked()
{
    clinit();
    return textLocked_;
}
poi::util::BitField* poi::hssf::record::TextObjectRecord::textLocked_;

constexpr int16_t poi::hssf::record::TextObjectRecord::HORIZONTAL_TEXT_ALIGNMENT_LEFT_ALIGNED;

constexpr int16_t poi::hssf::record::TextObjectRecord::HORIZONTAL_TEXT_ALIGNMENT_CENTERED;

constexpr int16_t poi::hssf::record::TextObjectRecord::HORIZONTAL_TEXT_ALIGNMENT_RIGHT_ALIGNED;

constexpr int16_t poi::hssf::record::TextObjectRecord::HORIZONTAL_TEXT_ALIGNMENT_JUSTIFIED;

constexpr int16_t poi::hssf::record::TextObjectRecord::VERTICAL_TEXT_ALIGNMENT_TOP;

constexpr int16_t poi::hssf::record::TextObjectRecord::VERTICAL_TEXT_ALIGNMENT_CENTER;

constexpr int16_t poi::hssf::record::TextObjectRecord::VERTICAL_TEXT_ALIGNMENT_BOTTOM;

constexpr int16_t poi::hssf::record::TextObjectRecord::VERTICAL_TEXT_ALIGNMENT_JUSTIFY;

constexpr int16_t poi::hssf::record::TextObjectRecord::TEXT_ORIENTATION_NONE;

constexpr int16_t poi::hssf::record::TextObjectRecord::TEXT_ORIENTATION_TOP_TO_BOTTOM;

constexpr int16_t poi::hssf::record::TextObjectRecord::TEXT_ORIENTATION_ROT_RIGHT;

constexpr int16_t poi::hssf::record::TextObjectRecord::TEXT_ORIENTATION_ROT_LEFT;

void poi::hssf::record::TextObjectRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::TextObjectRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_options = npc(in)->readUShort();
    field_2_textOrientation = npc(in)->readUShort();
    field_3_reserved4 = npc(in)->readUShort();
    field_4_reserved5 = npc(in)->readUShort();
    field_5_reserved6 = npc(in)->readUShort();
    auto field_6_textLength = npc(in)->readUShort();
    auto field_7_formattingDataLength = npc(in)->readUShort();
    field_8_reserved7 = npc(in)->readInt();
    if(npc(in)->remaining() > 0) {
        if(npc(in)->remaining() < 11) {
            throw new ::poi::util::RecordFormatException(u"Not enough remaining data for a link formula"_j);
        }
        auto formulaSize = npc(in)->readUShort();
        _unknownPreFormulaInt = npc(in)->readInt();
        auto ptgs = ::poi::ss::formula::ptg::Ptg::readTokens(formulaSize, in);
        if(npc(ptgs)->length != 1) {
            throw new ::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Read "_j)->append(npc(ptgs)->length)
                ->append(u" tokens but expected exactly 1"_j)->toString());
        }
        _linkRefPtg = java_cast< ::poi::ss::formula::ptg::OperandPtg* >((*ptgs)[int32_t(0)]);
        if(npc(in)->remaining() > 0) {
            _unknownPostFormulaByte = ::java::lang::Byte::valueOf(npc(in)->readByte());
        } else {
            _unknownPostFormulaByte = nullptr;
        }
    } else {
        _linkRefPtg = nullptr;
    }
    if(npc(in)->remaining() > 0) {
        throw new ::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Unused "_j)->append(npc(in)->remaining())
            ->append(u" bytes at end of record"_j)->toString());
    }
    ::java::lang::String* text;
    if(field_6_textLength > 0) {
        text = readRawString(in, field_6_textLength);
    } else {
        text = u""_j;
    }
    _text = new ::poi::hssf::usermodel::HSSFRichTextString(text);
    if(field_7_formattingDataLength > 0) {
        processFontRuns(in, _text, field_7_formattingDataLength);
    }
}

java::lang::String* poi::hssf::record::TextObjectRecord::readRawString(RecordInputStream* in, int32_t textLength)
{
    clinit();
    auto compressByte = npc(in)->readByte();
    auto isCompressed = (compressByte & int32_t(1)) == 0;
    if(isCompressed) {
        return npc(in)->readCompressedUnicode(textLength);
    }
    return npc(in)->readUnicodeLEString(textLength);
}

void poi::hssf::record::TextObjectRecord::processFontRuns(RecordInputStream* in, ::poi::hssf::usermodel::HSSFRichTextString* str, int32_t formattingRunDataLength)
{
    clinit();
    if(formattingRunDataLength % FORMAT_RUN_ENCODED_SIZE != 0) {
        throw new ::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Bad format run data length "_j)->append(formattingRunDataLength)
            ->append(u")"_j)->toString());
    }
    auto nRuns = formattingRunDataLength / FORMAT_RUN_ENCODED_SIZE;
    for (auto i = int32_t(0); i < nRuns; i++) {
        auto index = npc(in)->readShort();
        auto iFont = npc(in)->readShort();
        npc(in)->readInt();
        npc(str)->applyFont(static_cast< int32_t >(index), npc(str)->length(), iFont);
    }
}

int16_t poi::hssf::record::TextObjectRecord::getSid()
{
    return sid;
}

void poi::hssf::record::TextObjectRecord::serializeTXORecord(::poi::hssf::record::cont::ContinuableRecordOutput* out)
{
    npc(out)->writeShort(field_1_options);
    npc(out)->writeShort(field_2_textOrientation);
    npc(out)->writeShort(field_3_reserved4);
    npc(out)->writeShort(field_4_reserved5);
    npc(out)->writeShort(field_5_reserved6);
    npc(out)->writeShort(npc(_text)->length());
    npc(out)->writeShort(getFormattingDataLength());
    npc(out)->writeInt(field_8_reserved7);
    if(_linkRefPtg != nullptr) {
        auto formulaSize = npc(_linkRefPtg)->getSize();
        npc(out)->writeShort(formulaSize);
        npc(out)->writeInt(_unknownPreFormulaInt);
        npc(_linkRefPtg)->write(out);
        if(_unknownPostFormulaByte != nullptr) {
            npc(out)->writeByte(static_cast< int32_t >(npc(_unknownPostFormulaByte)->byteValue()));
        }
    }
}

void poi::hssf::record::TextObjectRecord::serializeTrailingRecords(::poi::hssf::record::cont::ContinuableRecordOutput* out)
{
    npc(out)->writeContinue();
    npc(out)->writeStringData(npc(_text)->getString());
    npc(out)->writeContinue();
    writeFormatData(out, _text);
}

void poi::hssf::record::TextObjectRecord::serialize(::poi::hssf::record::cont::ContinuableRecordOutput* out)
{
    serializeTXORecord(out);
    if(npc(npc(_text)->getString())->length() > 0) {
        serializeTrailingRecords(out);
    }
}

int32_t poi::hssf::record::TextObjectRecord::getFormattingDataLength()
{
    if(npc(_text)->length() < 1) {
        return 0;
    }
    return (npc(_text)->numFormattingRuns() + int32_t(1)) * FORMAT_RUN_ENCODED_SIZE;
}

void poi::hssf::record::TextObjectRecord::writeFormatData(::poi::hssf::record::cont::ContinuableRecordOutput* out, ::poi::hssf::usermodel::HSSFRichTextString* str)
{
    clinit();
    auto nRuns = npc(str)->numFormattingRuns();
    for (auto i = int32_t(0); i < nRuns; i++) {
        npc(out)->writeShort(npc(str)->getIndexOfFormattingRun(i));
        int32_t fontIndex = npc(str)->getFontOfFormattingRun(i);
        npc(out)->writeShort(fontIndex == ::poi::hssf::usermodel::HSSFRichTextString::NO_FONT ? int32_t(0) : fontIndex);
        npc(out)->writeInt(int32_t(0));
    }
    npc(out)->writeShort(npc(str)->length());
    npc(out)->writeShort(int32_t(0));
    npc(out)->writeInt(int32_t(0));
}

void poi::hssf::record::TextObjectRecord::setHorizontalTextAlignment(int32_t value)
{
    field_1_options = npc(HorizontalTextAlignment_)->setValue(field_1_options, value);
}

int32_t poi::hssf::record::TextObjectRecord::getHorizontalTextAlignment()
{
    return npc(HorizontalTextAlignment_)->getValue(field_1_options);
}

void poi::hssf::record::TextObjectRecord::setVerticalTextAlignment(int32_t value)
{
    field_1_options = npc(VerticalTextAlignment_)->setValue(field_1_options, value);
}

int32_t poi::hssf::record::TextObjectRecord::getVerticalTextAlignment()
{
    return npc(VerticalTextAlignment_)->getValue(field_1_options);
}

void poi::hssf::record::TextObjectRecord::setTextLocked(bool value)
{
    field_1_options = npc(textLocked_)->setBoolean(field_1_options, value);
}

bool poi::hssf::record::TextObjectRecord::isTextLocked()
{
    return npc(textLocked_)->isSet(field_1_options);
}

int32_t poi::hssf::record::TextObjectRecord::getTextOrientation()
{
    return field_2_textOrientation;
}

void poi::hssf::record::TextObjectRecord::setTextOrientation(int32_t textOrientation)
{
    this->field_2_textOrientation = textOrientation;
}

poi::hssf::usermodel::HSSFRichTextString* poi::hssf::record::TextObjectRecord::getStr()
{
    return _text;
}

void poi::hssf::record::TextObjectRecord::setStr(::poi::hssf::usermodel::HSSFRichTextString* str)
{
    _text = str;
}

poi::ss::formula::ptg::Ptg* poi::hssf::record::TextObjectRecord::getLinkRefPtg()
{
    return _linkRefPtg;
}

java::lang::String* poi::hssf::record::TextObjectRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(u"[TXO]\n"_j);
    npc(npc(npc(sb)->append(u"    .options        = "_j))->append(::poi::util::HexDump::shortToHex(field_1_options)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"         .isHorizontal = "_j))->append(getHorizontalTextAlignment()))->append(u'\u000a');
    npc(npc(npc(sb)->append(u"         .isVertical   = "_j))->append(getVerticalTextAlignment()))->append(u'\u000a');
    npc(npc(npc(sb)->append(u"         .textLocked   = "_j))->append(isTextLocked()))->append(u'\u000a');
    npc(npc(npc(sb)->append(u"    .textOrientation= "_j))->append(::poi::util::HexDump::shortToHex(getTextOrientation())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .reserved4      = "_j))->append(::poi::util::HexDump::shortToHex(field_3_reserved4)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .reserved5      = "_j))->append(::poi::util::HexDump::shortToHex(field_4_reserved5)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .reserved6      = "_j))->append(::poi::util::HexDump::shortToHex(field_5_reserved6)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .textLength     = "_j))->append(::poi::util::HexDump::shortToHex(npc(_text)->length())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .reserved7      = "_j))->append(::poi::util::HexDump::intToHex(field_8_reserved7)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .string = "_j))->append(static_cast< ::java::lang::Object* >(_text)))->append(u'\u000a');
    for (auto i = int32_t(0); i < npc(_text)->numFormattingRuns(); i++) {
        npc(npc(npc(sb)->append(u"    .textrun = "_j))->append(static_cast< int32_t >(npc(_text)->getFontOfFormattingRun(i))))->append(u'\u000a');
    }
    npc(sb)->append(u"[/TXO]\n"_j);
    return npc(sb)->toString();
}

java::lang::Object* poi::hssf::record::TextObjectRecord::clone()
{
    auto rec = new TextObjectRecord();
    npc(rec)->_text = _text;
    npc(rec)->field_1_options = field_1_options;
    npc(rec)->field_2_textOrientation = field_2_textOrientation;
    npc(rec)->field_3_reserved4 = field_3_reserved4;
    npc(rec)->field_4_reserved5 = field_4_reserved5;
    npc(rec)->field_5_reserved6 = field_5_reserved6;
    npc(rec)->field_8_reserved7 = field_8_reserved7;
    npc(rec)->_text = _text;
    if(_linkRefPtg != nullptr) {
        npc(rec)->_unknownPreFormulaInt = _unknownPreFormulaInt;
        npc(rec)->_linkRefPtg = npc(_linkRefPtg)->copy();
        npc(rec)->_unknownPostFormulaByte = _unknownPostFormulaByte;
    }
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::TextObjectRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.TextObjectRecord", 43);
    return c;
}

void poi::hssf::record::TextObjectRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        HorizontalTextAlignment_ = ::poi::util::BitFieldFactory::getInstance(14);
        VerticalTextAlignment_ = ::poi::util::BitFieldFactory::getInstance(112);
        textLocked_ = ::poi::util::BitFieldFactory::getInstance(512);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::TextObjectRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::TextObjectRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::TextObjectRecord::getClass0()
{
    return class_();
}

