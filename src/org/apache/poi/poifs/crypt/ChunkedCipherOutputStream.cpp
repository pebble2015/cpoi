// Generated from /POI/java/org/apache/poi/poifs/crypt/ChunkedCipherOutputStream.java
#include <org/apache/poi/poifs/crypt/ChunkedCipherOutputStream.hpp>

#include <java/io/File.hpp>
#include <java/io/FileOutputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
#include <java/lang/Throwable.hpp>
#include <java/security/GeneralSecurityException.hpp>
#include <java/util/BitSet.hpp>
#include <javax/crypto/Cipher.hpp>
#include <org/apache/poi/poifs/crypt/ChunkedCipherOutputStream_EncryptedPackageWriter.hpp>
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSWriterListener.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <org/apache/poi/util/TempFile.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::ChunkedCipherOutputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::ChunkedCipherOutputStream(::org::apache::poi::poifs::filesystem::DirectoryNode* dir, int32_t chunkSize)  /* throws(IOException, GeneralSecurityException) */
    : ChunkedCipherOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(dir,chunkSize);
}

org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::ChunkedCipherOutputStream(::java::io::OutputStream* stream, int32_t chunkSize)  /* throws(IOException, GeneralSecurityException) */
    : ChunkedCipherOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream,chunkSize);
}

void org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::init()
{
    isClosed = false;
}

org::apache::poi::util::POILogger*& org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::LOG()
{
    clinit();
    return LOG_;
}
org::apache::poi::util::POILogger* org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::LOG_;

constexpr int32_t org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::STREAMING;

void org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::ctor(::org::apache::poi::poifs::filesystem::DirectoryNode* dir, int32_t chunkSize) /* throws(IOException, GeneralSecurityException) */
{
    super::ctor(nullptr);
    init();
    this->chunkSize = chunkSize;
    auto cs = chunkSize == STREAMING ? int32_t(4096) : chunkSize;
    this->chunk = new ::int8_tArray(cs);
    this->plainByteFlags = new ::java::util::BitSet(cs);
    this->chunkBits = ::java::lang::Integer::bitCount(cs - int32_t(1));
    this->fileOut = ::org::apache::poi::util::TempFile::createTempFile(u"encrypted_package"_j, u"crypt"_j);
    npc(this->fileOut)->deleteOnExit();
    this->out = new ::java::io::FileOutputStream(fileOut);
    this->dir = dir;
    this->cipher = initCipherForBlock(nullptr, 0, false);
}

void org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::ctor(::java::io::OutputStream* stream, int32_t chunkSize) /* throws(IOException, GeneralSecurityException) */
{
    super::ctor(stream);
    init();
    this->chunkSize = chunkSize;
    auto cs = chunkSize == STREAMING ? int32_t(4096) : chunkSize;
    this->chunk = new ::int8_tArray(cs);
    this->plainByteFlags = new ::java::util::BitSet(cs);
    this->chunkBits = ::java::lang::Integer::bitCount(cs - int32_t(1));
    this->fileOut = nullptr;
    this->dir = nullptr;
    this->cipher = initCipherForBlock(nullptr, 0, false);
}

javax::crypto::Cipher* org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::initCipherForBlock(int32_t block, bool lastChunk) /* throws(IOException, GeneralSecurityException) */
{
    return initCipherForBlock(cipher, block, lastChunk);
}

void org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::write(int32_t b) /* throws(IOException) */
{
    write(new ::int8_tArray({static_cast< int8_t >(b)}));
}

void org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::write(::int8_tArray* b) /* throws(IOException) */
{
    write(b, int32_t(0), npc(b)->length);
}

