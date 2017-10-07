// Generated from /POI/java/org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/crypto/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/Encryptor.hpp>
#include <java/lang/Cloneable.hpp>
#include <org/apache/poi/poifs/crypt/ChunkedCipherOutputStream.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptor_CryptoAPICipherOutputStream.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor
    : public ::org::apache::poi::poifs::crypt::Encryptor
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::org::apache::poi::poifs::crypt::Encryptor super;

private:
    int32_t chunkSize {  };
protected:
    void ctor();

public:
    void confirmPassword(::java::lang::String* password) override;
    void confirmPassword(::java::lang::String* password, ::int8_tArray* keySpec, ::int8_tArray* keySalt, ::int8_tArray* verifier, ::int8_tArray* verifierSalt, ::int8_tArray* integritySalt) override;
    virtual ::javax::crypto::Cipher* initCipherForBlock(::javax::crypto::Cipher* cipher, int32_t block) /* throws(GeneralSecurityException) */;
    ::org::apache::poi::poifs::crypt::ChunkedCipherOutputStream* getDataStream(::org::apache::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException, GeneralSecurityException) */ override;
    CryptoAPIEncryptor_CryptoAPICipherOutputStream* getDataStream(::java::io::OutputStream* stream, int32_t initialOffset) /* throws(IOException, GeneralSecurityException) */ override;
    virtual void setSummaryEntries(::org::apache::poi::poifs::filesystem::DirectoryNode* dir, ::java::lang::String* encryptedStream, ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* entries) /* throws(IOException, GeneralSecurityException) */;

public: /* protected */
    virtual int32_t getKeySizeInBytes();

public:
    void setChunkSize(int32_t chunkSize) override;

public: /* protected */
    virtual void createEncryptionInfoEntry(::org::apache::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException) */;

public:
    CryptoAPIEncryptor* clone() /* throws(CloneNotSupportedException) */ override;

    // Generated

public: /* protected */
    CryptoAPIEncryptor();
protected:
    CryptoAPIEncryptor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public:
    virtual ::java::io::OutputStream* getDataStream(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs);
    virtual ::java::io::OutputStream* getDataStream(::org::apache::poi::poifs::filesystem::OPOIFSFileSystem* fs);
    virtual ::java::io::OutputStream* getDataStream(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs);

private:
    virtual ::java::lang::Class* getClass0();
    friend class CryptoAPIEncryptor_createEncryptionInfoEntry_1;
    friend class CryptoAPIEncryptor_CryptoAPICipherOutputStream;
};
