// Generated from /POI/java/org/apache/poi/hssf/record/EmbeddedObjectRefSubRecord.java
#include <org/apache/poi/hssf/record/EmbeddedObjectRefSubRecord.hpp>

#include <java/io/ByteArrayInputStream.hpp>
#include <java/lang/Byte.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/ptg/Area3DPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ref3DPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/RefPtg.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianInputStream.hpp>
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

org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::EmbeddedObjectRefSubRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::EmbeddedObjectRefSubRecord() 
    : EmbeddedObjectRefSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::EmbeddedObjectRefSubRecord(::org::apache::poi::util::LittleEndianInput* in, int32_t size) 
    : EmbeddedObjectRefSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,size);
}

org::apache::poi::util::POILogger*& org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::logger()
{
    clinit();
    return logger_;
}
org::apache::poi::util::POILogger* org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::logger_;

constexpr int16_t org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::sid;

int8_tArray*& org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::EMPTY_BYTE_ARRAY()
{
    clinit();
    return EMPTY_BYTE_ARRAY_;
}
int8_tArray* org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::EMPTY_BYTE_ARRAY_;

void org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::ctor()
{
    super::ctor();
    field_2_unknownFormulaData = new ::int8_tArray({
        static_cast< int8_t >(int32_t(2))
        , static_cast< int8_t >(int32_t(108))
        , static_cast< int8_t >(int32_t(106))
        , static_cast< int8_t >(int32_t(22))
        , static_cast< int8_t >(int32_t(1))
    });
    field_6_unknown = EMPTY_BYTE_ARRAY_;
    field_4_ole_classname = nullptr;
}

int16_t org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::getSid()
{
    return sid;
}

void org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::ctor(::org::apache::poi::util::LittleEndianInput* in, int32_t size)
{
    super::ctor();
    int32_t streamIdOffset = npc(in)->readShort();
    auto remaining = size - ::org::apache::poi::util::LittleEndian::SHORT_SIZE;
    auto dataLenAfterFormula = remaining - streamIdOffset;
    auto formulaSize = npc(in)->readUShort();
    remaining -= ::org::apache::poi::util::LittleEndian::SHORT_SIZE;
    field_1_unknown_int = npc(in)->readInt();
    remaining -= ::org::apache::poi::util::LittleEndian::INT_SIZE;
    auto formulaRawBytes = readRawData(in, formulaSize);
    remaining -= formulaSize;
    field_2_refPtg = readRefPtg(formulaRawBytes);
    if(field_2_refPtg == nullptr) {
        field_2_unknownFormulaData = formulaRawBytes;
    } else {
        field_2_unknownFormulaData = nullptr;
    }
    int32_t stringByteCount;
    if(remaining >= dataLenAfterFormula + int32_t(3)) {
        int32_t tag = npc(in)->readByte();
        stringByteCount = ::org::apache::poi::util::LittleEndian::BYTE_SIZE;
        if(tag != 3) {
            throw new ::org::apache::poi::util::RecordFormatException(u"Expected byte 0x03 here"_j);
        }
        auto nChars = npc(in)->readUShort();
        stringByteCount += ::org::apache::poi::util::LittleEndian::SHORT_SIZE;
        if(nChars > 0) {
            field_3_unicode_flag = (npc(in)->readByte() & int32_t(1)) != 0;
            stringByteCount += ::org::apache::poi::util::LittleEndian::BYTE_SIZE;
            if(field_3_unicode_flag) {
                field_4_ole_classname = ::org::apache::poi::util::StringUtil::readUnicodeLE(in, nChars);
                stringByteCount += nChars * int32_t(2);
            } else {
                field_4_ole_classname = ::org::apache::poi::util::StringUtil::readCompressedUnicode(in, nChars);
                stringByteCount += nChars;
            }
        } else {
            field_4_ole_classname = u""_j;
        }
    } else {
        field_4_ole_classname = nullptr;
        stringByteCount = 0;
    }
    remaining -= stringByteCount;
    if(((stringByteCount + formulaSize) % int32_t(2)) != 0) {
        int32_t b = npc(in)->readByte();
        remaining -= ::org::apache::poi::util::LittleEndian::BYTE_SIZE;
        if(field_2_refPtg != nullptr && field_4_ole_classname == nullptr) {
            field_4_unknownByte = ::java::lang::Byte::valueOf(static_cast< int8_t >(b));
        }
    }
    auto nUnexpectedPadding = remaining - dataLenAfterFormula;
    if(nUnexpectedPadding > 0) {
        npc(logger_)->log(::org::apache::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Discarding "_j)->append(nUnexpectedPadding)
            ->append(u" unexpected padding bytes "_j)->toString())}));
        readRawData(in, nUnexpectedPadding);
        remaining -= nUnexpectedPadding;
    }
    if(dataLenAfterFormula >= 4) {
        field_5_stream_id = ::java::lang::Integer::valueOf(npc(in)->readInt());
        remaining -= ::org::apache::poi::util::LittleEndian::INT_SIZE;
    } else {
        field_5_stream_id = nullptr;
    }
    field_6_unknown = readRawData(in, remaining);
}

