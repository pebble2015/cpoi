// Generated from /POI/java/org/apache/poi/poifs/crypt/xor/XORDecryptor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <javax/crypto/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/xor_/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/ChunkedCipherInputStream.hpp>

struct default_init_tag;

class poi::poifs::crypt::xor_::XORDecryptor_XORCipherInputStream
    : public ::poi::poifs::crypt::ChunkedCipherInputStream
{

public:
    typedef ::poi::poifs::crypt::ChunkedCipherInputStream super;

private:
    int32_t initialOffset {  };
    int32_t recordStart {  };
    int32_t recordEnd {  };
protected:
    void ctor(::java::io::InputStream* stream, int32_t initialPos) /* throws(GeneralSecurityException) */;

public: /* protected */
    ::javax::crypto::Cipher* initCipherForBlock(::javax::crypto::Cipher* existing, int32_t block) /* throws(GeneralSecurityException) */ override;
    int32_t invokeCipher(int32_t totalBytes, bool doFinal) override;

private:
    int8_t rotateLeft(int8_t bits, int32_t shift);

public:
    void setNextRecordSize(int32_t recordSize) override;

    // Generated
    XORDecryptor_XORCipherInputStream(XORDecryptor *XORDecryptor_this, ::java::io::InputStream* stream, int32_t initialPos);
protected:
    XORDecryptor_XORCipherInputStream(XORDecryptor *XORDecryptor_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public:
    ::javax::crypto::Cipher* initCipherForBlock(int32_t block);
    XORDecryptor *XORDecryptor_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class XORDecryptor;
};
