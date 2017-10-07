// Generated from /POI/java/org/apache/poi/poifs/crypt/standard/StandardEncryptionInfoBuilder.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/standard/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfoBuilder.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::standard::StandardEncryptionInfoBuilder
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::poifs::crypt::EncryptionInfoBuilder
{

public:
    typedef ::java::lang::Object super;
    void initialize(::org::apache::poi::poifs::crypt::EncryptionInfo* info, ::org::apache::poi::util::LittleEndianInput* dis) /* throws(IOException) */ override;
    void initialize(::org::apache::poi::poifs::crypt::EncryptionInfo* info, ::org::apache::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::org::apache::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::org::apache::poi::poifs::crypt::ChainingMode* chainingMode) override;

    // Generated
    StandardEncryptionInfoBuilder();
protected:
    StandardEncryptionInfoBuilder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
