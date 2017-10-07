// Generated from /POI/java/org/apache/poi/poifs/crypt/xor/XORDecryptor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/crypto/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/xor_/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>
#include <java/lang/Cloneable.hpp>
#include <org/apache/poi/poifs/crypt/ChunkedCipherInputStream.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::xor_::XORDecryptor
    : public ::org::apache::poi::poifs::crypt::Decryptor
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::org::apache::poi::poifs::crypt::Decryptor super;

private:
    int64_t length {  };
    int32_t chunkSize {  };
protected:
    void ctor();

public:
    bool verifyPassword(::java::lang::String* password) override;
    ::javax::crypto::Cipher* initCipherForBlock(::javax::crypto::Cipher* cipher, int32_t block) /* throws(GeneralSecurityException) */ override;

public: /* protected */
    static ::javax::crypto::Cipher* initCipherForBlock(::javax::crypto::Cipher* cipher, int32_t block, ::org::apache::poi::poifs::crypt::EncryptionInfo* encryptionInfo, ::javax::crypto::SecretKey* skey, int32_t encryptMode) /* throws(GeneralSecurityException) */;

public:
    ::org::apache::poi::poifs::crypt::ChunkedCipherInputStream* getDataStream(::org::apache::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException, GeneralSecurityException) */ override;
    ::java::io::InputStream* getDataStream(::java::io::InputStream* stream, int32_t size, int32_t initialPos) /* throws(IOException, GeneralSecurityException) */ override;
    int64_t getLength() override;
    void setChunkSize(int32_t chunkSize) override;
    XORDecryptor* clone() /* throws(CloneNotSupportedException) */ override;

    // Generated

public: /* protected */
    XORDecryptor();
protected:
    XORDecryptor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public:
    virtual ::java::io::InputStream* getDataStream(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs);
    virtual ::java::io::InputStream* getDataStream(::org::apache::poi::poifs::filesystem::OPOIFSFileSystem* fs);
    virtual ::java::io::InputStream* getDataStream(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs);

private:
    virtual ::java::lang::Class* getClass0();
    friend class XORDecryptor_XORCipherInputStream;
};