void org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::write(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */
{
    write(b, off, len, false);
}

void org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::writePlain(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */
{
    write(b, off, len, true);
}

void org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::write(::int8_tArray* b, int32_t off, int32_t len, bool writePlain) /* throws(IOException) */
{
    if(len == 0) {
        return;
    }
    if(len < 0 || npc(b)->length < off + len) {
        throw new ::java::io::IOException(u"not enough bytes in your input buffer"_j);
    }
    auto const chunkMask = getChunkMask();
    while (len > 0) {
        auto posInChunk = static_cast< int32_t >((pos & chunkMask));
        auto nextLen = ::java::lang::Math::min(npc(chunk)->length - posInChunk, len);
        ::java::lang::System::arraycopy(b, off, chunk, posInChunk, nextLen);
        if(writePlain) {
            npc(plainByteFlags)->set(posInChunk, posInChunk + nextLen);
        }
        pos += nextLen;
        totalPos += nextLen;
        off += nextLen;
        len -= nextLen;
        if((pos & chunkMask) == 0) {
            writeChunk(len > 0);
        }
    }
}

int32_t org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::getChunkMask()
{
    return npc(chunk)->length - int32_t(1);
}

void org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::writeChunk(bool continued) /* throws(IOException) */
{
    if(pos == 0 || totalPos == written) {
        return;
    }
    auto posInChunk = static_cast< int32_t >((pos & getChunkMask()));
    auto index = static_cast< int32_t >((pos >> chunkBits));
    bool lastChunk;
    if(posInChunk == 0) {
        index--;
        posInChunk = npc(chunk)->length;
        lastChunk = false;
    } else {
        lastChunk = true;
    }
    int32_t ciLen;
    try {
        auto doFinal = true;
        auto oldPos = pos;
        pos = 0;
        if(chunkSize == STREAMING) {
            if(continued) {
                doFinal = false;
            }
        } else {
            cipher = initCipherForBlock(cipher, index, lastChunk);
            pos = oldPos;
        }
        ciLen = invokeCipher(posInChunk, doFinal);
    } catch (::java::security::GeneralSecurityException* e) {
        throw new ::java::io::IOException(u"can't re-/initialize cipher"_j, e);
    }
    npc(out)->write(chunk, 0, ciLen);
    npc(plainByteFlags)->clear();
    written += ciLen;
}

int32_t org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::invokeCipher(int32_t posInChunk, bool doFinal) /* throws(GeneralSecurityException) */
{
    auto plain = (npc(plainByteFlags)->isEmpty()) ? static_cast< ::int8_tArray* >(nullptr) : npc(chunk)->clone();
    auto ciLen = (doFinal) ? npc(cipher)->doFinal(chunk, 0, posInChunk, chunk) : npc(cipher)->update(chunk, 0, posInChunk, chunk);
    for (auto i = npc(plainByteFlags)->nextSetBit(0); i >= 0 && i < posInChunk; i = npc(plainByteFlags)->nextSetBit(i + int32_t(1))) {
        (*chunk)[i] = (*plain)[i];
    }
    return ciLen;
}

void org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::close() /* throws(IOException) */
{
    if(isClosed) {
        npc(LOG_)->log(::org::apache::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"ChunkedCipherOutputStream was already closed - ignoring"_j)}));
        return;
    }
    isClosed = true;
    try {
        writeChunk(false);
        super::close();
        if(fileOut != nullptr) {
            auto oleStreamSize = static_cast< int32_t >((npc(fileOut)->length() + ::org::apache::poi::util::LittleEndianConsts::LONG_SIZE));
            calculateChecksum(fileOut, static_cast< int32_t >(pos));
            npc(dir)->createDocument(Decryptor::DEFAULT_POIFS_ENTRY(), oleStreamSize, static_cast< ::org::apache::poi::poifs::filesystem::POIFSWriterListener* >(new ChunkedCipherOutputStream_EncryptedPackageWriter(this)));
            createEncryptionInfoEntry(dir, fileOut);
        }
    } catch (::java::security::GeneralSecurityException* e) {
        throw new ::java::io::IOException(static_cast< ::java::lang::Throwable* >(e));
    }
}

int8_tArray* org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::getChunk()
{
    return chunk;
}

java::util::BitSet* org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::getPlainByteFlags()
{
    return plainByteFlags;
}

int64_t org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::getPos()
{
    return pos;
}

int64_t org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::getTotalPos()
{
    return totalPos;
}

void org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::setNextRecordSize(int32_t recordSize, bool isPlain)
{
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.ChunkedCipherOutputStream", 52);
    return c;
}

void org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(ChunkedCipherOutputStream::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::poifs::crypt::ChunkedCipherOutputStream::getClass0()
{
    return class_();
}