org::apache::poi::ss::formula::ptg::Ptg* org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::readRefPtg(::int8_tArray* formulaRawBytes)
{
    clinit();
    ::org::apache::poi::util::LittleEndianInput* in = new ::org::apache::poi::util::LittleEndianInputStream(new ::java::io::ByteArrayInputStream(formulaRawBytes));
    auto ptgSid = npc(in)->readByte();
    switch (ptgSid) {
    case ::org::apache::poi::ss::formula::ptg::AreaPtg::sid:
        return new ::org::apache::poi::ss::formula::ptg::AreaPtg(in);
    case ::org::apache::poi::ss::formula::ptg::Area3DPtg::sid:
        return new ::org::apache::poi::ss::formula::ptg::Area3DPtg(in);
    case ::org::apache::poi::ss::formula::ptg::RefPtg::sid:
        return new ::org::apache::poi::ss::formula::ptg::RefPtg(in);
    case ::org::apache::poi::ss::formula::ptg::Ref3DPtg::sid:
        return new ::org::apache::poi::ss::formula::ptg::Ref3DPtg(in);
    }

    return nullptr;
}

int8_tArray* org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::readRawData(::org::apache::poi::util::LittleEndianInput* in, int32_t size)
{
    clinit();
    if(size < 0) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Negative size ("_j)->append(size)
            ->append(u")"_j)->toString());
    }
    if(size == 0) {
        return EMPTY_BYTE_ARRAY_;
    }
    auto result = new ::int8_tArray(size);
    npc(in)->readFully(result);
    return result;
}

int32_t org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::getStreamIDOffset(int32_t formulaSize)
{
    auto result = int32_t(2) + int32_t(4);
    result += formulaSize;
    int32_t stringLen;
    if(field_4_ole_classname == nullptr) {
        stringLen = 0;
    } else {
        result += int32_t(1) + int32_t(2);
        stringLen = npc(field_4_ole_classname)->length();
        if(stringLen > 0) {
            result += 1;
            if(field_3_unicode_flag) {
                result += stringLen * int32_t(2);
            } else {
                result += stringLen;
            }
        }
    }
    if((result % int32_t(2)) != 0) {
        result++;
    }
    return result;
}

int32_t org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::getDataSize(int32_t idOffset)
{
    auto result = int32_t(2) + idOffset;
    if(field_5_stream_id != nullptr) {
        result += 4;
    }
    return result + npc(field_6_unknown)->length;
}

int32_t org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::getDataSize()
{
    auto formulaSize = field_2_refPtg == nullptr ? npc(field_2_unknownFormulaData)->length : npc(field_2_refPtg)->getSize();
    auto idOffset = getStreamIDOffset(formulaSize);
    return getDataSize(idOffset);
}

