// Generated from /POI/java/org/apache/poi/hssf/record/HyperlinkRecord.java
#include <org/apache/poi/hssf/record/HyperlinkRecord.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/HyperlinkRecord_GUID.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/HexRead.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::HyperlinkRecord::HyperlinkRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::HyperlinkRecord::HyperlinkRecord() 
    : HyperlinkRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::HyperlinkRecord::HyperlinkRecord(RecordInputStream* in) 
    : HyperlinkRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::HyperlinkRecord::sid;

poi::util::POILogger*& poi::hssf::record::HyperlinkRecord::logger()
{
    clinit();
    return logger_;
}
poi::util::POILogger* poi::hssf::record::HyperlinkRecord::logger_;

constexpr int32_t poi::hssf::record::HyperlinkRecord::HLINK_URL;

constexpr int32_t poi::hssf::record::HyperlinkRecord::HLINK_ABS;

constexpr int32_t poi::hssf::record::HyperlinkRecord::HLINK_LABEL;

constexpr int32_t poi::hssf::record::HyperlinkRecord::HLINK_PLACE;

constexpr int32_t poi::hssf::record::HyperlinkRecord::HLINK_TARGET_FRAME;

constexpr int32_t poi::hssf::record::HyperlinkRecord::HLINK_UNC_PATH;

poi::hssf::record::HyperlinkRecord_GUID*& poi::hssf::record::HyperlinkRecord::STD_MONIKER()
{
    clinit();
    return STD_MONIKER_;
}
poi::hssf::record::HyperlinkRecord_GUID* poi::hssf::record::HyperlinkRecord::STD_MONIKER_;

poi::hssf::record::HyperlinkRecord_GUID*& poi::hssf::record::HyperlinkRecord::URL_MONIKER()
{
    clinit();
    return URL_MONIKER_;
}
poi::hssf::record::HyperlinkRecord_GUID* poi::hssf::record::HyperlinkRecord::URL_MONIKER_;

poi::hssf::record::HyperlinkRecord_GUID*& poi::hssf::record::HyperlinkRecord::FILE_MONIKER()
{
    clinit();
    return FILE_MONIKER_;
}
poi::hssf::record::HyperlinkRecord_GUID* poi::hssf::record::HyperlinkRecord::FILE_MONIKER_;

int8_tArray*& poi::hssf::record::HyperlinkRecord::URL_TAIL()
{
    clinit();
    return URL_TAIL_;
}
int8_tArray* poi::hssf::record::HyperlinkRecord::URL_TAIL_;

int8_tArray*& poi::hssf::record::HyperlinkRecord::FILE_TAIL()
{
    clinit();
    return FILE_TAIL_;
}
int8_tArray* poi::hssf::record::HyperlinkRecord::FILE_TAIL_;

int32_t& poi::hssf::record::HyperlinkRecord::TAIL_SIZE()
{
    clinit();
    return TAIL_SIZE_;
}
int32_t poi::hssf::record::HyperlinkRecord::TAIL_SIZE_;

void poi::hssf::record::HyperlinkRecord::ctor()
{
    super::ctor();
}

int32_t poi::hssf::record::HyperlinkRecord::getFirstColumn()
{
    return npc(_range)->getFirstColumn();
}

void poi::hssf::record::HyperlinkRecord::setFirstColumn(int32_t firstCol)
{
    npc(_range)->setFirstColumn(firstCol);
}

int32_t poi::hssf::record::HyperlinkRecord::getLastColumn()
{
    return npc(_range)->getLastColumn();
}

void poi::hssf::record::HyperlinkRecord::setLastColumn(int32_t lastCol)
{
    npc(_range)->setLastColumn(lastCol);
}

int32_t poi::hssf::record::HyperlinkRecord::getFirstRow()
{
    return npc(_range)->getFirstRow();
}

void poi::hssf::record::HyperlinkRecord::setFirstRow(int32_t firstRow)
{
    npc(_range)->setFirstRow(firstRow);
}

int32_t poi::hssf::record::HyperlinkRecord::getLastRow()
{
    return npc(_range)->getLastRow();
}

void poi::hssf::record::HyperlinkRecord::setLastRow(int32_t lastRow)
{
    npc(_range)->setLastRow(lastRow);
}

