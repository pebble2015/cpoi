// Generated from /POI/java/org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDocumentInputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <javax/crypto/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/fwd-POI.hpp>
#include <java/io/ByteArrayInputStream.hpp>

struct default_init_tag;

class poi::poifs::crypt::cryptoapi::CryptoAPIDocumentInputStream
    : public ::java::io::ByteArrayInputStream
{

public:
    typedef ::java::io::ByteArrayInputStream super;

private:
    ::javax::crypto::Cipher* cipher {  };
    CryptoAPIDecryptor* decryptor {  };
    ::int8_tArray* oneByte {  };

public:
    virtual void seek(int32_t newpos);
    virtual void setBlock(int32_t block) /* throws(GeneralSecurityException) */;
    int32_t read() override;
    int32_t read(::int8_tArray* b, int32_t off, int32_t len) override;
protected:
    void ctor(CryptoAPIDecryptor* decryptor, ::int8_tArray* buf) /* throws(GeneralSecurityException) */;

    // Generated

public:
    CryptoAPIDocumentInputStream(CryptoAPIDecryptor* decryptor, ::int8_tArray* buf);
protected:
    CryptoAPIDocumentInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public:
    virtual int32_t read(::int8_tArray* b);

private:
    virtual ::java::lang::Class* getClass0();
};
