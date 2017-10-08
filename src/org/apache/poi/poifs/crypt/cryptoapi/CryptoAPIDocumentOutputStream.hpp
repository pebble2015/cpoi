// Generated from /POI/java/org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDocumentOutputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <javax/crypto/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/fwd-POI.hpp>
#include <java/io/ByteArrayOutputStream.hpp>

struct default_init_tag;

class poi::poifs::crypt::cryptoapi::CryptoAPIDocumentOutputStream
    : public ::java::io::ByteArrayOutputStream
{

public:
    typedef ::java::io::ByteArrayOutputStream super;

private:
    ::javax::crypto::Cipher* cipher {  };
    CryptoAPIEncryptor* encryptor {  };
    ::int8_tArray* oneByte {  };
protected:
    void ctor(CryptoAPIEncryptor* encryptor) /* throws(GeneralSecurityException) */;

public:
    virtual ::int8_tArray* getBuf();
    virtual void setSize(int32_t count);
    virtual void setBlock(int32_t block) /* throws(GeneralSecurityException) */;
    void write(int32_t b) override;
    void write(::int8_tArray* b, int32_t off, int32_t len) override;

    // Generated
    CryptoAPIDocumentOutputStream(CryptoAPIEncryptor* encryptor);
protected:
    CryptoAPIDocumentOutputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public:
    virtual void write(::int8_tArray* b);

private:
    virtual ::java::lang::Class* getClass0();
};
