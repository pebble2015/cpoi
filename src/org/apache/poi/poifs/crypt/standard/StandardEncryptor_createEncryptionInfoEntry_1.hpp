// Generated from /POI/java/org/apache/poi/poifs/crypt/standard/StandardEncryptor.java

#pragma once

#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/standard/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/crypt/standard/EncryptionRecord.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::standard::StandardEncryptor_createEncryptionInfoEntry_1
    : public virtual ::java::lang::Object
    , public virtual EncryptionRecord
{

public:
    typedef ::java::lang::Object super;
    void write(::org::apache::poi::util::LittleEndianByteArrayOutputStream* bos) override;

    // Generated
    StandardEncryptor_createEncryptionInfoEntry_1(StandardEncryptor *StandardEncryptor_this, ::org::apache::poi::poifs::crypt::EncryptionInfo* info, StandardEncryptionHeader* header, StandardEncryptionVerifier* verifier);
    static ::java::lang::Class *class_();
    StandardEncryptor *StandardEncryptor_this;
    ::org::apache::poi::poifs::crypt::EncryptionInfo* info;
    StandardEncryptionHeader* header;
    StandardEncryptionVerifier* verifier;

private:
    virtual ::java::lang::Class* getClass0();
    friend class StandardEncryptor;
    friend class StandardEncryptor_StandardCipherOutputStream;
};
