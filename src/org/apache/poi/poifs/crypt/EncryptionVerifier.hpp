// Generated from /POI/java/org/apache/poi/poifs/crypt/EncryptionVerifier.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::poifs::crypt::EncryptionVerifier
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

private:
    ::int8_tArray* salt {  };
    ::int8_tArray* encryptedVerifier {  };
    ::int8_tArray* encryptedVerifierHash {  };
    ::int8_tArray* encryptedKey {  };
    int32_t spinCount {  };
    CipherAlgorithm* cipherAlgorithm {  };
    ChainingMode* chainingMode {  };
    HashAlgorithm* hashAlgorithm {  };
protected:
    void ctor();

public:
    virtual ::int8_tArray* getSalt();
    virtual ::int8_tArray* getEncryptedVerifier();
    virtual ::int8_tArray* getEncryptedVerifierHash();
    virtual int32_t getSpinCount();
    virtual int32_t getCipherMode();
    virtual int32_t getAlgorithm();
    virtual ::int8_tArray* getEncryptedKey();
    virtual CipherAlgorithm* getCipherAlgorithm();
    virtual HashAlgorithm* getHashAlgorithm();
    virtual ChainingMode* getChainingMode();

public: /* protected */
    virtual void setSalt(::int8_tArray* salt);
    virtual void setEncryptedVerifier(::int8_tArray* encryptedVerifier);
    virtual void setEncryptedVerifierHash(::int8_tArray* encryptedVerifierHash);
    virtual void setEncryptedKey(::int8_tArray* encryptedKey);
    virtual void setSpinCount(int32_t spinCount);
    virtual void setCipherAlgorithm(CipherAlgorithm* cipherAlgorithm);
    virtual void setChainingMode(ChainingMode* chainingMode);
    virtual void setHashAlgorithm(HashAlgorithm* hashAlgorithm);

public:
    EncryptionVerifier* clone() /* throws(CloneNotSupportedException) */ override;

    // Generated

public: /* protected */
    EncryptionVerifier();
protected:
    EncryptionVerifier(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
