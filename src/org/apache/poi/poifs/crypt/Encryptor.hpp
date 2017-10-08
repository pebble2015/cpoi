// Generated from /POI/java/org/apache/poi/poifs/crypt/Encryptor.java

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

class poi::poifs::crypt::Encryptor
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* DEFAULT_POIFS_ENTRY_;
    EncryptionInfo* encryptionInfo {  };
    ::javax::crypto::SecretKey* secretKey {  };

public:
    virtual ::java::io::OutputStream* getDataStream(::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException, GeneralSecurityException) */ = 0;
    virtual void confirmPassword(::java::lang::String* password, ::int8_tArray* keySpec, ::int8_tArray* keySalt, ::int8_tArray* verifier, ::int8_tArray* verifierSalt, ::int8_tArray* integritySalt) = 0;
    virtual void confirmPassword(::java::lang::String* password) = 0;
    static Encryptor* getInstance(EncryptionInfo* info);
    virtual ::java::io::OutputStream* getDataStream(::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException, GeneralSecurityException) */;
    virtual ::java::io::OutputStream* getDataStream(::poi::poifs::filesystem::OPOIFSFileSystem* fs) /* throws(IOException, GeneralSecurityException) */;
    virtual ::java::io::OutputStream* getDataStream(::poi::poifs::filesystem::POIFSFileSystem* fs) /* throws(IOException, GeneralSecurityException) */;
    virtual ChunkedCipherOutputStream* getDataStream(::java::io::OutputStream* stream, int32_t initialOffset) /* throws(IOException, GeneralSecurityException) */;
    virtual ::javax::crypto::SecretKey* getSecretKey();
    virtual void setSecretKey(::javax::crypto::SecretKey* secretKey);
    virtual EncryptionInfo* getEncryptionInfo();
    virtual void setEncryptionInfo(EncryptionInfo* encryptionInfo);
    virtual void setChunkSize(int32_t chunkSize);
    Encryptor* clone() /* throws(CloneNotSupportedException) */ override;

    // Generated
    Encryptor();
protected:
    Encryptor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* protected */
    static ::java::lang::String*& DEFAULT_POIFS_ENTRY();

private:
    virtual ::java::lang::Class* getClass0();
};
