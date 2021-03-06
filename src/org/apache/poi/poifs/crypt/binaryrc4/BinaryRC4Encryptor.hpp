// Generated from /POI/java/org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Encryptor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/Encryptor.hpp>
#include <java/lang/Cloneable.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Encryptor_BinaryRC4CipherOutputStream.hpp>

struct default_init_tag;

class poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor
    : public ::poi::poifs::crypt::Encryptor
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::poi::poifs::crypt::Encryptor super;

private:
    int32_t chunkSize {  };
protected:
    void ctor();

public:
    void confirmPassword(::java::lang::String* password) override;
    void confirmPassword(::java::lang::String* password, ::int8_tArray* keySpec, ::int8_tArray* keySalt, ::int8_tArray* verifier, ::int8_tArray* verifierSalt, ::int8_tArray* integritySalt) override;
    ::java::io::OutputStream* getDataStream(::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException, GeneralSecurityException) */ override;
    BinaryRC4Encryptor_BinaryRC4CipherOutputStream* getDataStream(::java::io::OutputStream* stream, int32_t initialOffset) /* throws(IOException, GeneralSecurityException) */ override;

public: /* protected */
    virtual int32_t getKeySizeInBytes();
    virtual void createEncryptionInfoEntry(::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException) */;

public:
    void setChunkSize(int32_t chunkSize) override;
    BinaryRC4Encryptor* clone() /* throws(CloneNotSupportedException) */ override;

    // Generated

public: /* protected */
    BinaryRC4Encryptor();
protected:
    BinaryRC4Encryptor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public:
    virtual ::java::io::OutputStream* getDataStream(::poi::poifs::filesystem::NPOIFSFileSystem* fs);
    virtual ::java::io::OutputStream* getDataStream(::poi::poifs::filesystem::OPOIFSFileSystem* fs);
    virtual ::java::io::OutputStream* getDataStream(::poi::poifs::filesystem::POIFSFileSystem* fs);

private:
    virtual ::java::lang::Class* getClass0();
    friend class BinaryRC4Encryptor_createEncryptionInfoEntry_1;
    friend class BinaryRC4Encryptor_BinaryRC4CipherOutputStream;
};