poi::hssf::record::HyperlinkRecord_GUID* poi::hssf::record::HyperlinkRecord::getGuid()
{
    return _guid;
}

poi::hssf::record::HyperlinkRecord_GUID* poi::hssf::record::HyperlinkRecord::getMoniker()
{
    return _moniker;
}

java::lang::String* poi::hssf::record::HyperlinkRecord::cleanString(::java::lang::String* s)
{
    clinit();
    if(s == nullptr) {
        return nullptr;
    }
    auto idx = npc(s)->indexOf(static_cast< int32_t >(char16_t(0x0000)));
    if(idx < 0) {
        return s;
    }
    return npc(s)->substring(0, idx);
}

java::lang::String* poi::hssf::record::HyperlinkRecord::appendNullTerm(::java::lang::String* s)
{
    clinit();
    if(s == nullptr) {
        return nullptr;
    }
    return ::java::lang::StringBuilder().append(s)->append(char16_t(0x0000))->toString();
}

java::lang::String* poi::hssf::record::HyperlinkRecord::getLabel()
{
    return cleanString(_label);
}

void poi::hssf::record::HyperlinkRecord::setLabel(::java::lang::String* label)
{
    _label = appendNullTerm(label);
}

java::lang::String* poi::hssf::record::HyperlinkRecord::getTargetFrame()
{
    return cleanString(_targetFrame);
}

java::lang::String* poi::hssf::record::HyperlinkRecord::getAddress()
{
    if((_linkOpts & HLINK_URL) != 0 && npc(FILE_MONIKER_)->equals(static_cast< ::java::lang::Object* >(_moniker))) {
        return cleanString(_address != nullptr ? _address : _shortFilename);
    } else if((_linkOpts & HLINK_PLACE) != 0) {
        return cleanString(_textMark);
    } else {
        return cleanString(_address);
    }
}

void poi::hssf::record::HyperlinkRecord::setAddress(::java::lang::String* address)
{
    if((_linkOpts & HLINK_URL) != 0 && npc(FILE_MONIKER_)->equals(static_cast< ::java::lang::Object* >(_moniker))) {
        _shortFilename = appendNullTerm(address);
    } else if((_linkOpts & HLINK_PLACE) != 0) {
        _textMark = appendNullTerm(address);
    } else {
        _address = appendNullTerm(address);
    }
}

java::lang::String* poi::hssf::record::HyperlinkRecord::getShortFilename()
{
    return cleanString(_shortFilename);
}

void poi::hssf::record::HyperlinkRecord::setShortFilename(::java::lang::String* shortFilename)
{
    _shortFilename = appendNullTerm(shortFilename);
}

java::lang::String* poi::hssf::record::HyperlinkRecord::getTextMark()
{
    return cleanString(_textMark);
}

void poi::hssf::record::HyperlinkRecord::setTextMark(::java::lang::String* textMark)
{
    _textMark = appendNullTerm(textMark);
}

int32_t poi::hssf::record::HyperlinkRecord::getLinkOptions()
{
    return _linkOpts;
}

int32_t poi::hssf::record::HyperlinkRecord::getLabelOptions()
{
    return 2;
}

int32_t poi::hssf::record::HyperlinkRecord::getFileOptions()
{
    return _fileOpts;
}

