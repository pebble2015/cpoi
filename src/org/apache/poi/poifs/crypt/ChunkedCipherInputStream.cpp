// Generated from /POI/java/org/apache/poi/poifs/crypt/ChunkedCipherInputStream.java
#include <org/apache/poi/poifs/crypt/ChunkedCipherInputStream.hpp>

#include <java/io/EOFException.hpp>
#include <java/io/IOException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
#include <java/lang/Throwable.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/security/GeneralSecurityException.hpp>
#include <javax/crypto/Cipher.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::crypt::ChunkedCipherInputStream::ChunkedCipherInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::ChunkedCipherInputStream::ChunkedCipherInputStream(::java::io::InputStream* stream, int64_t size, int32_t chunkSize)  /* throws(GeneralSecurityException) */
    : ChunkedCipherInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream,size,chunkSize);
}

poi::poifs::crypt::ChunkedCipherInputStream::ChunkedCipherInputStream(::java::io::InputStream* stream, int64_t size, int32_t chunkSize, int32_t initialPos)  /* throws(GeneralSecurityException) */
    : ChunkedCipherInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream,size,chunkSize,initialPos);
}

void poi::poifs::crypt::ChunkedCipherInputStream::init()
{
    chunkIsValid = false;
}

void poi::poifs::crypt::ChunkedCipherInputStream::ctor(::java::io::InputStream* stream, int64_t size, int32_t chunkSize) /* throws(GeneralSecurityException) */
{
    ctor(stream, size, chunkSize, int32_t(0));
}

void poi::poifs::crypt::ChunkedCipherInputStream::ctor(::java::io::InputStream* stream, int64_t size, int32_t chunkSize, int32_t initialPos) /* throws(GeneralSecurityException) */
{
    super::ctor(stream);
    init();
    this->size = size;
    this->pos = initialPos;
    this->chunkSize = chunkSize;
    auto cs = chunkSize == -int32_t(1) ? int32_t(4096) : chunkSize;
    this->chunk = new ::int8_tArray(cs);
    this->plain = new ::int8_tArray(cs);
    this->chunkBits = ::java::lang::Integer::bitCount(npc(chunk)->length - int32_t(1));
    this->lastIndex = static_cast< int32_t >((pos >> chunkBits));
    this->cipher = initCipherForBlock(nullptr, lastIndex);
}

javax::crypto::Cipher* poi::poifs::crypt::ChunkedCipherInputStream::initCipherForBlock(int32_t block) /* throws(IOException, GeneralSecurityException) */
{
    if(chunkSize != -int32_t(1)) {
        throw new ::java::security::GeneralSecurityException(u"the cipher block can only be set for streaming encryption, e.g. CryptoAPI..."_j);
    }
    chunkIsValid = false;
    return initCipherForBlock(cipher, block);
}

int32_t poi::poifs::crypt::ChunkedCipherInputStream::read() /* throws(IOException) */
{
    auto b = (new ::int8_tArray({static_cast< int8_t >(int32_t(0))}));
    return (read(b) == 1) ? static_cast< int8_t >(-int32_t(1)) : (*b)[int32_t(0)];
}

