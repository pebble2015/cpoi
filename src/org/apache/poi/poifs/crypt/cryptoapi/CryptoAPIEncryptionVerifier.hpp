// Generated from /POI/java/org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptionVerifier.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptionVerifier.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionVerifier
    : public ::org::apache::poi::poifs::crypt::standard::StandardEncryptionVerifier
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::org::apache::poi::poifs::crypt::standard::StandardEncryptionVerifier super;
protected:
    void ctor(::org::apache::poi::util::LittleEndianInput* is, CryptoAPIEncryptionHeader* header);
    void ctor(::org::apache::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::org::apache::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::org::apache::poi::poifs::crypt::ChainingMode* chainingMode);

public: /* protected */
    void setSalt(::int8_tArray* salt) override;
    void setEncryptedVerifier(::int8_tArray* encryptedVerifier) override;
    void setEncryptedVerifierHash(::int8_tArray* encryptedVerifierHash) override;

public:
    CryptoAPIEncryptionVerifier* clone() /* throws(CloneNotSupportedException) */ override;

    // Generated

public: /* protected */
    CryptoAPIEncryptionVerifier(::org::apache::poi::util::LittleEndianInput* is, CryptoAPIEncryptionHeader* header);
    CryptoAPIEncryptionVerifier(::org::apache::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::org::apache::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::org::apache::poi::poifs::crypt::ChainingMode* chainingMode);
protected:
    CryptoAPIEncryptionVerifier(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
