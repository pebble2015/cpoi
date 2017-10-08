// Generated from /POI/java/org/apache/poi/util/LittleEndian.java
#include <org/apache/poi/util/LittleEndian.hpp>

#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Float.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/util/LittleEndian_BufferUnderrunException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::util::LittleEndian::LittleEndian(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::LittleEndian::LittleEndian() 
    : LittleEndian(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int8_tArray* poi::util::LittleEndian::getByteArray_(::int8_tArray* data, int32_t offset, int32_t size)
{
    clinit();
    auto copy = new ::int8_tArray(size);
    ::java::lang::System::arraycopy(data, offset, copy, 0, size);
    return copy;
}

double poi::util::LittleEndian::getDouble(::int8_tArray* data)
{
    clinit();
    return ::java::lang::Double::longBitsToDouble(getLong(data, 0));
}

double poi::util::LittleEndian::getDouble(::int8_tArray* data, int32_t offset)
{
    clinit();
    return ::java::lang::Double::longBitsToDouble(getLong(data, offset));
}

float poi::util::LittleEndian::getFloat(::int8_tArray* data)
{
    clinit();
    return getFloat(data, 0);
}

float poi::util::LittleEndian::getFloat(::int8_tArray* data, int32_t offset)
{
    clinit();
    return ::java::lang::Float::intBitsToFloat(getInt(data, offset));
}

int32_t poi::util::LittleEndian::getInt(::int8_tArray* data)
{
    clinit();
    return getInt(data, 0);
}

int32_t poi::util::LittleEndian::getInt(::int8_tArray* data, int32_t offset)
{
    clinit();
    auto i = offset;
    auto b0 = (*data)[i++] & int32_t(255);
    auto b1 = (*data)[i++] & int32_t(255);
    auto b2 = (*data)[i++] & int32_t(255);
    auto b3 = (*data)[i++] & int32_t(255);
    return (b3 << int32_t(24)) + (b2 << int32_t(16)) + (b1 << int32_t(8))+ (b0 << int32_t(0));
}

int64_t poi::util::LittleEndian::getLong(::int8_tArray* data)
{
    clinit();
    return getLong(data, 0);
}

int64_t poi::util::LittleEndian::getLong(::int8_tArray* data, int32_t offset)
{
    clinit();
    int64_t result = int32_t(255) & (*data)[offset + int32_t(7)];
    for (auto j = offset + LONG_SIZE - int32_t(1); j >= offset; j--) {
        result <<= 8;
        result |= int32_t(255) & (*data)[j];
    }
    return result;
}

int16_t poi::util::LittleEndian::getShort(::int8_tArray* data)
{
    clinit();
    return getShort(data, 0);
}

int16_t poi::util::LittleEndian::getShort(::int8_tArray* data, int32_t offset)
{
    clinit();
    auto b0 = (*data)[offset] & int32_t(255);
    auto b1 = (*data)[offset + int32_t(1)] & int32_t(255);
    return static_cast< int16_t >(((b1 << int32_t(8)) + (b0 << int32_t(0))));
}

int16_tArray* poi::util::LittleEndian::getShortArray_(::int8_tArray* data, int32_t offset, int32_t size)
{
    clinit();
    auto result = new ::int16_tArray(size / SHORT_SIZE);
    for (auto i = int32_t(0); i < npc(result)->length; i++) {
        (*result)[i] = getShort(data, offset + i * SHORT_SIZE);
    }
    return result;
}

int16_t poi::util::LittleEndian::getUByte(::int8_tArray* data)
{
    clinit();
    return static_cast< int16_t >(((*data)[int32_t(0)] & int32_t(255)));
}

int16_t poi::util::LittleEndian::getUByte(::int8_tArray* data, int32_t offset)
{
    clinit();
    return static_cast< int16_t >(((*data)[offset] & int32_t(255)));
}

int64_t poi::util::LittleEndian::getUInt(::int8_tArray* data)
{
    clinit();
    return getUInt(data, 0);
}

int64_t poi::util::LittleEndian::getUInt(::int8_tArray* data, int32_t offset)
{
    clinit();
    int64_t retNum = getInt(data, offset);
    return retNum & int64_t(4294967295LL);
}

int32_t poi::util::LittleEndian::getUShort(::int8_tArray* data)
{
    clinit();
    return getUShort(data, 0);
}

int32_t poi::util::LittleEndian::getUShort(::int8_tArray* data, int32_t offset)
{
    clinit();
    auto b0 = (*data)[offset] & int32_t(255);
    auto b1 = (*data)[offset + int32_t(1)] & int32_t(255);
    return (b1 << int32_t(8)) + (b0 << int32_t(0));
}

void poi::util::LittleEndian::putByte(::int8_tArray* data, int32_t offset, int32_t value)
{
    clinit();
    (*data)[offset] = static_cast< int8_t >(value);
}

void poi::util::LittleEndian::putDouble(::int8_tArray* data, int32_t offset, double value)
{
    clinit();
    putLong(data, offset, ::java::lang::Double::doubleToLongBits(value));
}

void poi::util::LittleEndian::putDouble(double value, ::java::io::OutputStream* outputStream) /* throws(IOException) */
{
    clinit();
    putLong(::java::lang::Double::doubleToLongBits(value), outputStream);
}

void poi::util::LittleEndian::putFloat(::int8_tArray* data, int32_t offset, float value)
{
    clinit();
    putInt(data, offset, ::java::lang::Float::floatToIntBits(value));
}

void poi::util::LittleEndian::putFloat(float value, ::java::io::OutputStream* outputStream) /* throws(IOException) */
{
    clinit();
    putInt(::java::lang::Float::floatToIntBits(value), outputStream);
}

void poi::util::LittleEndian::putInt(::int8_tArray* data, int32_t offset, int32_t value)
{
    clinit();
    auto i = offset;
    (*data)[i++] = static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(value) >> int32_t(0))) & int32_t(255)));
    (*data)[i++] = static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(value) >> int32_t(8))) & int32_t(255)));
    (*data)[i++] = static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(value) >> int32_t(16))) & int32_t(255)));
    (*data)[i++] = static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(value) >> int32_t(24))) & int32_t(255)));
}

