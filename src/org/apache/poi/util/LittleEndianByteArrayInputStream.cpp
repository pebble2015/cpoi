// Generated from /POI/java/org/apache/poi/util/LittleEndianByteArrayInputStream.java
#include <org/apache/poi/util/LittleEndianByteArrayInputStream.hpp>

#include <java/lang/Double.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::util::LittleEndianByteArrayInputStream::LittleEndianByteArrayInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::LittleEndianByteArrayInputStream::LittleEndianByteArrayInputStream(::int8_tArray* buf, int32_t startOffset, int32_t maxReadLen) 
    : LittleEndianByteArrayInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(buf,startOffset,maxReadLen);
}

poi::util::LittleEndianByteArrayInputStream::LittleEndianByteArrayInputStream(::int8_tArray* buf, int32_t startOffset) 
    : LittleEndianByteArrayInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(buf,startOffset);
}

poi::util::LittleEndianByteArrayInputStream::LittleEndianByteArrayInputStream(::int8_tArray* buf) 
    : LittleEndianByteArrayInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(buf);
}

void poi::util::LittleEndianByteArrayInputStream::ctor(::int8_tArray* buf, int32_t startOffset, int32_t maxReadLen)
{
    super::ctor(buf, startOffset, maxReadLen);
}

void poi::util::LittleEndianByteArrayInputStream::ctor(::int8_tArray* buf, int32_t startOffset)
{
    ctor(buf, startOffset, npc(buf)->length - startOffset);
}

void poi::util::LittleEndianByteArrayInputStream::ctor(::int8_tArray* buf)
{
    ctor(buf, int32_t(0));
}

void poi::util::LittleEndianByteArrayInputStream::checkPosition(int32_t i)
{
    if(i > count - pos) {
        throw new ::java::lang::RuntimeException(u"Buffer overrun"_j);
    }
}

int32_t poi::util::LittleEndianByteArrayInputStream::getReadIndex()
{
    return pos;
}

void poi::util::LittleEndianByteArrayInputStream::setReadIndex(int32_t pos)
{
    if(pos < 0 || pos >= count) {
        throw new ::java::lang::IndexOutOfBoundsException();
    }
    this->pos = pos;
}

int8_t poi::util::LittleEndianByteArrayInputStream::readByte()
{
    checkPosition(1);
    return static_cast< int8_t >(read());
}

int32_t poi::util::LittleEndianByteArrayInputStream::readInt()
{
    auto const size = LittleEndianConsts::INT_SIZE;
    checkPosition(size);
    auto le = LittleEndian::getInt(buf, pos);
    auto skipped = super::skip(static_cast< int64_t >(size));
    /* assert(skipped == size : u"Buffer overrun"_j) */ ;
    return le;
}

int64_t poi::util::LittleEndianByteArrayInputStream::readLong()
{
    auto const size = LittleEndianConsts::LONG_SIZE;
    checkPosition(size);
    auto le = LittleEndian::getLong(buf, pos);
    auto skipped = super::skip(static_cast< int64_t >(size));
    /* assert(skipped == size : u"Buffer overrun"_j) */ ;
    return le;
}

int16_t poi::util::LittleEndianByteArrayInputStream::readShort()
{
    auto const size = LittleEndianConsts::SHORT_SIZE;
    checkPosition(size);
    auto le = LittleEndian::getShort(buf, pos);
    auto skipped = super::skip(static_cast< int64_t >(size));
    /* assert(skipped == size : u"Buffer overrun"_j) */ ;
    return le;
}

int32_t poi::util::LittleEndianByteArrayInputStream::readUByte()
{
    return readByte() & int32_t(255);
}

int32_t poi::util::LittleEndianByteArrayInputStream::readUShort()
{
    return readShort() & int32_t(65535);
}

int64_t poi::util::LittleEndianByteArrayInputStream::readUInt()
{
    return readInt() & int64_t(4294967295LL);
}

double poi::util::LittleEndianByteArrayInputStream::readDouble()
{
    return ::java::lang::Double::longBitsToDouble(readLong());
}

void poi::util::LittleEndianByteArrayInputStream::readFully(::int8_tArray* buffer, int32_t off, int32_t len)
{
    checkPosition(len);
    read(buffer, off, len);
}

void poi::util::LittleEndianByteArrayInputStream::readFully(::int8_tArray* buffer)
{
    checkPosition(npc(buffer)->length);
    read(buffer, int32_t(0), npc(buffer)->length);
}

void poi::util::LittleEndianByteArrayInputStream::readPlain(::int8_tArray* buf, int32_t off, int32_t len)
{
    readFully(buf, off, len);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::LittleEndianByteArrayInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.LittleEndianByteArrayInputStream", 52);
    return c;
}

int32_t poi::util::LittleEndianByteArrayInputStream::available()
{
    return ByteArrayInputStream::available();
}

java::lang::Class* poi::util::LittleEndianByteArrayInputStream::getClass0()
{
    return class_();
}

