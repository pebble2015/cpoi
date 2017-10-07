// Generated from /POI/java/org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4EncryptionVerifier.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/standard/EncryptionRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionVerifier
    : public ::org::apache::poi::poifs::crypt::EncryptionVerifier
    , public virtual ::org::apache::poi::poifs::crypt::standard::EncryptionRecord
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::org::apache::poi::poifs::crypt::EncryptionVerifier super;
protected:
    void ctor();
    void ctor(::org::apache::poi::util::LittleEndianInput* is);

public: /* protected */
    void setSalt(::int8_tArray* salt) override;
    void setEncryptedVerifier(::int8_tArray* encryptedVerifier) override;
    void setEncryptedVerifierHash(::int8_tArray* encryptedVerifierHash) override;

public:
    void write(::org::apache::poi::util::LittleEndianByteArrayOutputStream* bos) override;
    BinaryRC4EncryptionVerifier* clone() /* throws(CloneNotSupportedException) */ override;

    // Generated

public: /* protected */
    BinaryRC4EncryptionVerifier();
    BinaryRC4EncryptionVerifier(::org::apache::poi::util::LittleEndianInput* is);
protected:
    BinaryRC4EncryptionVerifier(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