void poi::hssf::record::HyperlinkRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    _range = new ::poi::ss::util::CellRangeAddress(in);
    _guid = new HyperlinkRecord_GUID(in);
    auto streamVersion = npc(in)->readInt();
    if(streamVersion != 2) {
        throw new ::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Stream Version must be 0x2 but found "_j)->append(streamVersion)->toString());
    }
    _linkOpts = npc(in)->readInt();
    if((_linkOpts & HLINK_LABEL) != 0) {
        auto label_len = npc(in)->readInt();
        _label = npc(in)->readUnicodeLEString(label_len);
    }
    if((_linkOpts & HLINK_TARGET_FRAME) != 0) {
        auto len = npc(in)->readInt();
        _targetFrame = npc(in)->readUnicodeLEString(len);
    }
    if((_linkOpts & HLINK_URL) != 0 && (_linkOpts & HLINK_UNC_PATH) != 0) {
        _moniker = nullptr;
        auto nChars = npc(in)->readInt();
        _address = npc(in)->readUnicodeLEString(nChars);
    }
    if((_linkOpts & HLINK_URL) != 0 && (_linkOpts & HLINK_UNC_PATH) == 0) {
        _moniker = new HyperlinkRecord_GUID(in);
        if(npc(URL_MONIKER_)->equals(static_cast< ::java::lang::Object* >(_moniker))) {
            auto length = npc(in)->readInt();
            auto remaining = npc(in)->remaining();
            if(length == remaining) {
                auto nChars = length / int32_t(2);
                _address = npc(in)->readUnicodeLEString(nChars);
            } else {
                auto nChars = (length - TAIL_SIZE_) / int32_t(2);
                _address = npc(in)->readUnicodeLEString(nChars);
                _uninterpretedTail = readTail(URL_TAIL_, in);
            }
        } else if(npc(FILE_MONIKER_)->equals(static_cast< ::java::lang::Object* >(_moniker))) {
            _fileOpts = npc(in)->readShort();
            auto len = npc(in)->readInt();
            _shortFilename = ::poi::util::StringUtil::readCompressedUnicode(in, len);
            _uninterpretedTail = readTail(FILE_TAIL_, in);
            auto size = npc(in)->readInt();
            if(size > 0) {
                auto charDataSize = npc(in)->readInt();
                npc(in)->readUShort();
                _address = ::poi::util::StringUtil::readUnicodeLE(in, charDataSize / int32_t(2));
            } else {
                _address = nullptr;
            }
        } else if(npc(STD_MONIKER_)->equals(static_cast< ::java::lang::Object* >(_moniker))) {
            _fileOpts = npc(in)->readShort();
            auto len = npc(in)->readInt();
            auto path_bytes = new ::int8_tArray(len);
            npc(in)->readFully(path_bytes);
            _address = new ::java::lang::String(path_bytes, ::poi::util::StringUtil::UTF8());
        }
    }
    if((_linkOpts & HLINK_PLACE) != 0) {
        auto len = npc(in)->readInt();
        _textMark = npc(in)->readUnicodeLEString(len);
    }
    if(npc(in)->remaining() > 0) {
        npc(logger_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Hyperlink data remains: "_j)->append(npc(in)->remaining())
            ->append(u" : "_j)
            ->append(::poi::util::HexDump::toHex(npc(in)->readRemainder()))->toString())}));
    }
}

void poi::hssf::record::HyperlinkRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(_range)->serialize(out);
    npc(_guid)->serialize(out);
    npc(out)->writeInt(2);
    npc(out)->writeInt(_linkOpts);
    if((_linkOpts & HLINK_LABEL) != 0) {
        npc(out)->writeInt(npc(_label)->length());
        ::poi::util::StringUtil::putUnicodeLE(_label, out);
    }
    if((_linkOpts & HLINK_TARGET_FRAME) != 0) {
        npc(out)->writeInt(npc(_targetFrame)->length());
        ::poi::util::StringUtil::putUnicodeLE(_targetFrame, out);
    }
    if((_linkOpts & HLINK_URL) != 0 && (_linkOpts & HLINK_UNC_PATH) != 0) {
        npc(out)->writeInt(npc(_address)->length());
        ::poi::util::StringUtil::putUnicodeLE(_address, out);
    }
    if((_linkOpts & HLINK_URL) != 0 && (_linkOpts & HLINK_UNC_PATH) == 0) {
        npc(_moniker)->serialize(out);
        if(npc(URL_MONIKER_)->equals(static_cast< ::java::lang::Object* >(_moniker))) {
            if(_uninterpretedTail == nullptr) {
                npc(out)->writeInt(npc(_address)->length() * int32_t(2));
                ::poi::util::StringUtil::putUnicodeLE(_address, out);
            } else {
                npc(out)->writeInt(npc(_address)->length() * int32_t(2) + TAIL_SIZE_);
                ::poi::util::StringUtil::putUnicodeLE(_address, out);
                writeTail(_uninterpretedTail, out);
            }
        } else if(npc(FILE_MONIKER_)->equals(static_cast< ::java::lang::Object* >(_moniker))) {
            npc(out)->writeShort(_fileOpts);
            npc(out)->writeInt(npc(_shortFilename)->length());
            ::poi::util::StringUtil::putCompressedUnicode(_shortFilename, out);
            writeTail(_uninterpretedTail, out);
            if(_address == nullptr) {
                npc(out)->writeInt(0);
            } else {
                auto addrLen = npc(_address)->length() * int32_t(2);
                npc(out)->writeInt(addrLen + int32_t(6));
                npc(out)->writeInt(addrLen);
                npc(out)->writeShort(3);
                ::poi::util::StringUtil::putUnicodeLE(_address, out);
            }
        }
    }
    if((_linkOpts & HLINK_PLACE) != 0) {
        npc(out)->writeInt(npc(_textMark)->length());
        ::poi::util::StringUtil::putUnicodeLE(_textMark, out);
    }
}

