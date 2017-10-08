// Generated from /POI/java/org/apache/poi/poifs/crypt/standard/StandardDecryptor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/crypto/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/standard/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::poifs::crypt::standard::StandardDecryptor
    : public ::poi::poifs::crypt::Decryptor
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::poi::poifs::crypt::Decryptor super;

private:
    int64_t _length {  };
protected:
    void ctor();

public:
    bool verifyPassword(::java::lang::String* password) override;

public: /* protected */
    static ::javax::crypto::SecretKey* generateSecretKey(::java::lang::String* password, ::poi::poifs::crypt::EncryptionVerifier* ver, int32_t keySize);
    static ::int8_tArray* fillAndXor(::int8_tArray* hash, int8_t fillByte);

private:
    ::javax::crypto::Cipher* getCipher(::javax::crypto::SecretKey* key);

public:
    ::java::io::InputStream* getDataStream(::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException) */ override;
    int64_t getLength() override;
    StandardDecryptor* clone() /* throws(CloneNotSupportedException) */ override;

    // Generated

public: /* protected */
    StandardDecryptor();
protected:
    StandardDecryptor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public:
    virtual ::java::io::InputStream* getDataStream(::java::io::InputStream* stream, int32_t size, int32_t initialPos);
    virtual ::java::io::InputStream* getDataStream(::poi::poifs::filesystem::NPOIFSFileSystem* fs);
    virtual ::java::io::InputStream* getDataStream(::poi::poifs::filesystem::OPOIFSFileSystem* fs);
    virtual ::java::io::InputStream* getDataStream(::poi::poifs::filesystem::POIFSFileSystem* fs);

private:
    virtual ::java::lang::Class* getClass0();
};
