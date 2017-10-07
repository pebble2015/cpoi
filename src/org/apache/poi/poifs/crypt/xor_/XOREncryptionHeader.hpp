// Generated from /POI/java/org/apache/poi/poifs/crypt/xor/XOREncryptionHeader.java

#pragma once

#include <org/apache/poi/poifs/crypt/xor_/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/standard/EncryptionRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::xor_::XOREncryptionHeader
    : public ::org::apache::poi::poifs::crypt::EncryptionHeader
    , public virtual ::org::apache::poi::poifs::crypt::standard::EncryptionRecord
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::org::apache::poi::poifs::crypt::EncryptionHeader super;
protected:
    void ctor();

public:
    void write(::org::apache::poi::util::LittleEndianByteArrayOutputStream* leos) override;
    XOREncryptionHeader* clone() /* throws(CloneNotSupportedException) */ override;

    // Generated

public: /* protected */
    XOREncryptionHeader();
protected:
    XOREncryptionHeader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
