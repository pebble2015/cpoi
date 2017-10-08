// Generated from /POI/java/org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Encryptor.java

#pragma once

#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/crypt/standard/EncryptionRecord.hpp>

struct default_init_tag;

class poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor_createEncryptionInfoEntry_1
    : public virtual ::java::lang::Object
    , public virtual ::poi::poifs::crypt::standard::EncryptionRecord
{

public:
    typedef ::java::lang::Object super;
    void write(::poi::util::LittleEndianByteArrayOutputStream* bos) override;

    // Generated
    BinaryRC4Encryptor_createEncryptionInfoEntry_1(BinaryRC4Encryptor *BinaryRC4Encryptor_this, ::poi::poifs::crypt::EncryptionInfo* info, BinaryRC4EncryptionHeader* header, BinaryRC4EncryptionVerifier* verifier);
    static ::java::lang::Class *class_();
    BinaryRC4Encryptor *BinaryRC4Encryptor_this;
    ::poi::poifs::crypt::EncryptionInfo* info;
    BinaryRC4EncryptionHeader* header;
    BinaryRC4EncryptionVerifier* verifier;

private:
    virtual ::java::lang::Class* getClass0();
    friend class BinaryRC4Encryptor;
    friend class BinaryRC4Encryptor_BinaryRC4CipherOutputStream;
};
