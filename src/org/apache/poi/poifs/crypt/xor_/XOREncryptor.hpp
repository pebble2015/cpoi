// Generated from /POI/java/org/apache/poi/poifs/crypt/xor/XOREncryptor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/xor_/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/Encryptor.hpp>
#include <java/lang/Cloneable.hpp>
#include <org/apache/poi/poifs/crypt/xor_/XOREncryptor_XORCipherOutputStream.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::xor_::XOREncryptor
    : public ::org::apache::poi::poifs::crypt::Encryptor
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::org::apache::poi::poifs::crypt::Encryptor super;
protected:
    void ctor();

public:
    void confirmPassword(::java::lang::String* password) override;
    void confirmPassword(::java::lang::String* password, ::int8_tArray* keySpec, ::int8_tArray* keySalt, ::int8_tArray* verifier, ::int8_tArray* verifierSalt, ::int8_tArray* integritySalt) override;
    ::java::io::OutputStream* getDataStream(::org::apache::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException, GeneralSecurityException) */ override;
    XOREncryptor_XORCipherOutputStream* getDataStream(::java::io::OutputStream* stream, int32_t initialOffset) /* throws(IOException, GeneralSecurityException) */ override;

public: /* protected */
    virtual int32_t getKeySizeInBytes();

public:
    void setChunkSize(int32_t chunkSize) override;

public: /* protected */
    virtual void createEncryptionInfoEntry(::org::apache::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException) */;

public:
    XOREncryptor* clone() /* throws(CloneNotSupportedException) */ override;

    // Generated

public: /* protected */
    XOREncryptor();
protected:
    XOREncryptor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::java::io::OutputStream* getDataStream(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs);
    virtual ::java::io::OutputStream* getDataStream(::org::apache::poi::poifs::filesystem::OPOIFSFileSystem* fs);
    virtual ::java::io::OutputStream* getDataStream(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs);

private:
    virtual ::java::lang::Class* getClass0();
    friend class XOREncryptor_XORCipherOutputStream;
};
