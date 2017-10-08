// Generated from /POI/java/org/apache/poi/poifs/crypt/ChunkedCipherOutputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <javax/crypto/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/io/FilterOutputStream.hpp>

struct default_init_tag;

class poi::poifs::crypt::ChunkedCipherOutputStream
    : public ::java::io::FilterOutputStream
{

public:
    typedef ::java::io::FilterOutputStream super;

private:
    static ::poi::util::POILogger* LOG_;
    static constexpr int32_t STREAMING { int32_t(-1) };
    int32_t chunkSize {  };
    int32_t chunkBits {  };
    ::int8_tArray* chunk {  };
    ::java::util::BitSet* plainByteFlags {  };
    ::java::io::File* fileOut {  };
    ::poi::poifs::filesystem::DirectoryNode* dir {  };
    int64_t pos {  };
    int64_t totalPos {  };
    int64_t written {  };
    ::javax::crypto::Cipher* cipher {  };
    bool isClosed {  };
protected:
    void ctor(::poi::poifs::filesystem::DirectoryNode* dir, int32_t chunkSize) /* throws(IOException, GeneralSecurityException) */;
    void ctor(::java::io::OutputStream* stream, int32_t chunkSize) /* throws(IOException, GeneralSecurityException) */;

public:
    ::javax::crypto::Cipher* initCipherForBlock(int32_t block, bool lastChunk) /* throws(IOException, GeneralSecurityException) */;

public: /* protected */
    virtual ::javax::crypto::Cipher* initCipherForBlock(::javax::crypto::Cipher* existing, int32_t block, bool lastChunk) /* throws(IOException, GeneralSecurityException) */ = 0;
    virtual void calculateChecksum(::java::io::File* fileOut, int32_t oleStreamSize) /* throws(GeneralSecurityException, IOException) */ = 0;
    virtual void createEncryptionInfoEntry(::poi::poifs::filesystem::DirectoryNode* dir, ::java::io::File* tmpFile) /* throws(IOException, GeneralSecurityException) */ = 0;

public:
    void write(int32_t b) /* throws(IOException) */ override;
    void write(::int8_tArray* b) /* throws(IOException) */ override;
    void write(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */ override;
    virtual void writePlain(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */;

public: /* protected */
    virtual void write(::int8_tArray* b, int32_t off, int32_t len, bool writePlain) /* throws(IOException) */;
    virtual int32_t getChunkMask();
    virtual void writeChunk(bool continued) /* throws(IOException) */;
    virtual int32_t invokeCipher(int32_t posInChunk, bool doFinal) /* throws(GeneralSecurityException) */;

public:
    void close() /* throws(IOException) */ override;

public: /* protected */
    virtual ::int8_tArray* getChunk();
    virtual ::java::util::BitSet* getPlainByteFlags();
    virtual int64_t getPos();
    virtual int64_t getTotalPos();

public:
    virtual void setNextRecordSize(int32_t recordSize, bool isPlain);

    // Generated
    ChunkedCipherOutputStream(::poi::poifs::filesystem::DirectoryNode* dir, int32_t chunkSize);
    ChunkedCipherOutputStream(::java::io::OutputStream* stream, int32_t chunkSize);
protected:
    ChunkedCipherOutputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::poi::util::POILogger*& LOG();
    virtual ::java::lang::Class* getClass0();
    friend class ChunkedCipherOutputStream_EncryptedPackageWriter;
};
