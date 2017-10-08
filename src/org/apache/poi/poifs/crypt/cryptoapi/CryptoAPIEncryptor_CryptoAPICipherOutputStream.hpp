// Generated from /POI/java/org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <javax/crypto/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/ChunkedCipherOutputStream.hpp>

struct default_init_tag;

class poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor_CryptoAPICipherOutputStream
    : public ::poi::poifs::crypt::ChunkedCipherOutputStream
{

public:
    typedef ::poi::poifs::crypt::ChunkedCipherOutputStream super;

public: /* protected */
    ::javax::crypto::Cipher* initCipherForBlock(::javax::crypto::Cipher* cipher, int32_t block, bool lastChunk) /* throws(IOException, GeneralSecurityException) */ override;
    void calculateChecksum(::java::io::File* file, int32_t i) override;
    void createEncryptionInfoEntry(::poi::poifs::filesystem::DirectoryNode* dir, ::java::io::File* tmpFile) /* throws(IOException, GeneralSecurityException) */ override;
protected:
    void ctor(::java::io::OutputStream* stream) /* throws(IOException, GeneralSecurityException) */;

public:
    void flush() /* throws(IOException) */ override;

    // Generated
    CryptoAPIEncryptor_CryptoAPICipherOutputStream(CryptoAPIEncryptor *CryptoAPIEncryptor_this, ::java::io::OutputStream* stream);
protected:
    CryptoAPIEncryptor_CryptoAPICipherOutputStream(CryptoAPIEncryptor *CryptoAPIEncryptor_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::javax::crypto::Cipher* initCipherForBlock(int32_t block, bool lastChunk);
    CryptoAPIEncryptor *CryptoAPIEncryptor_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class CryptoAPIEncryptor;
    friend class CryptoAPIEncryptor_createEncryptionInfoEntry_1;
};