void poi::util::LittleEndian::putInt(int32_t value, ::java::io::OutputStream* outputStream) /* throws(IOException) */
{
    clinit();
    npc(outputStream)->write(static_cast< int32_t >(static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(value) >> int32_t(0))) & int32_t(255)))));
    npc(outputStream)->write(static_cast< int32_t >(static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(value) >> int32_t(8))) & int32_t(255)))));
    npc(outputStream)->write(static_cast< int32_t >(static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(value) >> int32_t(16))) & int32_t(255)))));
    npc(outputStream)->write(static_cast< int32_t >(static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(value) >> int32_t(24))) & int32_t(255)))));
}

void poi::util::LittleEndian::putLong(::int8_tArray* data, int32_t offset, int64_t value)
{
    clinit();
    (*data)[offset + int32_t(0)] = static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(0))) & int32_t(255)));
    (*data)[offset + int32_t(1)] = static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(8))) & int32_t(255)));
    (*data)[offset + int32_t(2)] = static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(16))) & int32_t(255)));
    (*data)[offset + int32_t(3)] = static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(24))) & int32_t(255)));
    (*data)[offset + int32_t(4)] = static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(32))) & int32_t(255)));
    (*data)[offset + int32_t(5)] = static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(40))) & int32_t(255)));
    (*data)[offset + int32_t(6)] = static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(48))) & int32_t(255)));
    (*data)[offset + int32_t(7)] = static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(56))) & int32_t(255)));
}

void poi::util::LittleEndian::putLong(int64_t value, ::java::io::OutputStream* outputStream) /* throws(IOException) */
{
    clinit();
    npc(outputStream)->write(static_cast< int32_t >(static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(0))) & int32_t(255)))));
    npc(outputStream)->write(static_cast< int32_t >(static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(8))) & int32_t(255)))));
    npc(outputStream)->write(static_cast< int32_t >(static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(16))) & int32_t(255)))));
    npc(outputStream)->write(static_cast< int32_t >(static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(24))) & int32_t(255)))));
    npc(outputStream)->write(static_cast< int32_t >(static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(32))) & int32_t(255)))));
    npc(outputStream)->write(static_cast< int32_t >(static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(40))) & int32_t(255)))));
    npc(outputStream)->write(static_cast< int32_t >(static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(48))) & int32_t(255)))));
    npc(outputStream)->write(static_cast< int32_t >(static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(56))) & int32_t(255)))));
}

void poi::util::LittleEndian::putShort(::int8_tArray* data, int32_t offset, int16_t value)
{
    clinit();
    auto i = offset;
    (*data)[i++] = static_cast< int8_t >(((static_cast<int16_t>(static_cast<uint32_t>(value) >> int32_t(0))) & int32_t(255)));
    (*data)[i++] = static_cast< int8_t >(((static_cast<int16_t>(static_cast<uint32_t>(value) >> int32_t(8))) & int32_t(255)));
}

void poi::util::LittleEndian::putShort(::java::io::OutputStream* outputStream, int16_t value) /* throws(IOException) */
{
    clinit();
    npc(outputStream)->write(static_cast< int32_t >(static_cast< int8_t >(((static_cast<int16_t>(static_cast<uint32_t>(value) >> int32_t(0))) & int32_t(255)))));
    npc(outputStream)->write(static_cast< int32_t >(static_cast< int8_t >(((static_cast<int16_t>(static_cast<uint32_t>(value) >> int32_t(8))) & int32_t(255)))));
}

void poi::util::LittleEndian::putShortArray_(::int8_tArray* data, int32_t startOffset, ::int16_tArray* value)
{
    clinit();
    auto offset = startOffset;
    for(auto s : *npc(value)) {
        putShort(data, offset, s);
        offset += SHORT_SIZE;
    }
}

