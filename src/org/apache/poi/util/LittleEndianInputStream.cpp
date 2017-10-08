// Generated from /POI/java/org/apache/poi/util/LittleEndianInputStream.java
#include <org/apache/poi/util/LittleEndianInputStream.hpp>

#include <java/io/IOException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::util::LittleEndianInputStream::LittleEndianInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::LittleEndianInputStream::LittleEndianInputStream(::java::io::InputStream* is) 
    : LittleEndianInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(is);
}

constexpr int32_t poi::util::LittleEndianInputStream::EOF_;

void poi::util::LittleEndianInputStream::ctor(::java::io::InputStream* is)
{
    super::ctor(is);
}

int32_t poi::util::LittleEndianInputStream::available()
{
    try {
        return super::available();
    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
}

int8_t poi::util::LittleEndianInputStream::readByte()
{
    return static_cast< int8_t >(readUByte());
}

int32_t poi::util::LittleEndianInputStream::readUByte()
{
    auto buf = new ::int8_tArray(int32_t(1));
    try {
        checkEOF(read(buf), 1);
    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
    return LittleEndian::getUByte(buf);
}

double poi::util::LittleEndianInputStream::readDouble()
{
    return ::java::lang::Double::longBitsToDouble(readLong());
}

int32_t poi::util::LittleEndianInputStream::readInt()
{
    auto buf = new ::int8_tArray(LittleEndianConsts::INT_SIZE);
    try {
        checkEOF(read(buf), npc(buf)->length);
    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
    return LittleEndian::getInt(buf);
}

int64_t poi::util::LittleEndianInputStream::readUInt()
{
    int64_t retNum = readInt();
    return retNum & int64_t(4294967295LL);
}

int64_t poi::util::LittleEndianInputStream::readLong()
{
    auto buf = new ::int8_tArray(LittleEndianConsts::LONG_SIZE);
    try {
        checkEOF(read(buf), LittleEndianConsts::LONG_SIZE);
    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
    return LittleEndian::getLong(buf);
}

int16_t poi::util::LittleEndianInputStream::readShort()
{
    return static_cast< int16_t >(readUShort());
}

int32_t poi::util::LittleEndianInputStream::readUShort()
{
    auto buf = new ::int8_tArray(LittleEndianConsts::SHORT_SIZE);
    try {
        checkEOF(read(buf), LittleEndianConsts::SHORT_SIZE);
    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
    return LittleEndian::getUShort(buf);
}

void poi::util::LittleEndianInputStream::checkEOF(int32_t actualBytes, int32_t expectedBytes)
{
    clinit();
    if(expectedBytes != 0 && (actualBytes == -int32_t(1) || actualBytes != expectedBytes)) {
        throw new ::java::lang::RuntimeException(u"Unexpected end-of-file"_j);
    }
}

void poi::util::LittleEndianInputStream::readFully(::int8_tArray* buf)
{
    readFully(buf, int32_t(0), npc(buf)->length);
}

void poi::util::LittleEndianInputStream::readFully(::int8_tArray* buf, int32_t off, int32_t len)
{
    try {
        checkEOF(_read(buf, off, len), len);
    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
}

int32_t poi::util::LittleEndianInputStream::_read(::int8_tArray* buffer, int32_t offset, int32_t length) /* throws(IOException) */
{
    auto remaining = length;
    while (remaining > 0) {
        auto location = length - remaining;
        auto count = read(buffer, offset + location, remaining);
        if(EOF_ == count) {
            break;
        }
        remaining -= count;
    }
    return length - remaining;
}

void poi::util::LittleEndianInputStream::readPlain(::int8_tArray* buf, int32_t off, int32_t len)
{
    readFully(buf, off, len);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::LittleEndianInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.LittleEndianInputStream", 43);
    return c;
}

java::lang::Class* poi::util::LittleEndianInputStream::getClass0()
{
    return class_();
}

