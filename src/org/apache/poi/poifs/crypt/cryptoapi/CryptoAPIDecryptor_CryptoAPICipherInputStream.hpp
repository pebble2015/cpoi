// Generated from /POI/java/org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDecryptor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <javax/crypto/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/ChunkedCipherInputStream.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor_CryptoAPICipherInputStream
    : public ::org::apache::poi::poifs::crypt::ChunkedCipherInputStream
{

public:
    typedef ::org::apache::poi::poifs::crypt::ChunkedCipherInputStream super;

public: /* protected */
    ::javax::crypto::Cipher* initCipherForBlock(::javax::crypto::Cipher* existing, int32_t block) /* throws(GeneralSecurityException) */ override;
protected:
    void ctor(::java::io::InputStream* stream, int64_t size, int32_t initialPos) /* throws(GeneralSecurityException) */;

    // Generated

public:
    CryptoAPIDecryptor_CryptoAPICipherInputStream(CryptoAPIDecryptor *CryptoAPIDecryptor_this, ::java::io::InputStream* stream, int64_t size, int32_t initialPos);
protected:
    CryptoAPIDecryptor_CryptoAPICipherInputStream(CryptoAPIDecryptor *CryptoAPIDecryptor_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::javax::crypto::Cipher* initCipherForBlock(int32_t block);
    CryptoAPIDecryptor *CryptoAPIDecryptor_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class CryptoAPIDecryptor;
    friend class CryptoAPIDecryptor_StreamDescriptorEntry;
};
