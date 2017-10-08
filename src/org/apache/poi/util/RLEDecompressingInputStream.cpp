// Generated from /POI/java/org/apache/poi/util/RLEDecompressingInputStream.java
#include <org/apache/poi/util/RLEDecompressingInputStream.hpp>

#include <java/io/ByteArrayInputStream.hpp>
#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::util::RLEDecompressingInputStream::RLEDecompressingInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::RLEDecompressingInputStream::RLEDecompressingInputStream(::java::io::InputStream* in)  /* throws(IOException) */
    : RLEDecompressingInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

int32_tArray*& poi::util::RLEDecompressingInputStream::POWER2()
{
    clinit();
    return POWER2_;
}
int32_tArray* poi::util::RLEDecompressingInputStream::POWER2_;

void poi::util::RLEDecompressingInputStream::ctor(::java::io::InputStream* in) /* throws(IOException) */
{
    super::ctor();
    this->in = in;
    buf = new ::int8_tArray(int32_t(4096));
    pos = 0;
    auto header = npc(in)->read();
    if(header != 1) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::String::format(::java::util::Locale::ROOT(), u"Header byte 0x01 expected, received 0x%02X"_j, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(header & int32_t(255)))})));
    }
    len = readChunk();
}

int32_t poi::util::RLEDecompressingInputStream::read() /* throws(IOException) */
{
    if(len == -int32_t(1)) {
        return -int32_t(1);
    }
    if(pos >= len) {
        if((len = readChunk()) == -int32_t(1)) {
            return -int32_t(1);
        }
    }
    return (*buf)[pos++] & int32_t(255);
}

int32_t poi::util::RLEDecompressingInputStream::read(::int8_tArray* b) /* throws(IOException) */
{
    return read(b, int32_t(0), npc(b)->length);
}

int32_t poi::util::RLEDecompressingInputStream::read(::int8_tArray* b, int32_t off, int32_t l) /* throws(IOException) */
{
    if(len == -int32_t(1)) {
        return -int32_t(1);
    }
    auto offset = off;
    auto length = l;
    while (length > 0) {
        if(pos >= len) {
            if((len = readChunk()) == -int32_t(1)) {
                return offset > off ? offset - off : -int32_t(1);
            }
        }
        auto c = ::java::lang::Math::min(length, len - pos);
        ::java::lang::System::arraycopy(buf, pos, b, offset, c);
        pos += c;
        length -= c;
        offset += c;
    }
    return l;
}

int64_t poi::util::RLEDecompressingInputStream::skip(int64_t n) /* throws(IOException) */
{
    auto length = n;
    while (length > 0) {
        if(pos >= len) {
            if((len = readChunk()) == -int32_t(1)) {
                return -int32_t(1);
            }
        }
        auto c = static_cast< int32_t >(::java::lang::Math::min(n, static_cast< int64_t >(len - pos)));
        pos += c;
        length -= c;
    }
    return n;
}

int32_t poi::util::RLEDecompressingInputStream::available()
{
    return (len > 0 ? len - pos : int32_t(0));
}

void poi::util::RLEDecompressingInputStream::close() /* throws(IOException) */
{
    npc(in)->close();
}

int32_t poi::util::RLEDecompressingInputStream::readChunk() /* throws(IOException) */
{
    pos = 0;
    auto w = readShort(in);
    if(w == -int32_t(1)) {
        return -int32_t(1);
    }
    auto chunkSize = (w & int32_t(4095)) + int32_t(1);
    if((w & int32_t(28672)) != 12288) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::String::format(::java::util::Locale::ROOT(), u"Chunksize header A should be 0x3000, received 0x%04X"_j, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(w & int32_t(57344)))})));
    }
    auto rawChunk = (w & int32_t(32768)) == 0;
    if(rawChunk) {
        if(npc(in)->read(buf, 0, chunkSize) < chunkSize) {
            throw new ::java::lang::IllegalStateException(::java::lang::String::format(::java::util::Locale::ROOT(), u"Not enough bytes read, expected %d"_j, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(chunkSize))})));
        }
        return chunkSize;
    } else {
        auto inOffset = int32_t(0);
        auto outOffset = int32_t(0);
        while (inOffset < chunkSize) {
            auto tokenFlags = npc(in)->read();
            inOffset++;
            if(tokenFlags == -int32_t(1)) {
                break;
            }
            for (auto n = int32_t(0); n < 8; n++) {
                if(inOffset >= chunkSize) {
                    break;
                }
                if((tokenFlags & (*POWER2_)[n]) == 0) {
                    auto const b = npc(in)->read();
                    if(b == -int32_t(1)) {
                        return -int32_t(1);
                    }
                    (*buf)[outOffset++] = static_cast< int8_t >(b);
                    inOffset++;
                } else {
                    auto token = readShort(in);
                    if(token == -int32_t(1)) {
                        return -int32_t(1);
                    }
                    inOffset += 2;
                    auto copyLenBits = getCopyLenBits(outOffset - int32_t(1));
                    auto copyOffset = (token >> (copyLenBits)) + int32_t(1);
                    auto copyLen = (token & ((*POWER2_)[copyLenBits] - int32_t(1))) + int32_t(3);
                    auto startPos = outOffset - copyOffset;
                    auto endPos = startPos + copyLen;
                    for (auto i = startPos; i < endPos; i++) {
                        (*buf)[outOffset++] = (*buf)[i];
                    }
                }
            }
        }
        return outOffset;
    }
}

