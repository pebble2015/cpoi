// Generated from /POI/java/org/apache/poi/poifs/crypt/Decryptor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/crypto/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::poifs::crypt::Decryptor
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* DEFAULT_PASSWORD_;
    static ::java::lang::String* DEFAULT_POIFS_ENTRY_;

public: /* protected */
    EncryptionInfo* encryptionInfo {  };

private:
    ::javax::crypto::SecretKey* secretKey {  };
    ::int8_tArray* verifier {  };
    ::int8_tArray* integrityHmacKey {  };
    ::int8_tArray* integrityHmacValue {  };
protected:
    void ctor();

public:
    virtual ::java::io::InputStream* getDataStream(::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException, GeneralSecurityException) */ = 0;
    virtual ::java::io::InputStream* getDataStream(::java::io::InputStream* stream, int32_t size, int32_t initialPos) /* throws(IOException, GeneralSecurityException) */;
    virtual void setChunkSize(int32_t chunkSize);
    virtual ::javax::crypto::Cipher* initCipherForBlock(::javax::crypto::Cipher* cipher, int32_t block) /* throws(GeneralSecurityException) */;
    virtual bool verifyPassword(::java::lang::String* password) /* throws(GeneralSecurityException) */ = 0;
    virtual int64_t getLength() = 0;
    static Decryptor* getInstance(EncryptionInfo* info);
    virtual ::java::io::InputStream* getDataStream(::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException, GeneralSecurityException) */;
    virtual ::java::io::InputStream* getDataStream(::poi::poifs::filesystem::OPOIFSFileSystem* fs) /* throws(IOException, GeneralSecurityException) */;
    virtual ::java::io::InputStream* getDataStream(::poi::poifs::filesystem::POIFSFileSystem* fs) /* throws(IOException, GeneralSecurityException) */;
    virtual ::int8_tArray* getVerifier();
    virtual ::javax::crypto::SecretKey* getSecretKey();
    virtual ::int8_tArray* getIntegrityHmacKey();
    virtual ::int8_tArray* getIntegrityHmacValue();

public: /* protected */
    virtual void setSecretKey(::javax::crypto::SecretKey* secretKey);
    virtual void setVerifier(::int8_tArray* verifier);
    virtual void setIntegrityHmacKey(::int8_tArray* integrityHmacKey);
    virtual void setIntegrityHmacValue(::int8_tArray* integrityHmacValue);
    virtual int32_t getBlockSizeInBytes();
    virtual int32_t getKeySizeInBytes();

public:
    virtual EncryptionInfo* getEncryptionInfo();
    virtual void setEncryptionInfo(EncryptionInfo* encryptionInfo);
    Decryptor* clone() /* throws(CloneNotSupportedException) */ override;

    // Generated

public: /* protected */
    Decryptor();
protected:
    Decryptor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::java::lang::String*& DEFAULT_PASSWORD();
    static ::java::lang::String*& DEFAULT_POIFS_ENTRY();

private:
    virtual ::java::lang::Class* getClass0();
};