int32_t poi::hssf::record::HyperlinkRecord::getDataSize()
{
    auto size = int32_t(0);
    size += int32_t(2) + int32_t(2) + int32_t(2)+ int32_t(2);
    size += HyperlinkRecord_GUID::ENCODED_SIZE;
    size += 4;
    size += 4;
    if((_linkOpts & HLINK_LABEL) != 0) {
        size += 4;
        size += npc(_label)->length() * int32_t(2);
    }
    if((_linkOpts & HLINK_TARGET_FRAME) != 0) {
        size += 4;
        size += npc(_targetFrame)->length() * int32_t(2);
    }
    if((_linkOpts & HLINK_URL) != 0 && (_linkOpts & HLINK_UNC_PATH) != 0) {
        size += 4;
        size += npc(_address)->length() * int32_t(2);
    }
    if((_linkOpts & HLINK_URL) != 0 && (_linkOpts & HLINK_UNC_PATH) == 0) {
        size += HyperlinkRecord_GUID::ENCODED_SIZE;
        if(npc(URL_MONIKER_)->equals(static_cast< ::java::lang::Object* >(_moniker))) {
            size += 4;
            size += npc(_address)->length() * int32_t(2);
            if(_uninterpretedTail != nullptr) {
                size += TAIL_SIZE_;
            }
        } else if(npc(FILE_MONIKER_)->equals(static_cast< ::java::lang::Object* >(_moniker))) {
            size += 2;
            size += 4;
            size += npc(_shortFilename)->length();
            size += TAIL_SIZE_;
            size += 4;
            if(_address != nullptr) {
                size += 6;
                size += npc(_address)->length() * int32_t(2);
            }
        }
    }
    if((_linkOpts & HLINK_PLACE) != 0) {
        size += 4;
        size += npc(_textMark)->length() * int32_t(2);
    }
    return size;
}

int8_tArray* poi::hssf::record::HyperlinkRecord::readTail(::int8_tArray* expectedTail, ::poi::util::LittleEndianInput* in)
{
    clinit();
    auto result = new ::int8_tArray(TAIL_SIZE_);
    npc(in)->readFully(result);
    return result;
}

void poi::hssf::record::HyperlinkRecord::writeTail(::int8_tArray* tail, ::poi::util::LittleEndianOutput* out)
{
    clinit();
    npc(out)->write(tail);
}

int16_t poi::hssf::record::HyperlinkRecord::getSid()
{
    return HyperlinkRecord::sid;
}

java::lang::String* poi::hssf::record::HyperlinkRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[HYPERLINK RECORD]\n"_j);
    npc(npc(npc(buffer)->append(u"    .range   = "_j))->append(npc(_range)->formatAsString()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .guid    = "_j))->append(npc(_guid)->formatAsString()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .linkOpts= "_j))->append(::poi::util::HexDump::intToHex(_linkOpts)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .label   = "_j))->append(getLabel()))->append(u"\n"_j);
    if((_linkOpts & HLINK_TARGET_FRAME) != 0) {
        npc(npc(npc(buffer)->append(u"    .targetFrame= "_j))->append(getTargetFrame()))->append(u"\n"_j);
    }
    if((_linkOpts & HLINK_URL) != 0 && _moniker != nullptr) {
        npc(npc(npc(buffer)->append(u"    .moniker   = "_j))->append(npc(_moniker)->formatAsString()))->append(u"\n"_j);
    }
    if((_linkOpts & HLINK_PLACE) != 0) {
        npc(npc(npc(buffer)->append(u"    .textMark= "_j))->append(getTextMark()))->append(u"\n"_j);
    }
    npc(npc(npc(buffer)->append(u"    .address   = "_j))->append(getAddress()))->append(u"\n"_j);
    npc(buffer)->append(u"[/HYPERLINK RECORD]\n"_j);
    return npc(buffer)->toString();
}