int32_t poi::util::RLEDecompressingInputStream::getCopyLenBits(int32_t offset)
{
    clinit();
    for (auto n = int32_t(11); n >= 4; n--) {
        if((offset & (*POWER2_)[n]) != 0) {
            return int32_t(15) - n;
        }
    }
    return 12;
}

int32_t poi::util::RLEDecompressingInputStream::readShort() /* throws(IOException) */
{
    return readShort(this);
}

int32_t poi::util::RLEDecompressingInputStream::readInt() /* throws(IOException) */
{
    return readInt(this);
}

int32_t poi::util::RLEDecompressingInputStream::readShort(::java::io::InputStream* stream) /* throws(IOException) */
{
    int32_t b0, b1;
    if((b0 = npc(stream)->read()) == -int32_t(1)) {
        return -int32_t(1);
    }
    if((b1 = npc(stream)->read()) == -int32_t(1)) {
        return -int32_t(1);
    }
    return (b0 & int32_t(255)) | ((b1 & int32_t(255)) << int32_t(8));
}

int32_t poi::util::RLEDecompressingInputStream::readInt(::java::io::InputStream* stream) /* throws(IOException) */
{
    int32_t b0, b1, b2, b3;
    if((b0 = npc(stream)->read()) == -int32_t(1)) {
        return -int32_t(1);
    }
    if((b1 = npc(stream)->read()) == -int32_t(1)) {
        return -int32_t(1);
    }
    if((b2 = npc(stream)->read()) == -int32_t(1)) {
        return -int32_t(1);
    }
    if((b3 = npc(stream)->read()) == -int32_t(1)) {
        return -int32_t(1);
    }
    return (b0 & int32_t(255)) | ((b1 & int32_t(255)) << int32_t(8)) | ((b2 & int32_t(255)) << int32_t(16))| ((b3 & int32_t(255)) << int32_t(24));
}

int8_tArray* poi::util::RLEDecompressingInputStream::decompress(::int8_tArray* compressed) /* throws(IOException) */
{
    clinit();
    return decompress(compressed, 0, npc(compressed)->length);
}

int8_tArray* poi::util::RLEDecompressingInputStream::decompress(::int8_tArray* compressed, int32_t offset, int32_t length) /* throws(IOException) */
{
    clinit();
    auto out = new ::java::io::ByteArrayOutputStream();
    ::java::io::InputStream* instream = new ::java::io::ByteArrayInputStream(compressed, offset, length);
    ::java::io::InputStream* stream = new RLEDecompressingInputStream(instream);
    IOUtils::copy(stream, out);
    npc(stream)->close();
    npc(out)->close();
    return npc(out)->toByteArray_();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::RLEDecompressingInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.RLEDecompressingInputStream", 47);
    return c;
}

void poi::util::RLEDecompressingInputStream::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        POWER2_ = new ::int32_tArray({
            int32_t(1)
            , int32_t(2)
            , int32_t(4)
            , int32_t(8)
            , int32_t(16)
            , int32_t(32)
            , int32_t(64)
            , int32_t(128)
            , int32_t(256)
            , int32_t(512)
            , int32_t(1024)
            , int32_t(2048)
            , int32_t(4096)
            , int32_t(8192)
            , int32_t(16384)
            , int32_t(32768)
        });
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::util::RLEDecompressingInputStream::getClass0()
{
    return class_();
}

