// Generated from /POI/java/org/apache/poi/poifs/crypt/xor/XOREncryptionVerifier.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/xor_/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/standard/EncryptionRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::xor_::XOREncryptionVerifier
    : public ::org::apache::poi::poifs::crypt::EncryptionVerifier
    , public virtual ::org::apache::poi::poifs::crypt::standard::EncryptionRecord
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::org::apache::poi::poifs::crypt::EncryptionVerifier super;
protected:
    void ctor();
    void ctor(::org::apache::poi::util::LittleEndianInput* is);

public:
    void write(::org::apache::poi::util::LittleEndianByteArrayOutputStream* bos) override;
    XOREncryptionVerifier* clone() /* throws(CloneNotSupportedException) */ override;

public: /* protected */
    void setEncryptedVerifier(::int8_tArray* encryptedVerifier) override;
    void setEncryptedKey(::int8_tArray* encryptedKey) override;

    // Generated
    XOREncryptionVerifier();
    XOREncryptionVerifier(::org::apache::poi::util::LittleEndianInput* is);
protected:
    XOREncryptionVerifier(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