void org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    auto formulaSize = field_2_refPtg == nullptr ? npc(field_2_unknownFormulaData)->length : npc(field_2_refPtg)->getSize();
    auto idOffset = getStreamIDOffset(formulaSize);
    auto dataSize = getDataSize(idOffset);
    npc(out)->writeShort(sid);
    npc(out)->writeShort(dataSize);
    npc(out)->writeShort(idOffset);
    npc(out)->writeShort(formulaSize);
    npc(out)->writeInt(field_1_unknown_int);
    auto pos = int32_t(12);
    if(field_2_refPtg == nullptr) {
        npc(out)->write(field_2_unknownFormulaData);
    } else {
        npc(field_2_refPtg)->write(out);
    }
    pos += formulaSize;
    int32_t stringLen;
    if(field_4_ole_classname == nullptr) {
        stringLen = 0;
    } else {
        npc(out)->writeByte(3);
        pos += 1;
        stringLen = npc(field_4_ole_classname)->length();
        npc(out)->writeShort(stringLen);
        pos += 2;
        if(stringLen > 0) {
            npc(out)->writeByte(field_3_unicode_flag ? int32_t(1) : int32_t(0));
            pos += 1;
            if(field_3_unicode_flag) {
                ::org::apache::poi::util::StringUtil::putUnicodeLE(field_4_ole_classname, out);
                pos += stringLen * int32_t(2);
            } else {
                ::org::apache::poi::util::StringUtil::putCompressedUnicode(field_4_ole_classname, out);
                pos += stringLen;
            }
        }
    }
    switch (idOffset - (pos - int32_t(6))) {
    case int32_t(1):
        npc(out)->writeByte(field_4_unknownByte == nullptr ? int32_t(0) : npc(field_4_unknownByte)->intValue());
        pos++;
        break;
    case int32_t(0):
        break;
    default:
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Bad padding calculation ("_j)->append(idOffset)
            ->append(u", "_j)
            ->append(pos)
            ->append(u")"_j)->toString());
    }

    if(field_5_stream_id != nullptr) {
        npc(out)->writeInt(npc(field_5_stream_id)->intValue());
        pos += 4;
    }
    npc(out)->write(field_6_unknown);
}

java::lang::Integer* org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::getStreamId()
{
    return field_5_stream_id;
}

java::lang::String* org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::getOLEClassName()
{
    return field_4_ole_classname;
}

int8_tArray* org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::getObjectData()
{
    return field_6_unknown;
}

org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord* org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::clone()
{
    return this;
}

java::lang::String* org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(u"[ftPictFmla]\n"_j);
    npc(npc(npc(sb)->append(u"    .f2unknown     = "_j))->append(::org::apache::poi::util::HexDump::intToHex(field_1_unknown_int)))->append(u"\n"_j);
    if(field_2_refPtg == nullptr) {
        npc(npc(npc(sb)->append(u"    .f3unknown     = "_j))->append(::org::apache::poi::util::HexDump::toHex(field_2_unknownFormulaData)))->append(u"\n"_j);
    } else {
        npc(npc(npc(sb)->append(u"    .formula       = "_j))->append(static_cast< ::java::lang::Object* >(field_2_refPtg)))->append(u"\n"_j);
    }
    if(field_4_ole_classname != nullptr) {
        npc(npc(npc(sb)->append(u"    .unicodeFlag   = "_j))->append(field_3_unicode_flag))->append(u"\n"_j);
        npc(npc(npc(sb)->append(u"    .oleClassname  = "_j))->append(field_4_ole_classname))->append(u"\n"_j);
    }
    if(field_4_unknownByte != nullptr) {
        npc(npc(npc(sb)->append(u"    .f4unknown   = "_j))->append(::org::apache::poi::util::HexDump::byteToHex(npc(field_4_unknownByte)->intValue())))->append(u"\n"_j);
    }
    if(field_5_stream_id != nullptr) {
        npc(npc(npc(sb)->append(u"    .streamId      = "_j))->append(::org::apache::poi::util::HexDump::intToHex(npc(field_5_stream_id)->intValue())))->append(u"\n"_j);
    }
    if(npc(field_6_unknown)->length > 0) {
        npc(npc(npc(sb)->append(u"    .f7unknown     = "_j))->append(::org::apache::poi::util::HexDump::toHex(field_6_unknown)))->append(u"\n"_j);
    }
    npc(sb)->append(u"[/ftPictFmla]"_j);
    return npc(sb)->toString();
}

void org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::setUnknownFormulaData(::int8_tArray* formularData)
{
    field_2_unknownFormulaData = formularData;
}

void org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::setOleClassname(::java::lang::String* oleClassname)
{
    field_4_ole_classname = oleClassname;
}

void org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::setStorageId(int32_t storageId)
{
    field_5_stream_id = ::java::lang::Integer::valueOf(storageId);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.EmbeddedObjectRefSubRecord", 53);
    return c;
}

void org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(EmbeddedObjectRefSubRecord::class_()));
        EMPTY_BYTE_ARRAY_ = (new ::int8_tArray({}));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int8_tArray* org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::EmbeddedObjectRefSubRecord::getClass0()
{
    return class_();
}

