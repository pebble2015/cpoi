// Generated from /POI/java/org/apache/poi/poifs/crypt/standard/StandardEncryptionHeader.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/standard/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/standard/EncryptionRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::standard::StandardEncryptionHeader
    : public ::org::apache::poi::poifs::crypt::EncryptionHeader
    , public virtual EncryptionRecord
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::org::apache::poi::poifs::crypt::EncryptionHeader super;
protected:
    void ctor(::org::apache::poi::util::LittleEndianInput* is) /* throws(IOException) */;
    void ctor(::org::apache::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::org::apache::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::org::apache::poi::poifs::crypt::ChainingMode* chainingMode);

public:
    void write(::org::apache::poi::util::LittleEndianByteArrayOutputStream* bos) override;
    StandardEncryptionHeader* clone() /* throws(CloneNotSupportedException) */ override;

    // Generated

public: /* protected */
    StandardEncryptionHeader(::org::apache::poi::util::LittleEndianInput* is);
    StandardEncryptionHeader(::org::apache::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::org::apache::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::org::apache::poi::poifs::crypt::ChainingMode* chainingMode);
protected:
    StandardEncryptionHeader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
