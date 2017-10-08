// Generated from /POI/java/org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptionHeader.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptionHeader.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionHeader
    : public ::poi::poifs::crypt::standard::StandardEncryptionHeader
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::poi::poifs::crypt::standard::StandardEncryptionHeader super;
protected:
    void ctor(::poi::util::LittleEndianInput* is) /* throws(IOException) */;
    void ctor(::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::poi::poifs::crypt::ChainingMode* chainingMode);

public:
    void setKeySize(int32_t keyBits) override;
    CryptoAPIEncryptionHeader* clone() /* throws(CloneNotSupportedException) */ override;

    // Generated
    CryptoAPIEncryptionHeader(::poi::util::LittleEndianInput* is);

public: /* protected */
    CryptoAPIEncryptionHeader(::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::poi::poifs::crypt::ChainingMode* chainingMode);
protected:
    CryptoAPIEncryptionHeader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
