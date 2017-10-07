// Generated from /POI/java/org/apache/poi/poifs/crypt/ChunkedCipherInputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <javax/crypto/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/util/LittleEndianInputStream.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::ChunkedCipherInputStream
    : public ::org::apache::poi::util::LittleEndianInputStream
{

public:
    typedef ::org::apache::poi::util::LittleEndianInputStream super;

private:
    int32_t chunkSize {  };
    int32_t chunkBits {  };
    int64_t size {  };
    ::int8_tArray* chunk {  };
    ::int8_tArray* plain {  };
    ::javax::crypto::Cipher* cipher {  };
    int32_t lastIndex {  };
    int64_t pos {  };
    bool chunkIsValid {  };
protected:
    void ctor(::java::io::InputStream* stream, int64_t size, int32_t chunkSize) /* throws(GeneralSecurityException) */;
    void ctor(::java::io::InputStream* stream, int64_t size, int32_t chunkSize, int32_t initialPos) /* throws(GeneralSecurityException) */;

public:
    ::javax::crypto::Cipher* initCipherForBlock(int32_t block) /* throws(IOException, GeneralSecurityException) */;

public: /* protected */
    virtual ::javax::crypto::Cipher* initCipherForBlock(::javax::crypto::Cipher* existing, int32_t block) /* throws(GeneralSecurityException) */ = 0;

public:
    int32_t read() /* throws(IOException) */ override;
    int32_t read(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */ override;

private:
    int32_t read(::int8_tArray* b, int32_t off, int32_t len, bool readPlain) /* throws(IOException) */;

public:
    int64_t skip(int64_t n) /* throws(IOException) */ override;
    int32_t available() override;

private:
    int32_t remainingBytes();

public:
    bool markSupported() override;
    void mark(int32_t readlimit) override;
    void reset() /* throws(IOException) */ override;

public: /* protected */
    virtual int32_t getChunkMask();

private:
    void nextChunk() /* throws(GeneralSecurityException, IOException) */;

public: /* protected */
    virtual int32_t invokeCipher(int32_t totalBytes, bool doFinal) /* throws(GeneralSecurityException) */;

public:
    void readPlain(::int8_tArray* b, int32_t off, int32_t len) override;
    virtual void setNextRecordSize(int32_t recordSize);

public: /* protected */
    virtual ::int8_tArray* getChunk();
    virtual ::int8_tArray* getPlain();

public:
    virtual int64_t getPos();

    // Generated
    ChunkedCipherInputStream(::java::io::InputStream* stream, int64_t size, int32_t chunkSize);
    ChunkedCipherInputStream(::java::io::InputStream* stream, int64_t size, int32_t chunkSize, int32_t initialPos);
protected:
    ChunkedCipherInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public:
    int32_t read(::int8_tArray* b);

private:
    virtual ::java::lang::Class* getClass0();
};
