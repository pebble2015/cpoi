// Generated from /POI/java/org/apache/poi/poifs/crypt/EncryptionHeader.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::poifs::crypt::EncryptionHeader
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

private:
    static int32_t ALGORITHM_RC4_;
    static int32_t ALGORITHM_AES_128_;
    static int32_t ALGORITHM_AES_192_;
    static int32_t ALGORITHM_AES_256_;
    static int32_t HASH_NONE_;
    static int32_t HASH_SHA1_;
    static int32_t HASH_SHA256_;
    static int32_t HASH_SHA384_;
    static int32_t HASH_SHA512_;
    static int32_t PROVIDER_RC4_;
    static int32_t PROVIDER_AES_;
    static int32_t MODE_ECB_;
    static int32_t MODE_CBC_;
    static int32_t MODE_CFB_;
    int32_t flags {  };
    int32_t sizeExtra {  };
    CipherAlgorithm* cipherAlgorithm {  };
    HashAlgorithm* hashAlgorithm {  };
    int32_t keyBits {  };
    int32_t blockSize {  };
    CipherProvider* providerType {  };
    ChainingMode* chainingMode {  };
    ::int8_tArray* keySalt {  };
    ::java::lang::String* cspName {  };
protected:
    void ctor();

public:
    virtual ChainingMode* getChainingMode();

public: /* protected */
    virtual void setChainingMode(ChainingMode* chainingMode);

public:
    virtual int32_t getFlags();

public: /* protected */
    virtual void setFlags(int32_t flags);

public:
    virtual int32_t getSizeExtra();

public: /* protected */
    virtual void setSizeExtra(int32_t sizeExtra);

public:
    virtual CipherAlgorithm* getCipherAlgorithm();

public: /* protected */
    virtual void setCipherAlgorithm(CipherAlgorithm* cipherAlgorithm);

public:
    virtual HashAlgorithm* getHashAlgorithm();
    virtual HashAlgorithm* getHashAlgorithmEx();

public: /* protected */
    virtual void setHashAlgorithm(HashAlgorithm* hashAlgorithm);

public:
    virtual int32_t getKeySize();

public: /* protected */
    virtual void setKeySize(int32_t keyBits);

public:
    virtual int32_t getBlockSize();

public: /* protected */
    virtual void setBlockSize(int32_t blockSize);

public:
    virtual ::int8_tArray* getKeySalt();

public: /* protected */
    virtual void setKeySalt(::int8_tArray* salt);

public:
    virtual CipherProvider* getCipherProvider();

public: /* protected */
    virtual void setCipherProvider(CipherProvider* providerType);

public:
    virtual ::java::lang::String* getCspName();

public: /* protected */
    virtual void setCspName(::java::lang::String* cspName);

public:
    EncryptionHeader* clone() /* throws(CloneNotSupportedException) */ override;

    // Generated

public: /* protected */
    EncryptionHeader();
protected:
    EncryptionHeader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static int32_t& ALGORITHM_RC4();
    static int32_t& ALGORITHM_AES_128();
    static int32_t& ALGORITHM_AES_192();
    static int32_t& ALGORITHM_AES_256();
    static int32_t& HASH_NONE();
    static int32_t& HASH_SHA1();
    static int32_t& HASH_SHA256();
    static int32_t& HASH_SHA384();
    static int32_t& HASH_SHA512();
    static int32_t& PROVIDER_RC4();
    static int32_t& PROVIDER_AES();
    static int32_t& MODE_ECB();
    static int32_t& MODE_CBC();
    static int32_t& MODE_CFB();

private:
    virtual ::java::lang::Class* getClass0();
};