int32_t poi::poifs::crypt::ChunkedCipherInputStream::read(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */
{
    return read(b, off, len, false);
}

int32_t poi::poifs::crypt::ChunkedCipherInputStream::read(::int8_tArray* b, int32_t off, int32_t len, bool readPlain) /* throws(IOException) */
{
    auto total = int32_t(0);
    if(available() <= 0) {
        return -int32_t(1);
    }
    auto const chunkMask = getChunkMask();
    while (len > 0) {
        if(!chunkIsValid) {
            try {
                nextChunk();
                chunkIsValid = true;
            } catch (::java::security::GeneralSecurityException* e) {
                throw new ::poi::EncryptedDocumentException(npc(e)->getMessage(), e);
            }
        }
        auto count = static_cast< int32_t >((npc(chunk)->length - (pos & chunkMask)));
        auto avail = available();
        if(avail == 0) {
            return total;
        }
        count = ::java::lang::Math::min(avail, ::java::lang::Math::min(count, len));
        ::java::lang::System::arraycopy(readPlain ? static_cast< ::java::lang::Object* >(plain) : static_cast< ::java::lang::Object* >(chunk), static_cast< int32_t >((pos & chunkMask)), b, off, count);
        off += count;
        len -= count;
        pos += count;
        if((pos & chunkMask) == 0) {
            chunkIsValid = false;
        }
        total += count;
    }
    return total;
}

int64_t poi::poifs::crypt::ChunkedCipherInputStream::skip(int64_t n) /* throws(IOException) */
{
    auto start = pos;
    auto skip = ::java::lang::Math::min(static_cast< int64_t >(remainingBytes()), n);
    if((((pos + skip) ^ start) & ~getChunkMask()) != 0) {
        chunkIsValid = false;
    }
    pos += skip;
    return skip;
}

int32_t poi::poifs::crypt::ChunkedCipherInputStream::available()
{
    return remainingBytes();
}

int32_t poi::poifs::crypt::ChunkedCipherInputStream::remainingBytes()
{
    return static_cast< int32_t >((size - pos));
}

bool poi::poifs::crypt::ChunkedCipherInputStream::markSupported()
{
    return false;
}

void poi::poifs::crypt::ChunkedCipherInputStream::mark(int32_t readlimit)
{
    throw new ::java::lang::UnsupportedOperationException();
}

void poi::poifs::crypt::ChunkedCipherInputStream::reset() /* throws(IOException) */
{
    throw new ::java::lang::UnsupportedOperationException();
}

int32_t poi::poifs::crypt::ChunkedCipherInputStream::getChunkMask()
{
    return npc(chunk)->length - int32_t(1);
}

void poi::poifs::crypt::ChunkedCipherInputStream::nextChunk() /* throws(GeneralSecurityException, IOException) */
{
    if(chunkSize != -int32_t(1)) {
        auto index = static_cast< int32_t >((pos >> chunkBits));
        initCipherForBlock(cipher, index);
        if(lastIndex != index) {
            int64_t skipN = (index - lastIndex) << chunkBits;
            if(super::skip(skipN) < skipN) {
                throw new ::java::io::EOFException(u"buffer underrun"_j);
            }
        }
        lastIndex = index + int32_t(1);
    }
    auto const todo = static_cast< int32_t >(::java::lang::Math::min(size, static_cast< int64_t >(npc(chunk)->length)));
    int32_t readBytes = int32_t(0), totalBytes = int32_t(0);
    do {
        readBytes = super::read(plain, totalBytes, todo - totalBytes);
        totalBytes += ::java::lang::Math::max(int32_t(0), readBytes);
    } while (readBytes != -int32_t(1) && totalBytes < todo);
    if(readBytes == -int32_t(1) && pos + totalBytes < size && size < ::java::lang::Integer::MAX_VALUE) {
        throw new ::java::io::EOFException(u"buffer underrun"_j);
    }
    ::java::lang::System::arraycopy(plain, 0, chunk, 0, totalBytes);
    invokeCipher(totalBytes, totalBytes == chunkSize);
}

int32_t poi::poifs::crypt::ChunkedCipherInputStream::invokeCipher(int32_t totalBytes, bool doFinal) /* throws(GeneralSecurityException) */
{
    if(doFinal) {
        return npc(cipher)->doFinal(chunk, 0, totalBytes, chunk);
    } else {
        return npc(cipher)->update(chunk, 0, totalBytes, chunk);
    }
}

void poi::poifs::crypt::ChunkedCipherInputStream::readPlain(::int8_tArray* b, int32_t off, int32_t len)
{
    if(len <= 0) {
        return;
    }
    try {
        int32_t readBytes, total = int32_t(0);
        do {
            readBytes = read(b, off, len, true);
            total += ::java::lang::Math::max(int32_t(0), readBytes);
        } while (readBytes > -int32_t(1) && total < len);
        if(total < len) {
            throw new ::java::io::EOFException(u"buffer underrun"_j);
        }
    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
}

void poi::poifs::crypt::ChunkedCipherInputStream::setNextRecordSize(int32_t recordSize)
{
}

int8_tArray* poi::poifs::crypt::ChunkedCipherInputStream::getChunk()
{
    return chunk;
}

int8_tArray* poi::poifs::crypt::ChunkedCipherInputStream::getPlain()
{
    return plain;
}

int64_t poi::poifs::crypt::ChunkedCipherInputStream::getPos()
{
    return pos;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::ChunkedCipherInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.ChunkedCipherInputStream", 51);
    return c;
}

int32_t poi::poifs::crypt::ChunkedCipherInputStream::read(::int8_tArray* b)
{
    return super::read(b);
}

java::lang::Class* poi::poifs::crypt::ChunkedCipherInputStream::getClass0()
{
    return class_();
}

