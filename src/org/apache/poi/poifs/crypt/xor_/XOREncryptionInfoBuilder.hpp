// Generated from /POI/java/org/apache/poi/poifs/crypt/xor/XOREncryptionInfoBuilder.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/xor_/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfoBuilder.hpp>

struct default_init_tag;

class poi::poifs::crypt::xor_::XOREncryptionInfoBuilder
    : public virtual ::java::lang::Object
    , public virtual ::poi::poifs::crypt::EncryptionInfoBuilder
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    void initialize(::poi::poifs::crypt::EncryptionInfo* info, ::poi::util::LittleEndianInput* dis) /* throws(IOException) */ override;
    void initialize(::poi::poifs::crypt::EncryptionInfo* info, ::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::poi::poifs::crypt::ChainingMode* chainingMode) override;

    // Generated
    XOREncryptionInfoBuilder();
protected:
    XOREncryptionInfoBuilder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