void poi::util::LittleEndian::putUByte(::int8_tArray* data, int32_t offset, int16_t value)
{
    clinit();
    (*data)[offset] = static_cast< int8_t >((value & int32_t(255)));
}

void poi::util::LittleEndian::putUInt(::int8_tArray* data, int32_t offset, int64_t value)
{
    clinit();
    auto i = offset;
    (*data)[i++] = static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(0))) & int32_t(255)));
    (*data)[i++] = static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(8))) & int32_t(255)));
    (*data)[i++] = static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(16))) & int32_t(255)));
    (*data)[i++] = static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(24))) & int32_t(255)));
}

void poi::util::LittleEndian::putUInt(int64_t value, ::java::io::OutputStream* outputStream) /* throws(IOException) */
{
    clinit();
    npc(outputStream)->write(static_cast< int32_t >(static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(0))) & int32_t(255)))));
    npc(outputStream)->write(static_cast< int32_t >(static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(8))) & int32_t(255)))));
    npc(outputStream)->write(static_cast< int32_t >(static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(16))) & int32_t(255)))));
    npc(outputStream)->write(static_cast< int32_t >(static_cast< int8_t >(((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(24))) & int32_t(255)))));
}

void poi::util::LittleEndian::putUShort(::int8_tArray* data, int32_t offset, int32_t value)
{
    clinit();
    auto i = offset;
    (*data)[i++] = static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(value) >> int32_t(0))) & int32_t(255)));
    (*data)[i++] = static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(value) >> int32_t(8))) & int32_t(255)));
}

void poi::util::LittleEndian::putUShort(int32_t value, ::java::io::OutputStream* outputStream) /* throws(IOException) */
{
    clinit();
    npc(outputStream)->write(static_cast< int32_t >(static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(value) >> int32_t(0))) & int32_t(255)))));
    npc(outputStream)->write(static_cast< int32_t >(static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(value) >> int32_t(8))) & int32_t(255)))));
}

int32_t poi::util::LittleEndian::readInt(::java::io::InputStream* stream) /* throws(IOException, BufferUnderrunException) */
{
    clinit();
    auto ch1 = npc(stream)->read();
    auto ch2 = npc(stream)->read();
    auto ch3 = npc(stream)->read();
    auto ch4 = npc(stream)->read();
    if((ch1 | ch2 | ch3| ch4) < 0) {
        throw new LittleEndian_BufferUnderrunException();
    }
    return (ch4 << int32_t(24)) + (ch3 << int32_t(16)) + (ch2 << int32_t(8))+ (ch1 << int32_t(0));
}

int64_t poi::util::LittleEndian::readUInt(::java::io::InputStream* stream) /* throws(IOException, BufferUnderrunException) */
{
    clinit();
    int64_t retNum = readInt(stream);
    return retNum & int64_t(4294967295LL);
}

int64_t poi::util::LittleEndian::readLong(::java::io::InputStream* stream) /* throws(IOException, BufferUnderrunException) */
{
    clinit();
    auto ch1 = npc(stream)->read();
    auto ch2 = npc(stream)->read();
    auto ch3 = npc(stream)->read();
    auto ch4 = npc(stream)->read();
    auto ch5 = npc(stream)->read();
    auto ch6 = npc(stream)->read();
    auto ch7 = npc(stream)->read();
    auto ch8 = npc(stream)->read();
    if((ch1 | ch2 | ch3| ch4| ch5| ch6| ch7| ch8) < 0) {
        throw new LittleEndian_BufferUnderrunException();
    }
    return (static_cast< int64_t >(ch8) << int32_t(56)) + (static_cast< int64_t >(ch7) << int32_t(48)) + (static_cast< int64_t >(ch6) << int32_t(40))+ (static_cast< int64_t >(ch5) << int32_t(32))+ (static_cast< int64_t >(ch4) << int32_t(24))+ (ch3 << int32_t(16))+ (ch2 << int32_t(8))+ (ch1 << int32_t(0));
}

int16_t poi::util::LittleEndian::readShort(::java::io::InputStream* stream) /* throws(IOException, BufferUnderrunException) */
{
    clinit();
    return static_cast< int16_t >(readUShort(stream));
}

int32_t poi::util::LittleEndian::readUShort(::java::io::InputStream* stream) /* throws(IOException, BufferUnderrunException) */
{
    clinit();
    auto ch1 = npc(stream)->read();
    auto ch2 = npc(stream)->read();
    if((ch1 | ch2) < 0) {
        throw new LittleEndian_BufferUnderrunException();
    }
    return (ch2 << int32_t(8)) + (ch1 << int32_t(0));
}

int32_t poi::util::LittleEndian::ubyteToInt(int8_t b)
{
    clinit();
    return b & int32_t(255);
}

void poi::util::LittleEndian::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::LittleEndian::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.LittleEndian", 32);
    return c;
}

java::lang::Class* poi::util::LittleEndian::getClass0()
{
    return class_();
}

