// Generated from /POI/java/org/apache/poi/poifs/crypt/standard/StandardEncryptionVerifier.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/standard/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/standard/EncryptionRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::standard::StandardEncryptionVerifier
    : public ::org::apache::poi::poifs::crypt::EncryptionVerifier
    , public virtual EncryptionRecord
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::org::apache::poi::poifs::crypt::EncryptionVerifier super;

private:
    static constexpr int32_t SPIN_COUNT { int32_t(50000) };
    int32_t verifierHashSize {  };
protected:
    void ctor(::org::apache::poi::util::LittleEndianInput* is, StandardEncryptionHeader* header);
    void ctor(::org::apache::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::org::apache::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::org::apache::poi::poifs::crypt::ChainingMode* chainingMode);

public: /* protected */
    void setSalt(::int8_tArray* salt) override;
    void setEncryptedVerifier(::int8_tArray* encryptedVerifier) override;
    void setEncryptedVerifierHash(::int8_tArray* encryptedVerifierHash) override;

public:
    void write(::org::apache::poi::util::LittleEndianByteArrayOutputStream* bos) override;

public: /* protected */
    virtual int32_t getVerifierHashSize();

public:
    StandardEncryptionVerifier* clone() /* throws(CloneNotSupportedException) */ override;

    // Generated

public: /* protected */
    StandardEncryptionVerifier(::org::apache::poi::util::LittleEndianInput* is, StandardEncryptionHeader* header);
    StandardEncryptionVerifier(::org::apache::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::org::apache::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::org::apache::poi::poifs::crypt::ChainingMode* chainingMode);
protected:
    StandardEncryptionVerifier(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
