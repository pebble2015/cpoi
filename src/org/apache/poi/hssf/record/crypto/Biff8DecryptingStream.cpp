// Generated from /POI/java/org/apache/poi/hssf/record/crypto/Biff8DecryptingStream.java
#include <org/apache/poi/hssf/record/crypto/Biff8DecryptingStream.hpp>

#include <java/io/InputStream.hpp>
#include <java/io/PushbackInputStream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <org/apache/poi/hssf/record/BOFRecord.hpp>
#include <org/apache/poi/hssf/record/FilePassRecord.hpp>
#include <org/apache/poi/hssf/record/InterfaceHdrRecord.hpp>
#include <org/apache/poi/poifs/crypt/ChunkedCipherInputStream.hpp>
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <Array.hpp>

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

org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::Biff8DecryptingStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::Biff8DecryptingStream(::java::io::InputStream* in, int32_t initialOffset, ::org::apache::poi::poifs::crypt::EncryptionInfo* info)  /* throws(RecordFormatException) */
    : Biff8DecryptingStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,initialOffset,info);
}

void org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::init()
{
    buffer = new ::int8_tArray(::org::apache::poi::util::LittleEndianConsts::LONG_SIZE);
    shouldSkipEncryptionOnCurrentRecord = false;
}

constexpr int32_t org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::RC4_REKEYING_INTERVAL;

void org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::ctor(::java::io::InputStream* in, int32_t initialOffset, ::org::apache::poi::poifs::crypt::EncryptionInfo* info) /* throws(RecordFormatException) */
{
    super::ctor();
    init();
    try {
        auto initialBuf = new ::int8_tArray(initialOffset);
        ::java::io::InputStream* stream;
        if(initialOffset == 0) {
            stream = in;
        } else {
            stream = new ::java::io::PushbackInputStream(in, initialOffset);
            npc((java_cast< ::java::io::PushbackInputStream* >(stream)))->unread(initialBuf);
        }
        this->info = info;
        auto dec = npc(this->info)->getDecryptor();
        npc(dec)->setChunkSize(RC4_REKEYING_INTERVAL);
        ccis = java_cast< ::org::apache::poi::poifs::crypt::ChunkedCipherInputStream* >(npc(dec)->getDataStream(stream, ::java::lang::Integer::MAX_VALUE, 0));
        if(initialOffset > 0) {
            npc(ccis)->readFully(initialBuf);
        }
    } catch (::java::lang::Exception* e) {
        throw new ::org::apache::poi::util::RecordFormatException(static_cast< ::java::lang::Throwable* >(e));
    }
}

int32_t org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::available()
{
    return npc(ccis)->available();
}

int32_t org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::readRecordSID()
{
    readPlain(buffer, int32_t(0), ::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE);
    auto sid = ::org::apache::poi::util::LittleEndian::getUShort(buffer, 0);
    shouldSkipEncryptionOnCurrentRecord = isNeverEncryptedRecord(sid);
    return sid;
}

int32_t org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::readDataSize()
{
    readPlain(buffer, int32_t(0), ::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE);
    auto dataSize = ::org::apache::poi::util::LittleEndian::getUShort(buffer, 0);
    npc(ccis)->setNextRecordSize(dataSize);
    return dataSize;
}

double org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::readDouble()
{
    auto valueLongBits = readLong();
    auto result = ::java::lang::Double::longBitsToDouble(valueLongBits);
    if(::java::lang::Double::isNaN(result)) {
        throw new ::java::lang::RuntimeException(u"Did not expect to read NaN"_j);
    }
    return result;
}

void org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::readFully(::int8_tArray* buf)
{
    readFully(buf, int32_t(0), npc(buf)->length);
}

void org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::readFully(::int8_tArray* buf, int32_t off, int32_t len)
{
    if(shouldSkipEncryptionOnCurrentRecord) {
        readPlain(buf, off, npc(buf)->length);
    } else {
        npc(ccis)->readFully(buf, off, len);
    }
}

int32_t org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::readUByte()
{
    return readByte() & int32_t(255);
}

int8_t org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::readByte()
{
    if(shouldSkipEncryptionOnCurrentRecord) {
        readPlain(buffer, int32_t(0), ::org::apache::poi::util::LittleEndianConsts::BYTE_SIZE);
        return (*buffer)[int32_t(0)];
    } else {
        return npc(ccis)->readByte();
    }
}

int32_t org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::readUShort()
{
    return readShort() & int32_t(65535);
}

int16_t org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::readShort()
{
    if(shouldSkipEncryptionOnCurrentRecord) {
        readPlain(buffer, int32_t(0), ::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE);
        return ::org::apache::poi::util::LittleEndian::getShort(buffer);
    } else {
        return npc(ccis)->readShort();
    }
}

int32_t org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::readInt()
{
    if(shouldSkipEncryptionOnCurrentRecord) {
        readPlain(buffer, int32_t(0), ::org::apache::poi::util::LittleEndianConsts::INT_SIZE);
        return ::org::apache::poi::util::LittleEndian::getInt(buffer);
    } else {
        return npc(ccis)->readInt();
    }
}

int64_t org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::readLong()
{
    if(shouldSkipEncryptionOnCurrentRecord) {
        readPlain(buffer, int32_t(0), ::org::apache::poi::util::LittleEndianConsts::LONG_SIZE);
        return ::org::apache::poi::util::LittleEndian::getLong(buffer);
    } else {
        return npc(ccis)->readLong();
    }
}

int64_t org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::getPosition()
{
    return npc(ccis)->getPos();
}

bool org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::isNeverEncryptedRecord(int32_t sid)
{
    clinit();
    switch (sid) {
    case ::org::apache::poi::hssf::record::BOFRecord::sid:
    case ::org::apache::poi::hssf::record::InterfaceHdrRecord::sid:
    case ::org::apache::poi::hssf::record::FilePassRecord::sid:
        return true;
    default:
        return false;
    }

}

void org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::readPlain(::int8_tArray* b, int32_t off, int32_t len)
{
    npc(ccis)->readPlain(b, off, len);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.crypto.Biff8DecryptingStream", 55);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::crypto::Biff8DecryptingStream::getClass0()
{
    return class_();
}

