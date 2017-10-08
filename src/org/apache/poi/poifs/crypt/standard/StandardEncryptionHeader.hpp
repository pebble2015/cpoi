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

class poi::poifs::crypt::standard::StandardEncryptionHeader
    : public ::poi::poifs::crypt::EncryptionHeader
    , public virtual EncryptionRecord
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::poi::poifs::crypt::EncryptionHeader super;
protected:
    void ctor(::poi::util::LittleEndianInput* is) /* throws(IOException) */;
    void ctor(::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::poi::poifs::crypt::ChainingMode* chainingMode);

public:
    void write(::poi::util::LittleEndianByteArrayOutputStream* bos) override;
    StandardEncryptionHeader* clone() /* throws(CloneNotSupportedException) */ override;

    // Generated

public: /* protected */
    StandardEncryptionHeader(::poi::util::LittleEndianInput* is);
    StandardEncryptionHeader(::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::poi::poifs::crypt::ChainingMode* chainingMode);
protected:
    StandardEncryptionHeader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
