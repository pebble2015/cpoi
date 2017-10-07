// Generated from /POI/java/org/apache/poi/hssf/record/FormatRecord.java
#include <org/apache/poi/hssf/record/FormatRecord.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::FormatRecord::FormatRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::FormatRecord::FormatRecord(FormatRecord* other) 
    : FormatRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(other);
}

org::apache::poi::hssf::record::FormatRecord::FormatRecord(int32_t indexCode, ::java::lang::String* fs) 
    : FormatRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(indexCode,fs);
}

org::apache::poi::hssf::record::FormatRecord::FormatRecord(RecordInputStream* in) 
    : FormatRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

org::apache::poi::util::POILogger*& org::apache::poi::hssf::record::FormatRecord::logger()
{
    clinit();
    return logger_;
}
org::apache::poi::util::POILogger* org::apache::poi::hssf::record::FormatRecord::logger_;

constexpr int16_t org::apache::poi::hssf::record::FormatRecord::sid;

void org::apache::poi::hssf::record::FormatRecord::ctor(FormatRecord* other)
{
    super::ctor();
    field_1_index_code = npc(other)->field_1_index_code;
    field_3_hasMultibyte = npc(other)->field_3_hasMultibyte;
    field_4_formatstring = npc(other)->field_4_formatstring;
}

void org::apache::poi::hssf::record::FormatRecord::ctor(int32_t indexCode, ::java::lang::String* fs)
{
    super::ctor();
    field_1_index_code = indexCode;
    field_4_formatstring = fs;
    field_3_hasMultibyte = ::org::apache::poi::util::StringUtil::hasMultibyte(fs);
}

void org::apache::poi::hssf::record::FormatRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_index_code = npc(in)->readShort();
    auto field_3_unicode_len = npc(in)->readUShort();
    field_3_hasMultibyte = (npc(in)->readByte() & int32_t(1)) != 0;
    if(field_3_hasMultibyte) {
        field_4_formatstring = readStringCommon(in, field_3_unicode_len, false);
    } else {
        field_4_formatstring = readStringCommon(in, field_3_unicode_len, true);
    }
}

int32_t org::apache::poi::hssf::record::FormatRecord::getIndexCode()
{
    return field_1_index_code;
}

java::lang::String* org::apache::poi::hssf::record::FormatRecord::getFormatString()
{
    return field_4_formatstring;
}

java::lang::String* org::apache::poi::hssf::record::FormatRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[FORMAT]\n"_j);
    npc(npc(npc(buffer)->append(u"    .indexcode       = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(getIndexCode())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .isUnicode       = "_j))->append(field_3_hasMultibyte))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .formatstring    = "_j))->append(getFormatString()))->append(u"\n"_j);
    npc(buffer)->append(u"[/FORMAT]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::FormatRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    auto formatString = getFormatString();
    npc(out)->writeShort(getIndexCode());
    npc(out)->writeShort(npc(formatString)->length());
    npc(out)->writeByte(field_3_hasMultibyte ? int32_t(1) : int32_t(0));
    if(field_3_hasMultibyte) {
        ::org::apache::poi::util::StringUtil::putUnicodeLE(formatString, out);
    } else {
        ::org::apache::poi::util::StringUtil::putCompressedUnicode(formatString, out);
    }
}

int32_t org::apache::poi::hssf::record::FormatRecord::getDataSize()
{
    return int32_t(5) + npc(getFormatString())->length() * (field_3_hasMultibyte ? int32_t(2) : int32_t(1));
}

int16_t org::apache::poi::hssf::record::FormatRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::FormatRecord* org::apache::poi::hssf::record::FormatRecord::clone()
{
    return new FormatRecord(this);
}

java::lang::String* org::apache::poi::hssf::record::FormatRecord::readStringCommon(RecordInputStream* ris, int32_t requestedLength, bool pIsCompressedEncoding)
{
    clinit();
    if(requestedLength < 0 || requestedLength > 1048576) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Bad requested string length ("_j)->append(requestedLength)
            ->append(u")"_j)->toString());
    }
    ::char16_tArray* buf = nullptr;
    auto isCompressedEncoding = pIsCompressedEncoding;
    auto availableChars = isCompressedEncoding ? npc(ris)->remaining() : npc(ris)->remaining() / ::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE;
    auto remaining = npc(ris)->remaining();
    if(requestedLength == availableChars) {
        buf = new ::char16_tArray(requestedLength);
    } else {
        buf = new ::char16_tArray(availableChars);
    }
    for (auto i = int32_t(0); i < npc(buf)->length; i++) {
        char16_t ch;
        if(isCompressedEncoding) {
            ch = static_cast< char16_t >(npc(ris)->readUByte());
        } else {
            ch = static_cast< char16_t >(npc(ris)->readShort());
        }
        (*buf)[i] = ch;
    }
    if(npc(ris)->available() == 1) {
        auto tmp = new ::char16_tArray(npc(buf)->length + int32_t(1));
        ::java::lang::System::arraycopy(buf, 0, tmp, 0, npc(buf)->length);
        (*tmp)[npc(buf)->length] = static_cast< char16_t >(npc(ris)->readUByte());
        buf = tmp;
    }
    if(npc(ris)->available() > 0) {
        npc(logger_)->log(::org::apache::poi::util::POILogger::INFO, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"FormatRecord has "_j)->append(npc(ris)->available())
            ->append(u" unexplained bytes. Silently skipping"_j)->toString())}));
        while (npc(ris)->available() > 0) {
            npc(ris)->readByte();
        }
    }
    return new ::java::lang::String(buf);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::FormatRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.FormatRecord", 39);
    return c;
}

void org::apache::poi::hssf::record::FormatRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(FormatRecord::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::FormatRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::FormatRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::FormatRecord::getClass0()
{
    return class_();
}

