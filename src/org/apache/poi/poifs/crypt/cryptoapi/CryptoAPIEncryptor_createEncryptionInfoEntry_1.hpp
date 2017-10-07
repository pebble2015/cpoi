// Generated from /POI/java/org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptor.java

#pragma once

#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/crypt/standard/EncryptionRecord.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor_createEncryptionInfoEntry_1
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::poifs::crypt::standard::EncryptionRecord
{

public:
    typedef ::java::lang::Object super;
    void write(::org::apache::poi::util::LittleEndianByteArrayOutputStream* bos) override;

    // Generated
    CryptoAPIEncryptor_createEncryptionInfoEntry_1(CryptoAPIEncryptor *CryptoAPIEncryptor_this, ::org::apache::poi::poifs::crypt::EncryptionInfo* info, CryptoAPIEncryptionHeader* header, CryptoAPIEncryptionVerifier* verifier);
    static ::java::lang::Class *class_();
    CryptoAPIEncryptor *CryptoAPIEncryptor_this;
    ::org::apache::poi::poifs::crypt::EncryptionInfo* info;
    CryptoAPIEncryptionHeader* header;
    CryptoAPIEncryptionVerifier* verifier;

private:
    virtual ::java::lang::Class* getClass0();
    friend class CryptoAPIEncryptor;
    friend class CryptoAPIEncryptor_CryptoAPICipherOutputStream;
};
