// Generated from /POI/java/org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Decryptor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <javax/crypto/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/ChunkedCipherInputStream.hpp>

struct default_init_tag;

class poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor_BinaryRC4CipherInputStream
    : public ::poi::poifs::crypt::ChunkedCipherInputStream
{

public:
    typedef ::poi::poifs::crypt::ChunkedCipherInputStream super;

public: /* protected */
    ::javax::crypto::Cipher* initCipherForBlock(::javax::crypto::Cipher* existing, int32_t block) /* throws(GeneralSecurityException) */ override;
protected:
    void ctor(::poi::poifs::filesystem::DocumentInputStream* stream, int64_t size) /* throws(GeneralSecurityException) */;
    void ctor(::java::io::InputStream* stream, int32_t size, int32_t initialPos) /* throws(GeneralSecurityException) */;

    // Generated

public:
    BinaryRC4Decryptor_BinaryRC4CipherInputStream(BinaryRC4Decryptor *BinaryRC4Decryptor_this, ::poi::poifs::filesystem::DocumentInputStream* stream, int64_t size);
    BinaryRC4Decryptor_BinaryRC4CipherInputStream(BinaryRC4Decryptor *BinaryRC4Decryptor_this, ::java::io::InputStream* stream, int32_t size, int32_t initialPos);
protected:
    BinaryRC4Decryptor_BinaryRC4CipherInputStream(BinaryRC4Decryptor *BinaryRC4Decryptor_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::javax::crypto::Cipher* initCipherForBlock(int32_t block);
    BinaryRC4Decryptor *BinaryRC4Decryptor_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class BinaryRC4Decryptor;
};
