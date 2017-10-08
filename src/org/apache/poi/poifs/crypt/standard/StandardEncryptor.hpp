// Generated from /POI/java/org/apache/poi/poifs/crypt/standard/StandardEncryptor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/crypto/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/standard/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/Encryptor.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::poifs::crypt::standard::StandardEncryptor
    : public ::poi::poifs::crypt::Encryptor
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::poi::poifs::crypt::Encryptor super;

private:
    static ::poi::util::POILogger* logger_;
protected:
    void ctor();

public:
    void confirmPassword(::java::lang::String* password) override;
    void confirmPassword(::java::lang::String* password, ::int8_tArray* keySpec, ::int8_tArray* keySalt, ::int8_tArray* verifier, ::int8_tArray* verifierSalt, ::int8_tArray* integritySalt) override;

private:
    ::javax::crypto::Cipher* getCipher(::javax::crypto::SecretKey* key, ::java::lang::String* padding);

public:
    ::java::io::OutputStream* getDataStream(::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException, GeneralSecurityException) */ override;

public: /* protected */
    virtual int32_t getKeySizeInBytes();
    virtual void createEncryptionInfoEntry(::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException) */;

public:
    StandardEncryptor* clone() /* throws(CloneNotSupportedException) */ override;

    // Generated

public: /* protected */
    StandardEncryptor();
protected:
    StandardEncryptor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual ::java::io::OutputStream* getDataStream(::poi::poifs::filesystem::NPOIFSFileSystem* fs);
    virtual ::java::io::OutputStream* getDataStream(::poi::poifs::filesystem::OPOIFSFileSystem* fs);
    virtual ::java::io::OutputStream* getDataStream(::poi::poifs::filesystem::POIFSFileSystem* fs);
    virtual ::poi::poifs::crypt::ChunkedCipherOutputStream* getDataStream(::java::io::OutputStream* stream, int32_t initialOffset);

private:
    static ::poi::util::POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
    friend class StandardEncryptor_StandardCipherOutputStream;
    friend class StandardEncryptor_createEncryptionInfoEntry_1;
};
