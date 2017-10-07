// Generated from /POI/java/org/apache/poi/poifs/crypt/xor/XOREncryptor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <javax/crypto/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/xor_/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/ChunkedCipherOutputStream.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::xor_::XOREncryptor_XORCipherOutputStream
    : public ::org::apache::poi::poifs::crypt::ChunkedCipherOutputStream
{

public:
    typedef ::org::apache::poi::poifs::crypt::ChunkedCipherOutputStream super;

private:
    int32_t recordStart {  };
    int32_t recordEnd {  };
protected:
    void ctor(::java::io::OutputStream* stream, int32_t initialPos) /* throws(IOException, GeneralSecurityException) */;
    void ctor(::org::apache::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException, GeneralSecurityException) */;

public: /* protected */
    ::javax::crypto::Cipher* initCipherForBlock(::javax::crypto::Cipher* cipher, int32_t block, bool lastChunk) /* throws(GeneralSecurityException) */ override;
    void calculateChecksum(::java::io::File* file, int32_t i) override;
    void createEncryptionInfoEntry(::org::apache::poi::poifs::filesystem::DirectoryNode* dir, ::java::io::File* tmpFile) /* throws(IOException, GeneralSecurityException) */ override;

public:
    void setNextRecordSize(int32_t recordSize, bool isPlain) override;
    void flush() /* throws(IOException) */ override;

public: /* protected */
    int32_t invokeCipher(int32_t posInChunk, bool doFinal) override;

private:
    int8_t rotateLeft(int8_t bits, int32_t shift);

    // Generated

public:
    XOREncryptor_XORCipherOutputStream(XOREncryptor *XOREncryptor_this, ::java::io::OutputStream* stream, int32_t initialPos);
    XOREncryptor_XORCipherOutputStream(XOREncryptor *XOREncryptor_this, ::org::apache::poi::poifs::filesystem::DirectoryNode* dir);
protected:
    XOREncryptor_XORCipherOutputStream(XOREncryptor *XOREncryptor_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public:
    ::javax::crypto::Cipher* initCipherForBlock(int32_t block, bool lastChunk);
    XOREncryptor *XOREncryptor_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class XOREncryptor;
};
