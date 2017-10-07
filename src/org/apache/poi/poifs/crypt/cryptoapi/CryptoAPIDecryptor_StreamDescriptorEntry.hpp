// Generated from /POI/java/org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDecryptor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor_StreamDescriptorEntry
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::util::BitField* flagStream_;

public: /* package */
    int32_t streamOffset {  };
    int32_t streamSize {  };
    int32_t block {  };
    int32_t flags {  };
    int32_t reserved2 {  };
    ::java::lang::String* streamName {  };

    // Generated

public:
    CryptoAPIDecryptor_StreamDescriptorEntry();
protected:
    CryptoAPIDecryptor_StreamDescriptorEntry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* package */
    static ::org::apache::poi::util::BitField*& flagStream();

private:
    virtual ::java::lang::Class* getClass0();
    friend class CryptoAPIDecryptor;
    friend class CryptoAPIDecryptor_CryptoAPICipherInputStream;
};