bool poi::hssf::record::HyperlinkRecord::isUrlLink()
{
    return (_linkOpts & HLINK_URL) > 0 && (_linkOpts & HLINK_ABS) > 0;
}

bool poi::hssf::record::HyperlinkRecord::isFileLink()
{
    return (_linkOpts & HLINK_URL) > 0 && (_linkOpts & HLINK_ABS) == 0;
}

bool poi::hssf::record::HyperlinkRecord::isDocumentLink()
{
    return (_linkOpts & HLINK_PLACE) > 0;
}

void poi::hssf::record::HyperlinkRecord::newUrlLink()
{
    _range = new ::poi::ss::util::CellRangeAddress(int32_t(0), int32_t(0), int32_t(0), int32_t(0));
    _guid = STD_MONIKER_;
    _linkOpts = HLINK_URL | HLINK_ABS | HLINK_LABEL;
    setLabel(u""_j);
    _moniker = URL_MONIKER_;
    setAddress(u""_j);
    _uninterpretedTail = URL_TAIL_;
}

void poi::hssf::record::HyperlinkRecord::newFileLink()
{
    _range = new ::poi::ss::util::CellRangeAddress(int32_t(0), int32_t(0), int32_t(0), int32_t(0));
    _guid = STD_MONIKER_;
    _linkOpts = HLINK_URL | HLINK_LABEL;
    _fileOpts = 0;
    setLabel(u""_j);
    _moniker = FILE_MONIKER_;
    setAddress(nullptr);
    setShortFilename(u""_j);
    _uninterpretedTail = FILE_TAIL_;
}

void poi::hssf::record::HyperlinkRecord::newDocumentLink()
{
    _range = new ::poi::ss::util::CellRangeAddress(int32_t(0), int32_t(0), int32_t(0), int32_t(0));
    _guid = STD_MONIKER_;
    _linkOpts = HLINK_LABEL | HLINK_PLACE;
    setLabel(u""_j);
    _moniker = FILE_MONIKER_;
    setAddress(u""_j);
    setTextMark(u""_j);
}

poi::hssf::record::HyperlinkRecord* poi::hssf::record::HyperlinkRecord::clone()
{
    auto rec = new HyperlinkRecord();
    npc(rec)->_range = npc(_range)->copy();
    npc(rec)->_guid = _guid;
    npc(rec)->_linkOpts = _linkOpts;
    npc(rec)->_fileOpts = _fileOpts;
    npc(rec)->_label = _label;
    npc(rec)->_address = _address;
    npc(rec)->_moniker = _moniker;
    npc(rec)->_shortFilename = _shortFilename;
    npc(rec)->_targetFrame = _targetFrame;
    npc(rec)->_textMark = _textMark;
    npc(rec)->_uninterpretedTail = _uninterpretedTail;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::HyperlinkRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.HyperlinkRecord", 42);
    return c;
}

void poi::hssf::record::HyperlinkRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(HyperlinkRecord::class_()));
        STD_MONIKER_ = HyperlinkRecord_GUID::parse(u"79EAC9D0-BAF9-11CE-8C82-00AA004BA90B"_j);
        URL_MONIKER_ = HyperlinkRecord_GUID::parse(u"79EAC9E0-BAF9-11CE-8C82-00AA004BA90B"_j);
        FILE_MONIKER_ = HyperlinkRecord_GUID::parse(u"00000303-0000-0000-C000-000000000046"_j);
        URL_TAIL_ = ::poi::util::HexRead::readFromString(u"79 58 81 F4  3B 1D 7F 48   AF 2C 82 5D  C4 85 27 63   00 00 00 00  A5 AB 00 00"_j);
        FILE_TAIL_ = ::poi::util::HexRead::readFromString(u"FF FF AD DE  00 00 00 00   00 00 00 00  00 00 00 00   00 00 00 00  00 00 00 00"_j);
        TAIL_SIZE_ = npc(FILE_TAIL_)->length;
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::HyperlinkRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::HyperlinkRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::HyperlinkRecord::getClass0()
{
    return class_();
}

