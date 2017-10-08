// Generated from /POI/java/org/apache/poi/hssf/record/WriteAccessRecord.java
#include <org/apache/poi/hssf/record/WriteAccessRecord.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Arrays.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
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

poi::hssf::record::WriteAccessRecord::WriteAccessRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::WriteAccessRecord::WriteAccessRecord() 
    : WriteAccessRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::WriteAccessRecord::WriteAccessRecord(RecordInputStream* in) 
    : WriteAccessRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::WriteAccessRecord::sid;

constexpr int8_t poi::hssf::record::WriteAccessRecord::PAD_CHAR;

constexpr int32_t poi::hssf::record::WriteAccessRecord::DATA_SIZE;

int8_tArray*& poi::hssf::record::WriteAccessRecord::PADDING()
{
    clinit();
    return PADDING_;
}
int8_tArray* poi::hssf::record::WriteAccessRecord::PADDING_;

void poi::hssf::record::WriteAccessRecord::ctor()
{
    super::ctor();
    setUsername(u""_j);
}

void poi::hssf::record::WriteAccessRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    if(npc(in)->remaining() > DATA_SIZE) {
        throw new ::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Expected data size ("_j)->append(DATA_SIZE)
            ->append(u") but got ("_j)
            ->append(npc(in)->remaining())
            ->append(u")"_j)->toString());
    }
    auto nChars = npc(in)->readUShort();
    auto is16BitFlag = npc(in)->readUByte();
    if(nChars > DATA_SIZE || (is16BitFlag & int32_t(254)) != 0) {
        auto data = new ::int8_tArray(int32_t(3) + npc(in)->remaining());
        ::poi::util::LittleEndian::putUShort(data, 0, nChars);
        ::poi::util::LittleEndian::putByte(data, 2, is16BitFlag);
        npc(in)->readFully(data, int32_t(3), npc(data)->length - int32_t(3));
        auto rawValue = new ::java::lang::String(data, ::poi::util::StringUtil::UTF8());
        setUsername(npc(rawValue)->trim());
        return;
    }
    ::java::lang::String* rawText;
    if((is16BitFlag & int32_t(1)) == 0) {
        rawText = ::poi::util::StringUtil::readCompressedUnicode(in, nChars);
    } else {
        rawText = ::poi::util::StringUtil::readUnicodeLE(in, nChars);
    }
    field_1_username = npc(rawText)->trim();
    auto padSize = npc(in)->remaining();
    while (padSize > 0) {
        npc(in)->readUByte();
        padSize--;
    }
}

void poi::hssf::record::WriteAccessRecord::setUsername(::java::lang::String* username)
{
    auto is16bit = ::poi::util::StringUtil::hasMultibyte(username);
    auto encodedByteCount = int32_t(3) + npc(username)->length() * (is16bit ? int32_t(2) : int32_t(1));
    auto paddingSize = DATA_SIZE - encodedByteCount;
    if(paddingSize < 0) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Name is too long: "_j)->append(username)->toString());
    }
    field_1_username = username;
}

java::lang::String* poi::hssf::record::WriteAccessRecord::getUsername()
{
    return field_1_username;
}

java::lang::String* poi::hssf::record::WriteAccessRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[WRITEACCESS]\n"_j);
    npc(npc(npc(buffer)->append(u"    .name = "_j))->append(field_1_username))->append(u"\n"_j);
    npc(buffer)->append(u"[/WRITEACCESS]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::WriteAccessRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    auto username = getUsername();
    auto is16bit = ::poi::util::StringUtil::hasMultibyte(username);
    npc(out)->writeShort(npc(username)->length());
    npc(out)->writeByte(is16bit ? int32_t(1) : int32_t(0));
    if(is16bit) {
        ::poi::util::StringUtil::putUnicodeLE(username, out);
    } else {
        ::poi::util::StringUtil::putCompressedUnicode(username, out);
    }
    auto encodedByteCount = int32_t(3) + npc(username)->length() * (is16bit ? int32_t(2) : int32_t(1));
    auto paddingSize = DATA_SIZE - encodedByteCount;
    npc(out)->write(PADDING_, 0, paddingSize);
}

int32_t poi::hssf::record::WriteAccessRecord::getDataSize()
{
    return DATA_SIZE;
}

int16_t poi::hssf::record::WriteAccessRecord::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::WriteAccessRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.WriteAccessRecord", 44);
    return c;
}

void poi::hssf::record::WriteAccessRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        PADDING_ = new ::int8_tArray(DATA_SIZE);
        {
            ::java::util::Arrays::fill(PADDING_, PAD_CHAR);
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::WriteAccessRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::WriteAccessRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::WriteAccessRecord::getClass0()
{
    return class_();
}

